// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/Transitions/PhysicsLaunchCheck.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhysicsLaunchCheck() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UBaseMovementModeTransition();
MOVER_API UClass* Z_Construct_UClass_UPhysicsLaunchCheck();
MOVER_API UClass* Z_Construct_UClass_UPhysicsLaunchCheck_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPhysicsLaunchCheck ******************************************************
void UPhysicsLaunchCheck::StaticRegisterNativesUPhysicsLaunchCheck()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPhysicsLaunchCheck;
UClass* UPhysicsLaunchCheck::GetPrivateStaticClass()
{
	using TClass = UPhysicsLaunchCheck;
	if (!Z_Registration_Info_UClass_UPhysicsLaunchCheck.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhysicsLaunchCheck"),
			Z_Registration_Info_UClass_UPhysicsLaunchCheck.InnerSingleton,
			StaticRegisterNativesUPhysicsLaunchCheck,
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
	return Z_Registration_Info_UClass_UPhysicsLaunchCheck.InnerSingleton;
}
UClass* Z_Construct_UClass_UPhysicsLaunchCheck_NoRegister()
{
	return UPhysicsLaunchCheck::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPhysicsLaunchCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transition that handles launching based on input for a physics-based character\n */" },
		{ "IncludePath", "PhysicsMover/Transitions/PhysicsLaunchCheck.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Transitions/PhysicsLaunchCheck.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Transition that handles launching based on input for a physics-based character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionToMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09Optional: Name of movement mode to transition to when launch is activated.\n\x09If set to None launching will not change the current mode\n\x09*/" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Transitions/PhysicsLaunchCheck.h" },
		{ "ToolTip", "Optional: Name of movement mode to transition to when launch is activated.\nIf set to None launching will not change the current mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TransitionToMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsLaunchCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsLaunchCheck_Statics::NewProp_TransitionToMode = { "TransitionToMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsLaunchCheck, TransitionToMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionToMode_MetaData), NewProp_TransitionToMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsLaunchCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsLaunchCheck_Statics::NewProp_TransitionToMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsLaunchCheck_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsLaunchCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementModeTransition,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsLaunchCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsLaunchCheck_Statics::ClassParams = {
	&UPhysicsLaunchCheck::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicsLaunchCheck_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsLaunchCheck_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsLaunchCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsLaunchCheck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsLaunchCheck()
{
	if (!Z_Registration_Info_UClass_UPhysicsLaunchCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsLaunchCheck.OuterSingleton, Z_Construct_UClass_UPhysicsLaunchCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsLaunchCheck.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsLaunchCheck);
UPhysicsLaunchCheck::~UPhysicsLaunchCheck() {}
// ********** End Class UPhysicsLaunchCheck ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsLaunchCheck, UPhysicsLaunchCheck::StaticClass, TEXT("UPhysicsLaunchCheck"), &Z_Registration_Info_UClass_UPhysicsLaunchCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsLaunchCheck), 2841022904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h__Script_Mover_1596013979(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
