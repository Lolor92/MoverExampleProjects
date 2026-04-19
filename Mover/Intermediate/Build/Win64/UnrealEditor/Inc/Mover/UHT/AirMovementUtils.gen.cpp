// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/AirMovementUtils.h"
#include "Engine/HitResult.h"
#include "MoveLibrary/FloorQueryUtils.h"
#include "MoveLibrary/MovementRecord.h"
#include "MoveLibrary/MovementUtilsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAirMovementUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MOVER_API UClass* Z_Construct_UClass_UAirMovementUtils();
MOVER_API UClass* Z_Construct_UClass_UAirMovementUtils_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoveInputType();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FFloorCheckResult();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FFreeMoveParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementRecord();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovingComponentSet();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FProposedMove();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFreeMoveParams ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFreeMoveParams;
class UScriptStruct* FFreeMoveParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFreeMoveParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFreeMoveParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFreeMoveParams, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("FreeMoveParams"));
	}
	return Z_Registration_Info_UScriptStruct_FFreeMoveParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFreeMoveParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input parameters for controlled free movement function\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
		{ "ToolTip", "Input parameters for controlled free movement function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputType_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationIntent_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorOrientation_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningBoost_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningRate_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToGravityQuat_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAccelerationForVelocityMove_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveInputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrientationIntent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PriorVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PriorOrientation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToGravityQuat;
	static void NewProp_bUseAccelerationForVelocityMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAccelerationForVelocityMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFreeMoveParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_MoveInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_MoveInputType = { "MoveInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, MoveInputType), Z_Construct_UEnum_Mover_EMoveInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputType_MetaData), NewProp_MoveInputType_MetaData) }; // 3894675629
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, MoveInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_OrientationIntent = { "OrientationIntent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, OrientationIntent), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationIntent_MetaData), NewProp_OrientationIntent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_PriorVelocity = { "PriorVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, PriorVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorVelocity_MetaData), NewProp_PriorVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_PriorOrientation = { "PriorOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, PriorOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorOrientation_MetaData), NewProp_PriorOrientation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, Deceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deceleration_MetaData), NewProp_Deceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_TurningBoost = { "TurningBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, TurningBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningBoost_MetaData), NewProp_TurningBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_TurningRate = { "TurningRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, TurningRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningRate_MetaData), NewProp_TurningRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, DeltaSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaSeconds_MetaData), NewProp_DeltaSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_WorldToGravityQuat = { "WorldToGravityQuat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFreeMoveParams, WorldToGravityQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToGravityQuat_MetaData), NewProp_WorldToGravityQuat_MetaData) };
void Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_bUseAccelerationForVelocityMove_SetBit(void* Obj)
{
	((FFreeMoveParams*)Obj)->bUseAccelerationForVelocityMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_bUseAccelerationForVelocityMove = { "bUseAccelerationForVelocityMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFreeMoveParams), &Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_bUseAccelerationForVelocityMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAccelerationForVelocityMove_MetaData), NewProp_bUseAccelerationForVelocityMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFreeMoveParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_MoveInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_MoveInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_MoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_OrientationIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_PriorVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_PriorOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_Deceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_TurningBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_TurningRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_WorldToGravityQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewProp_bUseAccelerationForVelocityMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeMoveParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFreeMoveParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"FreeMoveParams",
	Z_Construct_UScriptStruct_FFreeMoveParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeMoveParams_Statics::PropPointers),
	sizeof(FFreeMoveParams),
	alignof(FFreeMoveParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeMoveParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFreeMoveParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFreeMoveParams()
{
	if (!Z_Registration_Info_UScriptStruct_FFreeMoveParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFreeMoveParams.InnerSingleton, Z_Construct_UScriptStruct_FFreeMoveParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFreeMoveParams.InnerSingleton;
}
// ********** End ScriptStruct FFreeMoveParams *****************************************************

// ********** Begin Class UAirMovementUtils Function ComputeControlledFreeMove *********************
struct Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics
{
	struct AirMovementUtils_eventComputeControlledFreeMove_Parms
	{
		FFreeMoveParams InParams;
		FProposedMove ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Generate a new movement based on move/orientation intents and the prior state, unconstrained like when flying */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
		{ "ToolTip", "Generate a new movement based on move/orientation intents and the prior state, unconstrained like when flying" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventComputeControlledFreeMove_Parms, InParams), Z_Construct_UScriptStruct_FFreeMoveParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParams_MetaData), NewProp_InParams_MetaData) }; // 2057348714
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventComputeControlledFreeMove_Parms, ReturnValue), Z_Construct_UScriptStruct_FProposedMove, METADATA_PARAMS(0, nullptr) }; // 545505266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::NewProp_InParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAirMovementUtils, nullptr, "ComputeControlledFreeMove", Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::AirMovementUtils_eventComputeControlledFreeMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::AirMovementUtils_eventComputeControlledFreeMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirMovementUtils::execComputeControlledFreeMove)
{
	P_GET_STRUCT_REF(FFreeMoveParams,Z_Param_Out_InParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProposedMove*)Z_Param__Result=UAirMovementUtils::ComputeControlledFreeMove(Z_Param_Out_InParams);
	P_NATIVE_END;
}
// ********** End Class UAirMovementUtils Function ComputeControlledFreeMove ***********************

// ********** Begin Class UAirMovementUtils Function IsValidLandingSpot ****************************
struct Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics
{
	struct AirMovementUtils_eventIsValidLandingSpot_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Location;
		FHitResult Hit;
		float FloorSweepDistance;
		float MaxWalkSlopeCosine;
		FFloorCheckResult OutFloorResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Checks if a hit result represents a walkable location that an actor can land on\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
		{ "ToolTip", "Checks if a hit result represents a walkable location that an actor can land on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSweepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSlopeCosine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutFloorResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventIsValidLandingSpot_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventIsValidLandingSpot_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventIsValidLandingSpot_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_FloorSweepDistance = { "FloorSweepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventIsValidLandingSpot_Parms, FloorSweepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_MaxWalkSlopeCosine = { "MaxWalkSlopeCosine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventIsValidLandingSpot_Parms, MaxWalkSlopeCosine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_OutFloorResult = { "OutFloorResult", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventIsValidLandingSpot_Parms, OutFloorResult), Z_Construct_UScriptStruct_FFloorCheckResult, METADATA_PARAMS(0, nullptr) }; // 375218055
void Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AirMovementUtils_eventIsValidLandingSpot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AirMovementUtils_eventIsValidLandingSpot_Parms), &Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_FloorSweepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_MaxWalkSlopeCosine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_OutFloorResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAirMovementUtils, nullptr, "IsValidLandingSpot", Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::AirMovementUtils_eventIsValidLandingSpot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::AirMovementUtils_eventIsValidLandingSpot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirMovementUtils::execIsValidLandingSpot)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FloorSweepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWalkSlopeCosine);
	P_GET_STRUCT_REF(FFloorCheckResult,Z_Param_Out_OutFloorResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAirMovementUtils::IsValidLandingSpot(Z_Param_Out_MovingComps,Z_Param_Out_Location,Z_Param_Out_Hit,Z_Param_FloorSweepDistance,Z_Param_MaxWalkSlopeCosine,Z_Param_Out_OutFloorResult);
	P_NATIVE_END;
}
// ********** End Class UAirMovementUtils Function IsValidLandingSpot ******************************

// ********** Begin Class UAirMovementUtils Function TestFallingMoveAlongHitSurface ****************
struct Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics
{
	struct AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms
	{
		FMovingComponentSet MovingComps;
		FVector OriginalMoveDelta;
		FVector LocationAtHit;
		FQuat TargetRotation;
		bool bHandleImpact;
		float FloorSweepDistance;
		float MaxWalkSlopeCosine;
		FHitResult InOutHit;
		FFloorCheckResult OutFloorResult;
		FMovementRecord InOutMoveRecord;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Tests potential movement of a component falling/sliding along a surface, while checking for landing on a walkable surface. Intended for use while falling. \n\x09 * Modifies InOutHit with final movement hit data\n\x09 * Sets OutFloorResult with any found walkable surface info\n     * Appends to InOutMoveRecord with any movement substeps\n\x09 * Returns the percent of time applied, with 0.0 meaning no movement would occur. \n\x09 */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
		{ "ToolTip", "Tests potential movement of a component falling/sliding along a surface, while checking for landing on a walkable surface. Intended for use while falling.\nModifies InOutHit with final movement hit data\nSets OutFloorResult with any found walkable surface info\nAppends to InOutMoveRecord with any movement substeps\nReturns the percent of time applied, with 0.0 meaning no movement would occur." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMoveDelta_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationAtHit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalMoveDelta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationAtHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static void NewProp_bHandleImpact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleImpact;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSweepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSlopeCosine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutFloorResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutMoveRecord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_OriginalMoveDelta = { "OriginalMoveDelta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, OriginalMoveDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMoveDelta_MetaData), NewProp_OriginalMoveDelta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_LocationAtHit = { "LocationAtHit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, LocationAtHit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationAtHit_MetaData), NewProp_LocationAtHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, TargetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
void Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_bHandleImpact_SetBit(void* Obj)
{
	((AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms*)Obj)->bHandleImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_bHandleImpact = { "bHandleImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms), &Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_bHandleImpact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_FloorSweepDistance = { "FloorSweepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, FloorSweepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_MaxWalkSlopeCosine = { "MaxWalkSlopeCosine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, MaxWalkSlopeCosine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_InOutHit = { "InOutHit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, InOutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_OutFloorResult = { "OutFloorResult", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, OutFloorResult), Z_Construct_UScriptStruct_FFloorCheckResult, METADATA_PARAMS(0, nullptr) }; // 375218055
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_InOutMoveRecord = { "InOutMoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, InOutMoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_OriginalMoveDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_LocationAtHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_bHandleImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_FloorSweepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_MaxWalkSlopeCosine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_InOutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_OutFloorResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_InOutMoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAirMovementUtils, nullptr, "TestFallingMoveAlongHitSurface", Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::AirMovementUtils_eventTestFallingMoveAlongHitSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirMovementUtils::execTestFallingMoveAlongHitSurface)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginalMoveDelta);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationAtHit);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_TargetRotation);
	P_GET_UBOOL(Z_Param_bHandleImpact);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FloorSweepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWalkSlopeCosine);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_InOutHit);
	P_GET_STRUCT_REF(FFloorCheckResult,Z_Param_Out_OutFloorResult);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_InOutMoveRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAirMovementUtils::TestFallingMoveAlongHitSurface(Z_Param_Out_MovingComps,Z_Param_Out_OriginalMoveDelta,Z_Param_Out_LocationAtHit,Z_Param_Out_TargetRotation,Z_Param_bHandleImpact,Z_Param_FloorSweepDistance,Z_Param_MaxWalkSlopeCosine,Z_Param_Out_InOutHit,Z_Param_Out_OutFloorResult,Z_Param_Out_InOutMoveRecord);
	P_NATIVE_END;
}
// ********** End Class UAirMovementUtils Function TestFallingMoveAlongHitSurface ******************

// ********** Begin Class UAirMovementUtils Function TryMoveToFallAlongSurface *********************
struct Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics
{
	struct AirMovementUtils_eventTryMoveToFallAlongSurface_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Delta;
		float PctOfDeltaToMove;
		FQuat Rotation;
		FVector Normal;
		FHitResult Hit;
		bool bHandleImpact;
		float FloorSweepDistance;
		float MaxWalkSlopeCosine;
		FFloorCheckResult OutFloorResult;
		FMovementRecord MoveRecord;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Attempts to move a component along a surface, while checking for landing on a walkable surface. Intended for use while falling. Returns the percent of time applied, with 0.0 meaning no movement occurred. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
		{ "ToolTip", "Attempts to move a component along a surface, while checking for landing on a walkable surface. Intended for use while falling. Returns the percent of time applied, with 0.0 meaning no movement occurred." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PctOfDeltaToMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static void NewProp_bHandleImpact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleImpact;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSweepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSlopeCosine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutFloorResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveRecord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_PctOfDeltaToMove = { "PctOfDeltaToMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, PctOfDeltaToMove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
void Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_bHandleImpact_SetBit(void* Obj)
{
	((AirMovementUtils_eventTryMoveToFallAlongSurface_Parms*)Obj)->bHandleImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_bHandleImpact = { "bHandleImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms), &Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_bHandleImpact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_FloorSweepDistance = { "FloorSweepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, FloorSweepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_MaxWalkSlopeCosine = { "MaxWalkSlopeCosine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, MaxWalkSlopeCosine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_OutFloorResult = { "OutFloorResult", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, OutFloorResult), Z_Construct_UScriptStruct_FFloorCheckResult, METADATA_PARAMS(0, nullptr) }; // 375218055
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_MoveRecord = { "MoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, MoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirMovementUtils_eventTryMoveToFallAlongSurface_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_PctOfDeltaToMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_bHandleImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_FloorSweepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_MaxWalkSlopeCosine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_OutFloorResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_MoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAirMovementUtils, nullptr, "TryMoveToFallAlongSurface", Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::AirMovementUtils_eventTryMoveToFallAlongSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::AirMovementUtils_eventTryMoveToFallAlongSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirMovementUtils::execTryMoveToFallAlongSurface)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PctOfDeltaToMove);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_UBOOL(Z_Param_bHandleImpact);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FloorSweepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWalkSlopeCosine);
	P_GET_STRUCT_REF(FFloorCheckResult,Z_Param_Out_OutFloorResult);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_MoveRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAirMovementUtils::TryMoveToFallAlongSurface(Z_Param_Out_MovingComps,Z_Param_Out_Delta,Z_Param_PctOfDeltaToMove,Z_Param_Rotation,Z_Param_Out_Normal,Z_Param_Out_Hit,Z_Param_bHandleImpact,Z_Param_FloorSweepDistance,Z_Param_MaxWalkSlopeCosine,Z_Param_Out_OutFloorResult,Z_Param_Out_MoveRecord);
	P_NATIVE_END;
}
// ********** End Class UAirMovementUtils Function TryMoveToFallAlongSurface ***********************

// ********** Begin Class UAirMovementUtils ********************************************************
void UAirMovementUtils::StaticRegisterNativesUAirMovementUtils()
{
	UClass* Class = UAirMovementUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputeControlledFreeMove", &UAirMovementUtils::execComputeControlledFreeMove },
		{ "IsValidLandingSpot", &UAirMovementUtils::execIsValidLandingSpot },
		{ "TestFallingMoveAlongHitSurface", &UAirMovementUtils::execTestFallingMoveAlongHitSurface },
		{ "TryMoveToFallAlongSurface", &UAirMovementUtils::execTryMoveToFallAlongSurface },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAirMovementUtils;
UClass* UAirMovementUtils::GetPrivateStaticClass()
{
	using TClass = UAirMovementUtils;
	if (!Z_Registration_Info_UClass_UAirMovementUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AirMovementUtils"),
			Z_Registration_Info_UClass_UAirMovementUtils.InnerSingleton,
			StaticRegisterNativesUAirMovementUtils,
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
	return Z_Registration_Info_UClass_UAirMovementUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UAirMovementUtils_NoRegister()
{
	return UAirMovementUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAirMovementUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AirMovementUtils: a collection of stateless static BP-accessible functions for a variety of air movement-related operations\n */" },
		{ "IncludePath", "MoveLibrary/AirMovementUtils.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AirMovementUtils.h" },
		{ "ToolTip", "AirMovementUtils: a collection of stateless static BP-accessible functions for a variety of air movement-related operations" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAirMovementUtils_ComputeControlledFreeMove, "ComputeControlledFreeMove" }, // 2385511464
		{ &Z_Construct_UFunction_UAirMovementUtils_IsValidLandingSpot, "IsValidLandingSpot" }, // 90740974
		{ &Z_Construct_UFunction_UAirMovementUtils_TestFallingMoveAlongHitSurface, "TestFallingMoveAlongHitSurface" }, // 2738706197
		{ &Z_Construct_UFunction_UAirMovementUtils_TryMoveToFallAlongSurface, "TryMoveToFallAlongSurface" }, // 1577964924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAirMovementUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAirMovementUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAirMovementUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAirMovementUtils_Statics::ClassParams = {
	&UAirMovementUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAirMovementUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UAirMovementUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAirMovementUtils()
{
	if (!Z_Registration_Info_UClass_UAirMovementUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAirMovementUtils.OuterSingleton, Z_Construct_UClass_UAirMovementUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAirMovementUtils.OuterSingleton;
}
UAirMovementUtils::UAirMovementUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAirMovementUtils);
UAirMovementUtils::~UAirMovementUtils() {}
// ********** End Class UAirMovementUtils **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFreeMoveParams::StaticStruct, Z_Construct_UScriptStruct_FFreeMoveParams_Statics::NewStructOps, TEXT("FreeMoveParams"), &Z_Registration_Info_UScriptStruct_FFreeMoveParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFreeMoveParams), 2057348714U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAirMovementUtils, UAirMovementUtils::StaticClass, TEXT("UAirMovementUtils"), &Z_Registration_Info_UClass_UAirMovementUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAirMovementUtils), 3899257425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h__Script_Mover_50453252(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
