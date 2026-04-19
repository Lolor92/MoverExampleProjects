// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/InstantMovementEffects/ApplyVelocityPhysicsMovementEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeApplyVelocityPhysicsMovementEffect() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FInstantMovementEffect();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FApplyVelocityPhysicsEffect ***************************************
static_assert(std::is_polymorphic<FApplyVelocityPhysicsEffect>() == std::is_polymorphic<FInstantMovementEffect>(), "USTRUCT FApplyVelocityPhysicsEffect cannot be polymorphic unless super FInstantMovementEffect is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FApplyVelocityPhysicsEffect;
class UScriptStruct* FApplyVelocityPhysicsEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FApplyVelocityPhysicsEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FApplyVelocityPhysicsEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("ApplyVelocityPhysicsEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FApplyVelocityPhysicsEffect.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Mover|Instant Movement Effect|Physics" },
		{ "Comment", "/** Apply Velocity: provides a velocity to the actor after (optionally) forcing them into a particular movement mode\n  * Note: this only applies the velocity for one tick!\n  */" },
		{ "DisplayName", "Apply Velocity Physics Instant Movement Effect" },
		{ "ModuleRelativePath", "Public/PhysicsMover/InstantMovementEffects/ApplyVelocityPhysicsMovementEffect.h" },
		{ "ToolTip", "Apply Velocity: provides a velocity to the actor after (optionally) forcing them into a particular movement mode\nNote: this only applies the velocity for one tick!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityToApply_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Velocity to apply to the actor.\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/PhysicsMover/InstantMovementEffects/ApplyVelocityPhysicsMovementEffect.h" },
		{ "ToolTip", "Velocity to apply to the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdditiveVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// If true VelocityToApply will be added to current velocity on this actor. If false velocity will be set directly to VelocityToApply\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/InstantMovementEffects/ApplyVelocityPhysicsMovementEffect.h" },
		{ "ToolTip", "If true VelocityToApply will be added to current velocity on this actor. If false velocity will be set directly to VelocityToApply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceMovementMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional movement mode name to force the actor into before applying the impulse velocity.\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/InstantMovementEffects/ApplyVelocityPhysicsMovementEffect.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FApplyVelocityPhysicsEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::NewProp_VelocityToApply = { "VelocityToApply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FApplyVelocityPhysicsEffect, VelocityToApply), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityToApply_MetaData), NewProp_VelocityToApply_MetaData) };
void Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::NewProp_bAdditiveVelocity_SetBit(void* Obj)
{
	((FApplyVelocityPhysicsEffect*)Obj)->bAdditiveVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::NewProp_bAdditiveVelocity = { "bAdditiveVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FApplyVelocityPhysicsEffect), &Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::NewProp_bAdditiveVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdditiveVelocity_MetaData), NewProp_bAdditiveVelocity_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::NewProp_ForceMovementMode = { "ForceMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FApplyVelocityPhysicsEffect, ForceMovementMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceMovementMode_MetaData), NewProp_ForceMovementMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::NewProp_VelocityToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::NewProp_bAdditiveVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::NewProp_ForceMovementMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FInstantMovementEffect,
	&NewStructOps,
	"ApplyVelocityPhysicsEffect",
	Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::PropPointers),
	sizeof(FApplyVelocityPhysicsEffect),
	alignof(FApplyVelocityPhysicsEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FApplyVelocityPhysicsEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FApplyVelocityPhysicsEffect.InnerSingleton, Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FApplyVelocityPhysicsEffect.InnerSingleton;
}
// ********** End ScriptStruct FApplyVelocityPhysicsEffect *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_InstantMovementEffects_ApplyVelocityPhysicsMovementEffect_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FApplyVelocityPhysicsEffect::StaticStruct, Z_Construct_UScriptStruct_FApplyVelocityPhysicsEffect_Statics::NewStructOps, TEXT("ApplyVelocityPhysicsEffect"), &Z_Registration_Info_UScriptStruct_FApplyVelocityPhysicsEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FApplyVelocityPhysicsEffect), 936610980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_InstantMovementEffects_ApplyVelocityPhysicsMovementEffect_h__Script_Mover_28113236(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_InstantMovementEffects_ApplyVelocityPhysicsMovementEffect_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_InstantMovementEffects_ApplyVelocityPhysicsMovementEffect_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
