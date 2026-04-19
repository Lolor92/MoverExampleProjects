// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Backends/MoverNetworkPhysicsLiaison.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverNetworkPhysicsLiaison() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent();
MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverNetworkPhysicsLiaisonComponent *************************************
void UMoverNetworkPhysicsLiaisonComponent::StaticRegisterNativesUMoverNetworkPhysicsLiaisonComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponent;
UClass* UMoverNetworkPhysicsLiaisonComponent::GetPrivateStaticClass()
{
	using TClass = UMoverNetworkPhysicsLiaisonComponent;
	if (!Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverNetworkPhysicsLiaisonComponent"),
			Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponent.InnerSingleton,
			StaticRegisterNativesUMoverNetworkPhysicsLiaisonComponent,
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
	return Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_NoRegister()
{
	return UMoverNetworkPhysicsLiaisonComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MoverNetworkPhysicsLiaisonComponent: This component acts as a middleman between an actor's Mover component and the chaos physics network prediction system.\n * This class is set on a Mover component as the \"back end\".\n */" },
		{ "IncludePath", "Backends/MoverNetworkPhysicsLiaison.h" },
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPhysicsLiaison.h" },
		{ "ToolTip", "MoverNetworkPhysicsLiaisonComponent: This component acts as a middleman between an actor's Mover component and the chaos physics network prediction system.\nThis class is set on a Mover component as the \"back end\"." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverNetworkPhysicsLiaisonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_Statics::ClassParams = {
	&UMoverNetworkPhysicsLiaisonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent()
{
	if (!Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponent.OuterSingleton, Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverNetworkPhysicsLiaisonComponent);
UMoverNetworkPhysicsLiaisonComponent::~UMoverNetworkPhysicsLiaisonComponent() {}
// ********** End Class UMoverNetworkPhysicsLiaisonComponent ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponent, UMoverNetworkPhysicsLiaisonComponent::StaticClass, TEXT("UMoverNetworkPhysicsLiaisonComponent"), &Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverNetworkPhysicsLiaisonComponent), 2891315705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h__Script_Mover_1538576856(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaison_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
