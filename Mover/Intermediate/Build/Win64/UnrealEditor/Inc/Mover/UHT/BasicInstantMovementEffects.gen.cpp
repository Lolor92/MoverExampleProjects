// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasicInstantMovementEffects() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FApplyVelocityEffect();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncTeleportEffect();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FInstantMovementEffect();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FJumpImpulseEffect();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FTeleportEffect();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTeleportEffect ***************************************************
static_assert(std::is_polymorphic<FTeleportEffect>() == std::is_polymorphic<FInstantMovementEffect>(), "USTRUCT FTeleportEffect cannot be polymorphic unless super FInstantMovementEffect is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTeleportEffect;
class UScriptStruct* FTeleportEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTeleportEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTeleportEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeleportEffect, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("TeleportEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FTeleportEffect.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTeleportEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Mover|Instant Movement Effect" },
		{ "Comment", "/** Teleport: instantly moves an actor to a new location and rotation\n * For async-compatible teleportation, use AsyncTeleportEffect instead.\n */" },
		{ "DisplayName", "Teleport Instant Movement Effect" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Teleport: instantly moves an actor to a new location and rotation\nFor async-compatible teleportation, use AsyncTeleportEffect instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Location to teleport to, in world space\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Location to teleport to, in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseActorRotation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Whether this teleport effect should keep the actor's current rotation or use a specified one (TargetRotation)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Whether this teleport effect should keep the actor's current rotation or use a specified one (TargetRotation)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Actor rotation is set to this value on teleport if bUseActorRotation is false\n" },
		{ "EditCondition", "bUseActorRotation==false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Actor rotation is set to this value on teleport if bUseActorRotation is false" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static void NewProp_bUseActorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActorRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeleportEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeleportEffect_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeleportEffect, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
void Z_Construct_UScriptStruct_FTeleportEffect_Statics::NewProp_bUseActorRotation_SetBit(void* Obj)
{
	((FTeleportEffect*)Obj)->bUseActorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTeleportEffect_Statics::NewProp_bUseActorRotation = { "bUseActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTeleportEffect), &Z_Construct_UScriptStruct_FTeleportEffect_Statics::NewProp_bUseActorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseActorRotation_MetaData), NewProp_bUseActorRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTeleportEffect_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeleportEffect, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeleportEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeleportEffect_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeleportEffect_Statics::NewProp_bUseActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeleportEffect_Statics::NewProp_TargetRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeleportEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FInstantMovementEffect,
	&NewStructOps,
	"TeleportEffect",
	Z_Construct_UScriptStruct_FTeleportEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportEffect_Statics::PropPointers),
	sizeof(FTeleportEffect),
	alignof(FTeleportEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTeleportEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTeleportEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FTeleportEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTeleportEffect.InnerSingleton, Z_Construct_UScriptStruct_FTeleportEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTeleportEffect.InnerSingleton;
}
// ********** End ScriptStruct FTeleportEffect *****************************************************

// ********** Begin ScriptStruct FAsyncTeleportEffect **********************************************
static_assert(std::is_polymorphic<FAsyncTeleportEffect>() == std::is_polymorphic<FTeleportEffect>(), "USTRUCT FAsyncTeleportEffect cannot be polymorphic unless super FTeleportEffect is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAsyncTeleportEffect;
class UScriptStruct* FAsyncTeleportEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAsyncTeleportEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAsyncTeleportEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAsyncTeleportEffect, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("AsyncTeleportEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FAsyncTeleportEffect.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAsyncTeleportEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Mover|Instant Movement Effect" },
		{ "Comment", "/** Async Teleport: instantly moves an actor to a new location and rotation (compatible with async movement simulation) */" },
		{ "DisplayName", "Async Teleport Instant Movement Effect" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Async Teleport: instantly moves an actor to a new location and rotation (compatible with async movement simulation)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAsyncTeleportEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAsyncTeleportEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FTeleportEffect,
	&NewStructOps,
	"AsyncTeleportEffect",
	nullptr,
	0,
	sizeof(FAsyncTeleportEffect),
	alignof(FAsyncTeleportEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncTeleportEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAsyncTeleportEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAsyncTeleportEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FAsyncTeleportEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAsyncTeleportEffect.InnerSingleton, Z_Construct_UScriptStruct_FAsyncTeleportEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAsyncTeleportEffect.InnerSingleton;
}
// ********** End ScriptStruct FAsyncTeleportEffect ************************************************

// ********** Begin ScriptStruct FJumpImpulseEffect ************************************************
static_assert(std::is_polymorphic<FJumpImpulseEffect>() == std::is_polymorphic<FInstantMovementEffect>(), "USTRUCT FJumpImpulseEffect cannot be polymorphic unless super FInstantMovementEffect is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJumpImpulseEffect;
class UScriptStruct* FJumpImpulseEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FJumpImpulseEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FJumpImpulseEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJumpImpulseEffect, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("JumpImpulseEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FJumpImpulseEffect.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Mover|Instant Movement Effect" },
		{ "Comment", "/** Jump Impulse: introduces an instantaneous upwards change in velocity. This overrides the existing 'up' component of the actor's current velocity\n  * Note: this only applies the impulse for one tick!\n  */" },
		{ "DisplayName", "Jump Impulse Instant Movement Effect" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Jump Impulse: introduces an instantaneous upwards change in velocity. This overrides the existing 'up' component of the actor's current velocity\nNote: this only applies the impulse for one tick!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpwardsSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "// Units per second, in whatever direction the target actor considers 'up'\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Units per second, in whatever direction the target actor considers 'up'" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpwardsSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJumpImpulseEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::NewProp_UpwardsSpeed = { "UpwardsSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJumpImpulseEffect, UpwardsSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpwardsSpeed_MetaData), NewProp_UpwardsSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::NewProp_UpwardsSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FInstantMovementEffect,
	&NewStructOps,
	"JumpImpulseEffect",
	Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::PropPointers),
	sizeof(FJumpImpulseEffect),
	alignof(FJumpImpulseEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJumpImpulseEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FJumpImpulseEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJumpImpulseEffect.InnerSingleton, Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FJumpImpulseEffect.InnerSingleton;
}
// ********** End ScriptStruct FJumpImpulseEffect **************************************************

// ********** Begin ScriptStruct FApplyVelocityEffect **********************************************
static_assert(std::is_polymorphic<FApplyVelocityEffect>() == std::is_polymorphic<FInstantMovementEffect>(), "USTRUCT FApplyVelocityEffect cannot be polymorphic unless super FInstantMovementEffect is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FApplyVelocityEffect;
class UScriptStruct* FApplyVelocityEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FApplyVelocityEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FApplyVelocityEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FApplyVelocityEffect, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("ApplyVelocityEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FApplyVelocityEffect.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Mover|Instant Movement Effect" },
		{ "Comment", "/** Apply Velocity: provides an impulse velocity to the actor after (optionally) forcing them into a particular movement mode\n  * Note: this only applies the impulse for one tick!\n  */" },
		{ "DisplayName", "Apply Velocity Instant Movement Effect" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Apply Velocity: provides an impulse velocity to the actor after (optionally) forcing them into a particular movement mode\nNote: this only applies the impulse for one tick!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityToApply_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Velocity to apply to the actor.\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Velocity to apply to the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdditiveVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// If true VelocityToApply will be added to current velocity on this actor. If false velocity will be set directly to VelocityToApply\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "If true VelocityToApply will be added to current velocity on this actor. If false velocity will be set directly to VelocityToApply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceMovementMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional movement mode name to force the actor into before applying the impulse velocity.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/InstantMovementEffects/BasicInstantMovementEffects.h" },
		{ "ToolTip", "Optional movement mode name to force the actor into before applying the impulse velocity." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityToApply;
	static void NewProp_bAdditiveVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditiveVelocity;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ForceMovementMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FApplyVelocityEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::NewProp_VelocityToApply = { "VelocityToApply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FApplyVelocityEffect, VelocityToApply), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityToApply_MetaData), NewProp_VelocityToApply_MetaData) };
void Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::NewProp_bAdditiveVelocity_SetBit(void* Obj)
{
	((FApplyVelocityEffect*)Obj)->bAdditiveVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::NewProp_bAdditiveVelocity = { "bAdditiveVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FApplyVelocityEffect), &Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::NewProp_bAdditiveVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdditiveVelocity_MetaData), NewProp_bAdditiveVelocity_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::NewProp_ForceMovementMode = { "ForceMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FApplyVelocityEffect, ForceMovementMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceMovementMode_MetaData), NewProp_ForceMovementMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::NewProp_VelocityToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::NewProp_bAdditiveVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::NewProp_ForceMovementMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FInstantMovementEffect,
	&NewStructOps,
	"ApplyVelocityEffect",
	Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::PropPointers),
	sizeof(FApplyVelocityEffect),
	alignof(FApplyVelocityEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FApplyVelocityEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FApplyVelocityEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FApplyVelocityEffect.InnerSingleton, Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FApplyVelocityEffect.InnerSingleton;
}
// ********** End ScriptStruct FApplyVelocityEffect ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_InstantMovementEffects_BasicInstantMovementEffects_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTeleportEffect::StaticStruct, Z_Construct_UScriptStruct_FTeleportEffect_Statics::NewStructOps, TEXT("TeleportEffect"), &Z_Registration_Info_UScriptStruct_FTeleportEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTeleportEffect), 1123755555U) },
		{ FAsyncTeleportEffect::StaticStruct, Z_Construct_UScriptStruct_FAsyncTeleportEffect_Statics::NewStructOps, TEXT("AsyncTeleportEffect"), &Z_Registration_Info_UScriptStruct_FAsyncTeleportEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAsyncTeleportEffect), 1335127783U) },
		{ FJumpImpulseEffect::StaticStruct, Z_Construct_UScriptStruct_FJumpImpulseEffect_Statics::NewStructOps, TEXT("JumpImpulseEffect"), &Z_Registration_Info_UScriptStruct_FJumpImpulseEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJumpImpulseEffect), 2284771799U) },
		{ FApplyVelocityEffect::StaticStruct, Z_Construct_UScriptStruct_FApplyVelocityEffect_Statics::NewStructOps, TEXT("ApplyVelocityEffect"), &Z_Registration_Info_UScriptStruct_FApplyVelocityEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FApplyVelocityEffect), 255180169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_InstantMovementEffects_BasicInstantMovementEffects_h__Script_Mover_1791843392(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_InstantMovementEffects_BasicInstantMovementEffects_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_InstantMovementEffects_BasicInstantMovementEffects_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
