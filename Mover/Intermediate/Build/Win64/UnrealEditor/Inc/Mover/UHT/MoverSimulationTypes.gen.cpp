// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverSimulationTypes.h"
#include "LayeredMove.h"
#include "MoveLibrary/MovementUtilsTypes.h"
#include "MovementModifier.h"
#include "MoverTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverSimulationTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOVER_API UClass* Z_Construct_UClass_UMoverBlackboard_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverInputProducerInterface();
MOVER_API UClass* Z_Construct_UClass_UMoverInputProducerInterface_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveGroup();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementModeChangedEventData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementModeTickEndState();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementModifierGroup();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverAuxStateContext();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataCollection();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverInputCmdContext();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverSimulationEventData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverSyncState();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTickEndData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTickStartData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTimeStep();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovingComponentSet();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FProposedMove();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FSimulationTickParams();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMovementModeTickEndState *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementModeTickEndState;
class UScriptStruct* FMovementModeTickEndState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModeTickEndState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementModeTickEndState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementModeTickEndState, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MovementModeTickEndState"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementModeTickEndState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filled out by a MovementMode during simulation tick to indicate its ending state, allowing for a residual time step and switching modes mid-tick\n */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Filled out by a MovementMode during simulation tick to indicate its ending state, allowing for a residual time step and switching modes mid-tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingMs_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Any unused tick time\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Any unused tick time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextModeName_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingMs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextModeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementModeTickEndState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::NewProp_RemainingMs = { "RemainingMs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementModeTickEndState, RemainingMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingMs_MetaData), NewProp_RemainingMs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::NewProp_NextModeName = { "NextModeName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementModeTickEndState, NextModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextModeName_MetaData), NewProp_NextModeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::NewProp_RemainingMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::NewProp_NextModeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MovementModeTickEndState",
	Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::PropPointers),
	sizeof(FMovementModeTickEndState),
	alignof(FMovementModeTickEndState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementModeTickEndState()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModeTickEndState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementModeTickEndState.InnerSingleton, Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovementModeTickEndState.InnerSingleton;
}
// ********** End ScriptStruct FMovementModeTickEndState *******************************************

// ********** Begin ScriptStruct FMoverInputCmdContext *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverInputCmdContext;
class UScriptStruct* FMoverInputCmdContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverInputCmdContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverInputCmdContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverInputCmdContext, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverInputCmdContext"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverInputCmdContext.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The client generates this representation of \"input\" to the simulated actor for one simulation frame. This can be direct mapping\n * of controls, or more abstract data. It is composed of a collection of typed structs that can be customized per project.\n */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "The client generates this representation of \"input\" to the simulated actor for one simulation frame. This can be direct mapping\nof controls, or more abstract data. It is composed of a collection of typed structs that can be customized per project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCollection_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverInputCmdContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::NewProp_InputCollection = { "InputCollection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverInputCmdContext, InputCollection), Z_Construct_UScriptStruct_FMoverDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCollection_MetaData), NewProp_InputCollection_MetaData) }; // 2206586376
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::NewProp_InputCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverInputCmdContext",
	Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::PropPointers),
	sizeof(FMoverInputCmdContext),
	alignof(FMoverInputCmdContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverInputCmdContext()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverInputCmdContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverInputCmdContext.InnerSingleton, Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverInputCmdContext.InnerSingleton;
}
// ********** End ScriptStruct FMoverInputCmdContext ***********************************************

// ********** Begin ScriptStruct FMoverSyncState ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverSyncState;
class UScriptStruct* FMoverSyncState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverSyncState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverSyncState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverSyncState, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverSyncState"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverSyncState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverSyncState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** State we are evolving frame to frame and keeping in sync (frequently changing). It is composed of a collection of typed structs \n *  that can be customized per project. Mover actors are required to have FMoverDefaultSyncState as one of these structs.\n */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "State we are evolving frame to frame and keeping in sync (frequently changing). It is composed of a collection of typed structs\nthat can be customized per project. Mover actors are required to have FMoverDefaultSyncState as one of these structs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// The mode we ended up in from the prior frame, and which we'll start in during the next frame\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "The mode we ended up in from the prior frame, and which we'll start in during the next frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayeredMoves_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Additional moves influencing our proposed motion\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Additional moves influencing our proposed motion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementModifiers_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Additional modifiers influencing our simulation\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Additional modifiers influencing our simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncStateCollection_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MovementMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayeredMoves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementModifiers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncStateCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverSyncState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMoverSyncState_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverSyncState, MovementMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMode_MetaData), NewProp_MovementMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverSyncState_Statics::NewProp_LayeredMoves = { "LayeredMoves", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverSyncState, LayeredMoves), Z_Construct_UScriptStruct_FLayeredMoveGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayeredMoves_MetaData), NewProp_LayeredMoves_MetaData) }; // 2665638783
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverSyncState_Statics::NewProp_MovementModifiers = { "MovementModifiers", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverSyncState, MovementModifiers), Z_Construct_UScriptStruct_FMovementModifierGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementModifiers_MetaData), NewProp_MovementModifiers_MetaData) }; // 3016350616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverSyncState_Statics::NewProp_SyncStateCollection = { "SyncStateCollection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverSyncState, SyncStateCollection), Z_Construct_UScriptStruct_FMoverDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncStateCollection_MetaData), NewProp_SyncStateCollection_MetaData) }; // 2206586376
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverSyncState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverSyncState_Statics::NewProp_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverSyncState_Statics::NewProp_LayeredMoves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverSyncState_Statics::NewProp_MovementModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverSyncState_Statics::NewProp_SyncStateCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverSyncState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverSyncState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverSyncState",
	Z_Construct_UScriptStruct_FMoverSyncState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverSyncState_Statics::PropPointers),
	sizeof(FMoverSyncState),
	alignof(FMoverSyncState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverSyncState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverSyncState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverSyncState()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverSyncState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverSyncState.InnerSingleton, Z_Construct_UScriptStruct_FMoverSyncState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverSyncState.InnerSingleton;
}
// ********** End ScriptStruct FMoverSyncState *****************************************************

// ********** Begin ScriptStruct FMoverAuxStateContext *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverAuxStateContext;
class UScriptStruct* FMoverAuxStateContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverAuxStateContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverAuxStateContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverAuxStateContext, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverAuxStateContext"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverAuxStateContext.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Auxiliary state that is input into the simulation (changes rarely)\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Auxiliary state that is input into the simulation (changes rarely)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxStateCollection_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxStateCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverAuxStateContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::NewProp_AuxStateCollection = { "AuxStateCollection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverAuxStateContext, AuxStateCollection), Z_Construct_UScriptStruct_FMoverDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxStateCollection_MetaData), NewProp_AuxStateCollection_MetaData) }; // 2206586376
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::NewProp_AuxStateCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverAuxStateContext",
	Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::PropPointers),
	sizeof(FMoverAuxStateContext),
	alignof(FMoverAuxStateContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverAuxStateContext()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverAuxStateContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverAuxStateContext.InnerSingleton, Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverAuxStateContext.InnerSingleton;
}
// ********** End ScriptStruct FMoverAuxStateContext ***********************************************

// ********** Begin ScriptStruct FMoverTickStartData ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverTickStartData;
class UScriptStruct* FMoverTickStartData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverTickStartData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverTickStartData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverTickStartData, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverTickStartData"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverTickStartData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverTickStartData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains all state data for the start of a simulation tick\n */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Contains all state data for the start of a simulation tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCmd_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxState_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCmd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverTickStartData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverTickStartData_Statics::NewProp_InputCmd = { "InputCmd", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverTickStartData, InputCmd), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCmd_MetaData), NewProp_InputCmd_MetaData) }; // 300648549
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverTickStartData_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverTickStartData, SyncState), Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 1107017417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverTickStartData_Statics::NewProp_AuxState = { "AuxState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverTickStartData, AuxState), Z_Construct_UScriptStruct_FMoverAuxStateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxState_MetaData), NewProp_AuxState_MetaData) }; // 950104575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverTickStartData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverTickStartData_Statics::NewProp_InputCmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverTickStartData_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverTickStartData_Statics::NewProp_AuxState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverTickStartData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverTickStartData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverTickStartData",
	Z_Construct_UScriptStruct_FMoverTickStartData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverTickStartData_Statics::PropPointers),
	sizeof(FMoverTickStartData),
	alignof(FMoverTickStartData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverTickStartData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverTickStartData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverTickStartData()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverTickStartData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverTickStartData.InnerSingleton, Z_Construct_UScriptStruct_FMoverTickStartData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverTickStartData.InnerSingleton;
}
// ********** End ScriptStruct FMoverTickStartData *************************************************

// ********** Begin ScriptStruct FMoverTickEndData *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverTickEndData;
class UScriptStruct* FMoverTickEndData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverTickEndData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverTickEndData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverTickEndData, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverTickEndData"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverTickEndData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverTickEndData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains all state data produced by a simulation tick, including new simulation state\n */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Contains all state data produced by a simulation tick, including new simulation state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxState_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementEndState_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementEndState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverTickEndData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverTickEndData_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverTickEndData, SyncState), Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 1107017417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverTickEndData_Statics::NewProp_AuxState = { "AuxState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverTickEndData, AuxState), Z_Construct_UScriptStruct_FMoverAuxStateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxState_MetaData), NewProp_AuxState_MetaData) }; // 950104575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverTickEndData_Statics::NewProp_MovementEndState = { "MovementEndState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverTickEndData, MovementEndState), Z_Construct_UScriptStruct_FMovementModeTickEndState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementEndState_MetaData), NewProp_MovementEndState_MetaData) }; // 1074666022
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverTickEndData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverTickEndData_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverTickEndData_Statics::NewProp_AuxState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverTickEndData_Statics::NewProp_MovementEndState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverTickEndData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverTickEndData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverTickEndData",
	Z_Construct_UScriptStruct_FMoverTickEndData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverTickEndData_Statics::PropPointers),
	sizeof(FMoverTickEndData),
	alignof(FMoverTickEndData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverTickEndData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverTickEndData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverTickEndData()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverTickEndData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverTickEndData.InnerSingleton, Z_Construct_UScriptStruct_FMoverTickEndData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverTickEndData.InnerSingleton;
}
// ********** End ScriptStruct FMoverTickEndData ***************************************************

// ********** Begin ScriptStruct FSimulationTickParams *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSimulationTickParams;
class UScriptStruct* FSimulationTickParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSimulationTickParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSimulationTickParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulationTickParams, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("SimulationTickParams"));
	}
	return Z_Registration_Info_UScriptStruct_FSimulationTickParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSimulationTickParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input parameters to provide context for SimulationTick functions\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Input parameters to provide context for SimulationTick functions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Components involved in movement by the simulation\n// This will be empty when the simulation is ticked asynchronously\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Components involved in movement by the simulation\nThis will be empty when the simulation is ticked asynchronously" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimBlackboard_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Blackboard\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Blackboard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartState_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Simulation state data at the start of the tick, including Input Cmd\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Simulation state data at the start of the tick, including Input Cmd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Time and frame information for this tick\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Time and frame information for this tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProposedMove_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Proposed movement for this tick\n" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Proposed movement for this tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimBlackboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProposedMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulationTickParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimulationTickParams, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_SimBlackboard = { "SimBlackboard", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimulationTickParams, SimBlackboard), Z_Construct_UClass_UMoverBlackboard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimBlackboard_MetaData), NewProp_SimBlackboard_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_StartState = { "StartState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimulationTickParams, StartState), Z_Construct_UScriptStruct_FMoverTickStartData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartState_MetaData), NewProp_StartState_MetaData) }; // 593582306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimulationTickParams, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_ProposedMove = { "ProposedMove", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimulationTickParams, ProposedMove), Z_Construct_UScriptStruct_FProposedMove, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProposedMove_MetaData), NewProp_ProposedMove_MetaData) }; // 545505266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimulationTickParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_SimBlackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_StartState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewProp_ProposedMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationTickParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimulationTickParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"SimulationTickParams",
	Z_Construct_UScriptStruct_FSimulationTickParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationTickParams_Statics::PropPointers),
	sizeof(FSimulationTickParams),
	alignof(FSimulationTickParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationTickParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimulationTickParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimulationTickParams()
{
	if (!Z_Registration_Info_UScriptStruct_FSimulationTickParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSimulationTickParams.InnerSingleton, Z_Construct_UScriptStruct_FSimulationTickParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSimulationTickParams.InnerSingleton;
}
// ********** End ScriptStruct FSimulationTickParams ***********************************************

// ********** Begin Interface UMoverInputProducerInterface Function ProduceInput *******************
struct MoverInputProducerInterface_eventProduceInput_Parms
{
	int32 SimTimeMs;
	FMoverInputCmdContext InputCmdResult;
};
void IMoverInputProducerInterface::ProduceInput(int32 SimTimeMs, FMoverInputCmdContext& InputCmdResult)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ProduceInput instead.");
}
static FName NAME_UMoverInputProducerInterface_ProduceInput = FName(TEXT("ProduceInput"));
void IMoverInputProducerInterface::Execute_ProduceInput(UObject* O, int32 SimTimeMs, FMoverInputCmdContext& InputCmdResult)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMoverInputProducerInterface::StaticClass()));
	MoverInputProducerInterface_eventProduceInput_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMoverInputProducerInterface_ProduceInput);
	if (Func)
	{
		Parms.SimTimeMs=SimTimeMs;
		Parms.InputCmdResult=InputCmdResult;
		O->ProcessEvent(Func, &Parms);
		InputCmdResult=Parms.InputCmdResult;
	}
	else if (auto I = (IMoverInputProducerInterface*)(O->GetNativeInterfaceAddress(UMoverInputProducerInterface::StaticClass())))
	{
		I->ProduceInput_Implementation(SimTimeMs,InputCmdResult);
	}
}
struct Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Contributes additions to the input cmd for this simulation frame. Typically this is translating accumulated user input (or AI state) into parameters that affect movement. */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Contributes additions to the input cmd for this simulation frame. Typically this is translating accumulated user input (or AI state) into parameters that affect movement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SimTimeMs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCmdResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::NewProp_SimTimeMs = { "SimTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverInputProducerInterface_eventProduceInput_Parms, SimTimeMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::NewProp_InputCmdResult = { "InputCmdResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverInputProducerInterface_eventProduceInput_Parms, InputCmdResult), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(0, nullptr) }; // 300648549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::NewProp_SimTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::NewProp_InputCmdResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverInputProducerInterface, nullptr, "ProduceInput", Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::PropPointers), sizeof(MoverInputProducerInterface_eventProduceInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MoverInputProducerInterface_eventProduceInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMoverInputProducerInterface::execProduceInput)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SimTimeMs);
	P_GET_STRUCT_REF(FMoverInputCmdContext,Z_Param_Out_InputCmdResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProduceInput_Implementation(Z_Param_SimTimeMs,Z_Param_Out_InputCmdResult);
	P_NATIVE_END;
}
// ********** End Interface UMoverInputProducerInterface Function ProduceInput *********************

// ********** Begin Interface UMoverInputProducerInterface *****************************************
void UMoverInputProducerInterface::StaticRegisterNativesUMoverInputProducerInterface()
{
	UClass* Class = UMoverInputProducerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProduceInput", &IMoverInputProducerInterface::execProduceInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverInputProducerInterface;
UClass* UMoverInputProducerInterface::GetPrivateStaticClass()
{
	using TClass = UMoverInputProducerInterface;
	if (!Z_Registration_Info_UClass_UMoverInputProducerInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverInputProducerInterface"),
			Z_Registration_Info_UClass_UMoverInputProducerInterface.InnerSingleton,
			StaticRegisterNativesUMoverInputProducerInterface,
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
	return Z_Registration_Info_UClass_UMoverInputProducerInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverInputProducerInterface_NoRegister()
{
	return UMoverInputProducerInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverInputProducerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverInputProducerInterface_ProduceInput, "ProduceInput" }, // 2307939202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMoverInputProducerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverInputProducerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverInputProducerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverInputProducerInterface_Statics::ClassParams = {
	&UMoverInputProducerInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverInputProducerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverInputProducerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverInputProducerInterface()
{
	if (!Z_Registration_Info_UClass_UMoverInputProducerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverInputProducerInterface.OuterSingleton, Z_Construct_UClass_UMoverInputProducerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverInputProducerInterface.OuterSingleton;
}
UMoverInputProducerInterface::UMoverInputProducerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverInputProducerInterface);
// ********** End Interface UMoverInputProducerInterface *******************************************

// ********** Begin ScriptStruct FMoverPredictTrajectoryParams *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverPredictTrajectoryParams;
class UScriptStruct* FMoverPredictTrajectoryParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverPredictTrajectoryParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverPredictTrajectoryParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverPredictTrajectoryParams"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverPredictTrajectoryParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * FMoverPredictTrajectoryParams: parameter block for querying future trajectory samples based on a starting state\n * See UMoverComponent::GetPredictedTrajectory\n */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "FMoverPredictTrajectoryParams: parameter block for querying future trajectory samples based on a starting state\nSee UMoverComponent::GetPredictedTrajectory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPredictionSamples_MetaData[] = {
		{ "Category", "Mover" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many samples to predict into the future, including the first sample, which is always a snapshot of the\n\x09 *  starting state with 0 accumulated time. */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "How many samples to predict into the future, including the first sample, which is always a snapshot of the\nstarting state with 0 accumulated time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsPerSample_MetaData[] = {
		{ "Category", "Mover" },
		{ "ClampMin", "0.000010" },
		{ "Comment", "/* How much time between predicted samples */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "How much time between predicted samples" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVisualComponentRoot_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** If true, samples are based on the visual component transform, rather than the 'updated' movement root.\n\x09 *  Typically, this is a mesh with its component location at the bottom of the collision primitive.\n\x09 *  If false, samples are from the movement root. */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "If true, samples are based on the visual component transform, rather than the 'updated' movement root.\nTypically, this is a mesh with its component location at the bottom of the collision primitive.\nIf false, samples are from the movement root." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableGravity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** If true, gravity will not taken into account during prediction */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "If true, gravity will not taken into account during prediction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalStartSyncState_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Optional starting sync state. If not set, prediction will begin from the current state. */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Optional starting sync state. If not set, prediction will begin from the current state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalStartAuxState_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Optional starting aux state. If not set, prediction will begin from the current state. */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Optional starting aux state. If not set, prediction will begin from the current state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalInputCmds_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Optional input cmds to use, one per sample. If none are specified, prediction will begin with last-used inputs. \n \x09 *  If too few are specified for the number of samples, the final input in the array will be used repeatedly to cover remaining samples. */" },
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
		{ "ToolTip", "Optional input cmds to use, one per sample. If none are specified, prediction will begin with last-used inputs.\nIf too few are specified for the number of samples, the final input in the array will be used repeatedly to cover remaining samples." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPredictionSamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsPerSample;
	static void NewProp_bUseVisualComponentRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVisualComponentRoot;
	static void NewProp_bDisableGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableGravity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalStartSyncState_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_OptionalStartSyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalStartAuxState_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_OptionalStartAuxState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalInputCmds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OptionalInputCmds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverPredictTrajectoryParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_NumPredictionSamples = { "NumPredictionSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverPredictTrajectoryParams, NumPredictionSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPredictionSamples_MetaData), NewProp_NumPredictionSamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_SecondsPerSample = { "SecondsPerSample", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverPredictTrajectoryParams, SecondsPerSample), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsPerSample_MetaData), NewProp_SecondsPerSample_MetaData) };
void Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_bUseVisualComponentRoot_SetBit(void* Obj)
{
	((FMoverPredictTrajectoryParams*)Obj)->bUseVisualComponentRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_bUseVisualComponentRoot = { "bUseVisualComponentRoot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoverPredictTrajectoryParams), &Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_bUseVisualComponentRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVisualComponentRoot_MetaData), NewProp_bUseVisualComponentRoot_MetaData) };
void Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_bDisableGravity_SetBit(void* Obj)
{
	((FMoverPredictTrajectoryParams*)Obj)->bDisableGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_bDisableGravity = { "bDisableGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoverPredictTrajectoryParams), &Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_bDisableGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableGravity_MetaData), NewProp_bDisableGravity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalStartSyncState_Inner = { "OptionalStartSyncState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(0, nullptr) }; // 1107017417
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalStartSyncState = { "OptionalStartSyncState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverPredictTrajectoryParams, OptionalStartSyncState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalStartSyncState_MetaData), NewProp_OptionalStartSyncState_MetaData) }; // 1107017417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalStartAuxState_Inner = { "OptionalStartAuxState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMoverAuxStateContext, METADATA_PARAMS(0, nullptr) }; // 950104575
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalStartAuxState = { "OptionalStartAuxState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverPredictTrajectoryParams, OptionalStartAuxState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalStartAuxState_MetaData), NewProp_OptionalStartAuxState_MetaData) }; // 950104575
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalInputCmds_Inner = { "OptionalInputCmds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(0, nullptr) }; // 300648549
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalInputCmds = { "OptionalInputCmds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverPredictTrajectoryParams, OptionalInputCmds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalInputCmds_MetaData), NewProp_OptionalInputCmds_MetaData) }; // 300648549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_NumPredictionSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_SecondsPerSample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_bUseVisualComponentRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_bDisableGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalStartSyncState_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalStartSyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalStartAuxState_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalStartAuxState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalInputCmds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewProp_OptionalInputCmds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverPredictTrajectoryParams",
	Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::PropPointers),
	sizeof(FMoverPredictTrajectoryParams),
	alignof(FMoverPredictTrajectoryParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverPredictTrajectoryParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverPredictTrajectoryParams.InnerSingleton, Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverPredictTrajectoryParams.InnerSingleton;
}
// ********** End ScriptStruct FMoverPredictTrajectoryParams ***************************************

// ********** Begin ScriptStruct FMoverSimulationEventData *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverSimulationEventData;
class UScriptStruct* FMoverSimulationEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverSimulationEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverSimulationEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverSimulationEventData, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverSimulationEventData"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverSimulationEventData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverSimulationEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverSimulationEventData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverSimulationEventData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverSimulationEventData",
	nullptr,
	0,
	sizeof(FMoverSimulationEventData),
	alignof(FMoverSimulationEventData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverSimulationEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverSimulationEventData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverSimulationEventData()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverSimulationEventData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverSimulationEventData.InnerSingleton, Z_Construct_UScriptStruct_FMoverSimulationEventData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverSimulationEventData.InnerSingleton;
}
// ********** End ScriptStruct FMoverSimulationEventData *******************************************

// ********** Begin ScriptStruct FMovementModeChangedEventData *************************************
static_assert(std::is_polymorphic<FMovementModeChangedEventData>() == std::is_polymorphic<FMoverSimulationEventData>(), "USTRUCT FMovementModeChangedEventData cannot be polymorphic unless super FMoverSimulationEventData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementModeChangedEventData;
class UScriptStruct* FMovementModeChangedEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModeChangedEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementModeChangedEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementModeChangedEventData, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MovementModeChangedEventData"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementModeChangedEventData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovementModeChangedEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementModeChangedEventData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementModeChangedEventData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverSimulationEventData,
	&NewStructOps,
	"MovementModeChangedEventData",
	nullptr,
	0,
	sizeof(FMovementModeChangedEventData),
	alignof(FMovementModeChangedEventData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementModeChangedEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementModeChangedEventData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementModeChangedEventData()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementModeChangedEventData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementModeChangedEventData.InnerSingleton, Z_Construct_UScriptStruct_FMovementModeChangedEventData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovementModeChangedEventData.InnerSingleton;
}
// ********** End ScriptStruct FMovementModeChangedEventData ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovementModeTickEndState::StaticStruct, Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics::NewStructOps, TEXT("MovementModeTickEndState"), &Z_Registration_Info_UScriptStruct_FMovementModeTickEndState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementModeTickEndState), 1074666022U) },
		{ FMoverInputCmdContext::StaticStruct, Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics::NewStructOps, TEXT("MoverInputCmdContext"), &Z_Registration_Info_UScriptStruct_FMoverInputCmdContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverInputCmdContext), 300648549U) },
		{ FMoverSyncState::StaticStruct, Z_Construct_UScriptStruct_FMoverSyncState_Statics::NewStructOps, TEXT("MoverSyncState"), &Z_Registration_Info_UScriptStruct_FMoverSyncState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverSyncState), 1107017417U) },
		{ FMoverAuxStateContext::StaticStruct, Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics::NewStructOps, TEXT("MoverAuxStateContext"), &Z_Registration_Info_UScriptStruct_FMoverAuxStateContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverAuxStateContext), 950104575U) },
		{ FMoverTickStartData::StaticStruct, Z_Construct_UScriptStruct_FMoverTickStartData_Statics::NewStructOps, TEXT("MoverTickStartData"), &Z_Registration_Info_UScriptStruct_FMoverTickStartData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverTickStartData), 593582306U) },
		{ FMoverTickEndData::StaticStruct, Z_Construct_UScriptStruct_FMoverTickEndData_Statics::NewStructOps, TEXT("MoverTickEndData"), &Z_Registration_Info_UScriptStruct_FMoverTickEndData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverTickEndData), 2932995429U) },
		{ FSimulationTickParams::StaticStruct, Z_Construct_UScriptStruct_FSimulationTickParams_Statics::NewStructOps, TEXT("SimulationTickParams"), &Z_Registration_Info_UScriptStruct_FSimulationTickParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimulationTickParams), 318922666U) },
		{ FMoverPredictTrajectoryParams::StaticStruct, Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics::NewStructOps, TEXT("MoverPredictTrajectoryParams"), &Z_Registration_Info_UScriptStruct_FMoverPredictTrajectoryParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverPredictTrajectoryParams), 1181026673U) },
		{ FMoverSimulationEventData::StaticStruct, Z_Construct_UScriptStruct_FMoverSimulationEventData_Statics::NewStructOps, TEXT("MoverSimulationEventData"), &Z_Registration_Info_UScriptStruct_FMoverSimulationEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverSimulationEventData), 2077162547U) },
		{ FMovementModeChangedEventData::StaticStruct, Z_Construct_UScriptStruct_FMovementModeChangedEventData_Statics::NewStructOps, TEXT("MovementModeChangedEventData"), &Z_Registration_Info_UScriptStruct_FMovementModeChangedEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementModeChangedEventData), 1527659811U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverInputProducerInterface, UMoverInputProducerInterface::StaticClass, TEXT("UMoverInputProducerInterface"), &Z_Registration_Info_UClass_UMoverInputProducerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverInputProducerInterface), 3428663988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h__Script_Mover_3303604144(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
