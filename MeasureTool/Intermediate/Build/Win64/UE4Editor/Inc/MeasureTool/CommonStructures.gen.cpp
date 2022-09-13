// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeasureTool/Public/CommonStructures.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonStructures() {}
// Cross Module References
	MEASURETOOL_API UScriptStruct* Z_Construct_UScriptStruct_FMeasureRay();
	UPackage* Z_Construct_UPackage__Script_MeasureTool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MEASURETOOL_API UClass* Z_Construct_UClass_UMeasure_NoRegister();
	MEASURETOOL_API UClass* Z_Construct_UClass_UMeasure();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEASURETOOL_API UClass* Z_Construct_UClass_UAnnotation_NoRegister();
	MEASURETOOL_API UClass* Z_Construct_UClass_UAnnotation();
	MEASURETOOL_API UClass* Z_Construct_UClass_AMeasureActor_NoRegister();
	MEASURETOOL_API UClass* Z_Construct_UClass_AMeasureActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FMeasureRay::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEASURETOOL_API uint32 Get_Z_Construct_UScriptStruct_FMeasureRay_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeasureRay, Z_Construct_UPackage__Script_MeasureTool(), TEXT("MeasureRay"), sizeof(FMeasureRay), Get_Z_Construct_UScriptStruct_FMeasureRay_Hash());
	}
	return Singleton;
}
template<> MEASURETOOL_API UScriptStruct* StaticStruct<FMeasureRay>()
{
	return FMeasureRay::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeasureRay(FMeasureRay::StaticStruct, TEXT("/Script/MeasureTool"), TEXT("MeasureRay"), false, nullptr, nullptr);
static struct FScriptStruct_MeasureTool_StaticRegisterNativesFMeasureRay
{
	FScriptStruct_MeasureTool_StaticRegisterNativesFMeasureRay()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeasureRay")),new UScriptStruct::TCppStructOps<FMeasureRay>);
	}
} ScriptStruct_MeasureTool_StaticRegisterNativesFMeasureRay;
	struct Z_Construct_UScriptStruct_FMeasureRay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RayStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RayDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasureRay_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeasureRay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeasureRay>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_CameraLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeasureRay, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_CameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_CameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayStart = { "RayStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeasureRay, RayStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayDirection = { "RayDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeasureRay, RayDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeasureRay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_CameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeasureRay_Statics::NewProp_RayDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeasureRay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeasureTool,
		nullptr,
		&NewStructOps,
		"MeasureRay",
		sizeof(FMeasureRay),
		alignof(FMeasureRay),
		Z_Construct_UScriptStruct_FMeasureRay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasureRay_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasureRay_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasureRay_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeasureRay()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeasureRay_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeasureTool();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeasureRay"), sizeof(FMeasureRay), Get_Z_Construct_UScriptStruct_FMeasureRay_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeasureRay_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeasureRay_Hash() { return 1772155718U; }
	DEFINE_FUNCTION(UMeasure::execSetEndLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_loc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndLocation(Z_Param_loc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeasure::execSetStartLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_loc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartLocation(Z_Param_loc);
		P_NATIVE_END;
	}
	void UMeasure::StaticRegisterNativesUMeasure()
	{
		UClass* Class = UMeasure::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEndLocation", &UMeasure::execSetEndLocation },
			{ "SetStartLocation", &UMeasure::execSetStartLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeasure_SetEndLocation_Statics
	{
		struct Measure_eventSetEndLocation_Parms
		{
			FVector loc;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_loc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Measure_eventSetEndLocation_Parms, loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::NewProp_loc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeasure, nullptr, "SetEndLocation", nullptr, nullptr, sizeof(Measure_eventSetEndLocation_Parms), Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeasure_SetEndLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeasure_SetEndLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeasure_SetStartLocation_Statics
	{
		struct Measure_eventSetStartLocation_Parms
		{
			FVector loc;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_loc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Measure_eventSetStartLocation_Parms, loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::NewProp_loc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeasure, nullptr, "SetStartLocation", nullptr, nullptr, sizeof(Measure_eventSetStartLocation_Parms), Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeasure_SetStartLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeasure_SetStartLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeasure_NoRegister()
	{
		return UMeasure::StaticClass();
	}
	struct Z_Construct_UClass_UMeasure_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeasure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeasureTool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeasure_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeasure_SetEndLocation, "SetEndLocation" }, // 1086225952
		{ &Z_Construct_UFunction_UMeasure_SetStartLocation, "SetStartLocation" }, // 2865006927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasure_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommonStructures.h" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasure_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeasure_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeasure, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMeasure_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasure_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasure_Statics::NewProp_EndLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeasure_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeasure, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMeasure_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasure_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeasure_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeasure_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeasure, Name), METADATA_PARAMS(Z_Construct_UClass_UMeasure_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasure_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeasure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeasure_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeasure_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeasure_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeasure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeasure>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeasure_Statics::ClassParams = {
		&UMeasure::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeasure_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeasure_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeasure_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeasure_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeasure()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeasure_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeasure, 268401751);
	template<> MEASURETOOL_API UClass* StaticClass<UMeasure>()
	{
		return UMeasure::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeasure(Z_Construct_UClass_UMeasure, &UMeasure::StaticClass, TEXT("/Script/MeasureTool"), TEXT("UMeasure"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeasure);
	void UAnnotation::StaticRegisterNativesUAnnotation()
	{
	}
	UClass* Z_Construct_UClass_UAnnotation_NoRegister()
	{
		return UAnnotation::StaticClass();
	}
	struct Z_Construct_UClass_UAnnotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineStartPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStartPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowTextPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShowTextPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnotationContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AnnotationContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnnotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeasureTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommonStructures.h" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotation_Statics::NewProp_LineStartPos_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnnotation_Statics::NewProp_LineStartPos = { "LineStartPos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotation, LineStartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnnotation_Statics::NewProp_LineStartPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotation_Statics::NewProp_LineStartPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotation_Statics::NewProp_ShowTextPos_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnnotation_Statics::NewProp_ShowTextPos = { "ShowTextPos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotation, ShowTextPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnnotation_Statics::NewProp_ShowTextPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotation_Statics::NewProp_ShowTextPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotation_Statics::NewProp_AnnotationContent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAnnotation_Statics::NewProp_AnnotationContent = { "AnnotationContent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotation, AnnotationContent), METADATA_PARAMS(Z_Construct_UClass_UAnnotation_Statics::NewProp_AnnotationContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotation_Statics::NewProp_AnnotationContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnnotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotation_Statics::NewProp_LineStartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotation_Statics::NewProp_ShowTextPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotation_Statics::NewProp_AnnotationContent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnnotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnnotation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnnotation_Statics::ClassParams = {
		&UAnnotation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnnotation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnnotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnnotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnnotation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnnotation, 718876771);
	template<> MEASURETOOL_API UClass* StaticClass<UAnnotation>()
	{
		return UAnnotation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnnotation(Z_Construct_UClass_UAnnotation, &UAnnotation::StaticClass, TEXT("/Script/MeasureTool"), TEXT("UAnnotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnnotation);
	DEFINE_FUNCTION(AMeasureActor::execOnActorDestory)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDestory(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	void AMeasureActor::StaticRegisterNativesAMeasureActor()
	{
		UClass* Class = AMeasureActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorDestory", &AMeasureActor::execOnActorDestory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics
	{
		struct MeasureActor_eventOnActorDestory_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeasureActor_eventOnActorDestory_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \xe6\xb5\x8b\xe8\xaf\x95\xe7\x9a\x84""Actor\xe8\xa2\xab\xe9\x94\x80\xe6\xaf\x81*/" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "\xe6\xb5\x8b\xe8\xaf\x95\xe7\x9a\x84""Actor\xe8\xa2\xab\xe9\x94\x80\xe6\xaf\x81" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeasureActor, nullptr, "OnActorDestory", nullptr, nullptr, sizeof(MeasureActor_eventOnActorDestory_Parms), Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeasureActor_OnActorDestory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMeasureActor_OnActorDestory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMeasureActor_NoRegister()
	{
		return AMeasureActor::StaticClass();
	}
	struct Z_Construct_UClass_AMeasureActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Line;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeasureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MeasureTool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMeasureActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMeasureActor_OnActorDestory, "OnActorDestory" }, // 2113282587
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeasureActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* \xe7\x94\xa8\xe4\xba\x8e\xe6\x98\xbe\xe7\xa4\xba\xe6\xb5\x8b\xe9\x87\x8f\xe8\xb7\x9d\xe7\xa6\xbb\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n*/" },
		{ "IncludePath", "CommonStructures.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "* \xe7\x94\xa8\xe4\xba\x8e\xe6\x98\xbe\xe7\xa4\xba\xe6\xb5\x8b\xe9\x87\x8f\xe8\xb7\x9d\xe7\xa6\xbb\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartPosition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MeasureTool" },
		{ "Comment", "// \xe8\xb5\xb7\xe5\xa7\x8b\xe4\xbd\x8d\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "\xe8\xb5\xb7\xe5\xa7\x8b\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeasureActor, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndPosition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MeasureTool" },
		{ "Comment", "// \xe7\xbb\x93\xe6\x9d\x9f\xe4\xbd\x8d\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeasureActor, EndPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MeasureTool" },
		{ "Comment", "// \xe8\xb5\xb7\xe5\xa7\x8b\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "\xe8\xb5\xb7\xe5\xa7\x8b\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartActor = { "StartActor", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeasureActor, StartActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MeasureTool" },
		{ "Comment", "// \xe7\xbb\x93\xe6\x9d\x9f\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndActor = { "EndActor", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeasureActor, EndActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeasureActor_Statics::NewProp_FirstPos_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MeasureTool" },
		{ "Comment", "// \xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe7\x82\xb9\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe7\x82\xb9" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeasureActor_Statics::NewProp_FirstPos = { "FirstPos", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeasureActor, FirstPos), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeasureActor_Statics::NewProp_FirstPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::NewProp_FirstPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeasureActor_Statics::NewProp_SecondPos_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MeasureTool" },
		{ "Comment", "// \xe7\xac\xac\xe4\xba\x8c\xe4\xb8\xaa\xe7\x82\xb9\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "\xe7\xac\xac\xe4\xba\x8c\xe4\xb8\xaa\xe7\x82\xb9" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeasureActor_Statics::NewProp_SecondPos = { "SecondPos", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeasureActor, SecondPos), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeasureActor_Statics::NewProp_SecondPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::NewProp_SecondPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeasureActor_Statics::NewProp_Line_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MeasureTool" },
		{ "Comment", "// \xe7\xba\xbf\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "\xe7\xba\xbf" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeasureActor_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeasureActor, Line), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeasureActor_Statics::NewProp_Line_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::NewProp_Line_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeasureActor_Statics::NewProp_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MeasureTool" },
		{ "Comment", "// \xe8\xb7\x9d\xe7\xa6\xbb\xe6\x98\xbe\xe7\xa4\xba\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonStructures.h" },
		{ "ToolTip", "\xe8\xb7\x9d\xe7\xa6\xbb\xe6\x98\xbe\xe7\xa4\xba\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeasureActor_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeasureActor, Distance), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeasureActor_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::NewProp_Distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMeasureActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeasureActor_Statics::NewProp_StartActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeasureActor_Statics::NewProp_EndActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeasureActor_Statics::NewProp_FirstPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeasureActor_Statics::NewProp_SecondPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeasureActor_Statics::NewProp_Line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeasureActor_Statics::NewProp_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeasureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeasureActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeasureActor_Statics::ClassParams = {
		&AMeasureActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMeasureActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMeasureActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeasureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeasureActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeasureActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeasureActor, 3632841498);
	template<> MEASURETOOL_API UClass* StaticClass<AMeasureActor>()
	{
		return AMeasureActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeasureActor(Z_Construct_UClass_AMeasureActor, &AMeasureActor::StaticClass, TEXT("/Script/MeasureTool"), TEXT("AMeasureActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeasureActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
