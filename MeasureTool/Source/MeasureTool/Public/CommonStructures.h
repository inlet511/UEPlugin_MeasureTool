#pragma once

#include "CoreMinimal.h"
//#include "Text.h"
#include "GameFramework/Actor.h"
#include "CommonStructures.generated.h"

enum class EMeasureTool : uint8
{
	POINT_RULER_TOOL,
	OBJECT_RULER_TOOL,
	ANNOTATION_TOOL
};


UCLASS()
class MEASURETOOL_API UMeasure : public UObject
{
	GENERATED_BODY()

public:	
	
	UPROPERTY()
	FVector StartLocation;

	UPROPERTY()
	FVector EndLocation;

	UPROPERTY()
	FName Name;

	UFUNCTION()
	void SetStartLocation(FVector loc) { StartLocation = loc; }

	UFUNCTION()
	void SetEndLocation(FVector loc) { EndLocation = loc; }

	//UFUNCTION()
	//void SetName(const FText& Text) { Name = FName(*Text.ToString()); }

	//UFUNCTION()
	//FText GetMeasureName() { return FText::FromName(Name); }

};


USTRUCT()
struct FMeasureRay
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FVector CameraLocation;

	UPROPERTY()
	FVector RayStart;

	UPROPERTY()
	FVector RayDirection;
};

UCLASS()
class MEASURETOOL_API UAnnotation : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
		FVector LineStartPos;
	UPROPERTY()
		FVector ShowTextPos;
	UPROPERTY()
		FText AnnotationContent;
};

/*
* 用于显示测量距离的对象
*/
UCLASS(BlueprintType, Blueprintable)
class MEASURETOOL_API AMeasureActor : public AActor
{
	GENERATED_BODY()

public:

	AMeasureActor();

	/** 生成对象*/
	static void GenerateMeasureActor(AActor* NewStartActor, AActor* NewEndActor);
	static void GenerateMeasureActor(FVector StartPos, FVector EndPos);

	/** 显示和隐藏对象*/
	static void SetAllActorVisibility(bool bNewVisibility);

	/** 当对象被选中*/
	static void OnActorSelectedEditor(UObject* NewSelection);

	/** 更新位置*/
	void UpdateTransform();

	/** 绑定事件*/
	void BindDelegate();

	/** 测试的Actor位置被更新*/
	void OnActorTransformChange(USceneComponent* InRootComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport);

	/** 测试的Actor被销毁*/
	UFUNCTION()
	void OnActorDestory(AActor* DestroyedActor);

private:

	// 起始位置
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category="MeasureTool")
		FVector StartPosition;

	// 结束位置
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category ="MeasureTool")
		FVector EndPosition;

	// 起始对象
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category ="MeasureTool")
		AActor* StartActor;

	// 结束对象
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category ="MeasureTool")
		AActor* EndActor;

	// 第一个点
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category = "MeasureTool")
	UStaticMeshComponent* FirstPos;

	// 第二个点
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category ="MeasureTool")
	UStaticMeshComponent* SecondPos;

	// 线
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category ="MeasureTool")
	UStaticMeshComponent* Line;

	// 距离显示组件
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (AllowPrivateAccess = "true"), Category ="MeasureTool")
	class UTextRenderComponent* Distance;

	FDelegateHandle StartActorTransformChanged;
	FDelegateHandle EndActorTransformChanged;

public:

	FORCEINLINE class UStaticMeshComponent* GetFirstPos() { return FirstPos; }
	FORCEINLINE class UStaticMeshComponent* GetSecondPos() { return SecondPos; }
	FORCEINLINE class UStaticMeshComponent* GetLine() { return Line; }
	FORCEINLINE class UTextRenderComponent* GetDistance() { return Distance; }
};
