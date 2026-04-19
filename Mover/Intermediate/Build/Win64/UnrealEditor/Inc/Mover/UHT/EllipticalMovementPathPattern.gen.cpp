// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/EllipticalMovementPathPattern.h"
#include "PhysicsMover/PathedMovement/PathedMovementMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEllipticalMovementPathPattern() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
MOVER_API UClass* Z_Construct_UClass_UEllipticalMovementPathPattern();
MOVER_API UClass* Z_Construct_UClass_UEllipticalMovementPathPattern_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEllipticalMovementPathPattern *******************************************
void UEllipticalMovementPathPattern::StaticRegisterNativesUEllipticalMovementPathPattern()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEllipticalMovementPathPattern;
UClass* UEllipticalMovementPathPattern::GetPrivateStaticClass()
{
	using TClass = UEllipticalMovementPathPattern;
	if (!Z_Registration_Info_UClass_UEllipticalMovementPathPattern.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EllipticalMovementPathPattern"),
			Z_Registration_Info_UClass_UEllipticalMovementPathPattern.InnerSingleton,
			StaticRegisterNativesUEllipticalMovementPathPattern,
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
	return Z_Registration_Info_UClass_UEllipticalMovementPathPattern.InnerSingleton;
}
UClass* Z_Construct_UClass_UEllipticalMovementPathPattern_NoRegister()
{
	return UEllipticalMovementPathPattern::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEllipticalMovementPathPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsMover/PathedMovement/EllipticalMovementPathPattern.h" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/EllipticalMovementPathPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusX_MetaData[] = {
		{ "Category", "EllipticalPathPattern" },
		{ "Comment", "/** Radius of the ellipse along the x axis */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/EllipticalMovementPathPattern.h" },
		{ "ToolTip", "Radius of the ellipse along the x axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusY_MetaData[] = {
		{ "Category", "EllipticalPathPattern" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/EllipticalMovementPathPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginAngle_MetaData[] = {
		{ "Category", "EllipticalPathPattern" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The angle between the path origin (i.e. the initial location of the component/particle) and the center of the ellipse */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/EllipticalMovementPathPattern.h" },
		{ "ToolTip", "The angle between the path origin (i.e. the initial location of the component/particle) and the center of the ellipse" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsableArcAngle_MetaData[] = {
		{ "Category", "EllipticalPathPattern" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount of the ellipsoid arc to actually use for the path (where 360 is the entire ellipse) */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/EllipticalMovementPathPattern.h" },
		{ "ToolTip", "The amount of the ellipsoid arc to actually use for the path (where 360 is the entire ellipse)" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EllipsePlaneRotation_MetaData[] = {
		{ "Category", "EllipticalPathPattern" },
		{ "Comment", "/** The world rotation of the plane the ellipse is on */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/EllipticalMovementPathPattern.h" },
		{ "ToolTip", "The world rotation of the plane the ellipse is on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UsableArcAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EllipsePlaneRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEllipticalMovementPathPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_RadiusX = { "RadiusX", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEllipticalMovementPathPattern, RadiusX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusX_MetaData), NewProp_RadiusX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_RadiusY = { "RadiusY", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEllipticalMovementPathPattern, RadiusY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusY_MetaData), NewProp_RadiusY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_OriginAngle = { "OriginAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEllipticalMovementPathPattern, OriginAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginAngle_MetaData), NewProp_OriginAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_UsableArcAngle = { "UsableArcAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEllipticalMovementPathPattern, UsableArcAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsableArcAngle_MetaData), NewProp_UsableArcAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_EllipsePlaneRotation = { "EllipsePlaneRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEllipticalMovementPathPattern, EllipsePlaneRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EllipsePlaneRotation_MetaData), NewProp_EllipsePlaneRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_RadiusX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_RadiusY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_OriginAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_UsableArcAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::NewProp_EllipsePlaneRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPathedMovementPatternBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::ClassParams = {
	&UEllipticalMovementPathPattern::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEllipticalMovementPathPattern()
{
	if (!Z_Registration_Info_UClass_UEllipticalMovementPathPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEllipticalMovementPathPattern.OuterSingleton, Z_Construct_UClass_UEllipticalMovementPathPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEllipticalMovementPathPattern.OuterSingleton;
}
UEllipticalMovementPathPattern::UEllipticalMovementPathPattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEllipticalMovementPathPattern);
UEllipticalMovementPathPattern::~UEllipticalMovementPathPattern() {}
// ********** End Class UEllipticalMovementPathPattern *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_EllipticalMovementPathPattern_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEllipticalMovementPathPattern, UEllipticalMovementPathPattern::StaticClass, TEXT("UEllipticalMovementPathPattern"), &Z_Registration_Info_UClass_UEllipticalMovementPathPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEllipticalMovementPathPattern), 3876596402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_EllipticalMovementPathPattern_h__Script_Mover_237248246(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_EllipticalMovementPathPattern_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_EllipticalMovementPathPattern_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
