// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InstantMovementEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInstantMovementEffect() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FInstantMovementEffect();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInstantMovementEffect ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInstantMovementEffect;
class UScriptStruct* FInstantMovementEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInstantMovementEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInstantMovementEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstantMovementEffect, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("InstantMovementEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FInstantMovementEffect.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInstantMovementEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Instant Movement Effects are methods of affecting movement state directly on a Mover-based actor for one tick.\n * Note: This is only applied one tick and then removed\n * Common uses would be for Teleporting, Changing Movement Modes directly, one time force application, etc.\n * Multiple Instant Movement Effects can be active at the time\n */" },
		{ "ModuleRelativePath", "Public/InstantMovementEffect.h" },
		{ "ToolTip", "Instant Movement Effects are methods of affecting movement state directly on a Mover-based actor for one tick.\nNote: This is only applied one tick and then removed\nCommon uses would be for Teleporting, Changing Movement Modes directly, one time force application, etc.\nMultiple Instant Movement Effects can be active at the time" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstantMovementEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstantMovementEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"InstantMovementEffect",
	nullptr,
	0,
	sizeof(FInstantMovementEffect),
	alignof(FInstantMovementEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstantMovementEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstantMovementEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstantMovementEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FInstantMovementEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInstantMovementEffect.InnerSingleton, Z_Construct_UScriptStruct_FInstantMovementEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInstantMovementEffect.InnerSingleton;
}
// ********** End ScriptStruct FInstantMovementEffect **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_InstantMovementEffect_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInstantMovementEffect::StaticStruct, Z_Construct_UScriptStruct_FInstantMovementEffect_Statics::NewStructOps, TEXT("InstantMovementEffect"), &Z_Registration_Info_UScriptStruct_FInstantMovementEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstantMovementEffect), 266237901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_InstantMovementEffect_h__Script_Mover_1483382511(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_InstantMovementEffect_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_InstantMovementEffect_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
