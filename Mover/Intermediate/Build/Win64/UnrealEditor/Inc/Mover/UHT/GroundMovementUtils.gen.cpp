// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/GroundMovementUtils.h"
#include "Engine/HitResult.h"
#include "MoveLibrary/FloorQueryUtils.h"
#include "MoveLibrary/MovementRecord.h"
#include "MoveLibrary/MovementUtilsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGroundMovementUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MOVER_API UClass* Z_Construct_UClass_UGroundMovementUtils();
MOVER_API UClass* Z_Construct_UClass_UGroundMovementUtils_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoveInputType();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FFloorCheckResult();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FGroundMoveParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementRecord();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovingComponentSet();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FProposedMove();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FGroundMoveParams *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGroundMoveParams;
class UScriptStruct* FGroundMoveParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGroundMoveParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGroundMoveParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroundMoveParams, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("GroundMoveParams"));
	}
	return Z_Registration_Info_UScriptStruct_FGroundMoveParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGroundMoveParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input parameters for controlled ground movement function\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
		{ "ToolTip", "Input parameters for controlled ground movement function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputType_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationIntent_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorOrientation_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningRate_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningBoost_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundNormal_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToGravityQuat_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAccelerationForVelocityMove_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningBoost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToGravityQuat;
	static void NewProp_bUseAccelerationForVelocityMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAccelerationForVelocityMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroundMoveParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_MoveInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_MoveInputType = { "MoveInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, MoveInputType), Z_Construct_UEnum_Mover_EMoveInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputType_MetaData), NewProp_MoveInputType_MetaData) }; // 3894675629
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, MoveInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_OrientationIntent = { "OrientationIntent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, OrientationIntent), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationIntent_MetaData), NewProp_OrientationIntent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_PriorVelocity = { "PriorVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, PriorVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorVelocity_MetaData), NewProp_PriorVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_PriorOrientation = { "PriorOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, PriorOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorOrientation_MetaData), NewProp_PriorOrientation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, Deceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deceleration_MetaData), NewProp_Deceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_TurningRate = { "TurningRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, TurningRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningRate_MetaData), NewProp_TurningRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_TurningBoost = { "TurningBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, TurningBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningBoost_MetaData), NewProp_TurningBoost_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_GroundNormal = { "GroundNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, GroundNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundNormal_MetaData), NewProp_GroundNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, DeltaSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaSeconds_MetaData), NewProp_DeltaSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDirection_MetaData), NewProp_UpDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_WorldToGravityQuat = { "WorldToGravityQuat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroundMoveParams, WorldToGravityQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToGravityQuat_MetaData), NewProp_WorldToGravityQuat_MetaData) };
void Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_bUseAccelerationForVelocityMove_SetBit(void* Obj)
{
	((FGroundMoveParams*)Obj)->bUseAccelerationForVelocityMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_bUseAccelerationForVelocityMove = { "bUseAccelerationForVelocityMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGroundMoveParams), &Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_bUseAccelerationForVelocityMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAccelerationForVelocityMove_MetaData), NewProp_bUseAccelerationForVelocityMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroundMoveParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_MoveInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_MoveInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_MoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_OrientationIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_PriorVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_PriorOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_Deceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_TurningRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_TurningBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_GroundNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_UpDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_WorldToGravityQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewProp_bUseAccelerationForVelocityMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMoveParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroundMoveParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"GroundMoveParams",
	Z_Construct_UScriptStruct_FGroundMoveParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMoveParams_Statics::PropPointers),
	sizeof(FGroundMoveParams),
	alignof(FGroundMoveParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroundMoveParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGroundMoveParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGroundMoveParams()
{
	if (!Z_Registration_Info_UScriptStruct_FGroundMoveParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGroundMoveParams.InnerSingleton, Z_Construct_UScriptStruct_FGroundMoveParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGroundMoveParams.InnerSingleton;
}
// ********** End ScriptStruct FGroundMoveParams ***************************************************

// ********** Begin Class UGroundMovementUtils Function CanStepUpOnHitSurface **********************
struct Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics
{
	struct GroundMovementUtils_eventCanStepUpOnHitSurface_Parms
	{
		FHitResult Hit;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventCanStepUpOnHitSurface_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
void Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GroundMovementUtils_eventCanStepUpOnHitSurface_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroundMovementUtils_eventCanStepUpOnHitSurface_Parms), &Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGroundMovementUtils, nullptr, "CanStepUpOnHitSurface", Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::GroundMovementUtils_eventCanStepUpOnHitSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::GroundMovementUtils_eventCanStepUpOnHitSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundMovementUtils::execCanStepUpOnHitSurface)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGroundMovementUtils::CanStepUpOnHitSurface(Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class UGroundMovementUtils Function CanStepUpOnHitSurface ************************

// ********** Begin Class UGroundMovementUtils Function ComputeControlledGroundMove ****************
struct Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics
{
	struct GroundMovementUtils_eventComputeControlledGroundMove_Parms
	{
		FGroundMoveParams InParams;
		FProposedMove ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Generate a new movement based on move/orientation intents and the prior state, constrained to the ground movement plane. Also applies deceleration friction as necessary. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
		{ "ToolTip", "Generate a new movement based on move/orientation intents and the prior state, constrained to the ground movement plane. Also applies deceleration friction as necessary." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventComputeControlledGroundMove_Parms, InParams), Z_Construct_UScriptStruct_FGroundMoveParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParams_MetaData), NewProp_InParams_MetaData) }; // 4053050459
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventComputeControlledGroundMove_Parms, ReturnValue), Z_Construct_UScriptStruct_FProposedMove, METADATA_PARAMS(0, nullptr) }; // 545505266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::NewProp_InParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGroundMovementUtils, nullptr, "ComputeControlledGroundMove", Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::GroundMovementUtils_eventComputeControlledGroundMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::GroundMovementUtils_eventComputeControlledGroundMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundMovementUtils::execComputeControlledGroundMove)
{
	P_GET_STRUCT_REF(FGroundMoveParams,Z_Param_Out_InParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProposedMove*)Z_Param__Result=UGroundMovementUtils::ComputeControlledGroundMove(Z_Param_Out_InParams);
	P_NATIVE_END;
}
// ********** End Class UGroundMovementUtils Function ComputeControlledGroundMove ******************

// ********** Begin Class UGroundMovementUtils Function ComputeDeflectedMoveOntoRamp ***************
struct Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics
{
	struct GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms
	{
		FVector OrigMoveDelta;
		FVector UpDirection;
		FHitResult RampHitResult;
		float MaxWalkSlopeCosine;
		bool bHitFromLineTrace;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Used to change a movement to be along a ramp's surface, typically to prevent slow movement when running up/down a ramp */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
		{ "ToolTip", "Used to change a movement to be along a ramp's surface, typically to prevent slow movement when running up/down a ramp" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrigMoveDelta_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RampHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitFromLineTrace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrigMoveDelta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RampHitResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSlopeCosine;
	static void NewProp_bHitFromLineTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitFromLineTrace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_OrigMoveDelta = { "OrigMoveDelta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms, OrigMoveDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrigMoveDelta_MetaData), NewProp_OrigMoveDelta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDirection_MetaData), NewProp_UpDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_RampHitResult = { "RampHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms, RampHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RampHitResult_MetaData), NewProp_RampHitResult_MetaData) }; // 267591329
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_MaxWalkSlopeCosine = { "MaxWalkSlopeCosine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms, MaxWalkSlopeCosine), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_bHitFromLineTrace_SetBit(void* Obj)
{
	((GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms*)Obj)->bHitFromLineTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_bHitFromLineTrace = { "bHitFromLineTrace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms), &Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_bHitFromLineTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitFromLineTrace_MetaData), NewProp_bHitFromLineTrace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_OrigMoveDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_UpDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_RampHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_MaxWalkSlopeCosine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_bHitFromLineTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGroundMovementUtils, nullptr, "ComputeDeflectedMoveOntoRamp", Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::GroundMovementUtils_eventComputeDeflectedMoveOntoRamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundMovementUtils::execComputeDeflectedMoveOntoRamp)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OrigMoveDelta);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_UpDirection);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_RampHitResult);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWalkSlopeCosine);
	P_GET_UBOOL(Z_Param_bHitFromLineTrace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGroundMovementUtils::ComputeDeflectedMoveOntoRamp(Z_Param_Out_OrigMoveDelta,Z_Param_Out_UpDirection,Z_Param_Out_RampHitResult,Z_Param_MaxWalkSlopeCosine,Z_Param_bHitFromLineTrace);
	P_NATIVE_END;
}
// ********** End Class UGroundMovementUtils Function ComputeDeflectedMoveOntoRamp *****************

// ********** Begin Class UGroundMovementUtils Function TestGroundedMoveAlongHitSurface ************
struct Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics
{
	struct GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms
	{
		FMovingComponentSet MovingComps;
		FVector OriginalMoveDelta;
		FVector LocationAtHit;
		FQuat TargetRotation;
		bool bHandleImpact;
		float MaxStepHeight;
		float MaxWalkSlopeCosine;
		FHitResult InOutHit;
		FMovementRecord InOutMoveRecord;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Tests a potential movement along a walkable surface. \n\x09 * Modifies InOutHit with final movement hit data\n     * Appends to InOutMoveRecord with any movement substeps\n\x09 * Returns the percent of time applied, with 0.0 meaning no movement would occur. \n\x09 */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
		{ "ToolTip", "Tests a potential movement along a walkable surface.\nModifies InOutHit with final movement hit data\nAppends to InOutMoveRecord with any movement substeps\nReturns the percent of time applied, with 0.0 meaning no movement would occur." },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSlopeCosine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutMoveRecord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_OriginalMoveDelta = { "OriginalMoveDelta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms, OriginalMoveDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMoveDelta_MetaData), NewProp_OriginalMoveDelta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_LocationAtHit = { "LocationAtHit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms, LocationAtHit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationAtHit_MetaData), NewProp_LocationAtHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms, TargetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
void Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_bHandleImpact_SetBit(void* Obj)
{
	((GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms*)Obj)->bHandleImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_bHandleImpact = { "bHandleImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms), &Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_bHandleImpact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_MaxStepHeight = { "MaxStepHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms, MaxStepHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_MaxWalkSlopeCosine = { "MaxWalkSlopeCosine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms, MaxWalkSlopeCosine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_InOutHit = { "InOutHit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms, InOutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_InOutMoveRecord = { "InOutMoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms, InOutMoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_OriginalMoveDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_LocationAtHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_bHandleImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_MaxStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_MaxWalkSlopeCosine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_InOutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_InOutMoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGroundMovementUtils, nullptr, "TestGroundedMoveAlongHitSurface", Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::GroundMovementUtils_eventTestGroundedMoveAlongHitSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundMovementUtils::execTestGroundedMoveAlongHitSurface)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginalMoveDelta);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationAtHit);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_TargetRotation);
	P_GET_UBOOL(Z_Param_bHandleImpact);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStepHeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWalkSlopeCosine);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_InOutHit);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_InOutMoveRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGroundMovementUtils::TestGroundedMoveAlongHitSurface(Z_Param_Out_MovingComps,Z_Param_Out_OriginalMoveDelta,Z_Param_Out_LocationAtHit,Z_Param_Out_TargetRotation,Z_Param_bHandleImpact,Z_Param_MaxStepHeight,Z_Param_MaxWalkSlopeCosine,Z_Param_Out_InOutHit,Z_Param_Out_InOutMoveRecord);
	P_NATIVE_END;
}
// ********** End Class UGroundMovementUtils Function TestGroundedMoveAlongHitSurface **************

// ********** Begin Class UGroundMovementUtils Function TestMoveToAdjustToFloor ********************
struct Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics
{
	struct GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Location;
		FQuat Rotation;
		float MaxWalkSlopeCosine;
		FFloorCheckResult InOutCurrentFloor;
		FMovementRecord InOutMoveRecord;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Tests potential movement of a component up/down to adjust to a walkable floor. Intended for use while performing ground movement. \n\x09 * Modifies InOutCurrentFloor to account for adjustments, if any was made\n     * Appends to InOutMoveRecord with any movement substeps\n\x09 * Returns new location, including any adjustment if it was made\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
		{ "ToolTip", "Tests potential movement of a component up/down to adjust to a walkable floor. Intended for use while performing ground movement.\nModifies InOutCurrentFloor to account for adjustments, if any was made\nAppends to InOutMoveRecord with any movement substeps\nReturns new location, including any adjustment if it was made" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSlopeCosine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutCurrentFloor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutMoveRecord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_MaxWalkSlopeCosine = { "MaxWalkSlopeCosine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms, MaxWalkSlopeCosine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_InOutCurrentFloor = { "InOutCurrentFloor", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms, InOutCurrentFloor), Z_Construct_UScriptStruct_FFloorCheckResult, METADATA_PARAMS(0, nullptr) }; // 375218055
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_InOutMoveRecord = { "InOutMoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms, InOutMoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_MaxWalkSlopeCosine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_InOutCurrentFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_InOutMoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGroundMovementUtils, nullptr, "TestMoveToAdjustToFloor", Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::GroundMovementUtils_eventTestMoveToAdjustToFloor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundMovementUtils::execTestMoveToAdjustToFloor)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWalkSlopeCosine);
	P_GET_STRUCT_REF(FFloorCheckResult,Z_Param_Out_InOutCurrentFloor);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_InOutMoveRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGroundMovementUtils::TestMoveToAdjustToFloor(Z_Param_Out_MovingComps,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_MaxWalkSlopeCosine,Z_Param_Out_InOutCurrentFloor,Z_Param_Out_InOutMoveRecord);
	P_NATIVE_END;
}
// ********** End Class UGroundMovementUtils Function TestMoveToAdjustToFloor **********************

// ********** Begin Class UGroundMovementUtils Function TryWalkToSlideAlongSurface *****************
struct Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics
{
	struct GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Delta;
		float PctOfDeltaToMove;
		FQuat Rotation;
		FVector Normal;
		FHitResult Hit;
		bool bHandleImpact;
		FMovementRecord MoveRecord;
		float MaxWalkSlopeCosine;
		float MaxStepHeight;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Attempts to move a component along a surface in the walking mode. Returns the percent of time applied, with 0.0 meaning no movement occurred.\n     *  Note: This modifies the normal and calls UMovementUtils::TryMoveToSlideAlongSurface\n     */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
		{ "ToolTip", "Attempts to move a component along a surface in the walking mode. Returns the percent of time applied, with 0.0 meaning no movement occurred.\nNote: This modifies the normal and calls UMovementUtils::TryMoveToSlideAlongSurface" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveRecord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSlopeCosine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStepHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_PctOfDeltaToMove = { "PctOfDeltaToMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, PctOfDeltaToMove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
void Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_bHandleImpact_SetBit(void* Obj)
{
	((GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms*)Obj)->bHandleImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_bHandleImpact = { "bHandleImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms), &Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_bHandleImpact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_MoveRecord = { "MoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, MoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_MaxWalkSlopeCosine = { "MaxWalkSlopeCosine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, MaxWalkSlopeCosine), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_MaxStepHeight = { "MaxStepHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, MaxStepHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_PctOfDeltaToMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_bHandleImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_MoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_MaxWalkSlopeCosine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_MaxStepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGroundMovementUtils, nullptr, "TryWalkToSlideAlongSurface", Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::GroundMovementUtils_eventTryWalkToSlideAlongSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundMovementUtils::execTryWalkToSlideAlongSurface)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PctOfDeltaToMove);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_UBOOL(Z_Param_bHandleImpact);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_MoveRecord);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWalkSlopeCosine);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStepHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGroundMovementUtils::TryWalkToSlideAlongSurface(Z_Param_Out_MovingComps,Z_Param_Out_Delta,Z_Param_PctOfDeltaToMove,Z_Param_Rotation,Z_Param_Out_Normal,Z_Param_Out_Hit,Z_Param_bHandleImpact,Z_Param_Out_MoveRecord,Z_Param_MaxWalkSlopeCosine,Z_Param_MaxStepHeight);
	P_NATIVE_END;
}
// ********** End Class UGroundMovementUtils Function TryWalkToSlideAlongSurface *******************

// ********** Begin Class UGroundMovementUtils *****************************************************
void UGroundMovementUtils::StaticRegisterNativesUGroundMovementUtils()
{
	UClass* Class = UGroundMovementUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanStepUpOnHitSurface", &UGroundMovementUtils::execCanStepUpOnHitSurface },
		{ "ComputeControlledGroundMove", &UGroundMovementUtils::execComputeControlledGroundMove },
		{ "ComputeDeflectedMoveOntoRamp", &UGroundMovementUtils::execComputeDeflectedMoveOntoRamp },
		{ "TestGroundedMoveAlongHitSurface", &UGroundMovementUtils::execTestGroundedMoveAlongHitSurface },
		{ "TestMoveToAdjustToFloor", &UGroundMovementUtils::execTestMoveToAdjustToFloor },
		{ "TryWalkToSlideAlongSurface", &UGroundMovementUtils::execTryWalkToSlideAlongSurface },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGroundMovementUtils;
UClass* UGroundMovementUtils::GetPrivateStaticClass()
{
	using TClass = UGroundMovementUtils;
	if (!Z_Registration_Info_UClass_UGroundMovementUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GroundMovementUtils"),
			Z_Registration_Info_UClass_UGroundMovementUtils.InnerSingleton,
			StaticRegisterNativesUGroundMovementUtils,
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
	return Z_Registration_Info_UClass_UGroundMovementUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UGroundMovementUtils_NoRegister()
{
	return UGroundMovementUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGroundMovementUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GroundMovementUtils: a collection of stateless static BP-accessible functions for a variety of ground movement-related operations\n */" },
		{ "IncludePath", "MoveLibrary/GroundMovementUtils.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/GroundMovementUtils.h" },
		{ "ToolTip", "GroundMovementUtils: a collection of stateless static BP-accessible functions for a variety of ground movement-related operations" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroundMovementUtils_CanStepUpOnHitSurface, "CanStepUpOnHitSurface" }, // 3273527243
		{ &Z_Construct_UFunction_UGroundMovementUtils_ComputeControlledGroundMove, "ComputeControlledGroundMove" }, // 1687020123
		{ &Z_Construct_UFunction_UGroundMovementUtils_ComputeDeflectedMoveOntoRamp, "ComputeDeflectedMoveOntoRamp" }, // 2883922614
		{ &Z_Construct_UFunction_UGroundMovementUtils_TestGroundedMoveAlongHitSurface, "TestGroundedMoveAlongHitSurface" }, // 688554756
		{ &Z_Construct_UFunction_UGroundMovementUtils_TestMoveToAdjustToFloor, "TestMoveToAdjustToFloor" }, // 2635249874
		{ &Z_Construct_UFunction_UGroundMovementUtils_TryWalkToSlideAlongSurface, "TryWalkToSlideAlongSurface" }, // 1736831711
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroundMovementUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGroundMovementUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroundMovementUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroundMovementUtils_Statics::ClassParams = {
	&UGroundMovementUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroundMovementUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroundMovementUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroundMovementUtils()
{
	if (!Z_Registration_Info_UClass_UGroundMovementUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroundMovementUtils.OuterSingleton, Z_Construct_UClass_UGroundMovementUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroundMovementUtils.OuterSingleton;
}
UGroundMovementUtils::UGroundMovementUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroundMovementUtils);
UGroundMovementUtils::~UGroundMovementUtils() {}
// ********** End Class UGroundMovementUtils *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGroundMoveParams::StaticStruct, Z_Construct_UScriptStruct_FGroundMoveParams_Statics::NewStructOps, TEXT("GroundMoveParams"), &Z_Registration_Info_UScriptStruct_FGroundMoveParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroundMoveParams), 4053050459U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroundMovementUtils, UGroundMovementUtils::StaticClass, TEXT("UGroundMovementUtils"), &Z_Registration_Info_UClass_UGroundMovementUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroundMovementUtils), 610978468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h__Script_Mover_3424872471(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
