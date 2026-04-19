// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/Modes/PhysicsDrivenFlyingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhysicsDrivenFlyingMode() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UFlyingMode();
MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenFlyingMode();
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenFlyingMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPhysicsDrivenFlyingMode *************************************************
void UPhysicsDrivenFlyingMode::StaticRegisterNativesUPhysicsDrivenFlyingMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPhysicsDrivenFlyingMode;
UClass* UPhysicsDrivenFlyingMode::GetPrivateStaticClass()
{
	using TClass = UPhysicsDrivenFlyingMode;
	if (!Z_Registration_Info_UClass_UPhysicsDrivenFlyingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhysicsDrivenFlyingMode"),
			Z_Registration_Info_UClass_UPhysicsDrivenFlyingMode.InnerSingleton,
			StaticRegisterNativesUPhysicsDrivenFlyingMode,
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
	return Z_Registration_Info_UClass_UPhysicsDrivenFlyingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UPhysicsDrivenFlyingMode_NoRegister()
{
	return UPhysicsDrivenFlyingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PhysicsDrivenFlyingMode: Override base kinematic flying mode for physics based motion.\n */" },
		{ "IncludePath", "PhysicsMover/Modes/PhysicsDrivenFlyingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenFlyingMode.h" },
		{ "ToolTip", "PhysicsDrivenFlyingMode: Override base kinematic flying mode for physics based motion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistTorqueLimit_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum torque the character can apply to rotate in air about the vertical axis\n" },
		{ "ForceUnits", "NewtonMeters" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenFlyingMode.h" },
		{ "ToolTip", "Maximum torque the character can apply to rotate in air about the vertical axis" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingTorqueLimit_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum torque the character can apply to remain upright\n" },
		{ "ForceUnits", "NewtonMeters" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenFlyingMode.h" },
		{ "ToolTip", "Maximum torque the character can apply to remain upright" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistTorqueLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingTorqueLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsDrivenFlyingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::NewProp_TwistTorqueLimit = { "TwistTorqueLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenFlyingMode, TwistTorqueLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistTorqueLimit_MetaData), NewProp_TwistTorqueLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::NewProp_SwingTorqueLimit = { "SwingTorqueLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenFlyingMode, SwingTorqueLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingTorqueLimit_MetaData), NewProp_SwingTorqueLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::NewProp_TwistTorqueLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::NewProp_SwingTorqueLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlyingMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister, (int32)VTABLE_OFFSET(UPhysicsDrivenFlyingMode, IPhysicsCharacterMovementModeInterface), false },  // 3027680338
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::ClassParams = {
	&UPhysicsDrivenFlyingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsDrivenFlyingMode()
{
	if (!Z_Registration_Info_UClass_UPhysicsDrivenFlyingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsDrivenFlyingMode.OuterSingleton, Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsDrivenFlyingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsDrivenFlyingMode);
UPhysicsDrivenFlyingMode::~UPhysicsDrivenFlyingMode() {}
// ********** End Class UPhysicsDrivenFlyingMode ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsDrivenFlyingMode, UPhysicsDrivenFlyingMode::StaticClass, TEXT("UPhysicsDrivenFlyingMode"), &Z_Registration_Info_UClass_UPhysicsDrivenFlyingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsDrivenFlyingMode), 1193953847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h__Script_Mover_4099860376(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
