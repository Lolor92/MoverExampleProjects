// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverComponent.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "MoveLibrary/ConstrainedMoveUtils.h"
#include "MoveLibrary/MovementUtils.h"
#include "MoveLibrary/MovementUtilsTypes.h"
#include "MovementModifier.h"
#include "MoverSimulationTypes.h"
#include "MoverTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementModeTransition_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMovementMixer_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMovementModeStateMachine_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverBlackboard_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoverSmoothingMode();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementModifierHandle();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverAuxStateContext();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataPersistence();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverInputCmdContext();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverOnImpactParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverSyncState();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTickStartData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTimeStep();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarConstraint();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FProposedMove();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleInfo();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FMover_OnPreSimTick ***************************************************
struct Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics
{
	struct _Script_Mover_eventMover_OnPreSimTick_Parms
	{
		FMoverTimeStep TimeStep;
		FMoverInputCmdContext InputCmd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Fired just before a simulation tick, regardless of being a re-simulated frame or not.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Fired just before a simulation tick, regardless of being a re-simulated frame or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCmd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCmd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPreSimTick_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::NewProp_InputCmd = { "InputCmd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPreSimTick_Parms, InputCmd), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCmd_MetaData), NewProp_InputCmd_MetaData) }; // 300648549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::NewProp_InputCmd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mover, nullptr, "Mover_OnPreSimTick__DelegateSignature", Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::_Script_Mover_eventMover_OnPreSimTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::_Script_Mover_eventMover_OnPreSimTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMover_OnPreSimTick_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPreSimTick, FMoverTimeStep const& TimeStep, FMoverInputCmdContext const& InputCmd)
{
	struct _Script_Mover_eventMover_OnPreSimTick_Parms
	{
		FMoverTimeStep TimeStep;
		FMoverInputCmdContext InputCmd;
	};
	_Script_Mover_eventMover_OnPreSimTick_Parms Parms;
	Parms.TimeStep=TimeStep;
	Parms.InputCmd=InputCmd;
	Mover_OnPreSimTick.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMover_OnPreSimTick *****************************************************

// ********** Begin Delegate FMover_OnPreMovement **************************************************
struct Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics
{
	struct _Script_Mover_eventMover_OnPreMovement_Parms
	{
		FMoverTimeStep TimeStep;
		FMoverInputCmdContext InputCmd;
		FMoverSyncState SyncState;
		FMoverAuxStateContext AuxState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Fired during a simulation tick, after the input is processed but before the actual move calculation.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Fired during a simulation tick, after the input is processed but before the actual move calculation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCmd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCmd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPreMovement_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::NewProp_InputCmd = { "InputCmd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPreMovement_Parms, InputCmd), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCmd_MetaData), NewProp_InputCmd_MetaData) }; // 300648549
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPreMovement_Parms, SyncState), Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 1107017417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::NewProp_AuxState = { "AuxState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPreMovement_Parms, AuxState), Z_Construct_UScriptStruct_FMoverAuxStateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxState_MetaData), NewProp_AuxState_MetaData) }; // 950104575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::NewProp_InputCmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::NewProp_AuxState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mover, nullptr, "Mover_OnPreMovement__DelegateSignature", Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::_Script_Mover_eventMover_OnPreMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::_Script_Mover_eventMover_OnPreMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMover_OnPreMovement_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPreMovement, FMoverTimeStep const& TimeStep, FMoverInputCmdContext const& InputCmd, FMoverSyncState const& SyncState, FMoverAuxStateContext const& AuxState)
{
	struct _Script_Mover_eventMover_OnPreMovement_Parms
	{
		FMoverTimeStep TimeStep;
		FMoverInputCmdContext InputCmd;
		FMoverSyncState SyncState;
		FMoverAuxStateContext AuxState;
	};
	_Script_Mover_eventMover_OnPreMovement_Parms Parms;
	Parms.TimeStep=TimeStep;
	Parms.InputCmd=InputCmd;
	Parms.SyncState=SyncState;
	Parms.AuxState=AuxState;
	Mover_OnPreMovement.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMover_OnPreMovement ****************************************************

// ********** Begin Delegate FMover_OnPostMovement *************************************************
struct Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics
{
	struct _Script_Mover_eventMover_OnPostMovement_Parms
	{
		FMoverTimeStep TimeStep;
		FMoverSyncState SyncState;
		FMoverAuxStateContext AuxState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Fired during a simulation tick, after movement has occurred but before the state is finalized, allowing changes to the output state.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Fired during a simulation tick, after movement has occurred but before the state is finalized, allowing changes to the output state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPostMovement_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPostMovement_Parms, SyncState), Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(0, nullptr) }; // 1107017417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::NewProp_AuxState = { "AuxState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPostMovement_Parms, AuxState), Z_Construct_UScriptStruct_FMoverAuxStateContext, METADATA_PARAMS(0, nullptr) }; // 950104575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::NewProp_AuxState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mover, nullptr, "Mover_OnPostMovement__DelegateSignature", Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::_Script_Mover_eventMover_OnPostMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::_Script_Mover_eventMover_OnPostMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMover_OnPostMovement_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostMovement, FMoverTimeStep const& TimeStep, FMoverSyncState& SyncState, FMoverAuxStateContext& AuxState)
{
	struct _Script_Mover_eventMover_OnPostMovement_Parms
	{
		FMoverTimeStep TimeStep;
		FMoverSyncState SyncState;
		FMoverAuxStateContext AuxState;
	};
	_Script_Mover_eventMover_OnPostMovement_Parms Parms;
	Parms.TimeStep=TimeStep;
	Parms.SyncState=SyncState;
	Parms.AuxState=AuxState;
	Mover_OnPostMovement.ProcessMulticastDelegate<UObject>(&Parms);
	SyncState=Parms.SyncState;
	AuxState=Parms.AuxState;
}
// ********** End Delegate FMover_OnPostMovement ***************************************************

// ********** Begin Delegate FMover_OnPostSimTick **************************************************
struct Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics
{
	struct _Script_Mover_eventMover_OnPostSimTick_Parms
	{
		FMoverTimeStep TimeStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Fired after a simulation tick, regardless of being a re-simulated frame or not.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Fired after a simulation tick, regardless of being a re-simulated frame or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPostSimTick_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::NewProp_TimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mover, nullptr, "Mover_OnPostSimTick__DelegateSignature", Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::_Script_Mover_eventMover_OnPostSimTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::_Script_Mover_eventMover_OnPostSimTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMover_OnPostSimTick_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostSimTick, FMoverTimeStep const& TimeStep)
{
	struct _Script_Mover_eventMover_OnPostSimTick_Parms
	{
		FMoverTimeStep TimeStep;
	};
	_Script_Mover_eventMover_OnPostSimTick_Parms Parms;
	Parms.TimeStep=TimeStep;
	Mover_OnPostSimTick.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMover_OnPostSimTick ****************************************************

// ********** Begin Delegate FMover_OnPostSimRollback **********************************************
struct Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics
{
	struct _Script_Mover_eventMover_OnPostSimRollback_Parms
	{
		FMoverTimeStep CurrentTimeStep;
		FMoverTimeStep ExpungedTimeStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Fired after a rollback. First param is the time step we've rolled back to. Second param is when we rolled back from, and represents a later frame that is no longer valid.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Fired after a rollback. First param is the time step we've rolled back to. Second param is when we rolled back from, and represents a later frame that is no longer valid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpungedTimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpungedTimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::NewProp_CurrentTimeStep = { "CurrentTimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPostSimRollback_Parms, CurrentTimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTimeStep_MetaData), NewProp_CurrentTimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::NewProp_ExpungedTimeStep = { "ExpungedTimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPostSimRollback_Parms, ExpungedTimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpungedTimeStep_MetaData), NewProp_ExpungedTimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::NewProp_CurrentTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::NewProp_ExpungedTimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mover, nullptr, "Mover_OnPostSimRollback__DelegateSignature", Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::_Script_Mover_eventMover_OnPostSimRollback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::_Script_Mover_eventMover_OnPostSimRollback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMover_OnPostSimRollback_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostSimRollback, FMoverTimeStep const& CurrentTimeStep, FMoverTimeStep const& ExpungedTimeStep)
{
	struct _Script_Mover_eventMover_OnPostSimRollback_Parms
	{
		FMoverTimeStep CurrentTimeStep;
		FMoverTimeStep ExpungedTimeStep;
	};
	_Script_Mover_eventMover_OnPostSimRollback_Parms Parms;
	Parms.CurrentTimeStep=CurrentTimeStep;
	Parms.ExpungedTimeStep=ExpungedTimeStep;
	Mover_OnPostSimRollback.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMover_OnPostSimRollback ************************************************

// ********** Begin Delegate FMover_OnMovementModeChanged ******************************************
struct Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics
{
	struct _Script_Mover_eventMover_OnMovementModeChanged_Parms
	{
		FName PreviousMovementModeName;
		FName NewMovementModeName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Fired after changing movement modes. First param is the name of the previous movement mode. Second is the name of the new movement mode. \n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Fired after changing movement modes. First param is the name of the previous movement mode. Second is the name of the new movement mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMovementModeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMovementModeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousMovementModeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewMovementModeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::NewProp_PreviousMovementModeName = { "PreviousMovementModeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnMovementModeChanged_Parms, PreviousMovementModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousMovementModeName_MetaData), NewProp_PreviousMovementModeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::NewProp_NewMovementModeName = { "NewMovementModeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnMovementModeChanged_Parms, NewMovementModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMovementModeName_MetaData), NewProp_NewMovementModeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::NewProp_PreviousMovementModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::NewProp_NewMovementModeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mover, nullptr, "Mover_OnMovementModeChanged__DelegateSignature", Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::_Script_Mover_eventMover_OnMovementModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::_Script_Mover_eventMover_OnMovementModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMover_OnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnMovementModeChanged, FName const& PreviousMovementModeName, FName const& NewMovementModeName)
{
	struct _Script_Mover_eventMover_OnMovementModeChanged_Parms
	{
		FName PreviousMovementModeName;
		FName NewMovementModeName;
	};
	_Script_Mover_eventMover_OnMovementModeChanged_Parms Parms;
	Parms.PreviousMovementModeName=PreviousMovementModeName;
	Parms.NewMovementModeName=NewMovementModeName;
	Mover_OnMovementModeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMover_OnMovementModeChanged ********************************************

// ********** Begin Delegate FMover_OnPostFinalize *************************************************
struct Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics
{
	struct _Script_Mover_eventMover_OnPostFinalize_Parms
	{
		FMoverSyncState SyncState;
		FMoverAuxStateContext AuxState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Fired after a frame has been finalized. This may be a resimulation or not. No changes to state are possible. Guaranteed to be on the game thread.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Fired after a frame has been finalized. This may be a resimulation or not. No changes to state are possible. Guaranteed to be on the game thread." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPostFinalize_Parms, SyncState), Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 1107017417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::NewProp_AuxState = { "AuxState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnPostFinalize_Parms, AuxState), Z_Construct_UScriptStruct_FMoverAuxStateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxState_MetaData), NewProp_AuxState_MetaData) }; // 950104575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::NewProp_AuxState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mover, nullptr, "Mover_OnPostFinalize__DelegateSignature", Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::_Script_Mover_eventMover_OnPostFinalize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::_Script_Mover_eventMover_OnPostFinalize_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMover_OnPostFinalize_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostFinalize, FMoverSyncState const& SyncState, FMoverAuxStateContext const& AuxState)
{
	struct _Script_Mover_eventMover_OnPostFinalize_Parms
	{
		FMoverSyncState SyncState;
		FMoverAuxStateContext AuxState;
	};
	_Script_Mover_eventMover_OnPostFinalize_Parms Parms;
	Parms.SyncState=SyncState;
	Parms.AuxState=AuxState;
	Mover_OnPostFinalize.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMover_OnPostFinalize ***************************************************

// ********** Begin Delegate FMover_ProcessGeneratedMovement ***************************************
struct Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics
{
	struct _Script_Mover_eventMover_ProcessGeneratedMovement_Parms
	{
		FMoverTickStartData StartState;
		FMoverTimeStep TimeStep;
		FProposedMove OutProposedMove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Fired after proposed movement has been generated (i.e. after movement modes and layered moves have generated movement and mixed together).\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Fired after proposed movement has been generated (i.e. after movement modes and layered moves have generated movement and mixed together)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutProposedMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::NewProp_StartState = { "StartState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_ProcessGeneratedMovement_Parms, StartState), Z_Construct_UScriptStruct_FMoverTickStartData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartState_MetaData), NewProp_StartState_MetaData) }; // 593582306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_ProcessGeneratedMovement_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::NewProp_OutProposedMove = { "OutProposedMove", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_ProcessGeneratedMovement_Parms, OutProposedMove), Z_Construct_UScriptStruct_FProposedMove, METADATA_PARAMS(0, nullptr) }; // 545505266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::NewProp_StartState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::NewProp_OutProposedMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mover, nullptr, "Mover_ProcessGeneratedMovement__DelegateSignature", Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::_Script_Mover_eventMover_ProcessGeneratedMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::_Script_Mover_eventMover_ProcessGeneratedMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMover_ProcessGeneratedMovement_DelegateWrapper(const FScriptDelegate& Mover_ProcessGeneratedMovement, FMoverTickStartData const& StartState, FMoverTimeStep const& TimeStep, FProposedMove& OutProposedMove)
{
	struct _Script_Mover_eventMover_ProcessGeneratedMovement_Parms
	{
		FMoverTickStartData StartState;
		FMoverTimeStep TimeStep;
		FProposedMove OutProposedMove;
	};
	_Script_Mover_eventMover_ProcessGeneratedMovement_Parms Parms;
	Parms.StartState=StartState;
	Parms.TimeStep=TimeStep;
	Parms.OutProposedMove=OutProposedMove;
	Mover_ProcessGeneratedMovement.ProcessDelegate<UObject>(&Parms);
	OutProposedMove=Parms.OutProposedMove;
}
// ********** End Delegate FMover_ProcessGeneratedMovement *****************************************

// ********** Begin Class UMoverComponent Function AddGameplayTag **********************************
struct Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics
{
	struct MoverComponent_eventAddGameplayTag_Parms
	{
		FGameplayTag TagToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n  \x09 * Adds a gameplay tag to this Mover Component.\n  \x09 * Note: Duplicate tags will not be added\n  \x09 * @param TagToAdd\x09\x09\x09Tag to add to the Mover Component\n  \x09 */" },
		{ "Keywords", "Add Tag" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Adds a gameplay tag to this Mover Component.\nNote: Duplicate tags will not be added\n@param TagToAdd                      Tag to add to the Mover Component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventAddGameplayTag_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::NewProp_TagToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "AddGameplayTag", Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::MoverComponent_eventAddGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::MoverComponent_eventAddGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_AddGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_AddGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execAddGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGameplayTag(Z_Param_TagToAdd);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function AddGameplayTag ************************************

// ********** Begin Class UMoverComponent Function AddGameplayTags *********************************
struct Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics
{
	struct MoverComponent_eventAddGameplayTags_Parms
	{
		FGameplayTagContainer TagsToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n   \x09 * Adds a series of gameplay tags to this Mover Component\n   \x09 * Note: Duplicate tags will not be added\n   \x09 * @param TagsToAdd\x09\x09\x09Tags to add/append to the Mover Component\n   \x09 */" },
		{ "Keywords", "Add Tag" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Adds a series of gameplay tags to this Mover Component\nNote: Duplicate tags will not be added\n@param TagsToAdd                     Tags to add/append to the Mover Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::NewProp_TagsToAdd = { "TagsToAdd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventAddGameplayTags_Parms, TagsToAdd), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToAdd_MetaData), NewProp_TagsToAdd_MetaData) }; // 2104890724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::NewProp_TagsToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "AddGameplayTags", Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::MoverComponent_eventAddGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::MoverComponent_eventAddGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_AddGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_AddGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execAddGameplayTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagsToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGameplayTags(Z_Param_Out_TagsToAdd);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function AddGameplayTags ***********************************

// ********** Begin Class UMoverComponent Function AddMovementModeFromClass ************************
struct Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics
{
	struct MoverComponent_eventAddMovementModeFromClass_Parms
	{
		FName ModeName;
		TSubclassOf<UBaseMovementMode> MovementMode;
		UBaseMovementMode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Add a movement mode to available movement modes. Returns true if the movement mode was added successfully. Returns the mode that was made.\n" },
		{ "DeterminesOutputType", "MovementMode" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Add a movement mode to available movement modes. Returns true if the movement mode was added successfully. Returns the mode that was made." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModeName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MovementMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::NewProp_ModeName = { "ModeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventAddMovementModeFromClass_Parms, ModeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventAddMovementModeFromClass_Parms, MovementMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseMovementMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMode_MetaData), NewProp_MovementMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventAddMovementModeFromClass_Parms, ReturnValue), Z_Construct_UClass_UBaseMovementMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::NewProp_ModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::NewProp_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "AddMovementModeFromClass", Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::MoverComponent_eventAddMovementModeFromClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::MoverComponent_eventAddMovementModeFromClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execAddMovementModeFromClass)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ModeName);
	P_GET_OBJECT(UClass,Z_Param_MovementMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseMovementMode**)Z_Param__Result=P_THIS->AddMovementModeFromClass(Z_Param_ModeName,Z_Param_MovementMode);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function AddMovementModeFromClass **************************

// ********** Begin Class UMoverComponent Function AddMovementModeFromObject ***********************
struct Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics
{
	struct MoverComponent_eventAddMovementModeFromObject_Parms
	{
		FName ModeName;
		UBaseMovementMode* MovementMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Add a movement mode to available movement modes. Returns true if the movement mode was added successfully\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Add a movement mode to available movement modes. Returns true if the movement mode was added successfully" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementMode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::NewProp_ModeName = { "ModeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventAddMovementModeFromObject_Parms, ModeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventAddMovementModeFromObject_Parms, MovementMode), Z_Construct_UClass_UBaseMovementMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMode_MetaData), NewProp_MovementMode_MetaData) };
void Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverComponent_eventAddMovementModeFromObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventAddMovementModeFromObject_Parms), &Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::NewProp_ModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::NewProp_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "AddMovementModeFromObject", Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::MoverComponent_eventAddMovementModeFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::MoverComponent_eventAddMovementModeFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execAddMovementModeFromObject)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ModeName);
	P_GET_OBJECT(UBaseMovementMode,Z_Param_MovementMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddMovementModeFromObject(Z_Param_ModeName,Z_Param_MovementMode);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function AddMovementModeFromObject *************************

// ********** Begin Class UMoverComponent Function BindProcessGeneratedMovement ********************
struct Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics
{
	struct MoverComponent_eventBindProcessGeneratedMovement_Parms
	{
		FScriptDelegate ProcessGeneratedMovementEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Binds event for processing movement after it has been generated. Allows for final modifications to proposed movement before it's executed.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Binds event for processing movement after it has been generated. Allows for final modifications to proposed movement before it's executed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ProcessGeneratedMovementEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::NewProp_ProcessGeneratedMovementEvent = { "ProcessGeneratedMovementEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventBindProcessGeneratedMovement_Parms, ProcessGeneratedMovementEvent), Z_Construct_UDelegateFunction_Mover_Mover_ProcessGeneratedMovement__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1796831181
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::NewProp_ProcessGeneratedMovementEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "BindProcessGeneratedMovement", Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::MoverComponent_eventBindProcessGeneratedMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::MoverComponent_eventBindProcessGeneratedMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execBindProcessGeneratedMovement)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_ProcessGeneratedMovementEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindProcessGeneratedMovement(FMover_ProcessGeneratedMovement(Z_Param_ProcessGeneratedMovementEvent));
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function BindProcessGeneratedMovement **********************

// ********** Begin Class UMoverComponent Function CancelModifierFromHandle ************************
struct Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics
{
	struct MoverComponent_eventCancelModifierFromHandle_Parms
	{
		FMovementModifierHandle ModifierHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Cancel any active or queued Modifiers with the handle passed in.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Cancel any active or queued Modifiers with the handle passed in." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::NewProp_ModifierHandle = { "ModifierHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventCancelModifierFromHandle_Parms, ModifierHandle), Z_Construct_UScriptStruct_FMovementModifierHandle, METADATA_PARAMS(0, nullptr) }; // 1657671938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::NewProp_ModifierHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "CancelModifierFromHandle", Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::MoverComponent_eventCancelModifierFromHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::MoverComponent_eventCancelModifierFromHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execCancelModifierFromHandle)
{
	P_GET_STRUCT(FMovementModifierHandle,Z_Param_ModifierHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelModifierFromHandle(Z_Param_ModifierHandle);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function CancelModifierFromHandle **************************

// ********** Begin Class UMoverComponent Function FindMovementMode ********************************
struct Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics
{
	struct MoverComponent_eventFindMovementMode_Parms
	{
		TSubclassOf<UBaseMovementMode> MovementMode;
		UBaseMovementMode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "DeterminesOutputType", "MovementMode" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MovementMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventFindMovementMode_Parms, MovementMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseMovementMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventFindMovementMode_Parms, ReturnValue), Z_Construct_UClass_UBaseMovementMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::NewProp_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "FindMovementMode", Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::MoverComponent_eventFindMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::MoverComponent_eventFindMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_FindMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_FindMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execFindMovementMode)
{
	P_GET_OBJECT(UClass,Z_Param_MovementMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseMovementMode**)Z_Param__Result=P_THIS->FindMovementMode(Z_Param_MovementMode);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function FindMovementMode **********************************

// ********** Begin Class UMoverComponent Function FindMovementModeByName **************************
struct Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics
{
	struct MoverComponent_eventFindMovementModeByName_Parms
	{
		FName MovementModeName;
		UBaseMovementMode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MovementModeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::NewProp_MovementModeName = { "MovementModeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventFindMovementModeByName_Parms, MovementModeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventFindMovementModeByName_Parms, ReturnValue), Z_Construct_UClass_UBaseMovementMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::NewProp_MovementModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "FindMovementModeByName", Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::MoverComponent_eventFindMovementModeByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::MoverComponent_eventFindMovementModeByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_FindMovementModeByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_FindMovementModeByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execFindMovementModeByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MovementModeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseMovementMode**)Z_Param__Result=P_THIS->FindMovementModeByName(Z_Param_MovementModeName);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function FindMovementModeByName ****************************

// ********** Begin Class UMoverComponent Function FindSharedSettings_BP ***************************
struct Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics
{
	struct MoverComponent_eventFindSharedSettings_BP_Parms
	{
		TSubclassOf<UObject> SharedSetting;
		const UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Find settings object by type. Returns null if there is none of that type */" },
		{ "DeterminesOutputType", "SharedSetting" },
		{ "DisplayName", "Find Shared Settings" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Find settings object by type. Returns null if there is none of that type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSetting_MetaData[] = {
		{ "MustImplement", "MovementSettingsInterface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SharedSetting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::NewProp_SharedSetting = { "SharedSetting", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventFindSharedSettings_BP_Parms, SharedSetting), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSetting_MetaData), NewProp_SharedSetting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventFindSharedSettings_BP_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::NewProp_SharedSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "FindSharedSettings_BP", Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::MoverComponent_eventFindSharedSettings_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::MoverComponent_eventFindSharedSettings_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execFindSharedSettings_BP)
{
	P_GET_OBJECT(UClass,Z_Param_SharedSetting);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UObject**)Z_Param__Result=P_THIS->FindSharedSettings_BP(Z_Param_SharedSetting);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function FindSharedSettings_BP *****************************

// ********** Begin Class UMoverComponent Function FindSharedSettings_Mutable_BP *******************
struct Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics
{
	struct MoverComponent_eventFindSharedSettings_Mutable_BP_Parms
	{
		TSubclassOf<UObject> SharedSetting;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Find mutable settings object by type. Returns null if there is none of that type */" },
		{ "DeterminesOutputType", "SharedSetting" },
		{ "DisplayName", "Find Shared Settings Mutable" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Find mutable settings object by type. Returns null if there is none of that type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSetting_MetaData[] = {
		{ "MustImplement", "MovementSettingsInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SharedSetting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::NewProp_SharedSetting = { "SharedSetting", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventFindSharedSettings_Mutable_BP_Parms, SharedSetting), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSetting_MetaData), NewProp_SharedSetting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventFindSharedSettings_Mutable_BP_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::NewProp_SharedSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "FindSharedSettings_Mutable_BP", Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::MoverComponent_eventFindSharedSettings_Mutable_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::MoverComponent_eventFindSharedSettings_Mutable_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execFindSharedSettings_Mutable_BP)
{
	P_GET_OBJECT(UClass,Z_Param_SharedSetting);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->FindSharedSettings_Mutable_BP(Z_Param_SharedSetting);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function FindSharedSettings_Mutable_BP *********************

// ********** Begin Class UMoverComponent Function GetBaseVisualComponentTransform *****************
struct Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics
{
	struct MoverComponent_eventGetBaseVisualComponentTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Gets BaseVisualComponentTransform used for cases where we want to move the visual component away from the root component. See @BaseVisualComponentTransform\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Gets BaseVisualComponentTransform used for cases where we want to move the visual component away from the root component. See @BaseVisualComponentTransform" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetBaseVisualComponentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetBaseVisualComponentTransform", Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::MoverComponent_eventGetBaseVisualComponentTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::MoverComponent_eventGetBaseVisualComponentTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetBaseVisualComponentTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetBaseVisualComponentTransform();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetBaseVisualComponentTransform *******************

// ********** Begin Class UMoverComponent Function GetFutureTrajectory *****************************
struct Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics
{
	struct MoverComponent_eventGetFutureTrajectory_Parms
	{
		float FutureSeconds;
		float SamplesPerSecond;
		TArray<FTrajectorySampleInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FutureSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplesPerSecond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::NewProp_FutureSeconds = { "FutureSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetFutureTrajectory_Parms, FutureSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::NewProp_SamplesPerSecond = { "SamplesPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetFutureTrajectory_Parms, SamplesPerSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTrajectorySampleInfo, METADATA_PARAMS(0, nullptr) }; // 3606441607
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetFutureTrajectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3606441607
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::NewProp_FutureSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::NewProp_SamplesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetFutureTrajectory", Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::MoverComponent_eventGetFutureTrajectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::MoverComponent_eventGetFutureTrajectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetFutureTrajectory)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FutureSeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SamplesPerSecond);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTrajectorySampleInfo>*)Z_Param__Result=P_THIS->GetFutureTrajectory(Z_Param_FutureSeconds,Z_Param_SamplesPerSecond);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetFutureTrajectory *******************************

// ********** Begin Class UMoverComponent Function GetGravityAcceleration **************************
struct Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics
{
	struct MoverComponent_eventGetGravityAcceleration_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the current acceleration due to gravity (cm/s^2) in worldspace\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the current acceleration due to gravity (cm/s^2) in worldspace" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetGravityAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetGravityAcceleration", Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::MoverComponent_eventGetGravityAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::MoverComponent_eventGetGravityAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetGravityAcceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetGravityAcceleration();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetGravityAcceleration ****************************

// ********** Begin Class UMoverComponent Function GetLastInputCmd *********************************
struct Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics
{
	struct MoverComponent_eventGetLastInputCmd_Parms
	{
		FMoverInputCmdContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Access the most recently-used inputs.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Access the most recently-used inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetLastInputCmd_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 300648549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetLastInputCmd", Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::MoverComponent_eventGetLastInputCmd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::MoverComponent_eventGetLastInputCmd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetLastInputCmd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetLastInputCmd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetLastInputCmd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMoverInputCmdContext*)Z_Param__Result=P_THIS->GetLastInputCmd();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetLastInputCmd ***********************************

// ********** Begin Class UMoverComponent Function GetLastTimeStep *********************************
struct Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics
{
	struct MoverComponent_eventGetLastTimeStep_Parms
	{
		FMoverTimeStep ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the most recent TimeStep\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the most recent TimeStep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetLastTimeStep_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2334791403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetLastTimeStep", Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::MoverComponent_eventGetLastTimeStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::MoverComponent_eventGetLastTimeStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetLastTimeStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetLastTimeStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetLastTimeStep)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMoverTimeStep*)Z_Param__Result=P_THIS->GetLastTimeStep();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetLastTimeStep ***********************************

// ********** Begin Class UMoverComponent Function GetMovementBase *********************************
struct Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics
{
	struct MoverComponent_eventGetMovementBase_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the current movement base. Null if there isn't one.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the current movement base. Null if there isn't one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetMovementBase_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetMovementBase", Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::MoverComponent_eventGetMovementBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::MoverComponent_eventGetMovementBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetMovementBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetMovementBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetMovementBase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetMovementBase();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetMovementBase ***********************************

// ********** Begin Class UMoverComponent Function GetMovementBaseBoneName *************************
struct Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics
{
	struct MoverComponent_eventGetMovementBaseBoneName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the current movement base bone, NAME_None if there isn't one.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the current movement base bone, NAME_None if there isn't one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetMovementBaseBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetMovementBaseBoneName", Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::MoverComponent_eventGetMovementBaseBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::MoverComponent_eventGetMovementBaseBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetMovementBaseBoneName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetMovementBaseBoneName();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetMovementBaseBoneName ***************************

// ********** Begin Class UMoverComponent Function GetMovementIntent *******************************
struct Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics
{
	struct MoverComponent_eventGetMovementIntent_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the intended movement direction in worldspace with magnitude (range 0-1)\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the intended movement direction in worldspace with magnitude (range 0-1)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetMovementIntent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetMovementIntent", Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::MoverComponent_eventGetMovementIntent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::MoverComponent_eventGetMovementIntent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetMovementIntent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetMovementIntent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetMovementIntent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetMovementIntent();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetMovementIntent *********************************

// ********** Begin Class UMoverComponent Function GetMovementMode *********************************
struct Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics
{
	struct MoverComponent_eventGetMovementMode_Parms
	{
		const UBaseMovementMode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the current movement mode \n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the current movement mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetMovementMode_Parms, ReturnValue), Z_Construct_UClass_UBaseMovementMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetMovementMode", Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::MoverComponent_eventGetMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::MoverComponent_eventGetMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetMovementMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UBaseMovementMode**)Z_Param__Result=P_THIS->GetMovementMode();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetMovementMode ***********************************

// ********** Begin Class UMoverComponent Function GetMovementModeName *****************************
struct Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics
{
	struct MoverComponent_eventGetMovementModeName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the current movement mode name\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the current movement mode name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetMovementModeName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetMovementModeName", Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::MoverComponent_eventGetMovementModeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::MoverComponent_eventGetMovementModeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetMovementModeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetMovementModeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetMovementModeName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetMovementModeName();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetMovementModeName *******************************

// ********** Begin Class UMoverComponent Function GetPlanarConstraint *****************************
struct Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics
{
	struct MoverComponent_eventGetPlanarConstraint_Parms
	{
		FPlanarConstraint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Access the planar constraint that may be limiting movement direction\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Access the planar constraint that may be limiting movement direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetPlanarConstraint_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlanarConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2928932149
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetPlanarConstraint", Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::MoverComponent_eventGetPlanarConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::MoverComponent_eventGetPlanarConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetPlanarConstraint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlanarConstraint*)Z_Param__Result=P_THIS->GetPlanarConstraint();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetPlanarConstraint *******************************

// ********** Begin Class UMoverComponent Function GetPredictedTrajectory **************************
struct Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics
{
	struct MoverComponent_eventGetPredictedTrajectory_Parms
	{
		FMoverPredictTrajectoryParams PredictionParams;
		TArray<FTrajectorySampleInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Get a sampling of where the actor is projected to be in the future, based on a current state. Note that this is projecting ideal movement without doing full simulation and collision. */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get a sampling of where the actor is projected to be in the future, based on a current state. Note that this is projecting ideal movement without doing full simulation and collision." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::NewProp_PredictionParams = { "PredictionParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetPredictedTrajectory_Parms, PredictionParams), Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams, METADATA_PARAMS(0, nullptr) }; // 1181026673
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTrajectorySampleInfo, METADATA_PARAMS(0, nullptr) }; // 3606441607
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetPredictedTrajectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3606441607
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::NewProp_PredictionParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetPredictedTrajectory", Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::MoverComponent_eventGetPredictedTrajectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::MoverComponent_eventGetPredictedTrajectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetPredictedTrajectory)
{
	P_GET_STRUCT(FMoverPredictTrajectoryParams,Z_Param_PredictionParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTrajectorySampleInfo>*)Z_Param__Result=P_THIS->GetPredictedTrajectory(Z_Param_PredictionParams);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetPredictedTrajectory ****************************

// ********** Begin Class UMoverComponent Function GetPrimaryVisualComponent ***********************
struct Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics
{
	struct MoverComponent_eventGetPrimaryVisualComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Access the primary visual component of the actor\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Access the primary visual component of the actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetPrimaryVisualComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetPrimaryVisualComponent", Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::MoverComponent_eventGetPrimaryVisualComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::MoverComponent_eventGetPrimaryVisualComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetPrimaryVisualComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetPrimaryVisualComponent();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetPrimaryVisualComponent *************************

// ********** Begin Class UMoverComponent Function GetSimBlackboard ********************************
struct Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics
{
	struct MoverComponent_eventGetSimBlackboard_Parms
	{
		const UMoverBlackboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Access the read-only version of the Mover's Blackboard\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Access the read-only version of the Mover's Blackboard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetSimBlackboard_Parms, ReturnValue), Z_Construct_UClass_UMoverBlackboard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetSimBlackboard", Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::MoverComponent_eventGetSimBlackboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::MoverComponent_eventGetSimBlackboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetSimBlackboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetSimBlackboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetSimBlackboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UMoverBlackboard**)Z_Param__Result=P_THIS->GetSimBlackboard();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetSimBlackboard **********************************

// ********** Begin Class UMoverComponent Function GetStartingMovementModeNames ********************
#if WITH_EDITOR
struct Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics
{
	struct MoverComponent_eventGetStartingMovementModeNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetStartingMovementModeNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetStartingMovementModeNames", Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::MoverComponent_eventGetStartingMovementModeNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::MoverComponent_eventGetStartingMovementModeNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMoverComponent::execGetStartingMovementModeNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStartingMovementModeNames();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UMoverComponent Function GetStartingMovementModeNames **********************

// ********** Begin Class UMoverComponent Function GetSyncState ************************************
struct Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics
{
	struct MoverComponent_eventGetSyncState_Parms
	{
		FMoverSyncState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Access the most recent captured sync state.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Access the most recent captured sync state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetSyncState_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1107017417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetSyncState", Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::MoverComponent_eventGetSyncState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::MoverComponent_eventGetSyncState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetSyncState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetSyncState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetSyncState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMoverSyncState*)Z_Param__Result=P_THIS->GetSyncState();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetSyncState **************************************

// ********** Begin Class UMoverComponent Function GetTargetOrientation ****************************
struct Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics
{
	struct MoverComponent_eventGetTargetOrientation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the orientation that the actor is moving towards\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the orientation that the actor is moving towards" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetTargetOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetTargetOrientation", Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::MoverComponent_eventGetTargetOrientation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::MoverComponent_eventGetTargetOrientation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetTargetOrientation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetTargetOrientation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetTargetOrientation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetTargetOrientation();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetTargetOrientation ******************************

// ********** Begin Class UMoverComponent Function GetUpdatedComponent *****************************
struct Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics
{
	struct MoverComponent_eventGetUpdatedComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Access the root component of the actor that our Mover simulation is moving\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Access the root component of the actor that our Mover simulation is moving" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetUpdatedComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetUpdatedComponent", Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::MoverComponent_eventGetUpdatedComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::MoverComponent_eventGetUpdatedComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetUpdatedComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetUpdatedComponent();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetUpdatedComponent *******************************

// ********** Begin Class UMoverComponent Function GetUpDirection **********************************
struct Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics
{
	struct MoverComponent_eventGetUpDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the normalized direction considered \"up\" in worldspace. Typically aligned with gravity, and typically determines the plane an actor tries to move along.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the normalized direction considered \"up\" in worldspace. Typically aligned with gravity, and typically determines the plane an actor tries to move along." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetUpDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetUpDirection", Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::MoverComponent_eventGetUpDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::MoverComponent_eventGetUpDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetUpDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetUpDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetUpDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetUpDirection();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetUpDirection ************************************

// ********** Begin Class UMoverComponent Function GetVelocity *************************************
struct Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics
{
	struct MoverComponent_eventGetVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Get the current velocity (units per second, worldspace)\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Get the current velocity (units per second, worldspace)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventGetVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "GetVelocity", Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::MoverComponent_eventGetVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::MoverComponent_eventGetVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_GetVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_GetVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execGetVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVelocity();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function GetVelocity ***************************************

// ********** Begin Class UMoverComponent Function HandleImpact ************************************
struct Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics
{
	struct MoverComponent_eventHandleImpact_Parms
	{
		FMoverOnImpactParams ImpactParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Handle a blocking impact.*/" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Handle a blocking impact." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::NewProp_ImpactParams = { "ImpactParams", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventHandleImpact_Parms, ImpactParams), Z_Construct_UScriptStruct_FMoverOnImpactParams, METADATA_PARAMS(0, nullptr) }; // 1206355831
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::NewProp_ImpactParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "HandleImpact", Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::MoverComponent_eventHandleImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::MoverComponent_eventHandleImpact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_HandleImpact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_HandleImpact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execHandleImpact)
{
	P_GET_STRUCT_REF(FMoverOnImpactParams,Z_Param_Out_ImpactParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleImpact(Z_Param_Out_ImpactParams);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function HandleImpact **************************************

// ********** Begin Class UMoverComponent Function HasGameplayTag **********************************
struct Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics
{
	struct MoverComponent_eventHasGameplayTag_Parms
	{
		FGameplayTag TagToFind;
		bool bExactMatch;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n \x09 * Check Mover systems for a gameplay tag.\n \x09 *\n \x09 * @param TagToFind\x09\x09\x09Tag to check on the Mover systems\n \x09 * @param bExactMatch\x09\x09If true, the tag has to be exactly present, if false then TagToFind will include it's parent tags while matching\n \x09 * \n \x09 * @return True if the TagToFind was found\n \x09 */" },
		{ "Keywords", "HasTag" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Check Mover systems for a gameplay tag.\n\n@param TagToFind                     Tag to check on the Mover systems\n@param bExactMatch           If true, the tag has to be exactly present, if false then TagToFind will include it's parent tags while matching\n\n@return True if the TagToFind was found" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToFind;
	static void NewProp_bExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_TagToFind = { "TagToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventHasGameplayTag_Parms, TagToFind), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_bExactMatch_SetBit(void* Obj)
{
	((MoverComponent_eventHasGameplayTag_Parms*)Obj)->bExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventHasGameplayTag_Parms), &Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverComponent_eventHasGameplayTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventHasGameplayTag_Parms), &Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_TagToFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_bExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "HasGameplayTag", Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::MoverComponent_eventHasGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::MoverComponent_eventHasGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_HasGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_HasGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execHasGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToFind);
	P_GET_UBOOL(Z_Param_bExactMatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasGameplayTag(Z_Param_TagToFind,Z_Param_bExactMatch);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function HasGameplayTag ************************************

// ********** Begin Class UMoverComponent Function HasGameplayTagInState ***************************
struct Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics
{
	struct MoverComponent_eventHasGameplayTagInState_Parms
	{
		FMoverSyncState SyncState;
		FGameplayTag TagToFind;
		bool bExactMatch;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Check Mover systems for a gameplay tag. Use the given state, as well as any loose tags on the MoverComponent.\n\x09 *\n\x09 * @param TagToFind\x09\x09\x09Tag to check on the MoverComponent or state\n\x09 * @param bExactMatch\x09\x09If true, the tag has to be exactly present, if false then TagToFind will include it's parent tags while matching\n\x09 *\n\x09 * @return True if the TagToFind was found\n\x09 */" },
		{ "Keywords", "HasTag" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Check Mover systems for a gameplay tag. Use the given state, as well as any loose tags on the MoverComponent.\n\n@param TagToFind                     Tag to check on the MoverComponent or state\n@param bExactMatch           If true, the tag has to be exactly present, if false then TagToFind will include it's parent tags while matching\n\n@return True if the TagToFind was found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToFind;
	static void NewProp_bExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventHasGameplayTagInState_Parms, SyncState), Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 1107017417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_TagToFind = { "TagToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventHasGameplayTagInState_Parms, TagToFind), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_bExactMatch_SetBit(void* Obj)
{
	((MoverComponent_eventHasGameplayTagInState_Parms*)Obj)->bExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventHasGameplayTagInState_Parms), &Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverComponent_eventHasGameplayTagInState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventHasGameplayTagInState_Parms), &Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_TagToFind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_bExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "HasGameplayTagInState", Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::MoverComponent_eventHasGameplayTagInState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::MoverComponent_eventHasGameplayTagInState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execHasGameplayTagInState)
{
	P_GET_STRUCT_REF(FMoverSyncState,Z_Param_Out_SyncState);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToFind);
	P_GET_UBOOL(Z_Param_bExactMatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasGameplayTagInState(Z_Param_Out_SyncState,Z_Param_TagToFind,Z_Param_bExactMatch);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function HasGameplayTagInState *****************************

// ********** Begin Class UMoverComponent Function HasValidCachedInputCmd **************************
struct Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics
{
	struct MoverComponent_eventHasValidCachedInputCmd_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "HasValidCachedInputCmd has been deprecated, and is not needed since we no longer wait until movement simulation begins before providing a valid input cmd." },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverComponent_eventHasValidCachedInputCmd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventHasValidCachedInputCmd_Parms), &Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "HasValidCachedInputCmd", Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::MoverComponent_eventHasValidCachedInputCmd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::MoverComponent_eventHasValidCachedInputCmd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execHasValidCachedInputCmd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidCachedInputCmd();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function HasValidCachedInputCmd ****************************

// ********** Begin Class UMoverComponent Function HasValidCachedState *****************************
struct Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics
{
	struct MoverComponent_eventHasValidCachedState_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "HasValidCachedState has been deprecated, and is not needed since we no longer wait until movement simulation begins before providing a valid sync state." },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverComponent_eventHasValidCachedState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventHasValidCachedState_Parms), &Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "HasValidCachedState", Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::MoverComponent_eventHasValidCachedState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::MoverComponent_eventHasValidCachedState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_HasValidCachedState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_HasValidCachedState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execHasValidCachedState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidCachedState();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function HasValidCachedState *******************************

// ********** Begin Class UMoverComponent Function IsModifierActiveOrQueued ************************
struct Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics
{
	struct MoverComponent_eventIsModifierActiveOrQueued_Parms
	{
		FMovementModifierHandle ModifierHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Checks if the modifier handle passed in is active or queued on this mover component\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Checks if the modifier handle passed in is active or queued on this mover component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::NewProp_ModifierHandle = { "ModifierHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventIsModifierActiveOrQueued_Parms, ModifierHandle), Z_Construct_UScriptStruct_FMovementModifierHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierHandle_MetaData), NewProp_ModifierHandle_MetaData) }; // 1657671938
void Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverComponent_eventIsModifierActiveOrQueued_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventIsModifierActiveOrQueued_Parms), &Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::NewProp_ModifierHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "IsModifierActiveOrQueued", Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::MoverComponent_eventIsModifierActiveOrQueued_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::MoverComponent_eventIsModifierActiveOrQueued_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execIsModifierActiveOrQueued)
{
	P_GET_STRUCT_REF(FMovementModifierHandle,Z_Param_Out_ModifierHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsModifierActiveOrQueued(Z_Param_Out_ModifierHandle);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function IsModifierActiveOrQueued **************************

// ********** Begin Class UMoverComponent Function IsUsingDeferredGroupMovement ********************
struct Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics
{
	struct MoverComponent_eventIsUsingDeferredGroupMovement_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns true if this component is actually using grouped movement updates, which checks the flag and any global settings */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Returns true if this component is actually using grouped movement updates, which checks the flag and any global settings" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverComponent_eventIsUsingDeferredGroupMovement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventIsUsingDeferredGroupMovement_Parms), &Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "IsUsingDeferredGroupMovement", Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::MoverComponent_eventIsUsingDeferredGroupMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::MoverComponent_eventIsUsingDeferredGroupMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execIsUsingDeferredGroupMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingDeferredGroupMovement();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function IsUsingDeferredGroupMovement **********************

// ********** Begin Class UMoverComponent Function K2_FindActiveLayeredMove ************************
struct Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics
{
	struct MoverComponent_eventK2_FindActiveLayeredMove_Parms
	{
		bool DidSucceed;
		int32 TargetAsRawBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Retrieves an active layered move, by writing to a target instance if it is the matching type. Note: Writing to the struct returned will not modify the active struct.\n\x09 * @param DidSucceed\x09\x09\x09""Flag indicating whether data was actually written to target struct instance\n\x09 * @param TargetAsRawBytes\x09\x09The data struct instance to write to, which must be a FLayeredMoveBase sub-type\n\x09 */" },
		{ "CustomStructureParam", "TargetAsRawBytes" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Find Active Layered Move" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Retrieves an active layered move, by writing to a target instance if it is the matching type. Note: Writing to the struct returned will not modify the active struct.\n@param DidSucceed                    Flag indicating whether data was actually written to target struct instance\n@param TargetAsRawBytes              The data struct instance to write to, which must be a FLayeredMoveBase sub-type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsRawBytes_MetaData[] = {
		{ "DisplayName", "Out Layered Move" },
	};
#endif // WITH_METADATA
	static void NewProp_DidSucceed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DidSucceed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetAsRawBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::NewProp_DidSucceed_SetBit(void* Obj)
{
	((MoverComponent_eventK2_FindActiveLayeredMove_Parms*)Obj)->DidSucceed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::NewProp_DidSucceed = { "DidSucceed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventK2_FindActiveLayeredMove_Parms), &Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::NewProp_DidSucceed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::NewProp_TargetAsRawBytes = { "TargetAsRawBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventK2_FindActiveLayeredMove_Parms, TargetAsRawBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAsRawBytes_MetaData), NewProp_TargetAsRawBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::NewProp_DidSucceed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::NewProp_TargetAsRawBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "K2_FindActiveLayeredMove", Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::MoverComponent_eventK2_FindActiveLayeredMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::MoverComponent_eventK2_FindActiveLayeredMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMoverComponent Function K2_FindActiveLayeredMove **************************

// ********** Begin Class UMoverComponent Function K2_FindMovementModifier *************************
struct Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics
{
	struct MoverComponent_eventK2_FindMovementModifier_Parms
	{
		FMovementModifierHandle ModifierHandle;
		bool bFoundModifier;
		int32 TargetAsRawBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Retrieves Movement modifier by writing to a target instance if it is the matching type. Note: Writing to the struct returned will not modify the active struct.\n\x09 * @param ModifierHandle\x09\x09Handle of the modifier we're trying to cancel\n\x09 * @param bFoundModifier\x09\x09""Flag indicating whether modifier was found and data was actually written to target struct instance\n\x09 * @param TargetAsRawBytes\x09\x09The data struct instance to write to, which must be a FMovementModifierBase sub-type\n\x09 */" },
		{ "CustomStructureParam", "TargetAsRawBytes" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Find Movement Modifier" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Retrieves Movement modifier by writing to a target instance if it is the matching type. Note: Writing to the struct returned will not modify the active struct.\n@param ModifierHandle                Handle of the modifier we're trying to cancel\n@param bFoundModifier                Flag indicating whether modifier was found and data was actually written to target struct instance\n@param TargetAsRawBytes              The data struct instance to write to, which must be a FMovementModifierBase sub-type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsRawBytes_MetaData[] = {
		{ "DisplayName", "Out Movement Modifier" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierHandle;
	static void NewProp_bFoundModifier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundModifier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetAsRawBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::NewProp_ModifierHandle = { "ModifierHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventK2_FindMovementModifier_Parms, ModifierHandle), Z_Construct_UScriptStruct_FMovementModifierHandle, METADATA_PARAMS(0, nullptr) }; // 1657671938
void Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::NewProp_bFoundModifier_SetBit(void* Obj)
{
	((MoverComponent_eventK2_FindMovementModifier_Parms*)Obj)->bFoundModifier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::NewProp_bFoundModifier = { "bFoundModifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventK2_FindMovementModifier_Parms), &Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::NewProp_bFoundModifier_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::NewProp_TargetAsRawBytes = { "TargetAsRawBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventK2_FindMovementModifier_Parms, TargetAsRawBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAsRawBytes_MetaData), NewProp_TargetAsRawBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::NewProp_ModifierHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::NewProp_bFoundModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::NewProp_TargetAsRawBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "K2_FindMovementModifier", Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::MoverComponent_eventK2_FindMovementModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::MoverComponent_eventK2_FindMovementModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMoverComponent Function K2_FindMovementModifier ***************************

// ********** Begin Class UMoverComponent Function K2_QueueInstantMovementEffect *******************
struct Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics
{
	struct MoverComponent_eventK2_QueueInstantMovementEffect_Parms
	{
		int32 EffectAsRawData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Queue a Instant Movement Effect to start at the end of this frame or start of the next subtick - whichever happens first. This will clone whatever move you pass in, so you'll need to fully set it up before queuing.\n\x09 * @param InstantMovementEffect\x09\x09\x09The effect to queue, which must be a FInstantMovementEffect sub-type. \n\x09 */" },
		{ "CustomStructureParam", "EffectAsRawData" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Queue Instant Movement Effect" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Queue a Instant Movement Effect to start at the end of this frame or start of the next subtick - whichever happens first. This will clone whatever move you pass in, so you'll need to fully set it up before queuing.\n@param InstantMovementEffect                 The effect to queue, which must be a FInstantMovementEffect sub-type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectAsRawData_MetaData[] = {
		{ "DisplayName", "Instant Movement Effect" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EffectAsRawData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::NewProp_EffectAsRawData = { "EffectAsRawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventK2_QueueInstantMovementEffect_Parms, EffectAsRawData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectAsRawData_MetaData), NewProp_EffectAsRawData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::NewProp_EffectAsRawData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "K2_QueueInstantMovementEffect", Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::MoverComponent_eventK2_QueueInstantMovementEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::MoverComponent_eventK2_QueueInstantMovementEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMoverComponent Function K2_QueueInstantMovementEffect *********************

// ********** Begin Class UMoverComponent Function K2_QueueLayeredMove *****************************
struct Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics
{
	struct MoverComponent_eventK2_QueueLayeredMove_Parms
	{
		int32 MoveAsRawData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Queue a layered move to start during the next simulation frame. This will clone whatever move you pass in, so you'll need to fully set it up before queuing.\n\x09 * @param LayeredMove\x09\x09\x09The move to queue, which must be a LayeredMoveBase sub-type. \n\x09 */" },
		{ "CustomStructureParam", "MoveAsRawData" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Queue Layered Move" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Queue a layered move to start during the next simulation frame. This will clone whatever move you pass in, so you'll need to fully set it up before queuing.\n@param LayeredMove                   The move to queue, which must be a LayeredMoveBase sub-type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAsRawData_MetaData[] = {
		{ "DisplayName", "Layered Move" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveAsRawData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::NewProp_MoveAsRawData = { "MoveAsRawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventK2_QueueLayeredMove_Parms, MoveAsRawData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAsRawData_MetaData), NewProp_MoveAsRawData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::NewProp_MoveAsRawData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "K2_QueueLayeredMove", Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::MoverComponent_eventK2_QueueLayeredMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::MoverComponent_eventK2_QueueLayeredMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMoverComponent Function K2_QueueLayeredMove *******************************

// ********** Begin Class UMoverComponent Function K2_QueueMovementModifier ************************
struct Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics
{
	struct MoverComponent_eventK2_QueueMovementModifier_Parms
	{
		int32 MoveAsRawData;
		FMovementModifierHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Mover" },
		{ "Comment", "/**\n \x09 * Queue a Movement Modifier to start during the next simulation frame. This will clone whatever move you pass in, so you'll need to fully set it up before queuing.\n \x09 * @param MovementModifier The modifier to queue, which must be a LayeredMoveBase sub-type.\n \x09 * @return Returns a Modifier handle that can be used to query or cancel the movement modifier\n \x09 */" },
		{ "CustomStructureParam", "MoveAsRawData" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Queue Movement Modifier" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Queue a Movement Modifier to start during the next simulation frame. This will clone whatever move you pass in, so you'll need to fully set it up before queuing.\n@param MovementModifier The modifier to queue, which must be a LayeredMoveBase sub-type.\n@return Returns a Modifier handle that can be used to query or cancel the movement modifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAsRawData_MetaData[] = {
		{ "DisplayName", "Movement Modifier" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveAsRawData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::NewProp_MoveAsRawData = { "MoveAsRawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventK2_QueueMovementModifier_Parms, MoveAsRawData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAsRawData_MetaData), NewProp_MoveAsRawData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventK2_QueueMovementModifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovementModifierHandle, METADATA_PARAMS(0, nullptr) }; // 1657671938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::NewProp_MoveAsRawData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "K2_QueueMovementModifier", Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::MoverComponent_eventK2_QueueMovementModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::MoverComponent_eventK2_QueueMovementModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMoverComponent Function K2_QueueMovementModifier **************************

// ********** Begin Class UMoverComponent Function OnBeginOverlap **********************************
struct Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics
{
	struct MoverComponent_eventOnBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* Other;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Callbacks\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Callbacks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventOnBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventOnBeginOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MoverComponent_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "OnBeginOverlap", Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::MoverComponent_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::MoverComponent_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function OnBeginOverlap ************************************

// ********** Begin Class UMoverComponent Function PhysicsVolumeChanged ****************************
struct Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics
{
	struct MoverComponent_eventPhysicsVolumeChanged_Parms
	{
		APhysicsVolume* NewVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventPhysicsVolumeChanged_Parms, NewVolume), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::NewProp_NewVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "PhysicsVolumeChanged", Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::MoverComponent_eventPhysicsVolumeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::MoverComponent_eventPhysicsVolumeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execPhysicsVolumeChanged)
{
	P_GET_OBJECT(APhysicsVolume,Z_Param_NewVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PhysicsVolumeChanged(Z_Param_NewVolume);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function PhysicsVolumeChanged ******************************

// ********** Begin Class UMoverComponent Function QueueNextMode ***********************************
struct Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics
{
	struct MoverComponent_eventQueueNextMode_Parms
	{
		FName DesiredModeName;
		bool bShouldReenter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Queue a movement mode change to occur during the next simulation frame. If bShouldReenter is true, then a mode change will occur even if already in that mode.\n" },
		{ "CPP_Default_bShouldReenter", "false" },
		{ "DisplayName", "Queue Next Movement Mode" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Queue a movement mode change to occur during the next simulation frame. If bShouldReenter is true, then a mode change will occur even if already in that mode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DesiredModeName;
	static void NewProp_bShouldReenter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldReenter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::NewProp_DesiredModeName = { "DesiredModeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventQueueNextMode_Parms, DesiredModeName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::NewProp_bShouldReenter_SetBit(void* Obj)
{
	((MoverComponent_eventQueueNextMode_Parms*)Obj)->bShouldReenter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::NewProp_bShouldReenter = { "bShouldReenter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventQueueNextMode_Parms), &Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::NewProp_bShouldReenter_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::NewProp_DesiredModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::NewProp_bShouldReenter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "QueueNextMode", Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::MoverComponent_eventQueueNextMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::MoverComponent_eventQueueNextMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_QueueNextMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_QueueNextMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execQueueNextMode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_DesiredModeName);
	P_GET_UBOOL(Z_Param_bShouldReenter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueueNextMode(Z_Param_DesiredModeName,Z_Param_bShouldReenter);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function QueueNextMode *************************************

// ********** Begin Class UMoverComponent Function RemoveGameplayTag *******************************
struct Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics
{
	struct MoverComponent_eventRemoveGameplayTag_Parms
	{
		FGameplayTag TagToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n   \x09 * Removes a gameplay tag from this Mover Component\n   \x09 * @param TagToRemove\x09\x09\x09Tag to remove from the Mover Component\n   \x09 */" },
		{ "Keywords", "Remove Tag" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Removes a gameplay tag from this Mover Component\n@param TagToRemove                   Tag to remove from the Mover Component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventRemoveGameplayTag_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::NewProp_TagToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "RemoveGameplayTag", Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::MoverComponent_eventRemoveGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::MoverComponent_eventRemoveGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execRemoveGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameplayTag(Z_Param_TagToRemove);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function RemoveGameplayTag *********************************

// ********** Begin Class UMoverComponent Function RemoveGameplayTags ******************************
struct Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics
{
	struct MoverComponent_eventRemoveGameplayTags_Parms
	{
		FGameplayTagContainer TagsToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Removes gameplay tags from this Mover Component\n\x09 * @param TagsToRemove\x09\x09\x09Tags to remove from the Mover Component\n\x09 */" },
		{ "Keywords", "Remove Tag" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Removes gameplay tags from this Mover Component\n@param TagsToRemove                  Tags to remove from the Mover Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::NewProp_TagsToRemove = { "TagsToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventRemoveGameplayTags_Parms, TagsToRemove), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToRemove_MetaData), NewProp_TagsToRemove_MetaData) }; // 2104890724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::NewProp_TagsToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "RemoveGameplayTags", Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::MoverComponent_eventRemoveGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::MoverComponent_eventRemoveGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execRemoveGameplayTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagsToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameplayTags(Z_Param_Out_TagsToRemove);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function RemoveGameplayTags ********************************

// ********** Begin Class UMoverComponent Function RemoveMovementMode ******************************
struct Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics
{
	struct MoverComponent_eventRemoveMovementMode_Parms
	{
		FName ModeName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Removes a movement mode from available movement modes. Returns number of modes removed from the available movement modes.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Removes a movement mode from available movement modes. Returns number of modes removed from the available movement modes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModeName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::NewProp_ModeName = { "ModeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventRemoveMovementMode_Parms, ModeName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverComponent_eventRemoveMovementMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventRemoveMovementMode_Parms), &Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::NewProp_ModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "RemoveMovementMode", Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::MoverComponent_eventRemoveMovementMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::MoverComponent_eventRemoveMovementMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_RemoveMovementMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_RemoveMovementMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execRemoveMovementMode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ModeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveMovementMode(Z_Param_ModeName);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function RemoveMovementMode ********************************

// ********** Begin Class UMoverComponent Function SetBaseVisualComponentTransform *****************
struct Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics
{
	struct MoverComponent_eventSetBaseVisualComponentTransform_Parms
	{
		FTransform ComponentTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Sets BaseVisualComponentTransform used for cases where we want to move the visual component away from the root component. See @BaseVisualComponentTransform\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Sets BaseVisualComponentTransform used for cases where we want to move the visual component away from the root component. See @BaseVisualComponentTransform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::NewProp_ComponentTransform = { "ComponentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventSetBaseVisualComponentTransform_Parms, ComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTransform_MetaData), NewProp_ComponentTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::NewProp_ComponentTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "SetBaseVisualComponentTransform", Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::MoverComponent_eventSetBaseVisualComponentTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::MoverComponent_eventSetBaseVisualComponentTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execSetBaseVisualComponentTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ComponentTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBaseVisualComponentTransform(Z_Param_Out_ComponentTransform);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function SetBaseVisualComponentTransform *******************

// ********** Begin Class UMoverComponent Function SetGravityOverride ******************************
struct Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics
{
	struct MoverComponent_eventSetGravityOverride_Parms
	{
		bool bOverrideGravity;
		FVector GravityAcceleration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Set gravity override, as a directional acceleration in worldspace.  Gravity on Earth would be {x=0,y=0,z=-980}\n" },
		{ "CPP_Default_GravityAcceleration", "" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Set gravity override, as a directional acceleration in worldspace.  Gravity on Earth would be {x=0,y=0,z=-980}" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGravity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::NewProp_bOverrideGravity_SetBit(void* Obj)
{
	((MoverComponent_eventSetGravityOverride_Parms*)Obj)->bOverrideGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::NewProp_bOverrideGravity = { "bOverrideGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventSetGravityOverride_Parms), &Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::NewProp_bOverrideGravity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::NewProp_GravityAcceleration = { "GravityAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventSetGravityOverride_Parms, GravityAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::NewProp_bOverrideGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::NewProp_GravityAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "SetGravityOverride", Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::MoverComponent_eventSetGravityOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::MoverComponent_eventSetGravityOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_SetGravityOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_SetGravityOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execSetGravityOverride)
{
	P_GET_UBOOL(Z_Param_bOverrideGravity);
	P_GET_STRUCT(FVector,Z_Param_GravityAcceleration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGravityOverride(Z_Param_bOverrideGravity,Z_Param_GravityAcceleration);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function SetGravityOverride ********************************

// ********** Begin Class UMoverComponent Function SetPlanarConstraint *****************************
struct Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics
{
	struct MoverComponent_eventSetPlanarConstraint_Parms
	{
		FPlanarConstraint InConstraint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Sets planar constraint that can limit movement direction\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Sets planar constraint that can limit movement direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConstraint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::NewProp_InConstraint = { "InConstraint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventSetPlanarConstraint_Parms, InConstraint), Z_Construct_UScriptStruct_FPlanarConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConstraint_MetaData), NewProp_InConstraint_MetaData) }; // 2928932149
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::NewProp_InConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "SetPlanarConstraint", Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::MoverComponent_eventSetPlanarConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::MoverComponent_eventSetPlanarConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execSetPlanarConstraint)
{
	P_GET_STRUCT_REF(FPlanarConstraint,Z_Param_Out_InConstraint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlanarConstraint(Z_Param_Out_InConstraint);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function SetPlanarConstraint *******************************

// ********** Begin Class UMoverComponent Function SetPrimaryVisualComponent ***********************
struct Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics
{
	struct MoverComponent_eventSetPrimaryVisualComponent_Parms
	{
		USceneComponent* SceneComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Sets this Mover actor's primary visual component. Must be a descendant of the updated component that acts as our movement root. \n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Sets this Mover actor's primary visual component. Must be a descendant of the updated component that acts as our movement root." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventSetPrimaryVisualComponent_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::NewProp_SceneComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "SetPrimaryVisualComponent", Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::MoverComponent_eventSetPrimaryVisualComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::MoverComponent_eventSetPrimaryVisualComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execSetPrimaryVisualComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPrimaryVisualComponent(Z_Param_SceneComponent);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function SetPrimaryVisualComponent *************************

// ********** Begin Class UMoverComponent Function SetUpdatedComponent *****************************
struct Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics
{
	struct MoverComponent_eventSetUpdatedComponent_Parms
	{
		USceneComponent* NewUpdatedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Sets which component we're using as the root of our movement\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Sets which component we're using as the root of our movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewUpdatedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewUpdatedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent = { "NewUpdatedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventSetUpdatedComponent_Parms, NewUpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewUpdatedComponent_MetaData), NewProp_NewUpdatedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::NewProp_NewUpdatedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "SetUpdatedComponent", Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::MoverComponent_eventSetUpdatedComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::MoverComponent_eventSetUpdatedComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execSetUpdatedComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_NewUpdatedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUpdatedComponent(Z_Param_NewUpdatedComponent);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function SetUpdatedComponent *******************************

// ********** Begin Class UMoverComponent Function SetUseDeferredGroupMovement *********************
struct Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics
{
	struct MoverComponent_eventSetUseDeferredGroupMovement_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Sets whether this mover component can use grouped movement updates, which improve performance but can cause attachments to update later than expected */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Sets whether this mover component can use grouped movement updates, which improve performance but can cause attachments to update later than expected" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((MoverComponent_eventSetUseDeferredGroupMovement_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventSetUseDeferredGroupMovement_Parms), &Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "SetUseDeferredGroupMovement", Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::MoverComponent_eventSetUseDeferredGroupMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::MoverComponent_eventSetUseDeferredGroupMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execSetUseDeferredGroupMovement)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseDeferredGroupMovement(Z_Param_bEnable);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function SetUseDeferredGroupMovement ***********************

// ********** Begin Class UMoverComponent Function TryGetFloorCheckHitResult ***********************
struct Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics
{
	struct MoverComponent_eventTryGetFloorCheckHitResult_Parms
	{
		FHitResult OutHitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Access the most recent floor check hit result.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Access the most recent floor check hit result." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::NewProp_OutHitResult = { "OutHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverComponent_eventTryGetFloorCheckHitResult_Parms, OutHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
void Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverComponent_eventTryGetFloorCheckHitResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverComponent_eventTryGetFloorCheckHitResult_Parms), &Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::NewProp_OutHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "TryGetFloorCheckHitResult", Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::MoverComponent_eventTryGetFloorCheckHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::MoverComponent_eventTryGetFloorCheckHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execTryGetFloorCheckHitResult)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetFloorCheckHitResult(Z_Param_Out_OutHitResult);
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function TryGetFloorCheckHitResult *************************

// ********** Begin Class UMoverComponent Function UnbindProcessGeneratedMovement ******************
struct Z_Construct_UFunction_UMoverComponent_UnbindProcessGeneratedMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Clears current bound event for processing movement after it has been generated.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Clears current bound event for processing movement after it has been generated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverComponent_UnbindProcessGeneratedMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverComponent, nullptr, "UnbindProcessGeneratedMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverComponent_UnbindProcessGeneratedMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverComponent_UnbindProcessGeneratedMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMoverComponent_UnbindProcessGeneratedMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverComponent_UnbindProcessGeneratedMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverComponent::execUnbindProcessGeneratedMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindProcessGeneratedMovement();
	P_NATIVE_END;
}
// ********** End Class UMoverComponent Function UnbindProcessGeneratedMovement ********************

// ********** Begin Class UMoverComponent **********************************************************
void UMoverComponent::StaticRegisterNativesUMoverComponent()
{
	UClass* Class = UMoverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayTag", &UMoverComponent::execAddGameplayTag },
		{ "AddGameplayTags", &UMoverComponent::execAddGameplayTags },
		{ "AddMovementModeFromClass", &UMoverComponent::execAddMovementModeFromClass },
		{ "AddMovementModeFromObject", &UMoverComponent::execAddMovementModeFromObject },
		{ "BindProcessGeneratedMovement", &UMoverComponent::execBindProcessGeneratedMovement },
		{ "CancelModifierFromHandle", &UMoverComponent::execCancelModifierFromHandle },
		{ "FindMovementMode", &UMoverComponent::execFindMovementMode },
		{ "FindMovementModeByName", &UMoverComponent::execFindMovementModeByName },
		{ "FindSharedSettings_BP", &UMoverComponent::execFindSharedSettings_BP },
		{ "FindSharedSettings_Mutable_BP", &UMoverComponent::execFindSharedSettings_Mutable_BP },
		{ "GetBaseVisualComponentTransform", &UMoverComponent::execGetBaseVisualComponentTransform },
		{ "GetFutureTrajectory", &UMoverComponent::execGetFutureTrajectory },
		{ "GetGravityAcceleration", &UMoverComponent::execGetGravityAcceleration },
		{ "GetLastInputCmd", &UMoverComponent::execGetLastInputCmd },
		{ "GetLastTimeStep", &UMoverComponent::execGetLastTimeStep },
		{ "GetMovementBase", &UMoverComponent::execGetMovementBase },
		{ "GetMovementBaseBoneName", &UMoverComponent::execGetMovementBaseBoneName },
		{ "GetMovementIntent", &UMoverComponent::execGetMovementIntent },
		{ "GetMovementMode", &UMoverComponent::execGetMovementMode },
		{ "GetMovementModeName", &UMoverComponent::execGetMovementModeName },
		{ "GetPlanarConstraint", &UMoverComponent::execGetPlanarConstraint },
		{ "GetPredictedTrajectory", &UMoverComponent::execGetPredictedTrajectory },
		{ "GetPrimaryVisualComponent", &UMoverComponent::execGetPrimaryVisualComponent },
		{ "GetSimBlackboard", &UMoverComponent::execGetSimBlackboard },
#if WITH_EDITOR
		{ "GetStartingMovementModeNames", &UMoverComponent::execGetStartingMovementModeNames },
#endif // WITH_EDITOR
		{ "GetSyncState", &UMoverComponent::execGetSyncState },
		{ "GetTargetOrientation", &UMoverComponent::execGetTargetOrientation },
		{ "GetUpdatedComponent", &UMoverComponent::execGetUpdatedComponent },
		{ "GetUpDirection", &UMoverComponent::execGetUpDirection },
		{ "GetVelocity", &UMoverComponent::execGetVelocity },
		{ "HandleImpact", &UMoverComponent::execHandleImpact },
		{ "HasGameplayTag", &UMoverComponent::execHasGameplayTag },
		{ "HasGameplayTagInState", &UMoverComponent::execHasGameplayTagInState },
		{ "HasValidCachedInputCmd", &UMoverComponent::execHasValidCachedInputCmd },
		{ "HasValidCachedState", &UMoverComponent::execHasValidCachedState },
		{ "IsModifierActiveOrQueued", &UMoverComponent::execIsModifierActiveOrQueued },
		{ "IsUsingDeferredGroupMovement", &UMoverComponent::execIsUsingDeferredGroupMovement },
		{ "K2_FindActiveLayeredMove", &UMoverComponent::execK2_FindActiveLayeredMove },
		{ "K2_FindMovementModifier", &UMoverComponent::execK2_FindMovementModifier },
		{ "K2_QueueInstantMovementEffect", &UMoverComponent::execK2_QueueInstantMovementEffect },
		{ "K2_QueueLayeredMove", &UMoverComponent::execK2_QueueLayeredMove },
		{ "K2_QueueMovementModifier", &UMoverComponent::execK2_QueueMovementModifier },
		{ "OnBeginOverlap", &UMoverComponent::execOnBeginOverlap },
		{ "PhysicsVolumeChanged", &UMoverComponent::execPhysicsVolumeChanged },
		{ "QueueNextMode", &UMoverComponent::execQueueNextMode },
		{ "RemoveGameplayTag", &UMoverComponent::execRemoveGameplayTag },
		{ "RemoveGameplayTags", &UMoverComponent::execRemoveGameplayTags },
		{ "RemoveMovementMode", &UMoverComponent::execRemoveMovementMode },
		{ "SetBaseVisualComponentTransform", &UMoverComponent::execSetBaseVisualComponentTransform },
		{ "SetGravityOverride", &UMoverComponent::execSetGravityOverride },
		{ "SetPlanarConstraint", &UMoverComponent::execSetPlanarConstraint },
		{ "SetPrimaryVisualComponent", &UMoverComponent::execSetPrimaryVisualComponent },
		{ "SetUpdatedComponent", &UMoverComponent::execSetUpdatedComponent },
		{ "SetUseDeferredGroupMovement", &UMoverComponent::execSetUseDeferredGroupMovement },
		{ "TryGetFloorCheckHitResult", &UMoverComponent::execTryGetFloorCheckHitResult },
		{ "UnbindProcessGeneratedMovement", &UMoverComponent::execUnbindProcessGeneratedMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverComponent;
UClass* UMoverComponent::GetPrivateStaticClass()
{
	using TClass = UMoverComponent;
	if (!Z_Registration_Info_UClass_UMoverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverComponent"),
			Z_Registration_Info_UClass_UMoverComponent.InnerSingleton,
			StaticRegisterNativesUMoverComponent,
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
	return Z_Registration_Info_UClass_UMoverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverComponent_NoRegister()
{
	return UMoverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MoverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreSimulationTick_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Broadcast before each simulation tick.\n// Note - Guaranteed to run on the game thread (even in async simulation).\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Broadcast before each simulation tick.\nNote - Guaranteed to run on the game thread (even in async simulation)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostMovement_MetaData[] = {
		{ "Comment", "// Broadcast at the end of a simulation tick after movement has occurred, but allowing additions/modifications to the state. Not assignable as a BP event due to it having mutable parameters.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Broadcast at the end of a simulation tick after movement has occurred, but allowing additions/modifications to the state. Not assignable as a BP event due to it having mutable parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostSimulationTick_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Broadcast after each simulation tick and the state is finalized\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Broadcast after each simulation tick and the state is finalized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostSimulationRollback_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Broadcast when a rollback has occurred, just before the next simulation tick occurs\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Broadcast when a rollback has occurred, just before the next simulation tick occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMovementModeChanged_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Broadcast when a MovementMode has changed. Happens during a simulation tick if the mode changed that tick or when SetModeImmediately is used to change modes.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Broadcast when a MovementMode has changed. Happens during a simulation tick if the mode changed that tick or when SetModeImmediately is used to change modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostFinalize_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Broadcast after each finalized simulation frame, after the state is finalized. (Game thread only)\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Broadcast after each finalized simulation frame, after the state is finalized. (Game thread only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackendClass_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Specifies which supporting back end class should drive this Mover actor\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "MustImplement", "/Script/Mover.MoverBackendLiaisonInterface" },
		{ "ToolTip", "Specifies which supporting back end class should drive this Mover actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementModes_ValueProp_MetaData[] = {
		{ "Category", "Mover" },
		{ "EditInline", "true" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementModes_MetaData[] = {
		{ "Category", "Mover" },
		{ "EditInline", "true" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingMovementMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Name of the first mode to start in when simulation begins. Must have a mapping in MovementModes. Only used during initialization.\n" },
		{ "GetOptions", "GetStartingMovementModeNames" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Name of the first mode to start in when simulation begins. Must have a mapping in MovementModes. Only used during initialization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_Inner_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Transition checks that are always evaluated regardless of mode. Evaluated in order, stopping at the first successful transition check. Mode-owned transitions take precedence. */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Transition checks that are always evaluated regardless of mode. Evaluated in order, stopping at the first successful transition check. Mode-owned transitions take precedence. */" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Transition checks that are always evaluated regardless of mode. Evaluated in order, stopping at the first successful transition check. Mode-owned transitions take precedence. */\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Transition checks that are always evaluated regardless of mode. Evaluated in order, stopping at the first successful transition check. Mode-owned transitions take precedence. */" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentSyncStateDataTypes_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** List of types that should always be present in this actor's sync state */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "List of types that should always be present in this actor's sync state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputProducer_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Optional object for producing input cmds. Typically set at BeginPlay time. If not specified, defaulted input will be used. */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ObjectMustImplement", "/Script/Mover.MoverInputProducerInterface" },
		{ "ToolTip", "Optional object for producing input cmds. Typically set at BeginPlay time. If not specified, defaulted input will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMixer_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Optional object for mixing proposed moves.Typically set at BeginPlay time. If not specified, UDefaultMovementMixer will be used. */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Optional object for mixing proposed moves.Typically set at BeginPlay time. If not specified, UDefaultMovementMixer will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreMovement_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Broadcast during the simulation tick after inputs have been processed, but before the actual move is performed.\n// Note - When async simulating, the delegate would be called on the async thread, and might be broadcast multiple times.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Broadcast during the simulation tick after inputs have been processed, but before the actual move is performed.\nNote - When async simulating, the delegate would be called on the async thread, and might be broadcast multiple times." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedComponent_MetaData[] = {
		{ "Comment", "/** This is the component that's actually being moved. Typically it is the Actor's root component and often a collidable primitive. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "This is the component that's actually being moved. Typically it is the Actor's root component and often a collidable primitive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedCompAsPrimitive_MetaData[] = {
		{ "Comment", "/** UpdatedComponent, cast as a UPrimitiveComponent. May be invalid if UpdatedComponent was null or not a UPrimitiveComponent. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "UpdatedComponent, cast as a UPrimitiveComponent. May be invalid if UpdatedComponent was null or not a UPrimitiveComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryVisualComponent_MetaData[] = {
		{ "Comment", "/** The main visual component associated with this Mover actor, typically a mesh and typically parented to the UpdatedComponent. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "The main visual component associated with this Mover actor, typically a mesh and typically parented to the UpdatedComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackendLiaisonComp_MetaData[] = {
		{ "Comment", "// Saved timestep info from the newest (farthest-advanced) simulation tick. This will not rewind during corrections.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Saved timestep info from the newest (farthest-advanced) simulation tick. This will not rewind during corrections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeFSM_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimBlackboard_MetaData[] = {
		{ "Comment", "/** Used to store cached data & computations between decoupled systems, that can be referenced by name */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Used to store cached data & computations between decoupled systems, that can be referenced by name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSettings_Inner_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Collection of settings objects that are shared between movement modes. This list is automatically managed based on the @MovementModes contents. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "NoResetToDefault", "" },
		{ "ObjectMustImplement", "/Script/Mover.MovementSettingsInterface" },
		{ "ToolTip", "Collection of settings objects that are shared between movement modes. This list is automatically managed based on the @MovementModes contents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSettings_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Collection of settings objects that are shared between movement modes. This list is automatically managed based on the @MovementModes contents. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "NoResetToDefault", "" },
		{ "ObjectMustImplement", "/Script/Mover.MovementSettingsInterface" },
		{ "ToolTip", "Collection of settings objects that are shared between movement modes. This list is automatically managed based on the @MovementModes contents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityAccelOverride_MetaData[] = {
		{ "Category", "Mover|Gravity" },
		{ "Comment", "/** cm/s^2, only meaningful if @bHasGravityOverride is enabled.Set @SetGravityOverride */" },
		{ "ForceUnits", "cm/s^2" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "cm/s^2, only meaningful if @bHasGravityOverride is enabled.Set @SetGravityOverride" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarConstraint_MetaData[] = {
		{ "Category", "Mover|Constraints" },
		{ "Comment", "/** Settings that can lock movement to a particular plane */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Settings that can lock movement to a particular plane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// If enabled, the movement of the primary visual component will be smoothed via an offset from the root moving component. This is useful in fixed-tick simulations with variable rendering rates.\n" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "If enabled, the movement of the primary visual component will be smoothed via an offset from the root moving component. This is useful in fixed-tick simulations with variable rendering rates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasGravityOverride_MetaData[] = {
		{ "Category", "Mover|Gravity" },
		{ "Comment", "/** Whether or not gravity is overridden on this actor. Otherwise, fall back on world settings. See @SetGravityOverride */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "Whether or not gravity is overridden on this actor. Otherwise, fall back on world settings. See @SetGravityOverride" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeferredGroupMovement_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n     * If true, then the transform updates applied in UMoverComponent::SetFrameStateFromContext will use a \"deferred group move\"\n     * to improve performance.\n     *\n     * It is not recommended that you enable this when you need exact, high fidelity characters such as your player character.\n     * This is mainly a benefit for scenarios with large amounts of NPCs or lower fidelity characters where it is acceptable\n     * to not have immediately applied transforms.\n     *\n     * This only does something if the \"s.GroupedComponentMovement.Enable\" CVar is set to true.\n     */" },
		{ "EditCondition", "Engine.SceneComponent.IsGroupedComponentMovementEnabled" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "If true, then the transform updates applied in UMoverComponent::SetFrameStateFromContext will use a \"deferred group move\"\nto improve performance.\n\nIt is not recommended that you enable this when you need exact, high fidelity characters such as your player character.\nThis is mainly a benefit for scenarios with large amounts of NPCs or lower fidelity characters where it is acceptable\nto not have immediately applied transforms.\n\nThis only does something if the \"s.GroupedComponentMovement.Enable\" CVar is set to true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToGravityTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Mover|Gravity" },
		{ "Comment", "/**\n\x09 * A cached quaternion representing the rotation from world space to gravity relative space defined by GravityAccelOverride.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "A cached quaternion representing the rotation from world space to gravity relative space defined by GravityAccelOverride." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityToWorldTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Mover|Gravity" },
		{ "Comment", "/**\n\x09 * A cached quaternion representing the inverse rotation from world space to gravity relative space defined by GravityAccelOverride.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "A cached quaternion representing the inverse rotation from world space to gravity relative space defined by GravityAccelOverride." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsKinematicBasedMovement_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** If enabled, this actor will be moved to follow a base actor that it's standing on. Typically disabled for physics-based movement, which handles based movement internally. */" },
		{ "ModuleRelativePath", "Public/MoverComponent.h" },
		{ "ToolTip", "If enabled, this actor will be moved to follow a base actor that it's standing on. Typically disabled for physics-based movement, which handles based movement internally." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreSimulationTick;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostMovement;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostSimulationTick;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostSimulationRollback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMovementModeChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostFinalize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BackendClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementModes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MovementModes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MovementModes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartingMovementMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Transitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentSyncStateDataTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentSyncStateDataTypes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputProducer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementMixer;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedCompAsPrimitive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryVisualComponent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_BackendLiaisonComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModeFSM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimBlackboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityAccelOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarConstraint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingMode;
	static void NewProp_bHasGravityOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGravityOverride;
	static void NewProp_bUseDeferredGroupMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeferredGroupMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToGravityTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityToWorldTransform;
	static void NewProp_bSupportsKinematicBasedMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsKinematicBasedMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverComponent_AddGameplayTag, "AddGameplayTag" }, // 1334188928
		{ &Z_Construct_UFunction_UMoverComponent_AddGameplayTags, "AddGameplayTags" }, // 2931621838
		{ &Z_Construct_UFunction_UMoverComponent_AddMovementModeFromClass, "AddMovementModeFromClass" }, // 2088512431
		{ &Z_Construct_UFunction_UMoverComponent_AddMovementModeFromObject, "AddMovementModeFromObject" }, // 2883431194
		{ &Z_Construct_UFunction_UMoverComponent_BindProcessGeneratedMovement, "BindProcessGeneratedMovement" }, // 832825536
		{ &Z_Construct_UFunction_UMoverComponent_CancelModifierFromHandle, "CancelModifierFromHandle" }, // 928108844
		{ &Z_Construct_UFunction_UMoverComponent_FindMovementMode, "FindMovementMode" }, // 3334805195
		{ &Z_Construct_UFunction_UMoverComponent_FindMovementModeByName, "FindMovementModeByName" }, // 1122583223
		{ &Z_Construct_UFunction_UMoverComponent_FindSharedSettings_BP, "FindSharedSettings_BP" }, // 1712712210
		{ &Z_Construct_UFunction_UMoverComponent_FindSharedSettings_Mutable_BP, "FindSharedSettings_Mutable_BP" }, // 3414800891
		{ &Z_Construct_UFunction_UMoverComponent_GetBaseVisualComponentTransform, "GetBaseVisualComponentTransform" }, // 2758562203
		{ &Z_Construct_UFunction_UMoverComponent_GetFutureTrajectory, "GetFutureTrajectory" }, // 2330473790
		{ &Z_Construct_UFunction_UMoverComponent_GetGravityAcceleration, "GetGravityAcceleration" }, // 1394423924
		{ &Z_Construct_UFunction_UMoverComponent_GetLastInputCmd, "GetLastInputCmd" }, // 2352366120
		{ &Z_Construct_UFunction_UMoverComponent_GetLastTimeStep, "GetLastTimeStep" }, // 3510455954
		{ &Z_Construct_UFunction_UMoverComponent_GetMovementBase, "GetMovementBase" }, // 779714336
		{ &Z_Construct_UFunction_UMoverComponent_GetMovementBaseBoneName, "GetMovementBaseBoneName" }, // 2296304507
		{ &Z_Construct_UFunction_UMoverComponent_GetMovementIntent, "GetMovementIntent" }, // 915186917
		{ &Z_Construct_UFunction_UMoverComponent_GetMovementMode, "GetMovementMode" }, // 2231866242
		{ &Z_Construct_UFunction_UMoverComponent_GetMovementModeName, "GetMovementModeName" }, // 2312612681
		{ &Z_Construct_UFunction_UMoverComponent_GetPlanarConstraint, "GetPlanarConstraint" }, // 567588753
		{ &Z_Construct_UFunction_UMoverComponent_GetPredictedTrajectory, "GetPredictedTrajectory" }, // 1905411256
		{ &Z_Construct_UFunction_UMoverComponent_GetPrimaryVisualComponent, "GetPrimaryVisualComponent" }, // 2705298178
		{ &Z_Construct_UFunction_UMoverComponent_GetSimBlackboard, "GetSimBlackboard" }, // 1570880289
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMoverComponent_GetStartingMovementModeNames, "GetStartingMovementModeNames" }, // 126185465
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UMoverComponent_GetSyncState, "GetSyncState" }, // 1677474459
		{ &Z_Construct_UFunction_UMoverComponent_GetTargetOrientation, "GetTargetOrientation" }, // 912406031
		{ &Z_Construct_UFunction_UMoverComponent_GetUpdatedComponent, "GetUpdatedComponent" }, // 1155783615
		{ &Z_Construct_UFunction_UMoverComponent_GetUpDirection, "GetUpDirection" }, // 2774496414
		{ &Z_Construct_UFunction_UMoverComponent_GetVelocity, "GetVelocity" }, // 2899477061
		{ &Z_Construct_UFunction_UMoverComponent_HandleImpact, "HandleImpact" }, // 77192695
		{ &Z_Construct_UFunction_UMoverComponent_HasGameplayTag, "HasGameplayTag" }, // 3039461536
		{ &Z_Construct_UFunction_UMoverComponent_HasGameplayTagInState, "HasGameplayTagInState" }, // 3552775803
		{ &Z_Construct_UFunction_UMoverComponent_HasValidCachedInputCmd, "HasValidCachedInputCmd" }, // 687008097
		{ &Z_Construct_UFunction_UMoverComponent_HasValidCachedState, "HasValidCachedState" }, // 816616252
		{ &Z_Construct_UFunction_UMoverComponent_IsModifierActiveOrQueued, "IsModifierActiveOrQueued" }, // 4125602085
		{ &Z_Construct_UFunction_UMoverComponent_IsUsingDeferredGroupMovement, "IsUsingDeferredGroupMovement" }, // 592785329
		{ &Z_Construct_UFunction_UMoverComponent_K2_FindActiveLayeredMove, "K2_FindActiveLayeredMove" }, // 2249371848
		{ &Z_Construct_UFunction_UMoverComponent_K2_FindMovementModifier, "K2_FindMovementModifier" }, // 4038653561
		{ &Z_Construct_UFunction_UMoverComponent_K2_QueueInstantMovementEffect, "K2_QueueInstantMovementEffect" }, // 3484044637
		{ &Z_Construct_UFunction_UMoverComponent_K2_QueueLayeredMove, "K2_QueueLayeredMove" }, // 3741128757
		{ &Z_Construct_UFunction_UMoverComponent_K2_QueueMovementModifier, "K2_QueueMovementModifier" }, // 1041273875
		{ &Z_Construct_UFunction_UMoverComponent_OnBeginOverlap, "OnBeginOverlap" }, // 2919216297
		{ &Z_Construct_UFunction_UMoverComponent_PhysicsVolumeChanged, "PhysicsVolumeChanged" }, // 2195250122
		{ &Z_Construct_UFunction_UMoverComponent_QueueNextMode, "QueueNextMode" }, // 2706675760
		{ &Z_Construct_UFunction_UMoverComponent_RemoveGameplayTag, "RemoveGameplayTag" }, // 2752666487
		{ &Z_Construct_UFunction_UMoverComponent_RemoveGameplayTags, "RemoveGameplayTags" }, // 3122178673
		{ &Z_Construct_UFunction_UMoverComponent_RemoveMovementMode, "RemoveMovementMode" }, // 1186691708
		{ &Z_Construct_UFunction_UMoverComponent_SetBaseVisualComponentTransform, "SetBaseVisualComponentTransform" }, // 1236823875
		{ &Z_Construct_UFunction_UMoverComponent_SetGravityOverride, "SetGravityOverride" }, // 2044684584
		{ &Z_Construct_UFunction_UMoverComponent_SetPlanarConstraint, "SetPlanarConstraint" }, // 2419735818
		{ &Z_Construct_UFunction_UMoverComponent_SetPrimaryVisualComponent, "SetPrimaryVisualComponent" }, // 3227158026
		{ &Z_Construct_UFunction_UMoverComponent_SetUpdatedComponent, "SetUpdatedComponent" }, // 2569964360
		{ &Z_Construct_UFunction_UMoverComponent_SetUseDeferredGroupMovement, "SetUseDeferredGroupMovement" }, // 4031756210
		{ &Z_Construct_UFunction_UMoverComponent_TryGetFloorCheckHitResult, "TryGetFloorCheckHitResult" }, // 572009057
		{ &Z_Construct_UFunction_UMoverComponent_UnbindProcessGeneratedMovement, "UnbindProcessGeneratedMovement" }, // 552177592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPreSimulationTick = { "OnPreSimulationTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, OnPreSimulationTick), Z_Construct_UDelegateFunction_Mover_Mover_OnPreSimTick__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreSimulationTick_MetaData), NewProp_OnPreSimulationTick_MetaData) }; // 2395407537
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPostMovement = { "OnPostMovement", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, OnPostMovement), Z_Construct_UDelegateFunction_Mover_Mover_OnPostMovement__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostMovement_MetaData), NewProp_OnPostMovement_MetaData) }; // 4104608894
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPostSimulationTick = { "OnPostSimulationTick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, OnPostSimulationTick), Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimTick__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostSimulationTick_MetaData), NewProp_OnPostSimulationTick_MetaData) }; // 1723471091
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPostSimulationRollback = { "OnPostSimulationRollback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, OnPostSimulationRollback), Z_Construct_UDelegateFunction_Mover_Mover_OnPostSimRollback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostSimulationRollback_MetaData), NewProp_OnPostSimulationRollback_MetaData) }; // 4145113808
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnMovementModeChanged = { "OnMovementModeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, OnMovementModeChanged), Z_Construct_UDelegateFunction_Mover_Mover_OnMovementModeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMovementModeChanged_MetaData), NewProp_OnMovementModeChanged_MetaData) }; // 1045881015
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPostFinalize = { "OnPostFinalize", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, OnPostFinalize), Z_Construct_UDelegateFunction_Mover_Mover_OnPostFinalize__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostFinalize_MetaData), NewProp_OnPostFinalize_MetaData) }; // 1162329188
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_BackendClass = { "BackendClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, BackendClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackendClass_MetaData), NewProp_BackendClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementModes_ValueProp = { "MovementModes", nullptr, (EPropertyFlags)0x0106000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBaseMovementMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementModes_ValueProp_MetaData), NewProp_MovementModes_ValueProp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementModes_Key_KeyProp = { "MovementModes_Key", nullptr, (EPropertyFlags)0x0102000000080009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementModes = { "MovementModes", nullptr, (EPropertyFlags)0x011400800000001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, MovementModes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementModes_MetaData), NewProp_MovementModes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_StartingMovementMode = { "StartingMovementMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, StartingMovementMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingMovementMode_MetaData), NewProp_StartingMovementMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseMovementModeTransition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transitions_Inner_MetaData), NewProp_Transitions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transitions_MetaData), NewProp_Transitions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_PersistentSyncStateDataTypes_Inner = { "PersistentSyncStateDataTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMoverDataPersistence, METADATA_PARAMS(0, nullptr) }; // 4206042110
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_PersistentSyncStateDataTypes = { "PersistentSyncStateDataTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, PersistentSyncStateDataTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentSyncStateDataTypes_MetaData), NewProp_PersistentSyncStateDataTypes_MetaData) }; // 4206042110
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_InputProducer = { "InputProducer", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, InputProducer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputProducer_MetaData), NewProp_InputProducer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementMixer = { "MovementMixer", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, MovementMixer), Z_Construct_UClass_UMovementMixer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMixer_MetaData), NewProp_MovementMixer_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPreMovement = { "OnPreMovement", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, OnPreMovement), Z_Construct_UDelegateFunction_Mover_Mover_OnPreMovement__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreMovement_MetaData), NewProp_OnPreMovement_MetaData) }; // 2936370851
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_UpdatedComponent = { "UpdatedComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, UpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedComponent_MetaData), NewProp_UpdatedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_UpdatedCompAsPrimitive = { "UpdatedCompAsPrimitive", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, UpdatedCompAsPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedCompAsPrimitive_MetaData), NewProp_UpdatedCompAsPrimitive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_PrimaryVisualComponent = { "PrimaryVisualComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, PrimaryVisualComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryVisualComponent_MetaData), NewProp_PrimaryVisualComponent_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_BackendLiaisonComp = { "BackendLiaisonComp", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, BackendLiaisonComp), Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackendLiaisonComp_MetaData), NewProp_BackendLiaisonComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_ModeFSM = { "ModeFSM", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, ModeFSM), Z_Construct_UClass_UMovementModeStateMachine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeFSM_MetaData), NewProp_ModeFSM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_SimBlackboard = { "SimBlackboard", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, SimBlackboard), Z_Construct_UClass_UMoverBlackboard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimBlackboard_MetaData), NewProp_SimBlackboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_SharedSettings_Inner = { "SharedSettings", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSettings_Inner_MetaData), NewProp_SharedSettings_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_SharedSettings = { "SharedSettings", nullptr, (EPropertyFlags)0x0144008000010049, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, SharedSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSettings_MetaData), NewProp_SharedSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_GravityAccelOverride = { "GravityAccelOverride", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, GravityAccelOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityAccelOverride_MetaData), NewProp_GravityAccelOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_PlanarConstraint = { "PlanarConstraint", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, PlanarConstraint), Z_Construct_UScriptStruct_FPlanarConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarConstraint_MetaData), NewProp_PlanarConstraint_MetaData) }; // 2928932149
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_SmoothingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_SmoothingMode = { "SmoothingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, SmoothingMode), Z_Construct_UEnum_Mover_EMoverSmoothingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingMode_MetaData), NewProp_SmoothingMode_MetaData) }; // 2664588881
void Z_Construct_UClass_UMoverComponent_Statics::NewProp_bHasGravityOverride_SetBit(void* Obj)
{
	((UMoverComponent*)Obj)->bHasGravityOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_bHasGravityOverride = { "bHasGravityOverride", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverComponent), &Z_Construct_UClass_UMoverComponent_Statics::NewProp_bHasGravityOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasGravityOverride_MetaData), NewProp_bHasGravityOverride_MetaData) };
void Z_Construct_UClass_UMoverComponent_Statics::NewProp_bUseDeferredGroupMovement_SetBit(void* Obj)
{
	((UMoverComponent*)Obj)->bUseDeferredGroupMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_bUseDeferredGroupMovement = { "bUseDeferredGroupMovement", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverComponent), &Z_Construct_UClass_UMoverComponent_Statics::NewProp_bUseDeferredGroupMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDeferredGroupMovement_MetaData), NewProp_bUseDeferredGroupMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_WorldToGravityTransform = { "WorldToGravityTransform", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, WorldToGravityTransform), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToGravityTransform_MetaData), NewProp_WorldToGravityTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_GravityToWorldTransform = { "GravityToWorldTransform", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverComponent, GravityToWorldTransform), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityToWorldTransform_MetaData), NewProp_GravityToWorldTransform_MetaData) };
void Z_Construct_UClass_UMoverComponent_Statics::NewProp_bSupportsKinematicBasedMovement_SetBit(void* Obj)
{
	((UMoverComponent*)Obj)->bSupportsKinematicBasedMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverComponent_Statics::NewProp_bSupportsKinematicBasedMovement = { "bSupportsKinematicBasedMovement", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverComponent), &Z_Construct_UClass_UMoverComponent_Statics::NewProp_bSupportsKinematicBasedMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsKinematicBasedMovement_MetaData), NewProp_bSupportsKinematicBasedMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPreSimulationTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPostMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPostSimulationTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPostSimulationRollback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnMovementModeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPostFinalize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_BackendClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementModes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementModes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementModes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_StartingMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_Transitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_Transitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_PersistentSyncStateDataTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_PersistentSyncStateDataTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_InputProducer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_MovementMixer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_OnPreMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_UpdatedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_UpdatedCompAsPrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_PrimaryVisualComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_BackendLiaisonComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_ModeFSM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_SimBlackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_SharedSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_SharedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_GravityAccelOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_PlanarConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_SmoothingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_SmoothingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_bHasGravityOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_bUseDeferredGroupMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_WorldToGravityTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_GravityToWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverComponent_Statics::NewProp_bSupportsKinematicBasedMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverComponent_Statics::ClassParams = {
	&UMoverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoverComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverComponent()
{
	if (!Z_Registration_Info_UClass_UMoverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverComponent.OuterSingleton, Z_Construct_UClass_UMoverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverComponent);
UMoverComponent::~UMoverComponent() {}
// ********** End Class UMoverComponent ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverComponent, UMoverComponent::StaticClass, TEXT("UMoverComponent"), &Z_Registration_Info_UClass_UMoverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverComponent), 869639943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h__Script_Mover_2645101724(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
