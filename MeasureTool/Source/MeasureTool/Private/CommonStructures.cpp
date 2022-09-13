// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CommonStructures.h"
#include "Engine/Selection.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Editor.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StreamableManager.h"
#include "Components/TextRenderComponent.h"

#pragma optimize( "", off )
AMeasureActor::AMeasureActor()
{
	FirstPos = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FirstPos"));
	SecondPos = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondPos"));
	Line = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Line"));
	Distance = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Distance"));

	FStreamableManager StreamableManager;
	UStaticMesh* Cube = StreamableManager.LoadSynchronous<UStaticMesh>(
		FSoftObjectPath(TEXT("StaticMesh'/MeasureTool/Cube.Cube'")));

	UStaticMesh* Sphere = StreamableManager.LoadSynchronous<UStaticMesh>(
		FSoftObjectPath(TEXT("StaticMesh'/MeasureTool/Sphere.Sphere'")));


	// 设置网格体
	FirstPos->SetStaticMesh(Sphere);
	SecondPos->SetStaticMesh(Sphere);
	Line->SetStaticMesh(Cube);

	// 设置放缩为0.2
	FirstPos->SetRelativeScale3D(FVector(0.02f));

	// 设置为世界位置和旋转
	SecondPos->SetAbsolute(true, true, false);
	Line->SetAbsolute(true, true, true);
	Distance->SetAbsolute(false, false, true);

	// 设置线的缩放
	Line->SetRelativeScale3D(FVector(0.01f));

	SetRootComponent(FirstPos);
	SecondPos->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	Line->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	Distance->AttachToComponent(Line, FAttachmentTransformRules::KeepRelativeTransform);

	// 设置旋转和位置
	
	Distance->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));
	Distance->SetRelativeLocation(FVector(0.f, 0.f, 5.f));
	Distance->SetRelativeScale3D(FVector::OneVector * 0.25f);
	Distance->SetHorizontalAlignment(EHTA_Center);

	USelection::SelectObjectEvent.AddStatic(&AMeasureActor::OnActorSelectedEditor);
}

void AMeasureActor::GenerateMeasureActor(AActor* NewStartActor, AActor* NewEndActor)
{
	FVector Origin;
	FVector BoxExtent;

	NewStartActor->GetActorBounds(false, Origin, BoxExtent);
	
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AMeasureActor* MeasureActor = NewStartActor->GetWorld()->SpawnActor<AMeasureActor>(AMeasureActor::StaticClass(), FTransform(Origin), SpawnParameters);

	// 设置文字颜色，土黄色
	MeasureActor->GetDistance()->SetTextRenderColor(FColor(154, 80, 5, 1.f));

	// 更新数据
	MeasureActor->StartActor = NewStartActor;
	MeasureActor->EndActor = NewEndActor;
	MeasureActor->StartPosition = Origin;
	NewEndActor->GetActorBounds(false, Origin, BoxExtent);
	MeasureActor->EndPosition = Origin;

	// 绑定事件
	MeasureActor->BindDelegate();

	// 更新位置
	MeasureActor->UpdateTransform();
}

void AMeasureActor::GenerateMeasureActor(FVector StartPos, FVector EndPos)
{
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AMeasureActor* MeasureActor = GEditor->GetEditorWorldContext().World()->SpawnActor<AMeasureActor>(AMeasureActor::StaticClass(), FTransform(StartPos), SpawnParameters);

	// 设置文字颜色，天蓝色
	MeasureActor->GetDistance()->SetTextRenderColor(FColor(0, 143, 154, 1.f));

	// 更新数据
	MeasureActor->StartPosition = StartPos;
	MeasureActor->EndPosition = EndPos;

	// 更新位置
	MeasureActor->UpdateTransform();
}

void AMeasureActor::SetAllActorVisibility(bool bNewVisibility)
{
	TArray<AActor*> MeasureList;
	UGameplayStatics::GetAllActorsOfClass(GEditor->GetEditorWorldContext().World(), AMeasureActor::StaticClass(), MeasureList);
	for (auto Measure : MeasureList)
	{
		UPrimitiveComponent* PrimitiveComponent = nullptr;
		for (auto Component : Measure->GetComponentsByClass(UPrimitiveComponent::StaticClass()))
		{
			PrimitiveComponent = Cast<UPrimitiveComponent>(Component);
			if (PrimitiveComponent)
			{
				PrimitiveComponent->SetVisibility(bNewVisibility);
			}
		}
	}
}

void AMeasureActor::OnActorSelectedEditor(UObject* NewSelectedObject)
{
	AMeasureActor* MeasureActor = Cast<AMeasureActor>(NewSelectedObject);

	// 当线被选中的时候，高亮所关联的对象
	USelection* Selection = GEditor->GetSelectedActors();
	if (MeasureActor && Selection && MeasureActor->StartActor && MeasureActor->EndActor)
	{
		Selection->Select(MeasureActor->StartActor, true);
		Selection->Select(MeasureActor->EndActor, true);
	}
}

void AMeasureActor::UpdateTransform()
{
	GetFirstPos()->SetRelativeLocation(StartPosition);
	GetSecondPos()->SetRelativeLocation(EndPosition);

	FRotator Rotation = FRotationMatrix::MakeFromX(EndPosition - StartPosition).Rotator();
	FVector Position = (EndPosition + StartPosition) / 2.f;
	FVector Scale = GetLine()->GetComponentScale();
	float TwoPointsDistance = FVector::Distance(EndPosition, StartPosition);
	Scale.X = TwoPointsDistance / 100.f;

	GetLine()->SetRelativeLocationAndRotation(Position, Rotation);
	GetLine()->SetRelativeScale3D(Scale);
	
	// 显示距离
	FString DrawString(FString::SanitizeFloat((int)(TwoPointsDistance * 100 + 0.5) / 100.0) + TEXT(" cm"));
	GetDistance()->SetText(FText::FromString(DrawString));
	//GetDistance()->SetRelativeLocation(FVector())
}

void AMeasureActor::BindDelegate()
{
	// 绑定位置更新事件
	StartActorTransformChanged = StartActor->GetRootComponent()->TransformUpdated.AddUObject(this, &AMeasureActor::OnActorTransformChange);
	EndActorTransformChanged = EndActor->GetRootComponent()->TransformUpdated.AddUObject(this, &AMeasureActor::OnActorTransformChange);

	// 绑定销毁事件
	StartActor->OnDestroyed.AddDynamic(this, &AMeasureActor::OnActorDestory);
	EndActor->OnDestroyed.AddDynamic(this, &AMeasureActor::OnActorDestory);
}

void AMeasureActor::OnActorTransformChange(USceneComponent * InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	FVector Origin;
	FVector BoxExtent;

	// 更新起始位置和终点
	StartActor->GetActorBounds(false, Origin, BoxExtent);
	StartPosition = Origin;

	EndActor->GetActorBounds(false, Origin, BoxExtent);
	EndPosition = Origin;

	UpdateTransform();
}

void AMeasureActor::OnActorDestory(AActor * DestroyedActor)
{
	StartActor->GetRootComponent()->TransformUpdated.Remove(StartActorTransformChanged);
	EndActor->GetRootComponent()->TransformUpdated.Remove(EndActorTransformChanged);

	StartActor->OnDestroyed.RemoveDynamic(this, &AMeasureActor::OnActorDestory);
	EndActor->OnDestroyed.RemoveDynamic(this, &AMeasureActor::OnActorDestory);

	// 销毁自身
	Destroy();
}
#pragma optimize( "", on )