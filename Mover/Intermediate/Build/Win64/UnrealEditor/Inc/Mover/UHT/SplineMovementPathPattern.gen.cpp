// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/SplineMovementPathPattern.h"
#include "Engine/EngineTypes.h"
#include "PhysicsMover/PathedMovement/PathedMovementMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSplineMovementPathPattern() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase();
MOVER_API UClass* Z_Construct_UClass_USplineMovementPathPattern();
MOVER_API UClass* Z_Construct_UClass_USplineMovementPathPattern_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePathPatternPointData();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSplinePathPatternPointData ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSplinePathPatternPointData;
class UScriptStruct* FSplinePathPatternPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSplinePathPatternPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSplinePathPatternPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplinePathPatternPointData, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("SplinePathPatternPointData"));
	}
	return Z_Registration_Info_UScriptStruct_FSplinePathPatternPointData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This isn't formal \"spline metadata\" because that requires a custom spline and component - we want to add info to vanilla splines */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
		{ "ToolTip", "This isn't formal \"spline metadata\" because that requires a custom spline and component - we want to add info to vanilla splines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplinePointKey_MetaData[] = {
		{ "Comment", "/** Key of the spline point (or somewhere between two points) where this metadata applies */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
		{ "ToolTip", "Key of the spline point (or somewhere between two points) where this metadata applies" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplinePointKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplinePathPatternPointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::NewProp_SplinePointKey = { "SplinePointKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplinePathPatternPointData, SplinePointKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplinePointKey_MetaData), NewProp_SplinePointKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::NewProp_SplinePointKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"SplinePathPatternPointData",
	Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::PropPointers),
	sizeof(FSplinePathPatternPointData),
	alignof(FSplinePathPatternPointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSplinePathPatternPointData()
{
	if (!Z_Registration_Info_UScriptStruct_FSplinePathPatternPointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSplinePathPatternPointData.InnerSingleton, Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSplinePathPatternPointData.InnerSingleton;
}
// ********** End ScriptStruct FSplinePathPatternPointData *****************************************

// ********** Begin Class USplineMovementPathPattern ***********************************************
void USplineMovementPathPattern::StaticRegisterNativesUSplineMovementPathPattern()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USplineMovementPathPattern;
UClass* USplineMovementPathPattern::GetPrivateStaticClass()
{
	using TClass = USplineMovementPathPattern;
	if (!Z_Registration_Info_UClass_USplineMovementPathPattern.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SplineMovementPathPattern"),
			Z_Registration_Info_UClass_USplineMovementPathPattern.InnerSingleton,
			StaticRegisterNativesUSplineMovementPathPattern,
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
	return Z_Registration_Info_UClass_USplineMovementPathPattern.InnerSingleton;
}
UClass* Z_Construct_UClass_USplineMovementPathPattern_NoRegister()
{
	return USplineMovementPathPattern::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USplineMovementPathPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "Category", "SplinePathPattern" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** How far into the spline the movement path actually begins.  */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
		{ "ToolTip", "How far into the spline the movement path actually begins." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "Category", "SplinePathPattern" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** How far into the spline the movement path ends. Must be greater than the lower bound. */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
		{ "ToolTip", "How far into the spline the movement path ends. Must be greater than the lower bound." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOffsetsModifyDuration_MetaData[] = {
		{ "Category", "SplinePathPattern" },
		{ "Comment", "/**\n\x09 * If true, the path duration will be shortened according to how much of the spline is not being followed.\n\x09 * If false (default), the path duration is unchanged, so the object will move slower when the usable spline range is reduced.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
		{ "ToolTip", "If true, the path duration will be shortened according to how much of the spline is not being followed.\nIf false (default), the path duration is unchanged, so the object will move slower when the usable spline range is reduced." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplySplineScaling_MetaData[] = {
		{ "Category", "SplinePathPattern" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponentRef_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "/Script/Engine.SplineComponent" },
		{ "Category", "SplinePathPattern" },
		{ "Comment", "/**\n\x09 * Optional property to specify the spline component that defines the path to follow. If blank, we'll use the first spline component we find in this actor.\n\x09 * This is only necessary to set if you have multiple spline components on the actor, or want to follow a spline on an external actor.\n\x09 */" },
		{ "DisplayName", "Spline Component" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
		{ "ToolTip", "Optional property to specify the spline component that defines the path to follow. If blank, we'll use the first spline component we find in this actor.\nThis is only necessary to set if you have multiple spline components on the actor, or want to follow a spline on an external actor." },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/SplineMovementPathPattern.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperBound;
	static void NewProp_bOffsetsModifyDuration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffsetsModifyDuration;
	static void NewProp_bApplySplineScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplySplineScaling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplineComponentRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineMovementPathPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineMovementPathPattern, LowerBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineMovementPathPattern, UpperBound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
void Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_bOffsetsModifyDuration_SetBit(void* Obj)
{
	((USplineMovementPathPattern*)Obj)->bOffsetsModifyDuration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_bOffsetsModifyDuration = { "bOffsetsModifyDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USplineMovementPathPattern), &Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_bOffsetsModifyDuration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOffsetsModifyDuration_MetaData), NewProp_bOffsetsModifyDuration_MetaData) };
void Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_bApplySplineScaling_SetBit(void* Obj)
{
	((USplineMovementPathPattern*)Obj)->bApplySplineScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_bApplySplineScaling = { "bApplySplineScaling", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USplineMovementPathPattern), &Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_bApplySplineScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplySplineScaling_MetaData), NewProp_bApplySplineScaling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_SplineComponentRef = { "SplineComponentRef", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineMovementPathPattern, SplineComponentRef), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponentRef_MetaData), NewProp_SplineComponentRef_MetaData) }; // 2130483024
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USplineMovementPathPattern, SplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComp_MetaData), NewProp_SplineComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplineMovementPathPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_bOffsetsModifyDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_bApplySplineScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_SplineComponentRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplineMovementPathPattern_Statics::NewProp_SplineComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineMovementPathPattern_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USplineMovementPathPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPathedMovementPatternBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplineMovementPathPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineMovementPathPattern_Statics::ClassParams = {
	&USplineMovementPathPattern::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USplineMovementPathPattern_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USplineMovementPathPattern_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplineMovementPathPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_USplineMovementPathPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USplineMovementPathPattern()
{
	if (!Z_Registration_Info_UClass_USplineMovementPathPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineMovementPathPattern.OuterSingleton, Z_Construct_UClass_USplineMovementPathPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplineMovementPathPattern.OuterSingleton;
}
USplineMovementPathPattern::USplineMovementPathPattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USplineMovementPathPattern);
USplineMovementPathPattern::~USplineMovementPathPattern() {}
// ********** End Class USplineMovementPathPattern *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSplinePathPatternPointData::StaticStruct, Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics::NewStructOps, TEXT("SplinePathPatternPointData"), &Z_Registration_Info_UScriptStruct_FSplinePathPatternPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplinePathPatternPointData), 202454301U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplineMovementPathPattern, USplineMovementPathPattern::StaticClass, TEXT("USplineMovementPathPattern"), &Z_Registration_Info_UClass_USplineMovementPathPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineMovementPathPattern), 2940204642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h__Script_Mover_2689619608(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
