// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Backends/MoverNetworkPredictionLiaison.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverNetworkPredictionLiaison() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent();
MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_NoRegister();
NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionComponent();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverNetworkPredictionLiaisonComponent **********************************
void UMoverNetworkPredictionLiaisonComponent::StaticRegisterNativesUMoverNetworkPredictionLiaisonComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverNetworkPredictionLiaisonComponent;
UClass* UMoverNetworkPredictionLiaisonComponent::GetPrivateStaticClass()
{
	using TClass = UMoverNetworkPredictionLiaisonComponent;
	if (!Z_Registration_Info_UClass_UMoverNetworkPredictionLiaisonComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverNetworkPredictionLiaisonComponent"),
			Z_Registration_Info_UClass_UMoverNetworkPredictionLiaisonComponent.InnerSingleton,
			StaticRegisterNativesUMoverNetworkPredictionLiaisonComponent,
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
	return Z_Registration_Info_UClass_UMoverNetworkPredictionLiaisonComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_NoRegister()
{
	return UMoverNetworkPredictionLiaisonComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MoverNetworkPredictionLiaisonComponent: this component acts as a middleman between an actor's Mover component and the Network Prediction plugin.\n * This class is set on a Mover component as the \"back end\".\n */" },
		{ "IncludePath", "Backends/MoverNetworkPredictionLiaison.h" },
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPredictionLiaison.h" },
		{ "ToolTip", "MoverNetworkPredictionLiaisonComponent: this component acts as a middleman between an actor's Mover component and the Network Prediction plugin.\nThis class is set on a Mover component as the \"back end\"." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverNetworkPredictionLiaisonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetworkPredictionComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister, (int32)VTABLE_OFFSET(UMoverNetworkPredictionLiaisonComponent, IMoverBackendLiaisonInterface), false },  // 2819606442
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics::ClassParams = {
	&UMoverNetworkPredictionLiaisonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent()
{
	if (!Z_Registration_Info_UClass_UMoverNetworkPredictionLiaisonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverNetworkPredictionLiaisonComponent.OuterSingleton, Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverNetworkPredictionLiaisonComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverNetworkPredictionLiaisonComponent);
UMoverNetworkPredictionLiaisonComponent::~UMoverNetworkPredictionLiaisonComponent() {}
// ********** End Class UMoverNetworkPredictionLiaisonComponent ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent, UMoverNetworkPredictionLiaisonComponent::StaticClass, TEXT("UMoverNetworkPredictionLiaisonComponent"), &Z_Registration_Info_UClass_UMoverNetworkPredictionLiaisonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverNetworkPredictionLiaisonComponent), 3751657261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h__Script_Mover_3948862497(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
