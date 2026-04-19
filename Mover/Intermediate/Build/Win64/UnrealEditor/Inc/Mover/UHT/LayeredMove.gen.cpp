// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LayeredMove.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLayeredMove() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UEnum* Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoveMixMode();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveGroup();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELayeredMoveFinishVelocityMode ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELayeredMoveFinishVelocityMode;
static UEnum* ELayeredMoveFinishVelocityMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELayeredMoveFinishVelocityMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELayeredMoveFinishVelocityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("ELayeredMoveFinishVelocityMode"));
	}
	return Z_Registration_Info_UEnum_ELayeredMoveFinishVelocityMode.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<ELayeredMoveFinishVelocityMode>()
{
	return ELayeredMoveFinishVelocityMode_StaticEnum();
}
struct Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClampVelocity.Comment", "// Clamp velocity magnitude to the specified value. Note that it will not clamp Z if negative (falling). it will clamp Z positive though. \n" },
		{ "ClampVelocity.Name", "ELayeredMoveFinishVelocityMode::ClampVelocity" },
		{ "ClampVelocity.ToolTip", "Clamp velocity magnitude to the specified value. Note that it will not clamp Z if negative (falling). it will clamp Z positive though." },
		{ "MaintainLastRootMotionVelocity.Comment", "// Maintain the last velocity root motion gave to the character\n" },
		{ "MaintainLastRootMotionVelocity.Name", "ELayeredMoveFinishVelocityMode::MaintainLastRootMotionVelocity" },
		{ "MaintainLastRootMotionVelocity.ToolTip", "Maintain the last velocity root motion gave to the character" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "SetVelocity.Comment", "// Set Velocity to the specified value (for example, 0,0,0 to stop the character)\n" },
		{ "SetVelocity.Name", "ELayeredMoveFinishVelocityMode::SetVelocity" },
		{ "SetVelocity.ToolTip", "Set Velocity to the specified value (for example, 0,0,0 to stop the character)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELayeredMoveFinishVelocityMode::MaintainLastRootMotionVelocity", (int64)ELayeredMoveFinishVelocityMode::MaintainLastRootMotionVelocity },
		{ "ELayeredMoveFinishVelocityMode::SetVelocity", (int64)ELayeredMoveFinishVelocityMode::SetVelocity },
		{ "ELayeredMoveFinishVelocityMode::ClampVelocity", (int64)ELayeredMoveFinishVelocityMode::ClampVelocity },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"ELayeredMoveFinishVelocityMode",
	"ELayeredMoveFinishVelocityMode",
	Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode()
{
	if (!Z_Registration_Info_UEnum_ELayeredMoveFinishVelocityMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELayeredMoveFinishVelocityMode.InnerSingleton, Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELayeredMoveFinishVelocityMode.InnerSingleton;
}
// ********** End Enum ELayeredMoveFinishVelocityMode **********************************************

// ********** Begin ScriptStruct FLayeredMoveFinishVelocitySettings ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMoveFinishVelocitySettings;
class UScriptStruct* FLayeredMoveFinishVelocitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMoveFinishVelocitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMoveFinishVelocitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMoveFinishVelocitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMoveFinishVelocitySettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Struct for LayeredMove Finish Velocity options.\n */" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "Struct for LayeredMove Finish Velocity options." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Velocity that the actor will use if Mode == SetVelocity\n" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "Velocity that the actor will use if Mode == SetVelocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Actor's Velocity will be clamped to this value if Mode == ClampVelocity\n" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "Actor's Velocity will be clamped to this value if Mode == ClampVelocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishVelocityMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// What mode we want to happen when a Layered Move ends, see @ELayeredMoveFinishVelocityMode\n" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "What mode we want to happen when a Layered Move ends, see @ELayeredMoveFinishVelocityMode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampVelocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinishVelocityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinishVelocityMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMoveFinishVelocitySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::NewProp_SetVelocity = { "SetVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveFinishVelocitySettings, SetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetVelocity_MetaData), NewProp_SetVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::NewProp_ClampVelocity = { "ClampVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveFinishVelocitySettings, ClampVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampVelocity_MetaData), NewProp_ClampVelocity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::NewProp_FinishVelocityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::NewProp_FinishVelocityMode = { "FinishVelocityMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveFinishVelocitySettings, FinishVelocityMode), Z_Construct_UEnum_Mover_ELayeredMoveFinishVelocityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishVelocityMode_MetaData), NewProp_FinishVelocityMode_MetaData) }; // 2050075176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::NewProp_SetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::NewProp_ClampVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::NewProp_FinishVelocityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::NewProp_FinishVelocityMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"LayeredMoveFinishVelocitySettings",
	Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::PropPointers),
	sizeof(FLayeredMoveFinishVelocitySettings),
	alignof(FLayeredMoveFinishVelocitySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMoveFinishVelocitySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMoveFinishVelocitySettings.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMoveFinishVelocitySettings.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMoveFinishVelocitySettings **********************************

// ********** Begin ScriptStruct FLayeredMoveBase **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMoveBase;
class UScriptStruct* FLayeredMoveBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMoveBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMoveBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMoveBase, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMoveBase"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMoveBase.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMoveBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* Layered Moves are methods of affecting motion on a Mover-based actor, typically for a limited time. \n* Common uses would be for jumping, dashing, blast forces, etc.\n* They are ticked as part of the Mover simulation, and produce a proposed move. These proposed moves \n* are aggregated and applied to the overall attempted move.\n* Multiple layered moves can be active at any time, and may produce additive motion or motion that overrides\n* what the current Movement Mode may intend.\n* Layered moves can also set a preferred movement mode that only changes the movement mode at the start of\n* the move. Any movement mode changes that need to happen as part of the layered move after the start of the move\n* need to be queued through an Instant Effect or the QueueNextMode function\n*/// Base class for all layered moves\n" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "Layered Moves are methods of affecting motion on a Mover-based actor, typically for a limited time.\nCommon uses would be for jumping, dashing, blast forces, etc.\nThey are ticked as part of the Mover simulation, and produce a proposed move. These proposed moves\nare aggregated and applied to the overall attempted move.\nMultiple layered moves can be active at any time, and may produce additive motion or motion that overrides\nwhat the current Movement Mode may intend.\nLayered moves can also set a preferred movement mode that only changes the movement mode at the start of\nthe move. Any movement mode changes that need to happen as part of the layered move after the start of the move\nneed to be queued through an Instant Effect or the QueueNextMode function\n// Base class for all layered moves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MixMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Determines how this object's movement contribution should be mixed with others\n" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "Determines how this object's movement contribution should be mixed with others" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Determines if this layered move should take priority over other layered moves when different moves have conflicting overrides - higher numbers taking precedent.\n" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "Determines if this layered move should take priority over other layered moves when different moves have conflicting overrides - higher numbers taking precedent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationMs_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * This move will expire after a set amount of time if > 0. If 0, it will be ticked only once, regardless of time step. It will need to be manually ended if < 0.\n\x09 * Note: If changed after starting to a value beneath the current lifetime of the move, it will immediately finish (so if your move finishes early, setting this to 0 is equivalent to returning true from IsFinished())\n\x09 */" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "This move will expire after a set amount of time if > 0. If 0, it will be ticked only once, regardless of time step. It will need to be manually ended if < 0.\nNote: If changed after starting to a value beneath the current lifetime of the move, it will immediately finish (so if your move finishes early, setting this to 0 is equivalent to returning true from IsFinished())" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSimTimeMs_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// The simulation time this move first ticked (< 0 means it hasn't started yet)\n" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "The simulation time this move first ticked (< 0 means it hasn't started yet)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishVelocitySettings_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Settings related to velocity applied to the actor after a layered move has finished\n" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "Settings related to velocity applied to the actor after a layered move has finished" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MixMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MixMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSimTimeMs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinishVelocitySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMoveBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_MixMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_MixMode = { "MixMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveBase, MixMode), Z_Construct_UEnum_Mover_EMoveMixMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MixMode_MetaData), NewProp_MixMode_MetaData) }; // 2082817065
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveBase, Priority), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveBase, DurationMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationMs_MetaData), NewProp_DurationMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_StartSimTimeMs = { "StartSimTimeMs", nullptr, (EPropertyFlags)0x0010000000022815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveBase, StartSimTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSimTimeMs_MetaData), NewProp_StartSimTimeMs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_FinishVelocitySettings = { "FinishVelocitySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveBase, FinishVelocitySettings), Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishVelocitySettings_MetaData), NewProp_FinishVelocitySettings_MetaData) }; // 1183172879
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_MixMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_MixMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_DurationMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_StartSimTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewProp_FinishVelocitySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"LayeredMoveBase",
	Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::PropPointers),
	sizeof(FLayeredMoveBase),
	alignof(FLayeredMoveBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveBase()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMoveBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMoveBase.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMoveBase.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMoveBase ****************************************************

// ********** Begin ScriptStruct FLayeredMoveGroup *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMoveGroup;
class UScriptStruct* FLayeredMoveGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMoveGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMoveGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMoveGroup, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMoveGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMoveGroup.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A collection of layered moves affecting a movable actor\n" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "A collection of layered moves affecting a movable actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResidualVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * If bApplyResidualVelocity is true this actors velocity will be set to this.\n\x09 * Note: This is set automatically when a layered move has ended based off of end velocity settings - it is not meant to be set by the user see @FLayeredMoveFinishVelocitySettings\n     */" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "If bApplyResidualVelocity is true this actors velocity will be set to this.\nNote: This is set automatically when a layered move has ended based off of end velocity settings - it is not meant to be set by the user see @FLayeredMoveFinishVelocitySettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResidualClamping_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Clamps an actors velocity to this value when a layered move ends. This expects Value >= 0.\n\x09 * Note: This is set automatically when a layered move has ended based off of end velocity settings - it is not meant to be set by the user see @FLayeredMoveFinishVelocitySettings\n\x09 */" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "Clamps an actors velocity to this value when a layered move ends. This expects Value >= 0.\nNote: This is set automatically when a layered move has ended based off of end velocity settings - it is not meant to be set by the user see @FLayeredMoveFinishVelocitySettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyResidualVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * If true ResidualVelocity will be the next velocity used for this actor\n\x09 * Note: This is set automatically when a layered move has ended based off of end velocity settings - it is not meant to be set by the user see @FLayeredMoveFinishVelocitySettings\n\x09 */" },
		{ "ModuleRelativePath", "Public/LayeredMove.h" },
		{ "ToolTip", "If true ResidualVelocity will be the next velocity used for this actor\nNote: This is set automatically when a layered move has ended based off of end velocity settings - it is not meant to be set by the user see @FLayeredMoveFinishVelocitySettings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResidualVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResidualClamping;
	static void NewProp_bApplyResidualVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyResidualVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMoveGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::NewProp_ResidualVelocity = { "ResidualVelocity", nullptr, (EPropertyFlags)0x0010000080020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveGroup, ResidualVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResidualVelocity_MetaData), NewProp_ResidualVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::NewProp_ResidualClamping = { "ResidualClamping", nullptr, (EPropertyFlags)0x0010000080020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMoveGroup, ResidualClamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResidualClamping_MetaData), NewProp_ResidualClamping_MetaData) };
void Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::NewProp_bApplyResidualVelocity_SetBit(void* Obj)
{
	((FLayeredMoveGroup*)Obj)->bApplyResidualVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::NewProp_bApplyResidualVelocity = { "bApplyResidualVelocity", nullptr, (EPropertyFlags)0x0010000080020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayeredMoveGroup), &Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::NewProp_bApplyResidualVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyResidualVelocity_MetaData), NewProp_bApplyResidualVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::NewProp_ResidualVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::NewProp_ResidualClamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::NewProp_bApplyResidualVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"LayeredMoveGroup",
	Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::PropPointers),
	sizeof(FLayeredMoveGroup),
	alignof(FLayeredMoveGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMoveGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMoveGroup.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMoveGroup.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMoveGroup ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELayeredMoveFinishVelocityMode_StaticEnum, TEXT("ELayeredMoveFinishVelocityMode"), &Z_Registration_Info_UEnum_ELayeredMoveFinishVelocityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2050075176U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayeredMoveFinishVelocitySettings::StaticStruct, Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics::NewStructOps, TEXT("LayeredMoveFinishVelocitySettings"), &Z_Registration_Info_UScriptStruct_FLayeredMoveFinishVelocitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMoveFinishVelocitySettings), 1183172879U) },
		{ FLayeredMoveBase::StaticStruct, Z_Construct_UScriptStruct_FLayeredMoveBase_Statics::NewStructOps, TEXT("LayeredMoveBase"), &Z_Registration_Info_UScriptStruct_FLayeredMoveBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMoveBase), 247980539U) },
		{ FLayeredMoveGroup::StaticStruct, Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics::NewStructOps, TEXT("LayeredMoveGroup"), &Z_Registration_Info_UScriptStruct_FLayeredMoveGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMoveGroup), 2665638783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h__Script_Mover_927346404(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h__Script_Mover_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
