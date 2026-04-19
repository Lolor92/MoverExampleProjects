// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementModifier() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementModifierBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementModifierGroup();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementModifierHandle();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMovementModifierHandle *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementModifierHandle;
class UScriptStruct* FMovementModifierHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModifierHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementModifierHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementModifierHandle, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MovementModifierHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementModifierHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovementModifierHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handle to identify movement modifiers.\n */" },
		{ "ModuleRelativePath", "Public/MovementModifier.h" },
		{ "ToolTip", "Handle to identify movement modifiers." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementModifierHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementModifierHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MovementModifierHandle",
	nullptr,
	0,
	sizeof(FMovementModifierHandle),
	alignof(FMovementModifierHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementModifierHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementModifierHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementModifierHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModifierHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementModifierHandle.InnerSingleton, Z_Construct_UScriptStruct_FMovementModifierHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovementModifierHandle.InnerSingleton;
}
// ********** End ScriptStruct FMovementModifierHandle *********************************************

// ********** Begin ScriptStruct FMovementModifierBase *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementModifierBase;
class UScriptStruct* FMovementModifierBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModifierBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementModifierBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementModifierBase, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MovementModifierBase"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementModifierBase.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovementModifierBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Movement Modifier: Used to apply changes that indirectly influence the movement simulation,\n * without proposing or executing any movement, but still in sync with the sim.\n * Example usages: changing groups of settings, movement mode re-mappings, etc.\n * \n * Note: Currently mover expects to only have one type of modifier active at a time.\n *\x09\x09 This can be fixed by extending the Matches function to check more than just type,\n *\x09\x09 but make sure anything used to compare is synced through the NetSerialize function.\n */" },
		{ "ModuleRelativePath", "Public/MovementModifier.h" },
		{ "ToolTip", "Movement Modifier: Used to apply changes that indirectly influence the movement simulation,\nwithout proposing or executing any movement, but still in sync with the sim.\nExample usages: changing groups of settings, movement mode re-mappings, etc.\n\nNote: Currently mover expects to only have one type of modifier active at a time.\n             This can be fixed by extending the Matches function to check more than just type,\n             but make sure anything used to compare is synced through the NetSerialize function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationMs_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// This modifier will expire after a set amount of time if > 0. If 0, it will be ticked only once, regardless of time step. It will need to be manually ended if < 0. \n" },
		{ "ModuleRelativePath", "Public/MovementModifier.h" },
		{ "ToolTip", "This modifier will expire after a set amount of time if > 0. If 0, it will be ticked only once, regardless of time step. It will need to be manually ended if < 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSimTimeMs_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// The simulation time this move first ticked (< 0 means it hasn't started yet)\n" },
		{ "ModuleRelativePath", "Public/MovementModifier.h" },
		{ "ToolTip", "The simulation time this move first ticked (< 0 means it hasn't started yet)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalModifierHandle_MetaData[] = {
		{ "Comment", "/**\n\x09 * Modifier handle local to this client or server instance. Used to cancel or query for a active/queued modifier.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovementModifier.h" },
		{ "ToolTip", "Modifier handle local to this client or server instance. Used to cancel or query for a active/queued modifier." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSimTimeMs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalModifierHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementModifierBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementModifierBase_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementModifierBase, DurationMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationMs_MetaData), NewProp_DurationMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementModifierBase_Statics::NewProp_StartSimTimeMs = { "StartSimTimeMs", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementModifierBase, StartSimTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSimTimeMs_MetaData), NewProp_StartSimTimeMs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementModifierBase_Statics::NewProp_LocalModifierHandle = { "LocalModifierHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementModifierBase, LocalModifierHandle), Z_Construct_UScriptStruct_FMovementModifierHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalModifierHandle_MetaData), NewProp_LocalModifierHandle_MetaData) }; // 1657671938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementModifierBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementModifierBase_Statics::NewProp_DurationMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementModifierBase_Statics::NewProp_StartSimTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementModifierBase_Statics::NewProp_LocalModifierHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementModifierBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementModifierBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MovementModifierBase",
	Z_Construct_UScriptStruct_FMovementModifierBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementModifierBase_Statics::PropPointers),
	sizeof(FMovementModifierBase),
	alignof(FMovementModifierBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementModifierBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementModifierBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementModifierBase()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModifierBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementModifierBase.InnerSingleton, Z_Construct_UScriptStruct_FMovementModifierBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovementModifierBase.InnerSingleton;
}
// ********** End ScriptStruct FMovementModifierBase ***********************************************

// ********** Begin ScriptStruct FMovementModifierGroup ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementModifierGroup;
class UScriptStruct* FMovementModifierGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModifierGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementModifierGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementModifierGroup, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MovementModifierGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementModifierGroup.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovementModifierGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A collection of movement modifiers affecting a movable actor\n" },
		{ "ModuleRelativePath", "Public/MovementModifier.h" },
		{ "ToolTip", "A collection of movement modifiers affecting a movable actor" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementModifierGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementModifierGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MovementModifierGroup",
	nullptr,
	0,
	sizeof(FMovementModifierGroup),
	alignof(FMovementModifierGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementModifierGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementModifierGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementModifierGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModifierGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementModifierGroup.InnerSingleton, Z_Construct_UScriptStruct_FMovementModifierGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovementModifierGroup.InnerSingleton;
}
// ********** End ScriptStruct FMovementModifierGroup **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModifier_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovementModifierHandle::StaticStruct, Z_Construct_UScriptStruct_FMovementModifierHandle_Statics::NewStructOps, TEXT("MovementModifierHandle"), &Z_Registration_Info_UScriptStruct_FMovementModifierHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementModifierHandle), 1657671938U) },
		{ FMovementModifierBase::StaticStruct, Z_Construct_UScriptStruct_FMovementModifierBase_Statics::NewStructOps, TEXT("MovementModifierBase"), &Z_Registration_Info_UScriptStruct_FMovementModifierBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementModifierBase), 2471649109U) },
		{ FMovementModifierGroup::StaticStruct, Z_Construct_UScriptStruct_FMovementModifierGroup_Statics::NewStructOps, TEXT("MovementModifierGroup"), &Z_Registration_Info_UScriptStruct_FMovementModifierGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementModifierGroup), 3016350616U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModifier_h__Script_Mover_2471211214(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModifier_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModifier_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
