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


	// ����������
	FirstPos->SetStaticMesh(Sphere);
	SecondPos->SetStaticMesh(Sphere);
	Line->SetStaticMesh(Cube);

	// ���÷���Ϊ0.2
	FirstPos->SetRelativeScale3D(FVector(0.02f));

	// ����Ϊ����λ�ú���ת
	SecondPos->SetAbsolute(true, true, false);
	Line->SetAbsolute(true, true, true);
	Distance->SetAbsolute(false, false, true);

	// �����ߵ�����
	Line->SetRelativeScale3D(FVector(0.01f));

	SetRootComponent(FirstPos);
	SecondPos->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	Line->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	Distance->AttachToComponent(Line, FAttachmentTransformRules::KeepRelativeTransform);

	// ������ת��λ��
	
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

	// ����������ɫ������ɫ
	MeasureActor->GetDistance()->SetTextRenderColor(FColor(154, 80, 5, 1.f));

	// ��������
	MeasureActor->StartActor = NewStartActor;
	MeasureActor->EndActor = NewEndActor;
	MeasureActor->StartPosition = Origin;
	NewEndActor->GetActorBounds(false, Origin, BoxExtent);
	MeasureActor->EndPosition = Origin;

	// ���¼�
	MeasureActor->BindDelegate();

	// ����λ��
	MeasureActor->UpdateTransform();
}

void AMeasureActor::GenerateMeasureActor(FVector StartPos, FVector EndPos)
{
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AMeasureActor* MeasureActor = GEditor->GetEditorWorldContext().World()->SpawnActor<AMeasureActor>(AMeasureActor::StaticClass(), FTransform(StartPos), SpawnParameters);

	// ����������ɫ������ɫ
	MeasureActor->GetDistance()->SetTextRenderColor(FColor(0, 143, 154, 1.f));

	// ��������
	MeasureActor->StartPosition = StartPos;
	MeasureActor->EndPosition = EndPos;

	// ����λ��
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

	// ���߱�ѡ�е�ʱ�򣬸����������Ķ���
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
	
	// ��ʾ����
	FString DrawString(FString::SanitizeFloat((int)(TwoPointsDistance * 100 + 0.5) / 100.0) + TEXT(" cm"));
	GetDistance()->SetText(FText::FromString(DrawString));
	//GetDistance()->SetRelativeLocation(FVector())
}

void AMeasureActor::BindDelegate()
{
	// ��λ�ø����¼�
	StartActorTransformChanged = StartActor->GetRootComponent()->TransformUpdated.AddUObject(this, &AMeasureActor::OnActorTransformChange);
	EndActorTransformChanged = EndActor->GetRootComponent()->TransformUpdated.AddUObject(this, &AMeasureActor::OnActorTransformChange);

	// �������¼�
	StartActor->OnDestroyed.AddDynamic(this, &AMeasureActor::OnActorDestory);
	EndActor->OnDestroyed.AddDynamic(this, &AMeasureActor::OnActorDestory);
}

void AMeasureActor::OnActorTransformChange(USceneComponent * InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	FVector Origin;
	FVector BoxExtent;

	// ������ʼλ�ú��յ�
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

	// ��������
	Destroy();
}
#pragma optimize( "", on )