// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverDeveloperSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverDeveloperSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
MOVER_API UClass* Z_Construct_UClass_UMoverDeveloperSettings();
MOVER_API UClass* Z_Construct_UClass_UMoverDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverDeveloperSettings **************************************************
void UMoverDeveloperSettings::StaticRegisterNativesUMoverDeveloperSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverDeveloperSettings;
UClass* UMoverDeveloperSettings::GetPrivateStaticClass()
{
	using TClass = UMoverDeveloperSettings;
	if (!Z_Registration_Info_UClass_UMoverDeveloperSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverDeveloperSettings"),
			Z_Registration_Info_UClass_UMoverDeveloperSettings.InnerSingleton,
			StaticRegisterNativesUMoverDeveloperSettings,
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
	return Z_Registration_Info_UClass_UMoverDeveloperSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverDeveloperSettings_NoRegister()
{
	return UMoverDeveloperSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Developer settings for the Mover plugin */" },
		{ "DisplayName", "Mover Settings" },
		{ "IncludePath", "MoverDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/MoverDeveloperSettings.h" },
		{ "ToolTip", "Developer settings for the Mover plugin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimesToRefundSubstep_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n     * This specifies the number of times a movement mode can refund all of the time in a substep before we back out to avoid freezing the game/editor\n     */" },
		{ "ModuleRelativePath", "Public/MoverDeveloperSettings.h" },
		{ "ToolTip", "This specifies the number of times a movement mode can refund all of the time in a substep before we back out to avoid freezing the game/editor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTimesToRefundSubstep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoverDeveloperSettings_Statics::NewProp_MaxTimesToRefundSubstep = { "MaxTimesToRefundSubstep", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverDeveloperSettings, MaxTimesToRefundSubstep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimesToRefundSubstep_MetaData), NewProp_MaxTimesToRefundSubstep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoverDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverDeveloperSettings_Statics::NewProp_MaxTimesToRefundSubstep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoverDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverDeveloperSettings_Statics::ClassParams = {
	&UMoverDeveloperSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoverDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDeveloperSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UMoverDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverDeveloperSettings.OuterSingleton, Z_Construct_UClass_UMoverDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverDeveloperSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverDeveloperSettings);
UMoverDeveloperSettings::~UMoverDeveloperSettings() {}
// ********** End Class UMoverDeveloperSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverDeveloperSettings, UMoverDeveloperSettings::StaticClass, TEXT("UMoverDeveloperSettings"), &Z_Registration_Info_UClass_UMoverDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverDeveloperSettings), 4102323397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h__Script_Mover_3996867182(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
