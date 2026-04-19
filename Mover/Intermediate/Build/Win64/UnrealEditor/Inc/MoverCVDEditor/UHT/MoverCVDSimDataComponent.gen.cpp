// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverCVDSimDataComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverCVDSimDataComponent() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDSolverDataComponent();
MOVERCVDEDITOR_API UClass* Z_Construct_UClass_UMoverCVDSimDataComponent();
MOVERCVDEDITOR_API UClass* Z_Construct_UClass_UMoverCVDSimDataComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoverCVDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverCVDSimDataComponent ************************************************
void UMoverCVDSimDataComponent::StaticRegisterNativesUMoverCVDSimDataComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverCVDSimDataComponent;
UClass* UMoverCVDSimDataComponent::GetPrivateStaticClass()
{
	using TClass = UMoverCVDSimDataComponent;
	if (!Z_Registration_Info_UClass_UMoverCVDSimDataComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverCVDSimDataComponent"),
			Z_Registration_Info_UClass_UMoverCVDSimDataComponent.InnerSingleton,
			StaticRegisterNativesUMoverCVDSimDataComponent,
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
	return Z_Registration_Info_UClass_UMoverCVDSimDataComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverCVDSimDataComponent_NoRegister()
{
	return UMoverCVDSimDataComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverCVDSimDataComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Component holding Mover data for the current visualized frame */" },
		{ "IncludePath", "MoverCVDSimDataComponent.h" },
		{ "ModuleRelativePath", "Private/MoverCVDSimDataComponent.h" },
		{ "ToolTip", "Component holding Mover data for the current visualized frame" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverCVDSimDataComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverCVDSimDataComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVDSolverDataComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverCVDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverCVDSimDataComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverCVDSimDataComponent_Statics::ClassParams = {
	&UMoverCVDSimDataComponent::StaticClass,
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
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverCVDSimDataComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverCVDSimDataComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverCVDSimDataComponent()
{
	if (!Z_Registration_Info_UClass_UMoverCVDSimDataComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverCVDSimDataComponent.OuterSingleton, Z_Construct_UClass_UMoverCVDSimDataComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverCVDSimDataComponent.OuterSingleton;
}
UMoverCVDSimDataComponent::UMoverCVDSimDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverCVDSimDataComponent);
UMoverCVDSimDataComponent::~UMoverCVDSimDataComponent() {}
// ********** End Class UMoverCVDSimDataComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h__Script_MoverCVDEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverCVDSimDataComponent, UMoverCVDSimDataComponent::StaticClass, TEXT("UMoverCVDSimDataComponent"), &Z_Registration_Info_UClass_UMoverCVDSimDataComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverCVDSimDataComponent), 1499439277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h__Script_MoverCVDEditor_3576260059(TEXT("/Script/MoverCVDEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h__Script_MoverCVDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h__Script_MoverCVDEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
