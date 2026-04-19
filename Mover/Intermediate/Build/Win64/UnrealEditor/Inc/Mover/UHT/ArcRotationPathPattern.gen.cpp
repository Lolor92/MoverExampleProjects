// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/ArcRotationPathPattern.h"
#include "PhysicsMover/PathedMovement/PathedMovementMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeArcRotationPathPattern() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UClass* Z_Construct_UClass_UArcRotationPattern();
MOVER_API UClass* Z_Construct_UClass_UArcRotationPattern_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UArcRotationPattern ******************************************************
void UArcRotationPattern::StaticRegisterNativesUArcRotationPattern()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UArcRotationPattern;
UClass* UArcRotationPattern::GetPrivateStaticClass()
{
	using TClass = UArcRotationPattern;
	if (!Z_Registration_Info_UClass_UArcRotationPattern.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ArcRotationPattern"),
			Z_Registration_Info_UClass_UArcRotationPattern.InnerSingleton,
			StaticRegisterNativesUArcRotationPattern,
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
	return Z_Registration_Info_UClass_UArcRotationPattern.InnerSingleton;
}
UClass* Z_Construct_UClass_UArcRotationPattern_NoRegister()
{
	return UArcRotationPattern::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UArcRotationPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsMover/PathedMovement/ArcRotationPathPattern.h" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/ArcRotationPathPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationArcAngle_MetaData[] = {
		{ "Category", "EllipticalPathPattern" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The size of the arc angle to rotate along */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/ArcRotationPathPattern.h" },
		{ "ToolTip", "The size of the arc angle to rotate along" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[] = {
		{ "Category", "EllipticalPathPattern" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The axis to rotate about */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/ArcRotationPathPattern.h" },
		{ "ToolTip", "The axis to rotate about" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationArcAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArcRotationPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArcRotationPattern_Statics::NewProp_RotationArcAngle = { "RotationArcAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArcRotationPattern, RotationArcAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationArcAngle_MetaData), NewProp_RotationArcAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArcRotationPattern_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArcRotationPattern, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAxis_MetaData), NewProp_RotationAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArcRotationPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcRotationPattern_Statics::NewProp_RotationArcAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArcRotationPattern_Statics::NewProp_RotationAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArcRotationPattern_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArcRotationPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPathedMovementPatternBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArcRotationPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArcRotationPattern_Statics::ClassParams = {
	&UArcRotationPattern::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UArcRotationPattern_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UArcRotationPattern_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArcRotationPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UArcRotationPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArcRotationPattern()
{
	if (!Z_Registration_Info_UClass_UArcRotationPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArcRotationPattern.OuterSingleton, Z_Construct_UClass_UArcRotationPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArcRotationPattern.OuterSingleton;
}
UArcRotationPattern::UArcRotationPattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArcRotationPattern);
UArcRotationPattern::~UArcRotationPattern() {}
// ********** End Class UArcRotationPattern ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArcRotationPattern, UArcRotationPattern::StaticClass, TEXT("UArcRotationPattern"), &Z_Registration_Info_UClass_UArcRotationPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArcRotationPattern), 604814518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h__Script_Mover_2597676930(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
