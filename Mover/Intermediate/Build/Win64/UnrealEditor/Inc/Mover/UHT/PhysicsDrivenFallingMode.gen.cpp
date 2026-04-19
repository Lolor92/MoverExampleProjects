// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/Modes/PhysicsDrivenFallingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhysicsDrivenFallingMode() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UFallingMode();
MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenFallingMode();
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenFallingMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPhysicsDrivenFallingMode ************************************************
void UPhysicsDrivenFallingMode::StaticRegisterNativesUPhysicsDrivenFallingMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPhysicsDrivenFallingMode;
UClass* UPhysicsDrivenFallingMode::GetPrivateStaticClass()
{
	using TClass = UPhysicsDrivenFallingMode;
	if (!Z_Registration_Info_UClass_UPhysicsDrivenFallingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhysicsDrivenFallingMode"),
			Z_Registration_Info_UClass_UPhysicsDrivenFallingMode.InnerSingleton,
			StaticRegisterNativesUPhysicsDrivenFallingMode,
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
	return Z_Registration_Info_UClass_UPhysicsDrivenFallingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UPhysicsDrivenFallingMode_NoRegister()
{
	return UPhysicsDrivenFallingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PhysicsDrivenFallingMode: Override base kinematic falling mode for physics based motion.\n */" },
		{ "IncludePath", "PhysicsMover/Modes/PhysicsDrivenFallingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenFallingMode.h" },
		{ "ToolTip", "PhysicsDrivenFallingMode: Override base kinematic falling mode for physics based motion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistTorqueLimit_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum torque the character can apply to rotate in air about the vertical axis\n" },
		{ "ForceUnits", "NewtonMeters" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenFallingMode.h" },
		{ "ToolTip", "Maximum torque the character can apply to rotate in air about the vertical axis" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingTorqueLimit_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum torque the character can apply to remain upright\n" },
		{ "ForceUnits", "NewtonMeters" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenFallingMode.h" },
		{ "ToolTip", "Maximum torque the character can apply to remain upright" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHeightOverride_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Optional override target height for the character (the desired distance from the center of the capsule to the floor).\n\x09 * If left blank, the -Z offset of the owning character's skeletal mesh comp will be used automatically.\n\x09 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenFallingMode.h" },
		{ "ToolTip", "Optional override target height for the character (the desired distance from the center of the capsule to the floor).\nIf left blank, the -Z offset of the owning character's skeletal mesh comp will be used automatically." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryRadius_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Radius used for ground queries\n" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenFallingMode.h" },
		{ "ToolTip", "Radius used for ground queries" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistTorqueLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingTorqueLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetHeightOverride_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_TargetHeightOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_QueryRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsDrivenFallingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_TwistTorqueLimit = { "TwistTorqueLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenFallingMode, TwistTorqueLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistTorqueLimit_MetaData), NewProp_TwistTorqueLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_SwingTorqueLimit = { "SwingTorqueLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenFallingMode, SwingTorqueLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingTorqueLimit_MetaData), NewProp_SwingTorqueLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_TargetHeightOverride_Inner = { "TargetHeightOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_TargetHeightOverride = { "TargetHeightOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenFallingMode, TargetHeightOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHeightOverride_MetaData), NewProp_TargetHeightOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_QueryRadius = { "QueryRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenFallingMode, QueryRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryRadius_MetaData), NewProp_QueryRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_TwistTorqueLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_SwingTorqueLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_TargetHeightOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_TargetHeightOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::NewProp_QueryRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFallingMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister, (int32)VTABLE_OFFSET(UPhysicsDrivenFallingMode, IPhysicsCharacterMovementModeInterface), false },  // 3027680338
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::ClassParams = {
	&UPhysicsDrivenFallingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsDrivenFallingMode()
{
	if (!Z_Registration_Info_UClass_UPhysicsDrivenFallingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsDrivenFallingMode.OuterSingleton, Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsDrivenFallingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsDrivenFallingMode);
UPhysicsDrivenFallingMode::~UPhysicsDrivenFallingMode() {}
// ********** End Class UPhysicsDrivenFallingMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsDrivenFallingMode, UPhysicsDrivenFallingMode::StaticClass, TEXT("UPhysicsDrivenFallingMode"), &Z_Registration_Info_UClass_UPhysicsDrivenFallingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsDrivenFallingMode), 1688064396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h__Script_Mover_2175317463(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
