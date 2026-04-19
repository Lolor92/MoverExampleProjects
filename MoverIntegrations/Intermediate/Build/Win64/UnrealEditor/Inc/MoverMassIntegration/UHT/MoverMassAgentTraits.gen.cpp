// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverMassAgentTraits.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverMassAgentTraits() {}

// ********** Begin Cross Module References ********************************************************
MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentSyncTrait();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait_NoRegister();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMoverMassAgentTrait();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMoverMassAgentTrait_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoverMassIntegration();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverMassAgentTrait *****************************************************
void UMoverMassAgentTrait::StaticRegisterNativesUMoverMassAgentTrait()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverMassAgentTrait;
UClass* UMoverMassAgentTrait::GetPrivateStaticClass()
{
	using TClass = UMoverMassAgentTrait;
	if (!Z_Registration_Info_UClass_UMoverMassAgentTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverMassAgentTrait"),
			Z_Registration_Info_UClass_UMoverMassAgentTrait.InnerSingleton,
			StaticRegisterNativesUMoverMassAgentTrait,
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
	return Z_Registration_Info_UClass_UMoverMassAgentTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverMassAgentTrait_NoRegister()
{
	return UMoverMassAgentTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverMassAgentTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The trait initializes the entity with a NavMoverComponent so Mover and Mass can communicate movement intent and velocity.\n * This trait also sets up necessary translators for these systems based off of Mass sync direction.\n * Note: This trait requires a NavMoverComponent and a MoverComponent to work properly\n */" },
		{ "DisplayName", "Agent Mover Sync" },
		{ "IncludePath", "MoverMassAgentTraits.h" },
		{ "ModuleRelativePath", "Public/MoverMassAgentTraits.h" },
		{ "ToolTip", "The trait initializes the entity with a NavMoverComponent so Mover and Mass can communicate movement intent and velocity.\nThis trait also sets up necessary translators for these systems based off of Mass sync direction.\nNote: This trait requires a NavMoverComponent and a MoverComponent to work properly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncTransform_MetaData[] = {
		{ "Category", "Mass" },
		{ "Comment", "/**\n\x09 * Whether this trait should sync the transform of actor<->entity (based on translation direction)\n\x09 * TODO: Currently Mover doesn't like outside modification of rotation and may throw a warning if Mover's transform gets set from the entity. It may also cause a rollback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoverMassAgentTraits.h" },
		{ "ToolTip", "Whether this trait should sync the transform of actor<->entity (based on translation direction)\nTODO: Currently Mover doesn't like outside modification of rotation and may throw a warning if Mover's transform gets set from the entity. It may also cause a rollback." },
	};
#endif // WITH_METADATA
	static void NewProp_bSyncTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverMassAgentTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoverMassAgentTrait_Statics::NewProp_bSyncTransform_SetBit(void* Obj)
{
	((UMoverMassAgentTrait*)Obj)->bSyncTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverMassAgentTrait_Statics::NewProp_bSyncTransform = { "bSyncTransform", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverMassAgentTrait), &Z_Construct_UClass_UMoverMassAgentTrait_Statics::NewProp_bSyncTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncTransform_MetaData), NewProp_bSyncTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoverMassAgentTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverMassAgentTrait_Statics::NewProp_bSyncTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverMassAgentTrait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoverMassAgentTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassAgentSyncTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverMassAgentTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverMassAgentTrait_Statics::ClassParams = {
	&UMoverMassAgentTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoverMassAgentTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoverMassAgentTrait_Statics::PropPointers),
	0,
	0x000830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverMassAgentTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverMassAgentTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverMassAgentTrait()
{
	if (!Z_Registration_Info_UClass_UMoverMassAgentTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverMassAgentTrait.OuterSingleton, Z_Construct_UClass_UMoverMassAgentTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverMassAgentTrait.OuterSingleton;
}
UMoverMassAgentTrait::UMoverMassAgentTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverMassAgentTrait);
UMoverMassAgentTrait::~UMoverMassAgentTrait() {}
// ********** End Class UMoverMassAgentTrait *******************************************************

// ********** Begin Class UMoverMassAgentOrientationSyncTrait **************************************
void UMoverMassAgentOrientationSyncTrait::StaticRegisterNativesUMoverMassAgentOrientationSyncTrait()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverMassAgentOrientationSyncTrait;
UClass* UMoverMassAgentOrientationSyncTrait::GetPrivateStaticClass()
{
	using TClass = UMoverMassAgentOrientationSyncTrait;
	if (!Z_Registration_Info_UClass_UMoverMassAgentOrientationSyncTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverMassAgentOrientationSyncTrait"),
			Z_Registration_Info_UClass_UMoverMassAgentOrientationSyncTrait.InnerSingleton,
			StaticRegisterNativesUMoverMassAgentOrientationSyncTrait,
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
	return Z_Registration_Info_UClass_UMoverMassAgentOrientationSyncTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait_NoRegister()
{
	return UMoverMassAgentOrientationSyncTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This trait sets up required translators for orientation syncing between Mover and Mass based off of Mass sync direction\n */" },
		{ "DisplayName", "Agent Mover Orientation Sync" },
		{ "IncludePath", "MoverMassAgentTraits.h" },
		{ "ModuleRelativePath", "Public/MoverMassAgentTraits.h" },
		{ "ToolTip", "This trait sets up required translators for orientation syncing between Mover and Mass based off of Mass sync direction" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverMassAgentOrientationSyncTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassAgentSyncTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait_Statics::ClassParams = {
	&UMoverMassAgentOrientationSyncTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait()
{
	if (!Z_Registration_Info_UClass_UMoverMassAgentOrientationSyncTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverMassAgentOrientationSyncTrait.OuterSingleton, Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverMassAgentOrientationSyncTrait.OuterSingleton;
}
UMoverMassAgentOrientationSyncTrait::UMoverMassAgentOrientationSyncTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverMassAgentOrientationSyncTrait);
UMoverMassAgentOrientationSyncTrait::~UMoverMassAgentOrientationSyncTrait() {}
// ********** End Class UMoverMassAgentOrientationSyncTrait ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassAgentTraits_h__Script_MoverMassIntegration_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverMassAgentTrait, UMoverMassAgentTrait::StaticClass, TEXT("UMoverMassAgentTrait"), &Z_Registration_Info_UClass_UMoverMassAgentTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverMassAgentTrait), 111556509U) },
		{ Z_Construct_UClass_UMoverMassAgentOrientationSyncTrait, UMoverMassAgentOrientationSyncTrait::StaticClass, TEXT("UMoverMassAgentOrientationSyncTrait"), &Z_Registration_Info_UClass_UMoverMassAgentOrientationSyncTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverMassAgentOrientationSyncTrait), 2087710178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassAgentTraits_h__Script_MoverMassIntegration_516000551(TEXT("/Script/MoverMassIntegration"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassAgentTraits_h__Script_MoverMassIntegration_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassAgentTraits_h__Script_MoverMassIntegration_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
