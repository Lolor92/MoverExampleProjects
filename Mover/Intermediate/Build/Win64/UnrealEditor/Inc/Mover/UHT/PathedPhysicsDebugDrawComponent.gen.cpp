// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/PathedPhysicsDebugDrawComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePathedPhysicsDebugDrawComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsDebugDrawComponent();
MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPathedPhysicsDebugDrawComponent *****************************************
void UPathedPhysicsDebugDrawComponent::StaticRegisterNativesUPathedPhysicsDebugDrawComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPathedPhysicsDebugDrawComponent;
UClass* UPathedPhysicsDebugDrawComponent::GetPrivateStaticClass()
{
	using TClass = UPathedPhysicsDebugDrawComponent;
	if (!Z_Registration_Info_UClass_UPathedPhysicsDebugDrawComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PathedPhysicsDebugDrawComponent"),
			Z_Registration_Info_UClass_UPathedPhysicsDebugDrawComponent.InnerSingleton,
			StaticRegisterNativesUPathedPhysicsDebugDrawComponent,
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
	return Z_Registration_Info_UClass_UPathedPhysicsDebugDrawComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_NoRegister()
{
	return UPathedPhysicsDebugDrawComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//@todo DanH: Ideally clicking anything drawn by this would select the mover comp in the editor. I think I need a whole FComponentVisualizer set up for that though?\n" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "PhysicsMover/PathedMovement/PathedPhysicsDebugDrawComponent.h" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsDebugDrawComponent.h" },
		{ "ToolTip", "@todo DanH: Ideally clicking anything drawn by this would select the mover comp in the editor. I think I need a whole FComponentVisualizer set up for that though?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressPreviewMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsDebugDrawComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressPreviewMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathedPhysicsDebugDrawComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::NewProp_ProgressPreviewMeshComp = { "ProgressPreviewMeshComp", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsDebugDrawComponent, ProgressPreviewMeshComp), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressPreviewMeshComp_MetaData), NewProp_ProgressPreviewMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::NewProp_ProgressPreviewMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::ClassParams = {
	&UPathedPhysicsDebugDrawComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPathedPhysicsDebugDrawComponent()
{
	if (!Z_Registration_Info_UClass_UPathedPhysicsDebugDrawComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathedPhysicsDebugDrawComponent.OuterSingleton, Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathedPhysicsDebugDrawComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPathedPhysicsDebugDrawComponent);
UPathedPhysicsDebugDrawComponent::~UPathedPhysicsDebugDrawComponent() {}
// ********** End Class UPathedPhysicsDebugDrawComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsDebugDrawComponent_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathedPhysicsDebugDrawComponent, UPathedPhysicsDebugDrawComponent::StaticClass, TEXT("UPathedPhysicsDebugDrawComponent"), &Z_Registration_Info_UClass_UPathedPhysicsDebugDrawComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathedPhysicsDebugDrawComponent), 2624013648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsDebugDrawComponent_h__Script_Mover_2718559774(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsDebugDrawComponent_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsDebugDrawComponent_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
