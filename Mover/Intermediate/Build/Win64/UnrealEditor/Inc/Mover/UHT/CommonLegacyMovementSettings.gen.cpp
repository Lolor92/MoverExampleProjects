// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Settings/CommonLegacyMovementSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCommonLegacyMovementSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVER_API UClass* Z_Construct_UClass_UCommonLegacyMovementSettings();
MOVER_API UClass* Z_Construct_UClass_UCommonLegacyMovementSettings_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMovementSettingsInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCommonLegacyMovementSettings ********************************************
void UCommonLegacyMovementSettings::StaticRegisterNativesUCommonLegacyMovementSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCommonLegacyMovementSettings;
UClass* UCommonLegacyMovementSettings::GetPrivateStaticClass()
{
	using TClass = UCommonLegacyMovementSettings;
	if (!Z_Registration_Info_UClass_UCommonLegacyMovementSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CommonLegacyMovementSettings"),
			Z_Registration_Info_UClass_UCommonLegacyMovementSettings.InnerSingleton,
			StaticRegisterNativesUCommonLegacyMovementSettings,
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
	return Z_Registration_Info_UClass_UCommonLegacyMovementSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UCommonLegacyMovementSettings_NoRegister()
{
	return UCommonLegacyMovementSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCommonLegacyMovementSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * CommonLegacyMovementSettings: collection of settings that are shared between several of the legacy movement modes\n */" },
		{ "IncludePath", "DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "CommonLegacyMovementSettings: collection of settings that are shared between several of the legacy movement modes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRemainVertical_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * If true, the actor will remain upright with gravity despite any rotation applied to the actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "If true, the actor will remain upright with gravity despite any rotation applied to the actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundMovementModeName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// What movement mode to use when on the ground.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "What movement mode to use when on the ground." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirMovementModeName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// What movement mode to use when airborne.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "What movement mode to use when airborne." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingMovementModeName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// What movement mode to use when airborne.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "What movement mode to use when airborne." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSlopeCosine_MetaData[] = {
		{ "Category", "Ground Movement" },
		{ "Comment", "/** Walkable slope angle, represented as cosine(max slope angle) for performance reasons. Ex: for max slope angle of 30 degrees, value is cosine(30 deg) = 0.866 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Walkable slope angle, represented as cosine(max slope angle) for performance reasons. Ex: for max slope angle of 30 degrees, value is cosine(30 deg) = 0.866" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorSweepDistance_MetaData[] = {
		{ "Category", "Ground Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max distance to scan for floor surfaces under a Mover actor */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Max distance to scan for floor surfaces under a Mover actor" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStepHeight_MetaData[] = {
		{ "Category", "Ground Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Mover actors will be able to step up onto or over obstacles shorter than this */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Mover actors will be able to step up onto or over obstacles shorter than this" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum speed in the movement plane */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Maximum speed in the movement plane" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAccelerationForVelocityMove_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**\n\x09 * Should use acceleration for velocity based movement intent?\n\x09 * If true, acceleration is applied when using velocity input to reach the target velocity.\n\x09 * If false, velocity is set directly, disregarding acceleration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Should use acceleration for velocity based movement intent?\nIf true, acceleration is applied when using velocity input to reach the target velocity.\nIf false, velocity is set directly, disregarding acceleration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[] = {
		{ "Category", "General|Friction" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Setting that affects movement control. Higher values allow faster changes in direction. This can be used to simulate slippery\n\x09 * surfaces such as ice or oil by lowering the value (possibly based on the material the actor is standing on).\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Setting that affects movement control. Higher values allow faster changes in direction. This can be used to simulate slippery\nsurfaces such as ice or oil by lowering the value (possibly based on the material the actor is standing on)." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeparateBrakingFriction_MetaData[] = {
		{ "Category", "General|Friction" },
		{ "Comment", "/**\n\x09  * If true, BrakingFriction will be used to slow the character to a stop (when there is no Acceleration).\n\x09  * If false, braking uses the same friction passed to CalcVelocity() (ie GroundFriction when walking), multiplied by BrakingFrictionFactor.\n\x09  * This setting applies to all movement modes; if only desired in certain modes, consider toggling it when movement modes change.\n\x09  * @see BrakingFriction\n\x09  */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "If true, BrakingFriction will be used to slow the character to a stop (when there is no Acceleration).\nIf false, braking uses the same friction passed to CalcVelocity() (ie GroundFriction when walking), multiplied by BrakingFrictionFactor.\nThis setting applies to all movement modes; if only desired in certain modes, consider toggling it when movement modes change.\n@see BrakingFriction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingFriction_MetaData[] = {
		{ "Category", "General|Friction" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Friction (drag) coefficient applied when braking (whenever Acceleration = 0, or if character is exceeding max speed); actual value used is this multiplied by BrakingFrictionFactor.\n\x09 * When braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\n\x09 * Braking is composed of friction (velocity-dependent drag) and constant deceleration.\n\x09 * This is the current value, used in all movement modes; if this is not desired, override it or bUseSeparateBrakingFriction when movement mode changes.\n\x09 * @note Only used if bUseSeparateBrakingFriction setting is true, otherwise current friction such as GroundFriction is used.\n\x09 * @see bUseSeparateBrakingFriction, BrakingFrictionFactor, GroundFriction, BrakingDecelerationWalking\n\x09 */" },
		{ "EditCondition", "bUseSeparateBrakingFriction" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Friction (drag) coefficient applied when braking (whenever Acceleration = 0, or if character is exceeding max speed); actual value used is this multiplied by BrakingFrictionFactor.\nWhen braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\nBraking is composed of friction (velocity-dependent drag) and constant deceleration.\nThis is the current value, used in all movement modes; if this is not desired, override it or bUseSeparateBrakingFriction when movement mode changes.\n@note Only used if bUseSeparateBrakingFriction setting is true, otherwise current friction such as GroundFriction is used.\n@see bUseSeparateBrakingFriction, BrakingFrictionFactor, GroundFriction, BrakingDecelerationWalking" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingFrictionFactor_MetaData[] = {
		{ "Category", "General|Friction" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Factor used to multiply actual value of friction used when braking.\n\x09 * This applies to any friction value that is currently used, which may depend on bUseSeparateBrakingFriction.\n\x09 * @note This is 2 by default for historical reasons, a value of 1 gives the true drag equation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Factor used to multiply actual value of friction used when braking.\nThis applies to any friction value that is currently used, which may depend on bUseSeparateBrakingFriction.\n@note This is 2 by default for historical reasons, a value of 1 gives the true drag equation." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default max linear rate of deceleration when there is no controlled input */" },
		{ "ForceUnits", "cm/s^2" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Default max linear rate of deceleration when there is no controlled input" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default max linear rate of acceleration for controlled input. May be scaled based on magnitude of input. */" },
		{ "ForceUnits", "cm/s^2" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Default max linear rate of acceleration for controlled input. May be scaled based on magnitude of input." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningRate_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Maximum rate of turning rotation (degrees per second). Negative numbers indicate instant rotation and should cause rotation to snap instantly to desired direction. */" },
		{ "ForceUnits", "degrees/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Maximum rate of turning rotation (degrees per second). Negative numbers indicate instant rotation and should cause rotation to snap instantly to desired direction." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningBoost_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speeds velocity direction changes while turning, to reduce sliding */" },
		{ "ForceUnits", "Multiplier" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Speeds velocity direction changes while turning, to reduce sliding" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreBaseRotation_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether the actor ignores changes in rotation of the base it is standing on when using based movement.\n  \x09 * If true, the actor maintains its current world rotation.\n  \x09 * If false, the actor rotates with the moving base.\n  \x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Whether the actor ignores changes in rotation of the base it is standing on when using based movement.\nIf true, the actor maintains its current world rotation.\nIf false, the actor rotates with the moving base." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpUpwardsSpeed_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Instantaneous speed induced in an actor upon jumping */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Instantaneous speed induced in an actor upon jumping" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingStartImmersionDepth_MetaData[] = {
		{ "Category", "Swimming" },
		{ "Comment", "/** Depth at which the pawn starts swimming */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Depth at which the pawn starts swimming" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingIdealImmersionDepth_MetaData[] = {
		{ "Category", "Swimming" },
		{ "Comment", "/** Depth at which the pawn will float when in water */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Depth at which the pawn will float when in water" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimmingStopImmersionDepth_MetaData[] = {
		{ "Category", "Swimming" },
		{ "Comment", "/** Depth at which the pawn stops swimming */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Settings/CommonLegacyMovementSettings.h" },
		{ "ToolTip", "Depth at which the pawn stops swimming" },
		{ "Units", "cm" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldRemainVertical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRemainVertical;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroundMovementModeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AirMovementModeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SwimmingMovementModeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSlopeCosine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSweepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static void NewProp_bUseAccelerationForVelocityMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAccelerationForVelocityMove;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
	static void NewProp_bUseSeparateBrakingFriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateBrakingFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingFrictionFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningBoost;
	static void NewProp_bIgnoreBaseRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreBaseRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpUpwardsSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwimmingStartImmersionDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwimmingIdealImmersionDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwimmingStopImmersionDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonLegacyMovementSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bShouldRemainVertical_SetBit(void* Obj)
{
	((UCommonLegacyMovementSettings*)Obj)->bShouldRemainVertical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bShouldRemainVertical = { "bShouldRemainVertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCommonLegacyMovementSettings), &Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bShouldRemainVertical_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRemainVertical_MetaData), NewProp_bShouldRemainVertical_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_GroundMovementModeName = { "GroundMovementModeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, GroundMovementModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundMovementModeName_MetaData), NewProp_GroundMovementModeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_AirMovementModeName = { "AirMovementModeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, AirMovementModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirMovementModeName_MetaData), NewProp_AirMovementModeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_SwimmingMovementModeName = { "SwimmingMovementModeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, SwimmingMovementModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimmingMovementModeName_MetaData), NewProp_SwimmingMovementModeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_MaxWalkSlopeCosine = { "MaxWalkSlopeCosine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, MaxWalkSlopeCosine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSlopeCosine_MetaData), NewProp_MaxWalkSlopeCosine_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_FloorSweepDistance = { "FloorSweepDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, FloorSweepDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorSweepDistance_MetaData), NewProp_FloorSweepDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_MaxStepHeight = { "MaxStepHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, MaxStepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStepHeight_MetaData), NewProp_MaxStepHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
void Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bUseAccelerationForVelocityMove_SetBit(void* Obj)
{
	((UCommonLegacyMovementSettings*)Obj)->bUseAccelerationForVelocityMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bUseAccelerationForVelocityMove = { "bUseAccelerationForVelocityMove", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCommonLegacyMovementSettings), &Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bUseAccelerationForVelocityMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAccelerationForVelocityMove_MetaData), NewProp_bUseAccelerationForVelocityMove_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, GroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundFriction_MetaData), NewProp_GroundFriction_MetaData) };
void Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bUseSeparateBrakingFriction_SetBit(void* Obj)
{
	((UCommonLegacyMovementSettings*)Obj)->bUseSeparateBrakingFriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bUseSeparateBrakingFriction = { "bUseSeparateBrakingFriction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCommonLegacyMovementSettings), &Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bUseSeparateBrakingFriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSeparateBrakingFriction_MetaData), NewProp_bUseSeparateBrakingFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_BrakingFriction = { "BrakingFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, BrakingFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingFriction_MetaData), NewProp_BrakingFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_BrakingFrictionFactor = { "BrakingFrictionFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, BrakingFrictionFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingFrictionFactor_MetaData), NewProp_BrakingFrictionFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, Deceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deceleration_MetaData), NewProp_Deceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_TurningRate = { "TurningRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, TurningRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningRate_MetaData), NewProp_TurningRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_TurningBoost = { "TurningBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, TurningBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningBoost_MetaData), NewProp_TurningBoost_MetaData) };
void Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bIgnoreBaseRotation_SetBit(void* Obj)
{
	((UCommonLegacyMovementSettings*)Obj)->bIgnoreBaseRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bIgnoreBaseRotation = { "bIgnoreBaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCommonLegacyMovementSettings), &Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bIgnoreBaseRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreBaseRotation_MetaData), NewProp_bIgnoreBaseRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_JumpUpwardsSpeed = { "JumpUpwardsSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, JumpUpwardsSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpUpwardsSpeed_MetaData), NewProp_JumpUpwardsSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_SwimmingStartImmersionDepth = { "SwimmingStartImmersionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, SwimmingStartImmersionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimmingStartImmersionDepth_MetaData), NewProp_SwimmingStartImmersionDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_SwimmingIdealImmersionDepth = { "SwimmingIdealImmersionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, SwimmingIdealImmersionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimmingIdealImmersionDepth_MetaData), NewProp_SwimmingIdealImmersionDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_SwimmingStopImmersionDepth = { "SwimmingStopImmersionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommonLegacyMovementSettings, SwimmingStopImmersionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimmingStopImmersionDepth_MetaData), NewProp_SwimmingStopImmersionDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bShouldRemainVertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_GroundMovementModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_AirMovementModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_SwimmingMovementModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_MaxWalkSlopeCosine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_FloorSweepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_MaxStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bUseAccelerationForVelocityMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_GroundFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bUseSeparateBrakingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_BrakingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_BrakingFrictionFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_Deceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_TurningRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_TurningBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_bIgnoreBaseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_JumpUpwardsSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_SwimmingStartImmersionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_SwimmingIdealImmersionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::NewProp_SwimmingStopImmersionDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovementSettingsInterface_NoRegister, (int32)VTABLE_OFFSET(UCommonLegacyMovementSettings, IMovementSettingsInterface), false },  // 4158598344
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::ClassParams = {
	&UCommonLegacyMovementSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommonLegacyMovementSettings()
{
	if (!Z_Registration_Info_UClass_UCommonLegacyMovementSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonLegacyMovementSettings.OuterSingleton, Z_Construct_UClass_UCommonLegacyMovementSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommonLegacyMovementSettings.OuterSingleton;
}
UCommonLegacyMovementSettings::UCommonLegacyMovementSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonLegacyMovementSettings);
UCommonLegacyMovementSettings::~UCommonLegacyMovementSettings() {}
// ********** End Class UCommonLegacyMovementSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommonLegacyMovementSettings, UCommonLegacyMovementSettings::StaticClass, TEXT("UCommonLegacyMovementSettings"), &Z_Registration_Info_UClass_UCommonLegacyMovementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonLegacyMovementSettings), 2448831896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h__Script_Mover_2530096303(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_CommonLegacyMovementSettings_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
