// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PhysicsMoverManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhysicsMoverManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MOVER_API UClass* Z_Construct_UClass_UPhysicsMoverManager();
MOVER_API UClass* Z_Construct_UClass_UPhysicsMoverManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPhysicsMoverManager *****************************************************
void UPhysicsMoverManager::StaticRegisterNativesUPhysicsMoverManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPhysicsMoverManager;
UClass* UPhysicsMoverManager::GetPrivateStaticClass()
{
	using TClass = UPhysicsMoverManager;
	if (!Z_Registration_Info_UClass_UPhysicsMoverManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhysicsMoverManager"),
			Z_Registration_Info_UClass_UPhysicsMoverManager.InnerSingleton,
			StaticRegisterNativesUPhysicsMoverManager,
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
	return Z_Registration_Info_UClass_UPhysicsMoverManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UPhysicsMoverManager_NoRegister()
{
	return UPhysicsMoverManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPhysicsMoverManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsMover/PhysicsMoverManager.h" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsMoverManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPhysicsMoverManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsMoverManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsMoverManager_Statics::ClassParams = {
	&UPhysicsMoverManager::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsMoverManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsMoverManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsMoverManager()
{
	if (!Z_Registration_Info_UClass_UPhysicsMoverManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsMoverManager.OuterSingleton, Z_Construct_UClass_UPhysicsMoverManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsMoverManager.OuterSingleton;
}
UPhysicsMoverManager::UPhysicsMoverManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsMoverManager);
UPhysicsMoverManager::~UPhysicsMoverManager() {}
// ********** End Class UPhysicsMoverManager *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsMoverManager, UPhysicsMoverManager::StaticClass, TEXT("UPhysicsMoverManager"), &Z_Registration_Info_UClass_UPhysicsMoverManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsMoverManager), 1658260917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h__Script_Mover_2374468591(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
