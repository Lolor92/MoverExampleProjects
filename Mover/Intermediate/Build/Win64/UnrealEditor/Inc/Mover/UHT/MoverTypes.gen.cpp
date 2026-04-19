// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverTypes.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MOVER_API UClass* Z_Construct_UClass_UMoverDataCollectionLibrary();
MOVER_API UClass* Z_Construct_UClass_UMoverDataCollectionLibrary_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoverSmoothingMode();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoverTickDependencyOrder();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoverTickPhase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataCollection();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataPersistence();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverOnImpactParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTimeStep();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMoverTickPhase ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoverTickPhase;
static UEnum* EMoverTickPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoverTickPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoverTickPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EMoverTickPhase, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EMoverTickPhase"));
	}
	return Z_Registration_Info_UEnum_EMoverTickPhase.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EMoverTickPhase>()
{
	return EMoverTickPhase_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EMoverTickPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyState.Comment", "/** This tick is where the newest simulation state is applied to the actor and its components */" },
		{ "ApplyState.DisplayName", "ApplyState" },
		{ "ApplyState.Name", "EMoverTickPhase::ApplyState" },
		{ "ApplyState.ToolTip", "This tick is where the newest simulation state is applied to the actor and its components" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of Mover tick phases where different parts of work are being performed */" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EMoverTickPhase::Invalid" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ProduceInput.Comment", "/** This tick is where an input for the next movement step is authored */" },
		{ "ProduceInput.DisplayName", "ProduceInput" },
		{ "ProduceInput.Name", "EMoverTickPhase::ProduceInput" },
		{ "ProduceInput.ToolTip", "This tick is where an input for the next movement step is authored" },
		{ "SimulateMovement.Comment", "/** This tick is where movement based on {input, state} is simulated, to produce a new state */" },
		{ "SimulateMovement.DisplayName", "SimulateMovement" },
		{ "SimulateMovement.Name", "EMoverTickPhase::SimulateMovement" },
		{ "SimulateMovement.ToolTip", "This tick is where movement based on {input, state} is simulated, to produce a new state" },
		{ "ToolTip", "List of Mover tick phases where different parts of work are being performed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoverTickPhase::Invalid", (int64)EMoverTickPhase::Invalid },
		{ "EMoverTickPhase::ProduceInput", (int64)EMoverTickPhase::ProduceInput },
		{ "EMoverTickPhase::SimulateMovement", (int64)EMoverTickPhase::SimulateMovement },
		{ "EMoverTickPhase::ApplyState", (int64)EMoverTickPhase::ApplyState },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EMoverTickPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EMoverTickPhase",
	"EMoverTickPhase",
	Z_Construct_UEnum_Mover_EMoverTickPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoverTickPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoverTickPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EMoverTickPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EMoverTickPhase()
{
	if (!Z_Registration_Info_UEnum_EMoverTickPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoverTickPhase.InnerSingleton, Z_Construct_UEnum_Mover_EMoverTickPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoverTickPhase.InnerSingleton;
}
// ********** End Enum EMoverTickPhase *************************************************************

// ********** Begin Enum EMoverTickDependencyOrder *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoverTickDependencyOrder;
static UEnum* EMoverTickDependencyOrder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoverTickDependencyOrder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoverTickDependencyOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EMoverTickDependencyOrder, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EMoverTickDependencyOrder"));
	}
	return Z_Registration_Info_UEnum_EMoverTickDependencyOrder.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EMoverTickDependencyOrder>()
{
	return EMoverTickDependencyOrder_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EMoverTickDependencyOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "After.Name", "EMoverTickDependencyOrder::After" },
		{ "Before.Name", "EMoverTickDependencyOrder::Before" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of tick dependency order of execution relative to the Mover tick function. */" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "List of tick dependency order of execution relative to the Mover tick function." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoverTickDependencyOrder::Before", (int64)EMoverTickDependencyOrder::Before },
		{ "EMoverTickDependencyOrder::After", (int64)EMoverTickDependencyOrder::After },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EMoverTickDependencyOrder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EMoverTickDependencyOrder",
	"EMoverTickDependencyOrder",
	Z_Construct_UEnum_Mover_EMoverTickDependencyOrder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoverTickDependencyOrder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoverTickDependencyOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EMoverTickDependencyOrder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EMoverTickDependencyOrder()
{
	if (!Z_Registration_Info_UEnum_EMoverTickDependencyOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoverTickDependencyOrder.InnerSingleton, Z_Construct_UEnum_Mover_EMoverTickDependencyOrder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoverTickDependencyOrder.InnerSingleton;
}
// ********** End Enum EMoverTickDependencyOrder ***************************************************

// ********** Begin Enum EMoverSmoothingMode *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoverSmoothingMode;
static UEnum* EMoverSmoothingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoverSmoothingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoverSmoothingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EMoverSmoothingMode, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EMoverSmoothingMode"));
	}
	return Z_Registration_Info_UEnum_EMoverSmoothingMode.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EMoverSmoothingMode>()
{
	return EMoverSmoothingMode_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EMoverSmoothingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Options for how to handle smoothing frame data from the backend. Typically this is for advancing the simulation at a lower or fixed rate versus the game thread/render rate. */" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "None.Comment", "/** Smoothed frames will be ignored */" },
		{ "None.Name", "EMoverSmoothingMode::None" },
		{ "None.ToolTip", "Smoothed frames will be ignored" },
		{ "ToolTip", "Options for how to handle smoothing frame data from the backend. Typically this is for advancing the simulation at a lower or fixed rate versus the game thread/render rate." },
		{ "VisualComponentOffset.Comment", "/** Use the smoothed state data to offset the visual root component only, without smoothing the root moving component or any other state data */" },
		{ "VisualComponentOffset.Name", "EMoverSmoothingMode::VisualComponentOffset" },
		{ "VisualComponentOffset.ToolTip", "Use the smoothed state data to offset the visual root component only, without smoothing the root moving component or any other state data" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoverSmoothingMode::None", (int64)EMoverSmoothingMode::None },
		{ "EMoverSmoothingMode::VisualComponentOffset", (int64)EMoverSmoothingMode::VisualComponentOffset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EMoverSmoothingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EMoverSmoothingMode",
	"EMoverSmoothingMode",
	Z_Construct_UEnum_Mover_EMoverSmoothingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoverSmoothingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoverSmoothingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EMoverSmoothingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EMoverSmoothingMode()
{
	if (!Z_Registration_Info_UEnum_EMoverSmoothingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoverSmoothingMode.InnerSingleton, Z_Construct_UEnum_Mover_EMoverSmoothingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoverSmoothingMode.InnerSingleton;
}
// ********** End Enum EMoverSmoothingMode *********************************************************

// ********** Begin ScriptStruct FMoverOnImpactParams **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverOnImpactParams;
class UScriptStruct* FMoverOnImpactParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverOnImpactParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverOnImpactParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverOnImpactParams, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverOnImpactParams"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverOnImpactParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct to hold params for when an impact happens. This contains all of the data for impacts including what gets passed to the FMover_OnImpact delegate\n" },
		{ "DisplayName", "Impact Data" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Struct to hold params for when an impact happens. This contains all of the data for impacts including what gets passed to the FMover_OnImpact delegate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementModeName_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Name of the movement mode this actor is currently in at the time of the impact\n" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Name of the movement mode this actor is currently in at the time of the impact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// The hit result of the impact\n" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "The hit result of the impact" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttemptedMoveDelta_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// The original move that was being performed when the impact happened\n" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "The original move that was being performed when the impact happened" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MovementModeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttemptedMoveDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverOnImpactParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::NewProp_MovementModeName = { "MovementModeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverOnImpactParams, MovementModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementModeName_MetaData), NewProp_MovementModeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverOnImpactParams, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::NewProp_AttemptedMoveDelta = { "AttemptedMoveDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverOnImpactParams, AttemptedMoveDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttemptedMoveDelta_MetaData), NewProp_AttemptedMoveDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::NewProp_MovementModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::NewProp_AttemptedMoveDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverOnImpactParams",
	Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::PropPointers),
	sizeof(FMoverOnImpactParams),
	alignof(FMoverOnImpactParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverOnImpactParams()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverOnImpactParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverOnImpactParams.InnerSingleton, Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverOnImpactParams.InnerSingleton;
}
// ********** End ScriptStruct FMoverOnImpactParams ************************************************

// ********** Begin ScriptStruct FMoverTimeStep ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverTimeStep;
class UScriptStruct* FMoverTimeStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverTimeStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverTimeStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverTimeStep, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverTimeStep"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverTimeStep.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverTimeStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFrame_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// The server simulation frame this timestep is associated with\n" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "The server simulation frame this timestep is associated with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSimTimeMs_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Starting simulation time (in server simulation timespace)\n" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Starting simulation time (in server simulation timespace)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepMs_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// The delta time step for this tick\n" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "The delta time step for this tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSimTimeMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepMs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverTimeStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoverTimeStep_Statics::NewProp_ServerFrame = { "ServerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverTimeStep, ServerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFrame_MetaData), NewProp_ServerFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoverTimeStep_Statics::NewProp_BaseSimTimeMs = { "BaseSimTimeMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverTimeStep, BaseSimTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSimTimeMs_MetaData), NewProp_BaseSimTimeMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoverTimeStep_Statics::NewProp_StepMs = { "StepMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverTimeStep, StepMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepMs_MetaData), NewProp_StepMs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverTimeStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverTimeStep_Statics::NewProp_ServerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverTimeStep_Statics::NewProp_BaseSimTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverTimeStep_Statics::NewProp_StepMs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverTimeStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverTimeStep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverTimeStep",
	Z_Construct_UScriptStruct_FMoverTimeStep_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverTimeStep_Statics::PropPointers),
	sizeof(FMoverTimeStep),
	alignof(FMoverTimeStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverTimeStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverTimeStep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverTimeStep()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverTimeStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverTimeStep.InnerSingleton, Z_Construct_UScriptStruct_FMoverTimeStep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverTimeStep.InnerSingleton;
}
// ********** End ScriptStruct FMoverTimeStep ******************************************************

// ********** Begin ScriptStruct FMoverDataStructBase **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverDataStructBase;
class UScriptStruct* FMoverDataStructBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDataStructBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverDataStructBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverDataStructBase, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverDataStructBase"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverDataStructBase.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverDataStructBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Base type for all data structs used to compose Mover simulation model definition dynamically (input cmd, sync state, aux state)\n// NOTE: for simulation state data (sync/aux), derive from FMoverStateData instead \n" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Base type for all data structs used to compose Mover simulation model definition dynamically (input cmd, sync state, aux state)\nNOTE: for simulation state data (sync/aux), derive from FMoverStateData instead" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverDataStructBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverDataStructBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverDataStructBase",
	nullptr,
	0,
	sizeof(FMoverDataStructBase),
	alignof(FMoverDataStructBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverDataStructBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverDataStructBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDataStructBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverDataStructBase.InnerSingleton, Z_Construct_UScriptStruct_FMoverDataStructBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverDataStructBase.InnerSingleton;
}
// ********** End ScriptStruct FMoverDataStructBase ************************************************

// ********** Begin ScriptStruct FMoverDataCollection **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverDataCollection;
class UScriptStruct* FMoverDataCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDataCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverDataCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverDataCollection, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverDataCollection"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverDataCollection.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverDataCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Contains a group of different FMoverDataStructBase-derived data, and supports net serialization of them. Note that\n//\x09""each contained data must have a unique type.  This is to support dynamic composition of Mover simulation model\n//  definitions (input cmd, sync state, aux state).\n" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Contains a group of different FMoverDataStructBase-derived data, and supports net serialization of them. Note that\n      each contained data must have a unique type.  This is to support dynamic composition of Mover simulation model\n definitions (input cmd, sync state, aux state)." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverDataCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverDataCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverDataCollection",
	nullptr,
	0,
	sizeof(FMoverDataCollection),
	alignof(FMoverDataCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverDataCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverDataCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverDataCollection()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDataCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverDataCollection.InnerSingleton, Z_Construct_UScriptStruct_FMoverDataCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverDataCollection.InnerSingleton;
}
// ********** End ScriptStruct FMoverDataCollection ************************************************

// ********** Begin ScriptStruct FMoverDataPersistence *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverDataPersistence;
class UScriptStruct* FMoverDataPersistence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDataPersistence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverDataPersistence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverDataPersistence, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverDataPersistence"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverDataPersistence.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverDataPersistence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Info about data collection types that should always be present, and how they should propagate from one frame to the next */" },
		{ "DisplayName", "Persistent Data Settings" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Info about data collection types that should always be present, and how they should propagate from one frame to the next" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredType_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// The type that should propagate between frames\n" },
		{ "MetaStruct", "/Script/Mover.MoverDataStructBase" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "The type that should propagate between frames" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyFromPriorFrame_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// If true, values will be copied from the prior frame. Otherwise, they will be default-initialized.\n" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "If true, values will be copied from the prior frame. Otherwise, they will be default-initialized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequiredType;
	static void NewProp_bCopyFromPriorFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyFromPriorFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverDataPersistence>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::NewProp_RequiredType = { "RequiredType", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverDataPersistence, RequiredType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredType_MetaData), NewProp_RequiredType_MetaData) };
void Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::NewProp_bCopyFromPriorFrame_SetBit(void* Obj)
{
	((FMoverDataPersistence*)Obj)->bCopyFromPriorFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::NewProp_bCopyFromPriorFrame = { "bCopyFromPriorFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoverDataPersistence), &Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::NewProp_bCopyFromPriorFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyFromPriorFrame_MetaData), NewProp_bCopyFromPriorFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::NewProp_RequiredType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::NewProp_bCopyFromPriorFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MoverDataPersistence",
	Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::PropPointers),
	sizeof(FMoverDataPersistence),
	alignof(FMoverDataPersistence),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverDataPersistence()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDataPersistence.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverDataPersistence.InnerSingleton, Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverDataPersistence.InnerSingleton;
}
// ********** End ScriptStruct FMoverDataPersistence ***********************************************

// ********** Begin Class UMoverDataCollectionLibrary Function ClearDataFromCollection *************
struct Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics
{
	struct MoverDataCollectionLibrary_eventClearDataFromCollection_Parms
	{
		FMoverDataCollection Collection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover|Data" },
		{ "Comment", "/**\n\x09* Clears all data from a collection\n\x09*/" },
		{ "DisplayName", "Clear Data From Collection" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Clears all data from a collection" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataCollectionLibrary_eventClearDataFromCollection_Parms, Collection), Z_Construct_UScriptStruct_FMoverDataCollection, METADATA_PARAMS(0, nullptr) }; // 2206586376
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDataCollectionLibrary, nullptr, "ClearDataFromCollection", Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::MoverDataCollectionLibrary_eventClearDataFromCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::MoverDataCollectionLibrary_eventClearDataFromCollection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDataCollectionLibrary::execClearDataFromCollection)
{
	P_GET_STRUCT_REF(FMoverDataCollection,Z_Param_Out_Collection);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMoverDataCollectionLibrary::ClearDataFromCollection(Z_Param_Out_Collection);
	P_NATIVE_END;
}
// ********** End Class UMoverDataCollectionLibrary Function ClearDataFromCollection ***************

// ********** Begin Class UMoverDataCollectionLibrary Function K2_AddDataToCollection **************
struct Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics
{
	struct MoverDataCollectionLibrary_eventK2_AddDataToCollection_Parms
	{
		FMoverDataCollection Collection;
		int32 SourceAsRawBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Mover|Data" },
		{ "Comment", "/**\n\x09* Add a data struct to the collection, overwriting an existing one with the same type\n\x09* @param SourceAsRawBytes\x09\x09The data struct instance to add by copy, which must be a FMoverDataStructBase sub-type\n\x09*/" },
		{ "CustomStructureParam", "SourceAsRawBytes" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Add Data To Collection" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Add a data struct to the collection, overwriting an existing one with the same type\n@param SourceAsRawBytes               The data struct instance to add by copy, which must be a FMoverDataStructBase sub-type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsRawBytes_MetaData[] = {
		{ "DisplayName", "Struct To Add" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceAsRawBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataCollectionLibrary_eventK2_AddDataToCollection_Parms, Collection), Z_Construct_UScriptStruct_FMoverDataCollection, METADATA_PARAMS(0, nullptr) }; // 2206586376
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::NewProp_SourceAsRawBytes = { "SourceAsRawBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataCollectionLibrary_eventK2_AddDataToCollection_Parms, SourceAsRawBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAsRawBytes_MetaData), NewProp_SourceAsRawBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::NewProp_SourceAsRawBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDataCollectionLibrary, nullptr, "K2_AddDataToCollection", Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::MoverDataCollectionLibrary_eventK2_AddDataToCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::MoverDataCollectionLibrary_eventK2_AddDataToCollection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMoverDataCollectionLibrary Function K2_AddDataToCollection ****************

// ********** Begin Class UMoverDataCollectionLibrary Function K2_GetDataFromCollection ************
struct Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics
{
	struct MoverDataCollectionLibrary_eventK2_GetDataFromCollection_Parms
	{
		bool DidSucceed;
		FMoverDataCollection Collection;
		int32 TargetAsRawBytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Mover|Data" },
		{ "Comment", "/**\n\x09 * Retrieves data from a collection, by writing to a target instance if it contains one of the matching type.  Changes must be written back using AddDataToCollection.\n\x09 * @param DidSucceed\x09\x09\x09""Flag indicating whether data was actually written to target struct instance\n\x09 * @param TargetAsRawBytes\x09\x09The data struct instance to write to, which must be a FMoverDataStructBase sub-type\n\x09 */" },
		{ "CustomStructureParam", "TargetAsRawBytes" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Get Data From Collection" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Retrieves data from a collection, by writing to a target instance if it contains one of the matching type.  Changes must be written back using AddDataToCollection.\n@param DidSucceed                    Flag indicating whether data was actually written to target struct instance\n@param TargetAsRawBytes              The data struct instance to write to, which must be a FMoverDataStructBase sub-type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsRawBytes_MetaData[] = {
		{ "DisplayName", "Out Struct" },
	};
#endif // WITH_METADATA
	static void NewProp_DidSucceed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DidSucceed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetAsRawBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::NewProp_DidSucceed_SetBit(void* Obj)
{
	((MoverDataCollectionLibrary_eventK2_GetDataFromCollection_Parms*)Obj)->DidSucceed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::NewProp_DidSucceed = { "DidSucceed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverDataCollectionLibrary_eventK2_GetDataFromCollection_Parms), &Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::NewProp_DidSucceed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataCollectionLibrary_eventK2_GetDataFromCollection_Parms, Collection), Z_Construct_UScriptStruct_FMoverDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 2206586376
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::NewProp_TargetAsRawBytes = { "TargetAsRawBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataCollectionLibrary_eventK2_GetDataFromCollection_Parms, TargetAsRawBytes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAsRawBytes_MetaData), NewProp_TargetAsRawBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::NewProp_DidSucceed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::NewProp_TargetAsRawBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDataCollectionLibrary, nullptr, "K2_GetDataFromCollection", Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::MoverDataCollectionLibrary_eventK2_GetDataFromCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::MoverDataCollectionLibrary_eventK2_GetDataFromCollection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMoverDataCollectionLibrary Function K2_GetDataFromCollection **************

// ********** Begin Class UMoverDataCollectionLibrary **********************************************
void UMoverDataCollectionLibrary::StaticRegisterNativesUMoverDataCollectionLibrary()
{
	UClass* Class = UMoverDataCollectionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearDataFromCollection", &UMoverDataCollectionLibrary::execClearDataFromCollection },
		{ "K2_AddDataToCollection", &UMoverDataCollectionLibrary::execK2_AddDataToCollection },
		{ "K2_GetDataFromCollection", &UMoverDataCollectionLibrary::execK2_GetDataFromCollection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverDataCollectionLibrary;
UClass* UMoverDataCollectionLibrary::GetPrivateStaticClass()
{
	using TClass = UMoverDataCollectionLibrary;
	if (!Z_Registration_Info_UClass_UMoverDataCollectionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverDataCollectionLibrary"),
			Z_Registration_Info_UClass_UMoverDataCollectionLibrary.InnerSingleton,
			StaticRegisterNativesUMoverDataCollectionLibrary,
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
	return Z_Registration_Info_UClass_UMoverDataCollectionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverDataCollectionLibrary_NoRegister()
{
	return UMoverDataCollectionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverDataCollectionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Blueprint helper functions for working with a Mover data collection\n" },
		{ "IncludePath", "MoverTypes.h" },
		{ "ModuleRelativePath", "Public/MoverTypes.h" },
		{ "ToolTip", "Blueprint helper functions for working with a Mover data collection" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverDataCollectionLibrary_ClearDataFromCollection, "ClearDataFromCollection" }, // 4180466307
		{ &Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_AddDataToCollection, "K2_AddDataToCollection" }, // 2049725877
		{ &Z_Construct_UFunction_UMoverDataCollectionLibrary_K2_GetDataFromCollection, "K2_GetDataFromCollection" }, // 1019468186
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverDataCollectionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverDataCollectionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDataCollectionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverDataCollectionLibrary_Statics::ClassParams = {
	&UMoverDataCollectionLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDataCollectionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverDataCollectionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverDataCollectionLibrary()
{
	if (!Z_Registration_Info_UClass_UMoverDataCollectionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverDataCollectionLibrary.OuterSingleton, Z_Construct_UClass_UMoverDataCollectionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverDataCollectionLibrary.OuterSingleton;
}
UMoverDataCollectionLibrary::UMoverDataCollectionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverDataCollectionLibrary);
UMoverDataCollectionLibrary::~UMoverDataCollectionLibrary() {}
// ********** End Class UMoverDataCollectionLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoverTickPhase_StaticEnum, TEXT("EMoverTickPhase"), &Z_Registration_Info_UEnum_EMoverTickPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1977002097U) },
		{ EMoverTickDependencyOrder_StaticEnum, TEXT("EMoverTickDependencyOrder"), &Z_Registration_Info_UEnum_EMoverTickDependencyOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1164630601U) },
		{ EMoverSmoothingMode_StaticEnum, TEXT("EMoverSmoothingMode"), &Z_Registration_Info_UEnum_EMoverSmoothingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2664588881U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMoverOnImpactParams::StaticStruct, Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics::NewStructOps, TEXT("MoverOnImpactParams"), &Z_Registration_Info_UScriptStruct_FMoverOnImpactParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverOnImpactParams), 1206355831U) },
		{ FMoverTimeStep::StaticStruct, Z_Construct_UScriptStruct_FMoverTimeStep_Statics::NewStructOps, TEXT("MoverTimeStep"), &Z_Registration_Info_UScriptStruct_FMoverTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverTimeStep), 2334791403U) },
		{ FMoverDataStructBase::StaticStruct, Z_Construct_UScriptStruct_FMoverDataStructBase_Statics::NewStructOps, TEXT("MoverDataStructBase"), &Z_Registration_Info_UScriptStruct_FMoverDataStructBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverDataStructBase), 4045372330U) },
		{ FMoverDataCollection::StaticStruct, Z_Construct_UScriptStruct_FMoverDataCollection_Statics::NewStructOps, TEXT("MoverDataCollection"), &Z_Registration_Info_UScriptStruct_FMoverDataCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverDataCollection), 2206586376U) },
		{ FMoverDataPersistence::StaticStruct, Z_Construct_UScriptStruct_FMoverDataPersistence_Statics::NewStructOps, TEXT("MoverDataPersistence"), &Z_Registration_Info_UScriptStruct_FMoverDataPersistence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverDataPersistence), 4206042110U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverDataCollectionLibrary, UMoverDataCollectionLibrary::StaticClass, TEXT("UMoverDataCollectionLibrary"), &Z_Registration_Info_UClass_UMoverDataCollectionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverDataCollectionLibrary), 2329492753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h__Script_Mover_2395492786(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h__Script_Mover_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
