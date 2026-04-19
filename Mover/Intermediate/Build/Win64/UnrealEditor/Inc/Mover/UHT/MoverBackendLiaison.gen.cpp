// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Backends/MoverBackendLiaison.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverBackendLiaison() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVER_API UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface();
MOVER_API UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UMoverBackendLiaisonInterface ****************************************
void UMoverBackendLiaisonInterface::StaticRegisterNativesUMoverBackendLiaisonInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverBackendLiaisonInterface;
UClass* UMoverBackendLiaisonInterface::GetPrivateStaticClass()
{
	using TClass = UMoverBackendLiaisonInterface;
	if (!Z_Registration_Info_UClass_UMoverBackendLiaisonInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverBackendLiaisonInterface"),
			Z_Registration_Info_UClass_UMoverBackendLiaisonInterface.InnerSingleton,
			StaticRegisterNativesUMoverBackendLiaisonInterface,
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
	return Z_Registration_Info_UClass_UMoverBackendLiaisonInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister()
{
	return UMoverBackendLiaisonInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverBackendLiaisonInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Backends/MoverBackendLiaison.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMoverBackendLiaisonInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverBackendLiaisonInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverBackendLiaisonInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverBackendLiaisonInterface_Statics::ClassParams = {
	&UMoverBackendLiaisonInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverBackendLiaisonInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverBackendLiaisonInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface()
{
	if (!Z_Registration_Info_UClass_UMoverBackendLiaisonInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverBackendLiaisonInterface.OuterSingleton, Z_Construct_UClass_UMoverBackendLiaisonInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverBackendLiaisonInterface.OuterSingleton;
}
UMoverBackendLiaisonInterface::UMoverBackendLiaisonInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverBackendLiaisonInterface);
// ********** End Interface UMoverBackendLiaisonInterface ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverBackendLiaisonInterface, UMoverBackendLiaisonInterface::StaticClass, TEXT("UMoverBackendLiaisonInterface"), &Z_Registration_Info_UClass_UMoverBackendLiaisonInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverBackendLiaisonInterface), 2819606442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h__Script_Mover_3914472107(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
