// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/Modes/PhysicsDrivenWalkingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhysicsDrivenWalkingMode() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenWalkingMode();
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenWalkingMode_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UWalkingMode();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPhysicsDrivenWalkingMode ************************************************
void UPhysicsDrivenWalkingMode::StaticRegisterNativesUPhysicsDrivenWalkingMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPhysicsDrivenWalkingMode;
UClass* UPhysicsDrivenWalkingMode::GetPrivateStaticClass()
{
	using TClass = UPhysicsDrivenWalkingMode;
	if (!Z_Registration_Info_UClass_UPhysicsDrivenWalkingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhysicsDrivenWalkingMode"),
			Z_Registration_Info_UClass_UPhysicsDrivenWalkingMode.InnerSingleton,
			StaticRegisterNativesUPhysicsDrivenWalkingMode,
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
	return Z_Registration_Info_UClass_UPhysicsDrivenWalkingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UPhysicsDrivenWalkingMode_NoRegister()
{
	return UPhysicsDrivenWalkingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PhysicsDrivenWalkingMode: Override base kinematic walking mode for physics based motion.\n */" },
		{ "IncludePath", "PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "PhysicsDrivenWalkingMode: Override base kinematic walking mode for physics based motion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialForceLimit_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum force the character can apply to reach the motion target\n" },
		{ "ForceUnits", "Newtons" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Maximum force the character can apply to reach the motion target" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionForceLimit_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum force the character can apply to hold in place while standing on an unwalkable incline\n" },
		{ "ForceUnits", "Newtons" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Maximum force the character can apply to hold in place while standing on an unwalkable incline" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwistTorqueLimit_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum torque the character can apply to rotate in air about the vertical axis\n" },
		{ "ForceUnits", "NewtonMeters" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Maximum torque the character can apply to rotate in air about the vertical axis" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingTorqueLimit_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum torque the character can apply to remain upright\n" },
		{ "ForceUnits", "NewtonMeters" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Maximum torque the character can apply to remain upright" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetHeightOverride_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Optional override target height for the character (the desired distance from the center of the capsule to the floor).\n\x09 * If left blank, the -Z offset of the owning character's skeletal mesh comp will be used automatically.\n\x09 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Optional override target height for the character (the desired distance from the center of the capsule to the floor).\nIf left blank, the -Z offset of the owning character's skeletal mesh comp will be used automatically." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryRadius_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Radius used for ground queries\n" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Radius used for ground queries" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDamping_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Damping factor to control the softness of the interaction between the character and the ground\n// Set to 0 for no damping and 1 for maximum damping\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Damping factor to control the softness of the interaction between the character and the ground\nSet to 0 for no damping and 1 for maximum damping" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FractionalRadialForceLimitScaling_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Scaling applied to the radial force limit to raise the limit to always allow the character to\n// reach the motion target/\n// A value of 1 means that the radial force limit will be increased as needed to match the force\n// required to achieve the motion target.\n// A value of 0 means no scaling will be applied.\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Scaling applied to the radial force limit to raise the limit to always allow the character to\nreach the motion target/\nA value of 1 means that the radial force limit will be increased as needed to match the force\nrequired to achieve the motion target.\nA value of 0 means no scaling will be applied." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FractionalGroundReaction_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Controls the reaction force applied to the ground in the ground plane when the character is moving\n// A value of 1 means that the full reaction force is applied\n// A value of 0 means the character only applies a normal force to the ground and no tangential force\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Controls the reaction force applied to the ground in the ground plane when the character is moving\nA value of 1 means that the full reaction force is applied\nA value of 0 means the character only applies a normal force to the ground and no tangential force" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FractionalDownwardVelocityToTarget_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Controls how much downward velocity is applied to keep the character rooted to the ground when the character\n// is within MaxStepHeight of the ground surface.\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Controls how much downward velocity is applied to keep the character rooted to the ground when the character\nis within MaxStepHeight of the ground surface." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxUnsupportedTimeBeforeFalling_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Time limit for being unsupported before moving from a walking to a falling state.\n// This provides some grace period when walking off of an edge during which locomotion\n// and jumping are still possible even though the character has started falling under gravity\n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "Time limit for being unsupported before moving from a walking to a falling state.\nThis provides some grace period when walking off of an edge during which locomotion\nand jumping are still possible even though the character has started falling under gravity" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandleVerticalLandingSeparately_MetaData[] = {
		{ "Category", "Physics Mover" },
		{ "Comment", "// This setting is relevant for pawns landing on sloped surfaces. When enabled, no sliding occurs\n// for vertical landing velocities. When disabled, the sliding is governed by the friction forces.\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/Modes/PhysicsDrivenWalkingMode.h" },
		{ "ToolTip", "This setting is relevant for pawns landing on sloped surfaces. When enabled, no sliding occurs\nfor vertical landing velocities. When disabled, the sliding is governed by the friction forces." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialForceLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionForceLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistTorqueLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingTorqueLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetHeightOverride_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_TargetHeightOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_QueryRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FractionalRadialForceLimitScaling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FractionalGroundReaction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FractionalDownwardVelocityToTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxUnsupportedTimeBeforeFalling;
	static void NewProp_bHandleVerticalLandingSeparately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleVerticalLandingSeparately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsDrivenWalkingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_RadialForceLimit = { "RadialForceLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, RadialForceLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialForceLimit_MetaData), NewProp_RadialForceLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_FrictionForceLimit = { "FrictionForceLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, FrictionForceLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionForceLimit_MetaData), NewProp_FrictionForceLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_TwistTorqueLimit = { "TwistTorqueLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, TwistTorqueLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwistTorqueLimit_MetaData), NewProp_TwistTorqueLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_SwingTorqueLimit = { "SwingTorqueLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, SwingTorqueLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingTorqueLimit_MetaData), NewProp_SwingTorqueLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_TargetHeightOverride_Inner = { "TargetHeightOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_TargetHeightOverride = { "TargetHeightOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, TargetHeightOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetHeightOverride_MetaData), NewProp_TargetHeightOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_QueryRadius = { "QueryRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, QueryRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryRadius_MetaData), NewProp_QueryRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_GroundDamping = { "GroundDamping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, GroundDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDamping_MetaData), NewProp_GroundDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_FractionalRadialForceLimitScaling = { "FractionalRadialForceLimitScaling", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, FractionalRadialForceLimitScaling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FractionalRadialForceLimitScaling_MetaData), NewProp_FractionalRadialForceLimitScaling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_FractionalGroundReaction = { "FractionalGroundReaction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, FractionalGroundReaction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FractionalGroundReaction_MetaData), NewProp_FractionalGroundReaction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_FractionalDownwardVelocityToTarget = { "FractionalDownwardVelocityToTarget", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, FractionalDownwardVelocityToTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FractionalDownwardVelocityToTarget_MetaData), NewProp_FractionalDownwardVelocityToTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_MaxUnsupportedTimeBeforeFalling = { "MaxUnsupportedTimeBeforeFalling", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsDrivenWalkingMode, MaxUnsupportedTimeBeforeFalling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxUnsupportedTimeBeforeFalling_MetaData), NewProp_MaxUnsupportedTimeBeforeFalling_MetaData) };
void Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_bHandleVerticalLandingSeparately_SetBit(void* Obj)
{
	((UPhysicsDrivenWalkingMode*)Obj)->bHandleVerticalLandingSeparately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_bHandleVerticalLandingSeparately = { "bHandleVerticalLandingSeparately", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsDrivenWalkingMode), &Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_bHandleVerticalLandingSeparately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandleVerticalLandingSeparately_MetaData), NewProp_bHandleVerticalLandingSeparately_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_RadialForceLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_FrictionForceLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_TwistTorqueLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_SwingTorqueLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_TargetHeightOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_TargetHeightOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_QueryRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_GroundDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_FractionalRadialForceLimitScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_FractionalGroundReaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_FractionalDownwardVelocityToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_MaxUnsupportedTimeBeforeFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::NewProp_bHandleVerticalLandingSeparately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWalkingMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister, (int32)VTABLE_OFFSET(UPhysicsDrivenWalkingMode, IPhysicsCharacterMovementModeInterface), false },  // 3027680338
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::ClassParams = {
	&UPhysicsDrivenWalkingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsDrivenWalkingMode()
{
	if (!Z_Registration_Info_UClass_UPhysicsDrivenWalkingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsDrivenWalkingMode.OuterSingleton, Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsDrivenWalkingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsDrivenWalkingMode);
UPhysicsDrivenWalkingMode::~UPhysicsDrivenWalkingMode() {}
// ********** End Class UPhysicsDrivenWalkingMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsDrivenWalkingMode, UPhysicsDrivenWalkingMode::StaticClass, TEXT("UPhysicsDrivenWalkingMode"), &Z_Registration_Info_UClass_UPhysicsDrivenWalkingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsDrivenWalkingMode), 3896957188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h__Script_Mover_107312229(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
