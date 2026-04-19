// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/FloorQueryUtils.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFloorQueryUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MOVER_API UClass* Z_Construct_UClass_UFloorQueryUtils();
MOVER_API UClass* Z_Construct_UClass_UFloorQueryUtils_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FFloorCheckResult();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFloorCheckResult *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFloorCheckResult;
class UScriptStruct* FFloorCheckResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFloorCheckResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFloorCheckResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloorCheckResult, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("FloorCheckResult"));
	}
	return Z_Registration_Info_UScriptStruct_FFloorCheckResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFloorCheckResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data about the floor for walking movement, used by Mover simulations */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/FloorQueryUtils.h" },
		{ "ToolTip", "Data about the floor for walking movement, used by Mover simulations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingHit_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/**\n\x09* True if there was a blocking hit in the floor test that was NOT in initial penetration.\n\x09* The HitResult can give more info about other circumstances.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoveLibrary/FloorQueryUtils.h" },
		{ "ToolTip", "True if there was a blocking hit in the floor test that was NOT in initial penetration.\nThe HitResult can give more info about other circumstances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWalkableFloor_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** True if the hit found a valid walkable floor. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/FloorQueryUtils.h" },
		{ "ToolTip", "True if the hit found a valid walkable floor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLineTrace_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** True if the hit found a valid walkable floor using a line trace (rather than a sweep test, which happens when the sweep test fails to yield a walkable surface). */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/FloorQueryUtils.h" },
		{ "ToolTip", "True if the hit found a valid walkable floor using a line trace (rather than a sweep test, which happens when the sweep test fails to yield a walkable surface)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineDist_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** The distance to the floor, computed from the trace. Only valid if bLineTrace is true. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/FloorQueryUtils.h" },
		{ "ToolTip", "The distance to the floor, computed from the trace. Only valid if bLineTrace is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorDist_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** The distance to the floor, computed from the swept capsule trace. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/FloorQueryUtils.h" },
		{ "ToolTip", "The distance to the floor, computed from the swept capsule trace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** Hit result of the test that found a floor. Includes more specific data about the point of impact and surface normal at that point. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/FloorQueryUtils.h" },
		{ "ToolTip", "Hit result of the test that found a floor. Includes more specific data about the point of impact and surface normal at that point." },
	};
#endif // WITH_METADATA
	static void NewProp_bBlockingHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
	static void NewProp_bWalkableFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkableFloor;
	static void NewProp_bLineTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLineTrace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorDist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloorCheckResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
{
	((FFloorCheckResult*)Obj)->bBlockingHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFloorCheckResult), &Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockingHit_MetaData), NewProp_bBlockingHit_MetaData) };
void Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bWalkableFloor_SetBit(void* Obj)
{
	((FFloorCheckResult*)Obj)->bWalkableFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bWalkableFloor = { "bWalkableFloor", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFloorCheckResult), &Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bWalkableFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWalkableFloor_MetaData), NewProp_bWalkableFloor_MetaData) };
void Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bLineTrace_SetBit(void* Obj)
{
	((FFloorCheckResult*)Obj)->bLineTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bLineTrace = { "bLineTrace", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFloorCheckResult), &Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bLineTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLineTrace_MetaData), NewProp_bLineTrace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_LineDist = { "LineDist", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorCheckResult, LineDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineDist_MetaData), NewProp_LineDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_FloorDist = { "FloorDist", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorCheckResult, FloorDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorDist_MetaData), NewProp_FloorDist_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000020805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorCheckResult, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloorCheckResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bWalkableFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_bLineTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_LineDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_FloorDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorCheckResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloorCheckResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"FloorCheckResult",
	Z_Construct_UScriptStruct_FFloorCheckResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorCheckResult_Statics::PropPointers),
	sizeof(FFloorCheckResult),
	alignof(FFloorCheckResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorCheckResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloorCheckResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloorCheckResult()
{
	if (!Z_Registration_Info_UScriptStruct_FFloorCheckResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFloorCheckResult.InnerSingleton, Z_Construct_UScriptStruct_FFloorCheckResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFloorCheckResult.InnerSingleton;
}
// ********** End ScriptStruct FFloorCheckResult ***************************************************

// ********** Begin Class UFloorQueryUtils Function IsHitSurfaceWalkable ***************************
struct Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics
{
	struct FloorQueryUtils_eventIsHitSurfaceWalkable_Parms
	{
		FHitResult Hit;
		FVector UpDirection;
		float MaxWalkSlopeCosine;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/FloorQueryUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSlopeCosine;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorQueryUtils_eventIsHitSurfaceWalkable_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorQueryUtils_eventIsHitSurfaceWalkable_Parms, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDirection_MetaData), NewProp_UpDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_MaxWalkSlopeCosine = { "MaxWalkSlopeCosine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorQueryUtils_eventIsHitSurfaceWalkable_Parms, MaxWalkSlopeCosine), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FloorQueryUtils_eventIsHitSurfaceWalkable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloorQueryUtils_eventIsHitSurfaceWalkable_Parms), &Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_UpDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_MaxWalkSlopeCosine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFloorQueryUtils, nullptr, "IsHitSurfaceWalkable", Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::FloorQueryUtils_eventIsHitSurfaceWalkable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::FloorQueryUtils_eventIsHitSurfaceWalkable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFloorQueryUtils::execIsHitSurfaceWalkable)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_UpDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWalkSlopeCosine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFloorQueryUtils::IsHitSurfaceWalkable(Z_Param_Out_Hit,Z_Param_Out_UpDirection,Z_Param_MaxWalkSlopeCosine);
	P_NATIVE_END;
}
// ********** End Class UFloorQueryUtils Function IsHitSurfaceWalkable *****************************

// ********** Begin Class UFloorQueryUtils *********************************************************
void UFloorQueryUtils::StaticRegisterNativesUFloorQueryUtils()
{
	UClass* Class = UFloorQueryUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsHitSurfaceWalkable", &UFloorQueryUtils::execIsHitSurfaceWalkable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFloorQueryUtils;
UClass* UFloorQueryUtils::GetPrivateStaticClass()
{
	using TClass = UFloorQueryUtils;
	if (!Z_Registration_Info_UClass_UFloorQueryUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FloorQueryUtils"),
			Z_Registration_Info_UClass_UFloorQueryUtils.InnerSingleton,
			StaticRegisterNativesUFloorQueryUtils,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFloorQueryUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UFloorQueryUtils_NoRegister()
{
	return UFloorQueryUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFloorQueryUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * FloorQueryUtils: a collection of stateless static BP-accessible functions for a variety of operations involving floor checks\n */" },
		{ "IncludePath", "MoveLibrary/FloorQueryUtils.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/FloorQueryUtils.h" },
		{ "ToolTip", "FloorQueryUtils: a collection of stateless static BP-accessible functions for a variety of operations involving floor checks" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloorQueryUtils_IsHitSurfaceWalkable, "IsHitSurfaceWalkable" }, // 4097082562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloorQueryUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFloorQueryUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorQueryUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloorQueryUtils_Statics::ClassParams = {
	&UFloorQueryUtils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloorQueryUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloorQueryUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFloorQueryUtils()
{
	if (!Z_Registration_Info_UClass_UFloorQueryUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloorQueryUtils.OuterSingleton, Z_Construct_UClass_UFloorQueryUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFloorQueryUtils.OuterSingleton;
}
UFloorQueryUtils::UFloorQueryUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFloorQueryUtils);
UFloorQueryUtils::~UFloorQueryUtils() {}
// ********** End Class UFloorQueryUtils ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFloorCheckResult::StaticStruct, Z_Construct_UScriptStruct_FFloorCheckResult_Statics::NewStructOps, TEXT("FloorCheckResult"), &Z_Registration_Info_UScriptStruct_FFloorCheckResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloorCheckResult), 375218055U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFloorQueryUtils, UFloorQueryUtils::StaticClass, TEXT("UFloorQueryUtils"), &Z_Registration_Info_UClass_UFloorQueryUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloorQueryUtils), 734667812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h__Script_Mover_3487801681(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
