// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Settings/StanceSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStanceSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVER_API UClass* Z_Construct_UClass_UMovementSettingsInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UStanceSettings();
MOVER_API UClass* Z_Construct_UClass_UStanceSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStanceSettings **********************************************************
void UStanceSettings::StaticRegisterNativesUStanceSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStanceSettings;
UClass* UStanceSettings::GetPrivateStaticClass()
{
	using TClass = UStanceSettings;
	if (!Z_Registration_Info_UClass_UStanceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StanceSettings"),
			Z_Registration_Info_UClass_UStanceSettings.InnerSingleton,
			StaticRegisterNativesUStanceSettings,
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
	return Z_Registration_Info_UClass_UStanceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UStanceSettings_NoRegister()
{
	return UStanceSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStanceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StanceSettings: collection of settings that are shared through the mover component and contain stance related settings.\n */" },
		{ "IncludePath", "DefaultMovementSet/Settings/StanceSettings.h" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/StanceSettings.h" },
		{ "ToolTip", "StanceSettings: collection of settings that are shared through the mover component and contain stance related settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingMaxAcceleration_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ClampMin", "0" },
		{ "Comment", "// New max acceleration while in crouching\n" },
		{ "ForceUnits", "cm/s^2" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/StanceSettings.h" },
		{ "ToolTip", "New max acceleration while in crouching" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingMaxSpeed_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ClampMin", "0" },
		{ "Comment", "// New max speed while in crouching\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/StanceSettings.h" },
		{ "ToolTip", "New max speed while in crouching" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchHalfHeight_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ClampMin", "0" },
		{ "Comment", "// New capsule half height while crouching\n" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/StanceSettings.h" },
		{ "ToolTip", "New capsule half height while crouching" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchedEyeHeight_MetaData[] = {
		{ "Category", "Crouch" },
		{ "Comment", "// New eye height while crouching\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/StanceSettings.h" },
		{ "ToolTip", "New eye height while crouching" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingMaxAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingMaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchedEyeHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStanceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStanceSettings_Statics::NewProp_CrouchingMaxAcceleration = { "CrouchingMaxAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStanceSettings, CrouchingMaxAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchingMaxAcceleration_MetaData), NewProp_CrouchingMaxAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStanceSettings_Statics::NewProp_CrouchingMaxSpeed = { "CrouchingMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStanceSettings, CrouchingMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchingMaxSpeed_MetaData), NewProp_CrouchingMaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStanceSettings_Statics::NewProp_CrouchHalfHeight = { "CrouchHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStanceSettings, CrouchHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchHalfHeight_MetaData), NewProp_CrouchHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStanceSettings_Statics::NewProp_CrouchedEyeHeight = { "CrouchedEyeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStanceSettings, CrouchedEyeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchedEyeHeight_MetaData), NewProp_CrouchedEyeHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStanceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStanceSettings_Statics::NewProp_CrouchingMaxAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStanceSettings_Statics::NewProp_CrouchingMaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStanceSettings_Statics::NewProp_CrouchHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStanceSettings_Statics::NewProp_CrouchedEyeHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStanceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStanceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStanceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStanceSettings_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovementSettingsInterface_NoRegister, (int32)VTABLE_OFFSET(UStanceSettings, IMovementSettingsInterface), false },  // 4158598344
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStanceSettings_Statics::ClassParams = {
	&UStanceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStanceSettings_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStanceSettings_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStanceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStanceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStanceSettings()
{
	if (!Z_Registration_Info_UClass_UStanceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStanceSettings.OuterSingleton, Z_Construct_UClass_UStanceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStanceSettings.OuterSingleton;
}
UStanceSettings::UStanceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStanceSettings);
UStanceSettings::~UStanceSettings() {}
// ********** End Class UStanceSettings ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStanceSettings, UStanceSettings::StaticClass, TEXT("UStanceSettings"), &Z_Registration_Info_UClass_UStanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStanceSettings), 302961056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h__Script_Mover_563801150(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
