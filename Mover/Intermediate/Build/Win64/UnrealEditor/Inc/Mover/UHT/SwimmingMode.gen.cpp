// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Modes/SwimmingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSwimmingMode() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UClass* Z_Construct_UClass_USwimmingMode();
MOVER_API UClass* Z_Construct_UClass_USwimmingMode_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FSwimmingControlSettings();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSwimmingControlSettings ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSwimmingControlSettings;
class UScriptStruct* FSwimmingControlSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSwimmingControlSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSwimmingControlSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwimmingControlSettings, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("SwimmingControlSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FSwimmingControlSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Controls for the Swimming Movement\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Controls for the Swimming Movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelCrouchImmersionDepth_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// At or below this depth, cancel and disallow crouching.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "At or below this depth, cancel and disallow crouching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DBNOSwimImmersionDepth_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// At or below this depth, start swimming in DBNO\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "At or below this depth, start swimming in DBNO" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Max acceleration.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Max acceleration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAccelerationSprinting_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Max acceleration while sprinting.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Max acceleration while sprinting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDeceleration_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Braking deceleration (decel when letting go of input)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Braking deceleration (decel when letting go of input)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNormalSpeed_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Max speed when not sprinting and moving normally (before water velocity is applied)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Max speed when not sprinting and moving normally (before water velocity is applied)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSprintSpeed_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Max sprint speed (before water velocity is applied)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Max sprint speed (before water velocity is applied)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSprintJumpSpeed_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Min speed required (relative to water) to maintain sprint while jumping, otherwise will stop sprint (and change anims).\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Min speed required (relative to water) to maintain sprint while jumping, otherwise will stop sprint (and change anims)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintJumpAirAccelAngleLimit_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// If accel deviates from velocity by this angle while sprint jumping in air, stop sprint (and change anims).\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "If accel deviates from velocity by this angle while sprint jumping in air, stop sprint (and change anims)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintRetriggerDelay_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintDelayAfterFiring_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTargetingSpeed_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Max speed when targeting (before water velocity is applied)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Max speed when targeting (before water velocity is applied)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardsSpeedMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Directional multiplier when moving mostly backwards\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Directional multiplier when moving mostly backwards" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardsSpeedCosAngle_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Directional multiplier is applied when dot product of velocity and player facing direction is < this.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Directional multiplier is applied when dot product of velocity and player facing direction is < this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngledSpeedMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Speed multiplier when moving off angle (velocity and acceleration divergent)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Speed multiplier when moving off angle (velocity and acceleration divergent)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngledSpeedCosAngle_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Angled multiplier is applied when dot product of velocity and acceleration is < this.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Angled multiplier is applied when dot product of velocity and acceleration is < this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Friction, ie how floaty or snappy is changing direction.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Friction, ie how floaty or snappy is changing direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionSprinting_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Friction, ie how floaty or snappy is changing direction.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Friction, ie how floaty or snappy is changing direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionDirectionChangeDot_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// If Dot(Velocity, Acceleration) < this value, apply FrictionDirectionChangeMultiplier to friction value used. Allows lower friction when changing direction hard, which slows velocity change.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "If Dot(Velocity, Acceleration) < this value, apply FrictionDirectionChangeMultiplier to friction value used. Allows lower friction when changing direction hard, which slows velocity change." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionDirectionChangeMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Friction multiplier (usually < 1) when changing direction.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Friction multiplier (usually < 1) when changing direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedUp_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedDown_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHorizontalEntrySpeed_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterForceMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Multiplier to water force acceleration in direction of current.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Multiplier to water force acceleration in direction of current." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterForceSecondMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Multiplier applied on the top of WaterForceMultiplier, to water force acceleration in direction of current. Used only for inherited objects.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Multiplier applied on the top of WaterForceMultiplier, to water force acceleration in direction of current. Used only for inherited objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaterForce_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Max water force, after WaterVelocity * (WaterForceMultiplier * WaterForceSecondMultiplier).\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Max water force, after WaterVelocity * (WaterForceMultiplier * WaterForceSecondMultiplier)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocityDepthForMax_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// At or above this depth, use max velocity. Interps down to WaterVelocityMinMultiplier at wading depth (where player can start swimming)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "At or above this depth, use max velocity. Interps down to WaterVelocityMinMultiplier at wading depth (where player can start swimming)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocityMinMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Min velocity multiplier applied when depth equals min swimming depth (where they transition from wading to swimming). Interps between this and 1.0 at WaterVelocityDepthForMax.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Min velocity multiplier applied when depth equals min swimming depth (where they transition from wading to swimming). Interps between this and 1.0 at WaterVelocityDepthForMax." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterSimMaxTimeStep_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Max time step allowed, to prevent huge forces on hitches.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Max time step allowed, to prevent huge forces on hitches." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterSimSubStepTime_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Simulation sub-step time allowed for higher quality movement (local player and server).\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Simulation sub-step time allowed for higher quality movement (local player and server)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingMaxForce_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: \n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing:" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingIdealDepthTolerance_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: Slow down strongly when within this tolerance of the ideal immersion depth. Normally we apply drag only when going away from the ideal depth, this allows some slowdown when approaching it.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: Slow down strongly when within this tolerance of the ideal immersion depth. Normally we apply drag only when going away from the ideal depth, this allows some slowdown when approaching it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingFrictionDown_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: friction/drag opposed to downward velocity, linear multiplier per second\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: friction/drag opposed to downward velocity, linear multiplier per second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingExpDragDown_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: friction/drag opposed to downward velocity, squared with velocity per second. Ramps up faster with higher speeds, less effect at low speeds.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: friction/drag opposed to downward velocity, squared with velocity per second. Ramps up faster with higher speeds, less effect at low speeds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingFrictionDownSubmerged_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: friction/drag opposed to downward velocity, linear multiplier per second. Only used when fully submerged (replaces other value).\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: friction/drag opposed to downward velocity, linear multiplier per second. Only used when fully submerged (replaces other value)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingExpDragDownSubmerged_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: friction/drag opposed to upward velocity, squared with velocity per second. Ramps up faster with higher speeds, less effect at low speeds.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: friction/drag opposed to upward velocity, squared with velocity per second. Ramps up faster with higher speeds, less effect at low speeds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingFrictionUp_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: friction/drag opposed to upward velocity, linear multiplier per second\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: friction/drag opposed to upward velocity, linear multiplier per second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingExpDragUp_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: friction/drag opposed to upward velocity, squared with velocity per second. Ramps up faster with higher speeds, less effect at low speeds.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: friction/drag opposed to upward velocity, squared with velocity per second. Ramps up faster with higher speeds, less effect at low speeds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingFrictionMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: friction multiplier, multiplies the fluid friction value.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: friction multiplier, multiplies the fluid friction value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BobbingExpDragMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: multiplier for the exponential drag.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: multiplier for the exponential drag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostDragMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Bobbing: multiplier when in sprint boost to keep from popping up and out as much.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Bobbing: multiplier when in sprint boost to keep from popping up and out as much." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpMultiplier_MetaData[] = {
		{ "Category", "SwimmingControl" },
		{ "Comment", "// Multiplies ground's jump speed\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "Multiplies ground's jump speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CancelCrouchImmersionDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DBNOSwimImmersionDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAccelerationSprinting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxNormalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSprintJumpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintJumpAirAccelAngleLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintRetriggerDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintDelayAfterFiring;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTargetingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardsSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardsSpeedCosAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngledSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngledSpeedCosAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionSprinting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionDirectionChangeDot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionDirectionChangeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHorizontalEntrySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterForceMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterForceSecondMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWaterForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterVelocityDepthForMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterVelocityMinMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterSimMaxTimeStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterSimSubStepTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingMaxForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingIdealDepthTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingFrictionDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingExpDragDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingFrictionDownSubmerged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingExpDragDownSubmerged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingFrictionUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingExpDragUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingFrictionMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BobbingExpDragMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostDragMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwimmingControlSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_CancelCrouchImmersionDepth = { "CancelCrouchImmersionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, CancelCrouchImmersionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelCrouchImmersionDepth_MetaData), NewProp_CancelCrouchImmersionDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_DBNOSwimImmersionDepth = { "DBNOSwimImmersionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, DBNOSwimImmersionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DBNOSwimImmersionDepth_MetaData), NewProp_DBNOSwimImmersionDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MaxAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAcceleration_MetaData), NewProp_MaxAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxAccelerationSprinting = { "MaxAccelerationSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MaxAccelerationSprinting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAccelerationSprinting_MetaData), NewProp_MaxAccelerationSprinting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BrakingDeceleration = { "BrakingDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BrakingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakingDeceleration_MetaData), NewProp_BrakingDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxNormalSpeed = { "MaxNormalSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MaxNormalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNormalSpeed_MetaData), NewProp_MaxNormalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxSprintSpeed = { "MaxSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MaxSprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSprintSpeed_MetaData), NewProp_MaxSprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MinSprintJumpSpeed = { "MinSprintJumpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MinSprintJumpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSprintJumpSpeed_MetaData), NewProp_MinSprintJumpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_SprintJumpAirAccelAngleLimit = { "SprintJumpAirAccelAngleLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, SprintJumpAirAccelAngleLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintJumpAirAccelAngleLimit_MetaData), NewProp_SprintJumpAirAccelAngleLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_SprintRetriggerDelay = { "SprintRetriggerDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, SprintRetriggerDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintRetriggerDelay_MetaData), NewProp_SprintRetriggerDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_SprintDelayAfterFiring = { "SprintDelayAfterFiring", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, SprintDelayAfterFiring), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintDelayAfterFiring_MetaData), NewProp_SprintDelayAfterFiring_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxTargetingSpeed = { "MaxTargetingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MaxTargetingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTargetingSpeed_MetaData), NewProp_MaxTargetingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BackwardsSpeedMultiplier = { "BackwardsSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BackwardsSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardsSpeedMultiplier_MetaData), NewProp_BackwardsSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BackwardsSpeedCosAngle = { "BackwardsSpeedCosAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BackwardsSpeedCosAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardsSpeedCosAngle_MetaData), NewProp_BackwardsSpeedCosAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_AngledSpeedMultiplier = { "AngledSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, AngledSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngledSpeedMultiplier_MetaData), NewProp_AngledSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_AngledSpeedCosAngle = { "AngledSpeedCosAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, AngledSpeedCosAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngledSpeedCosAngle_MetaData), NewProp_AngledSpeedCosAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_FrictionSprinting = { "FrictionSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, FrictionSprinting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionSprinting_MetaData), NewProp_FrictionSprinting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_FrictionDirectionChangeDot = { "FrictionDirectionChangeDot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, FrictionDirectionChangeDot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionDirectionChangeDot_MetaData), NewProp_FrictionDirectionChangeDot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_FrictionDirectionChangeMultiplier = { "FrictionDirectionChangeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, FrictionDirectionChangeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionDirectionChangeMultiplier_MetaData), NewProp_FrictionDirectionChangeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxSpeedUp = { "MaxSpeedUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MaxSpeedUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeedUp_MetaData), NewProp_MaxSpeedUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxSpeedDown = { "MaxSpeedDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MaxSpeedDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeedDown_MetaData), NewProp_MaxSpeedDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxHorizontalEntrySpeed = { "MaxHorizontalEntrySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MaxHorizontalEntrySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHorizontalEntrySpeed_MetaData), NewProp_MaxHorizontalEntrySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterForceMultiplier = { "WaterForceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, WaterForceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterForceMultiplier_MetaData), NewProp_WaterForceMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterForceSecondMultiplier = { "WaterForceSecondMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, WaterForceSecondMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterForceSecondMultiplier_MetaData), NewProp_WaterForceSecondMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxWaterForce = { "MaxWaterForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, MaxWaterForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWaterForce_MetaData), NewProp_MaxWaterForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterVelocityDepthForMax = { "WaterVelocityDepthForMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, WaterVelocityDepthForMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterVelocityDepthForMax_MetaData), NewProp_WaterVelocityDepthForMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterVelocityMinMultiplier = { "WaterVelocityMinMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, WaterVelocityMinMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterVelocityMinMultiplier_MetaData), NewProp_WaterVelocityMinMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterSimMaxTimeStep = { "WaterSimMaxTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, WaterSimMaxTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterSimMaxTimeStep_MetaData), NewProp_WaterSimMaxTimeStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterSimSubStepTime = { "WaterSimSubStepTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, WaterSimSubStepTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterSimSubStepTime_MetaData), NewProp_WaterSimSubStepTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingMaxForce = { "BobbingMaxForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingMaxForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingMaxForce_MetaData), NewProp_BobbingMaxForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingIdealDepthTolerance = { "BobbingIdealDepthTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingIdealDepthTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingIdealDepthTolerance_MetaData), NewProp_BobbingIdealDepthTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingFrictionDown = { "BobbingFrictionDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingFrictionDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingFrictionDown_MetaData), NewProp_BobbingFrictionDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingExpDragDown = { "BobbingExpDragDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingExpDragDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingExpDragDown_MetaData), NewProp_BobbingExpDragDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingFrictionDownSubmerged = { "BobbingFrictionDownSubmerged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingFrictionDownSubmerged), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingFrictionDownSubmerged_MetaData), NewProp_BobbingFrictionDownSubmerged_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingExpDragDownSubmerged = { "BobbingExpDragDownSubmerged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingExpDragDownSubmerged), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingExpDragDownSubmerged_MetaData), NewProp_BobbingExpDragDownSubmerged_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingFrictionUp = { "BobbingFrictionUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingFrictionUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingFrictionUp_MetaData), NewProp_BobbingFrictionUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingExpDragUp = { "BobbingExpDragUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingExpDragUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingExpDragUp_MetaData), NewProp_BobbingExpDragUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingFrictionMultiplier = { "BobbingFrictionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingFrictionMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingFrictionMultiplier_MetaData), NewProp_BobbingFrictionMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingExpDragMultiplier = { "BobbingExpDragMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BobbingExpDragMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BobbingExpDragMultiplier_MetaData), NewProp_BobbingExpDragMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BoostDragMultiplier = { "BoostDragMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, BoostDragMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostDragMultiplier_MetaData), NewProp_BoostDragMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_JumpMultiplier = { "JumpMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSwimmingControlSettings, JumpMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpMultiplier_MetaData), NewProp_JumpMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_CancelCrouchImmersionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_DBNOSwimImmersionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxAccelerationSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BrakingDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxNormalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxSprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MinSprintJumpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_SprintJumpAirAccelAngleLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_SprintRetriggerDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_SprintDelayAfterFiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxTargetingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BackwardsSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BackwardsSpeedCosAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_AngledSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_AngledSpeedCosAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_FrictionSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_FrictionDirectionChangeDot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_FrictionDirectionChangeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxSpeedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxSpeedDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxHorizontalEntrySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterForceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterForceSecondMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_MaxWaterForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterVelocityDepthForMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterVelocityMinMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterSimMaxTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_WaterSimSubStepTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingMaxForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingIdealDepthTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingFrictionDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingExpDragDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingFrictionDownSubmerged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingExpDragDownSubmerged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingFrictionUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingExpDragUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingFrictionMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BobbingExpDragMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_BoostDragMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewProp_JumpMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"SwimmingControlSettings",
	Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::PropPointers),
	sizeof(FSwimmingControlSettings),
	alignof(FSwimmingControlSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSwimmingControlSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FSwimmingControlSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSwimmingControlSettings.InnerSingleton, Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSwimmingControlSettings.InnerSingleton;
}
// ********** End ScriptStruct FSwimmingControlSettings ********************************************

// ********** Begin Class USwimmingMode ************************************************************
void USwimmingMode::StaticRegisterNativesUSwimmingMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USwimmingMode;
UClass* USwimmingMode::GetPrivateStaticClass()
{
	using TClass = USwimmingMode;
	if (!Z_Registration_Info_UClass_USwimmingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SwimmingMode"),
			Z_Registration_Info_UClass_USwimmingMode.InnerSingleton,
			StaticRegisterNativesUSwimmingMode,
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
	return Z_Registration_Info_UClass_USwimmingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_USwimmingMode_NoRegister()
{
	return USwimmingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USwimmingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * SwimmingMode: a default movement mode for traversing water volumes\n */" },
		{ "IncludePath", "DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
		{ "ToolTip", "SwimmingMode: a default movement mode for traversing water volumes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceSwimmingWaterControlSettings_MetaData[] = {
		{ "Category", "Water Control" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/SwimmingMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceSwimmingWaterControlSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwimmingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwimmingMode_Statics::NewProp_SurfaceSwimmingWaterControlSettings = { "SurfaceSwimmingWaterControlSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwimmingMode, SurfaceSwimmingWaterControlSettings), Z_Construct_UScriptStruct_FSwimmingControlSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceSwimmingWaterControlSettings_MetaData), NewProp_SurfaceSwimmingWaterControlSettings_MetaData) }; // 3058141142
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwimmingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwimmingMode_Statics::NewProp_SurfaceSwimmingWaterControlSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwimmingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USwimmingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwimmingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USwimmingMode_Statics::ClassParams = {
	&USwimmingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USwimmingMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USwimmingMode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwimmingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_USwimmingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USwimmingMode()
{
	if (!Z_Registration_Info_UClass_USwimmingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwimmingMode.OuterSingleton, Z_Construct_UClass_USwimmingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USwimmingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USwimmingMode);
USwimmingMode::~USwimmingMode() {}
// ********** End Class USwimmingMode **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSwimmingControlSettings::StaticStruct, Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics::NewStructOps, TEXT("SwimmingControlSettings"), &Z_Registration_Info_UScriptStruct_FSwimmingControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwimmingControlSettings), 3058141142U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USwimmingMode, USwimmingMode::StaticClass, TEXT("USwimmingMode"), &Z_Registration_Info_UClass_USwimmingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwimmingMode), 1284926561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h__Script_Mover_785936892(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
