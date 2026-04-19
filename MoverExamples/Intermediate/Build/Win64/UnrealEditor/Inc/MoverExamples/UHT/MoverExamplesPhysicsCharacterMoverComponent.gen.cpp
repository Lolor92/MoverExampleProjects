// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterVariants/MoverExamplesPhysicsCharacterMoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverExamplesPhysicsCharacterMoverComponent() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMoverComponent();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverExamplesPhysicsCharacterMoverComponent *****************************
void UMoverExamplesPhysicsCharacterMoverComponent::StaticRegisterNativesUMoverExamplesPhysicsCharacterMoverComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverExamplesPhysicsCharacterMoverComponent;
UClass* UMoverExamplesPhysicsCharacterMoverComponent::GetPrivateStaticClass()
{
	using TClass = UMoverExamplesPhysicsCharacterMoverComponent;
	if (!Z_Registration_Info_UClass_UMoverExamplesPhysicsCharacterMoverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverExamplesPhysicsCharacterMoverComponent"),
			Z_Registration_Info_UClass_UMoverExamplesPhysicsCharacterMoverComponent.InnerSingleton,
			StaticRegisterNativesUMoverExamplesPhysicsCharacterMoverComponent,
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
	return Z_Registration_Info_UClass_UMoverExamplesPhysicsCharacterMoverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent_NoRegister()
{
	return UMoverExamplesPhysicsCharacterMoverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterVariants/MoverExamplesPhysicsCharacterMoverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterVariants/MoverExamplesPhysicsCharacterMoverComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverExamplesPhysicsCharacterMoverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicsCharacterMoverComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent_Statics::ClassParams = {
	&UMoverExamplesPhysicsCharacterMoverComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent()
{
	if (!Z_Registration_Info_UClass_UMoverExamplesPhysicsCharacterMoverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverExamplesPhysicsCharacterMoverComponent.OuterSingleton, Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverExamplesPhysicsCharacterMoverComponent.OuterSingleton;
}
UMoverExamplesPhysicsCharacterMoverComponent::UMoverExamplesPhysicsCharacterMoverComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverExamplesPhysicsCharacterMoverComponent);
UMoverExamplesPhysicsCharacterMoverComponent::~UMoverExamplesPhysicsCharacterMoverComponent() {}
// ********** End Class UMoverExamplesPhysicsCharacterMoverComponent *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_MoverExamplesPhysicsCharacterMoverComponent_h__Script_MoverExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverExamplesPhysicsCharacterMoverComponent, UMoverExamplesPhysicsCharacterMoverComponent::StaticClass, TEXT("UMoverExamplesPhysicsCharacterMoverComponent"), &Z_Registration_Info_UClass_UMoverExamplesPhysicsCharacterMoverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverExamplesPhysicsCharacterMoverComponent), 2788055590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_MoverExamplesPhysicsCharacterMoverComponent_h__Script_MoverExamples_1343782143(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_MoverExamplesPhysicsCharacterMoverComponent_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_MoverExamplesPhysicsCharacterMoverComponent_h__Script_MoverExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
