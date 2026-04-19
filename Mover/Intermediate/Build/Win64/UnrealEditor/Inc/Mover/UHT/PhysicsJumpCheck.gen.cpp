// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/Transitions/PhysicsJumpCheck.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhysicsJumpCheck() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UBaseMovementModeTransition();
MOVER_API UClass* Z_Construct_UClass_UPhysicsJumpCheck();
MOVER_API UClass* Z_Construct_UClass_UPhysicsJumpCheck_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPhysicsJumpCheck ********************************************************
void UPhysicsJumpCheck::StaticRegisterNativesUPhysicsJumpCheck()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPhysicsJumpCheck;
UClass* UPhysicsJumpCheck::GetPrivateStaticClass()
{
	using TClass = UPhysicsJumpCheck;
	if (!Z_Registration_Info_UClass_UPhysicsJumpCheck.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhysicsJumpCheck"),
			Z_Registration_Info_UClass_UPhysicsJumpCheck.InnerSingleton,
			StaticRegisterNativesUPhysicsJumpCheck,
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
	return Z_Registration_Info_UClass_UPhysicsJumpCheck.InnerSingleton;
}
UClass* Z_Construct_UClass_UPhysicsJumpCheck_NoRegister()
{
	return UPhysicsJumpCheck::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPhysicsJumpCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transition that handles jumping based on input for a physics-based character\n */" },
		{ "IncludePath", "PhysicsMover/Transitions/PhysicsJumpCheck.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Transitions/PhysicsJumpCheck.h" },
		{ "ToolTip", "Transition that handles jumping based on input for a physics-based character" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpUpwardsSpeed_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Instantaneous speed induced in an actor upon jumping */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Transitions/PhysicsJumpCheck.h" },
		{ "ToolTip", "Instantaneous speed induced in an actor upon jumping" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FractionalGroundReactionImpulse_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Controls how much of the jump impulse the character will apply to the ground.\n\x09* A value of 0 means no impulse will be applied to the ground.\n\x09* A value of 1 means that the full equal and opposite jump impulse will be applied.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Transitions/PhysicsJumpCheck.h" },
		{ "ToolTip", "Controls how much of the jump impulse the character will apply to the ground.\nA value of 0 means no impulse will be applied to the ground.\nA value of 1 means that the full equal and opposite jump impulse will be applied." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionToMode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Name of movement mode to transition to when jumping is activated */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Transitions/PhysicsJumpCheck.h" },
		{ "ToolTip", "Name of movement mode to transition to when jumping is activated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpUpwardsSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FractionalGroundReactionImpulse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TransitionToMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsJumpCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsJumpCheck_Statics::NewProp_JumpUpwardsSpeed = { "JumpUpwardsSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsJumpCheck, JumpUpwardsSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpUpwardsSpeed_MetaData), NewProp_JumpUpwardsSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsJumpCheck_Statics::NewProp_FractionalGroundReactionImpulse = { "FractionalGroundReactionImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsJumpCheck, FractionalGroundReactionImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FractionalGroundReactionImpulse_MetaData), NewProp_FractionalGroundReactionImpulse_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsJumpCheck_Statics::NewProp_TransitionToMode = { "TransitionToMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsJumpCheck, TransitionToMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionToMode_MetaData), NewProp_TransitionToMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsJumpCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsJumpCheck_Statics::NewProp_JumpUpwardsSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsJumpCheck_Statics::NewProp_FractionalGroundReactionImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsJumpCheck_Statics::NewProp_TransitionToMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsJumpCheck_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsJumpCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementModeTransition,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsJumpCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsJumpCheck_Statics::ClassParams = {
	&UPhysicsJumpCheck::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicsJumpCheck_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsJumpCheck_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsJumpCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsJumpCheck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsJumpCheck()
{
	if (!Z_Registration_Info_UClass_UPhysicsJumpCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsJumpCheck.OuterSingleton, Z_Construct_UClass_UPhysicsJumpCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsJumpCheck.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsJumpCheck);
UPhysicsJumpCheck::~UPhysicsJumpCheck() {}
// ********** End Class UPhysicsJumpCheck **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsJumpCheck, UPhysicsJumpCheck::StaticClass, TEXT("UPhysicsJumpCheck"), &Z_Registration_Info_UClass_UPhysicsJumpCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsJumpCheck), 2837873571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h__Script_Mover_370455420(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
