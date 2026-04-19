// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/MovementUtils.h"
#include "Engine/HitResult.h"
#include "MoveLibrary/MovementRecord.h"
#include "MoveLibrary/MovementUtilsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETeleportType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MOVER_API UClass* Z_Construct_UClass_UMovementUtils();
MOVER_API UClass* Z_Construct_UClass_UMovementUtils_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoveInputType();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FComputeCombinedVelocityParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FComputeVelocityParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementRecord();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovingComponentSet();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleInfo();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTrajectorySampleInfo *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTrajectorySampleInfo;
class UScriptStruct* FTrajectorySampleInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTrajectorySampleInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTrajectorySampleInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrajectorySampleInfo, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("TrajectorySampleInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FTrajectorySampleInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Encapsulates detailed trajectory sample info, from a move that has already occurred or one projected into the future */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Encapsulates detailed trajectory sample info, from a move that has already occurred or one projected into the future" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Position and orientation (world space)\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Position and orientation (world space)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Velocity at the time of this sample (world space, units/sec)\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Velocity at the time of this sample (world space, units/sec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantaneousAcceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Acceleration at the time of this sample (world space, units/sec^2)\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Acceleration at the time of this sample (world space, units/sec^2)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Rotational velocity (world space, degrees/sec)\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Rotational velocity (world space, degrees/sec)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimTimeMs_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Time stamp of this sample, in server simulation time\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Time stamp of this sample, in server simulation time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstantaneousAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimTimeMs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrajectorySampleInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrajectorySampleInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrajectorySampleInfo, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_InstantaneousAcceleration = { "InstantaneousAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrajectorySampleInfo, InstantaneousAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantaneousAcceleration_MetaData), NewProp_InstantaneousAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrajectorySampleInfo, AngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_SimTimeMs = { "SimTimeMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrajectorySampleInfo, SimTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimTimeMs_MetaData), NewProp_SimTimeMs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_InstantaneousAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewProp_SimTimeMs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"TrajectorySampleInfo",
	Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::PropPointers),
	sizeof(FTrajectorySampleInfo),
	alignof(FTrajectorySampleInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FTrajectorySampleInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTrajectorySampleInfo.InnerSingleton, Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTrajectorySampleInfo.InnerSingleton;
}
// ********** End ScriptStruct FTrajectorySampleInfo ***********************************************

// ********** Begin ScriptStruct FComputeVelocityParams ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FComputeVelocityParams;
class UScriptStruct* FComputeVelocityParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FComputeVelocityParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FComputeVelocityParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeVelocityParams, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("ComputeVelocityParams"));
	}
	return Z_Registration_Info_UScriptStruct_FComputeVelocityParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FComputeVelocityParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input parameters for compute velocity function\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Input parameters for compute velocity function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionIntent_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// AuxState variables\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "AuxState variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningBoost_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputType_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAccelerationForVelocityMove_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirectionIntent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveInput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveInputType;
	static void NewProp_bUseAccelerationForVelocityMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAccelerationForVelocityMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeVelocityParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, DeltaSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaSeconds_MetaData), NewProp_DeltaSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVelocity_MetaData), NewProp_InitialVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MoveDirectionIntent = { "MoveDirectionIntent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, MoveDirectionIntent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirectionIntent_MetaData), NewProp_MoveDirectionIntent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_TurningBoost = { "TurningBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, TurningBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningBoost_MetaData), NewProp_TurningBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, Deceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deceleration_MetaData), NewProp_Deceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, MoveInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MoveInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MoveInputType = { "MoveInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeVelocityParams, MoveInputType), Z_Construct_UEnum_Mover_EMoveInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputType_MetaData), NewProp_MoveInputType_MetaData) }; // 3894675629
void Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_bUseAccelerationForVelocityMove_SetBit(void* Obj)
{
	((FComputeVelocityParams*)Obj)->bUseAccelerationForVelocityMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_bUseAccelerationForVelocityMove = { "bUseAccelerationForVelocityMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComputeVelocityParams), &Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_bUseAccelerationForVelocityMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAccelerationForVelocityMove_MetaData), NewProp_bUseAccelerationForVelocityMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_InitialVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MoveDirectionIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_TurningBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_Deceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MoveInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_MoveInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewProp_bUseAccelerationForVelocityMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"ComputeVelocityParams",
	Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::PropPointers),
	sizeof(FComputeVelocityParams),
	alignof(FComputeVelocityParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeVelocityParams()
{
	if (!Z_Registration_Info_UScriptStruct_FComputeVelocityParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FComputeVelocityParams.InnerSingleton, Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FComputeVelocityParams.InnerSingleton;
}
// ********** End ScriptStruct FComputeVelocityParams **********************************************

// ********** Begin ScriptStruct FComputeCombinedVelocityParams ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FComputeCombinedVelocityParams;
class UScriptStruct* FComputeCombinedVelocityParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FComputeCombinedVelocityParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FComputeCombinedVelocityParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeCombinedVelocityParams, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("ComputeCombinedVelocityParams"));
	}
	return Z_Registration_Info_UScriptStruct_FComputeCombinedVelocityParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input parameters for ComputeCombinedVelocity()\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Input parameters for ComputeCombinedVelocity()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionIntent_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// AuxState variables\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "AuxState variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningBoost_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAcceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallMaxSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirectionIntent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallMaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeCombinedVelocityParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, DeltaSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaSeconds_MetaData), NewProp_DeltaSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVelocity_MetaData), NewProp_InitialVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_MoveDirectionIntent = { "MoveDirectionIntent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, MoveDirectionIntent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirectionIntent_MetaData), NewProp_MoveDirectionIntent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_TurningBoost = { "TurningBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, TurningBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningBoost_MetaData), NewProp_TurningBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, Deceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deceleration_MetaData), NewProp_Deceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_ExternalAcceleration = { "ExternalAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, ExternalAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalAcceleration_MetaData), NewProp_ExternalAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_OverallMaxSpeed = { "OverallMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComputeCombinedVelocityParams, OverallMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallMaxSpeed_MetaData), NewProp_OverallMaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_InitialVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_MoveDirectionIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_TurningBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_Deceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_ExternalAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewProp_OverallMaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"ComputeCombinedVelocityParams",
	Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::PropPointers),
	sizeof(FComputeCombinedVelocityParams),
	alignof(FComputeCombinedVelocityParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComputeCombinedVelocityParams()
{
	if (!Z_Registration_Info_UScriptStruct_FComputeCombinedVelocityParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FComputeCombinedVelocityParams.InnerSingleton, Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FComputeCombinedVelocityParams.InnerSingleton;
}
// ********** End ScriptStruct FComputeCombinedVelocityParams **************************************

// ********** Begin Class UMovementUtils Function ApplyGravityToOrientationIntent ******************
struct Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics
{
	struct MovementUtils_eventApplyGravityToOrientationIntent_Parms
	{
		FRotator IntendedOrientation;
		FQuat WorldToGravity;
		bool bStayVertical;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Converts intended orientation into orientation rotated by out current gravity */" },
		{ "CPP_Default_bStayVertical", "true" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Converts intended orientation into orientation rotated by out current gravity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntendedOrientation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToGravity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntendedOrientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToGravity;
	static void NewProp_bStayVertical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStayVertical;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_IntendedOrientation = { "IntendedOrientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventApplyGravityToOrientationIntent_Parms, IntendedOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntendedOrientation_MetaData), NewProp_IntendedOrientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_WorldToGravity = { "WorldToGravity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventApplyGravityToOrientationIntent_Parms, WorldToGravity), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToGravity_MetaData), NewProp_WorldToGravity_MetaData) };
void Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_bStayVertical_SetBit(void* Obj)
{
	((MovementUtils_eventApplyGravityToOrientationIntent_Parms*)Obj)->bStayVertical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_bStayVertical = { "bStayVertical", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventApplyGravityToOrientationIntent_Parms), &Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_bStayVertical_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventApplyGravityToOrientationIntent_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_IntendedOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_WorldToGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_bStayVertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ApplyGravityToOrientationIntent", Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::MovementUtils_eventApplyGravityToOrientationIntent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::MovementUtils_eventApplyGravityToOrientationIntent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execApplyGravityToOrientationIntent)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_IntendedOrientation);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_WorldToGravity);
	P_GET_UBOOL(Z_Param_bStayVertical);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UMovementUtils::ApplyGravityToOrientationIntent(Z_Param_Out_IntendedOrientation,Z_Param_Out_WorldToGravity,Z_Param_bStayVertical);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ApplyGravityToOrientationIntent ********************

// ********** Begin Class UMovementUtils Function CanEscapeGravity *********************************
struct Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics
{
	struct MovementUtils_eventCanEscapeGravity_Parms
	{
		FVector PriorVelocity;
		FVector NewVelocity;
		FVector GravityAccel;
		float DeltaSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Checks whether a given velocity is strong enough to lift off against gravity */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Checks whether a given velocity is strong enough to lift off against gravity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityAccel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PriorVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityAccel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_PriorVelocity = { "PriorVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventCanEscapeGravity_Parms, PriorVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorVelocity_MetaData), NewProp_PriorVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventCanEscapeGravity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVelocity_MetaData), NewProp_NewVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_GravityAccel = { "GravityAccel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventCanEscapeGravity_Parms, GravityAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityAccel_MetaData), NewProp_GravityAccel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventCanEscapeGravity_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementUtils_eventCanEscapeGravity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventCanEscapeGravity_Parms), &Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_PriorVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_NewVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_GravityAccel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "CanEscapeGravity", Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::MovementUtils_eventCanEscapeGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::MovementUtils_eventCanEscapeGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_CanEscapeGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_CanEscapeGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execCanEscapeGravity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PriorVelocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVelocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GravityAccel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovementUtils::CanEscapeGravity(Z_Param_Out_PriorVelocity,Z_Param_Out_NewVelocity,Z_Param_Out_GravityAccel,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function CanEscapeGravity ***********************************

// ********** Begin Class UMovementUtils Function ComputeAngularVelocity ***************************
struct Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics
{
	struct MovementUtils_eventComputeAngularVelocity_Parms
	{
		FRotator From;
		FRotator To;
		FQuat WorldToGravity;
		float DeltaSeconds;
		float TurningRateLimit;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Computes the angular velocity needed to change from one orientation to another within a time frame. Use the optional TurningRateLimit to clamp to a maximum step (negative=unlimited). */" },
		{ "CPP_Default_TurningRateLimit", "-1.000000" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Computes the angular velocity needed to change from one orientation to another within a time frame. Use the optional TurningRateLimit to clamp to a maximum step (negative=unlimited)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToGravity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_From;
	static const UECodeGen_Private::FStructPropertyParams NewProp_To;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToGravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningRateLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeAngularVelocity_Parms, From), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_From_MetaData), NewProp_From_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeAngularVelocity_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_To_MetaData), NewProp_To_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_WorldToGravity = { "WorldToGravity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeAngularVelocity_Parms, WorldToGravity), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToGravity_MetaData), NewProp_WorldToGravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeAngularVelocity_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_TurningRateLimit = { "TurningRateLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeAngularVelocity_Parms, TurningRateLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeAngularVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_To,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_WorldToGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_TurningRateLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ComputeAngularVelocity", Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::MovementUtils_eventComputeAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::MovementUtils_eventComputeAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execComputeAngularVelocity)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_From);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_To);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_WorldToGravity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TurningRateLimit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UMovementUtils::ComputeAngularVelocity(Z_Param_Out_From,Z_Param_Out_To,Z_Param_Out_WorldToGravity,Z_Param_DeltaSeconds,Z_Param_TurningRateLimit);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ComputeAngularVelocity *****************************

// ********** Begin Class UMovementUtils Function ComputeCombinedVelocity **************************
struct Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics
{
	struct MovementUtils_eventComputeCombinedVelocity_Parms
	{
		FComputeCombinedVelocityParams InParams;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns new velocity based on previous state, movement intent, movement mode's influence and movement settings */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Returns new velocity based on previous state, movement intent, movement mode's influence and movement settings" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeCombinedVelocity_Parms, InParams), Z_Construct_UScriptStruct_FComputeCombinedVelocityParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParams_MetaData), NewProp_InParams_MetaData) }; // 1455967790
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeCombinedVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::NewProp_InParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ComputeCombinedVelocity", Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::MovementUtils_eventComputeCombinedVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::MovementUtils_eventComputeCombinedVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execComputeCombinedVelocity)
{
	P_GET_STRUCT_REF(FComputeCombinedVelocityParams,Z_Param_Out_InParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::ComputeCombinedVelocity(Z_Param_Out_InParams);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ComputeCombinedVelocity ****************************

// ********** Begin Class UMovementUtils Function ComputeDirectionIntent ***************************
struct Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics
{
	struct MovementUtils_eventComputeDirectionIntent_Parms
	{
		FVector MoveInput;
		EMoveInputType MoveInputType;
		float MaxSpeed;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Computes the directional movement intent based on input vector and associated type */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Computes the directional movement intent based on input vector and associated type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveInput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveInputType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeDirectionIntent_Parms, MoveInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_MoveInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_MoveInputType = { "MoveInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeDirectionIntent_Parms, MoveInputType), Z_Construct_UEnum_Mover_EMoveInputType, METADATA_PARAMS(0, nullptr) }; // 3894675629
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeDirectionIntent_Parms, MaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeDirectionIntent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_MoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_MoveInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_MoveInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ComputeDirectionIntent", Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::MovementUtils_eventComputeDirectionIntent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::MovementUtils_eventComputeDirectionIntent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execComputeDirectionIntent)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_MoveInput);
	P_GET_ENUM(EMoveInputType,Z_Param_MoveInputType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::ComputeDirectionIntent(Z_Param_Out_MoveInput,EMoveInputType(Z_Param_MoveInputType),Z_Param_MaxSpeed);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ComputeDirectionIntent *****************************

// ********** Begin Class UMovementUtils Function ComputeSlideDelta ********************************
struct Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics
{
	struct MovementUtils_eventComputeSlideDelta_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Delta;
		float PctOfDeltaToMove;
		FVector Normal;
		FHitResult Hit;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns an alternative move delta to slide along a surface, based on parameters describing a blocked attempted move */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Returns an alternative move delta to slide along a surface, based on parameters describing a blocked attempted move" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PctOfDeltaToMove_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PctOfDeltaToMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeSlideDelta_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeSlideDelta_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_PctOfDeltaToMove = { "PctOfDeltaToMove", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeSlideDelta_Parms, PctOfDeltaToMove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PctOfDeltaToMove_MetaData), NewProp_PctOfDeltaToMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeSlideDelta_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeSlideDelta_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeSlideDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_PctOfDeltaToMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ComputeSlideDelta", Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::MovementUtils_eventComputeSlideDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::MovementUtils_eventComputeSlideDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execComputeSlideDelta)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PctOfDeltaToMove);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::ComputeSlideDelta(Z_Param_Out_MovingComps,Z_Param_Out_Delta,Z_Param_PctOfDeltaToMove,Z_Param_Out_Normal,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ComputeSlideDelta **********************************

// ********** Begin Class UMovementUtils Function ComputeVelocity **********************************
struct Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics
{
	struct MovementUtils_eventComputeVelocity_Parms
	{
		FComputeVelocityParams InParams;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns new ground-based velocity (worldspace) based on previous state, movement intent (worldspace), and movement settings */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Returns new ground-based velocity (worldspace) based on previous state, movement intent (worldspace), and movement settings" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeVelocity_Parms, InParams), Z_Construct_UScriptStruct_FComputeVelocityParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParams_MetaData), NewProp_InParams_MetaData) }; // 2240887725
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::NewProp_InParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ComputeVelocity", Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::MovementUtils_eventComputeVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::MovementUtils_eventComputeVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ComputeVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ComputeVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execComputeVelocity)
{
	P_GET_STRUCT_REF(FComputeVelocityParams,Z_Param_Out_InParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::ComputeVelocity(Z_Param_Out_InParams);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ComputeVelocity ************************************

// ********** Begin Class UMovementUtils Function ComputeVelocityFromGravity ***********************
struct Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics
{
	struct MovementUtils_eventComputeVelocityFromGravity_Parms
	{
		FVector GravityAccel;
		float DeltaSeconds;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns velocity (units per second) contributed by gravitational acceleration over a given time */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Returns velocity (units per second) contributed by gravitational acceleration over a given time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityAccel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityAccel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::NewProp_GravityAccel = { "GravityAccel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeVelocityFromGravity_Parms, GravityAccel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityAccel_MetaData), NewProp_GravityAccel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeVelocityFromGravity_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeVelocityFromGravity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::NewProp_GravityAccel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ComputeVelocityFromGravity", Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::MovementUtils_eventComputeVelocityFromGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::MovementUtils_eventComputeVelocityFromGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execComputeVelocityFromGravity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GravityAccel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::ComputeVelocityFromGravity(Z_Param_Out_GravityAccel,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ComputeVelocityFromGravity *************************

// ********** Begin Class UMovementUtils Function ComputeVelocityFromPositions *********************
struct Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics
{
	struct MovementUtils_eventComputeVelocityFromPositions_Parms
	{
		FVector FromPos;
		FVector ToPos;
		float DeltaSeconds;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Computes velocity based on start and end positions over time */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Computes velocity based on start and end positions over time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::NewProp_FromPos = { "FromPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeVelocityFromPositions_Parms, FromPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromPos_MetaData), NewProp_FromPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::NewProp_ToPos = { "ToPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeVelocityFromPositions_Parms, ToPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToPos_MetaData), NewProp_ToPos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeVelocityFromPositions_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventComputeVelocityFromPositions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::NewProp_FromPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::NewProp_ToPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ComputeVelocityFromPositions", Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::MovementUtils_eventComputeVelocityFromPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::MovementUtils_eventComputeVelocityFromPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execComputeVelocityFromPositions)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_FromPos);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ToPos);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::ComputeVelocityFromPositions(Z_Param_Out_FromPos,Z_Param_Out_ToPos,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ComputeVelocityFromPositions ***********************

// ********** Begin Class UMovementUtils Function ConstrainToPlane *********************************
struct Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics
{
	struct MovementUtils_eventConstrainToPlane_Parms
	{
		FVector Vector;
		FPlane MovementPlane;
		bool bMaintainMagnitude;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Ensures input Vector (typically a velocity, acceleration, or move delta) is limited to a movement plane. \n\x09* @param bMaintainMagnitude - if true, vector will be scaled after projection in an attempt to keep magnitude the same \n\x09*/" },
		{ "CPP_Default_bMaintainMagnitude", "true" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Ensures input Vector (typically a velocity, acceleration, or move delta) is limited to a movement plane.\n@param bMaintainMagnitude - if true, vector will be scaled after projection in an attempt to keep magnitude the same" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementPlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementPlane;
	static void NewProp_bMaintainMagnitude_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventConstrainToPlane_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_MovementPlane = { "MovementPlane", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventConstrainToPlane_Parms, MovementPlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementPlane_MetaData), NewProp_MovementPlane_MetaData) };
void Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_bMaintainMagnitude_SetBit(void* Obj)
{
	((MovementUtils_eventConstrainToPlane_Parms*)Obj)->bMaintainMagnitude = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_bMaintainMagnitude = { "bMaintainMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventConstrainToPlane_Parms), &Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_bMaintainMagnitude_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventConstrainToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_MovementPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_bMaintainMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ConstrainToPlane", Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::MovementUtils_eventConstrainToPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::MovementUtils_eventConstrainToPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ConstrainToPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ConstrainToPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execConstrainToPlane)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
	P_GET_STRUCT_REF(FPlane,Z_Param_Out_MovementPlane);
	P_GET_UBOOL(Z_Param_bMaintainMagnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::ConstrainToPlane(Z_Param_Out_Vector,Z_Param_Out_MovementPlane,Z_Param_bMaintainMagnitude);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ConstrainToPlane ***********************************

// ********** Begin Class UMovementUtils Function DeduceUpDirectionFromGravity *********************
struct Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics
{
	struct MovementUtils_eventDeduceUpDirectionFromGravity_Parms
	{
		FVector GravityAcceleration;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns the up direction deduced from gravity acceleration, but defaults to mover constants up direction if zero */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Returns the up direction deduced from gravity acceleration, but defaults to mover constants up direction if zero" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityAcceleration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::NewProp_GravityAcceleration = { "GravityAcceleration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventDeduceUpDirectionFromGravity_Parms, GravityAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityAcceleration_MetaData), NewProp_GravityAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventDeduceUpDirectionFromGravity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::NewProp_GravityAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "DeduceUpDirectionFromGravity", Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::MovementUtils_eventDeduceUpDirectionFromGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::MovementUtils_eventDeduceUpDirectionFromGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execDeduceUpDirectionFromGravity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GravityAcceleration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::DeduceUpDirectionFromGravity(Z_Param_Out_GravityAcceleration);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function DeduceUpDirectionFromGravity ***********************

// ********** Begin Class UMovementUtils Function FindTeleportSpot *********************************
struct Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics
{
	struct MovementUtils_eventFindTeleportSpot_Parms
	{
		const UMoverComponent* MoverComp;
		FVector TestLocation;
		FRotator TestRotation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Try to find an acceptable non-colliding location to place TestActor as close to possible to TestLocation. Expects TestLocation to be a valid location inside the level.\n\x09 * Returns true if a location without blocking collision is found, in which case TestLocation is overwritten with the new clear location.\n\x09 * Returns false if no suitable location could be found, in which case TestLocation is unmodified.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Try to find an acceptable non-colliding location to place TestActor as close to possible to TestLocation. Expects TestLocation to be a valid location inside the level.\nReturns true if a location without blocking collision is found, in which case TestLocation is overwritten with the new clear location.\nReturns false if no suitable location could be found, in which case TestLocation is unmodified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoverComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestRotation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_MoverComp = { "MoverComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventFindTeleportSpot_Parms, MoverComp), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverComp_MetaData), NewProp_MoverComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_TestLocation = { "TestLocation", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventFindTeleportSpot_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_TestRotation = { "TestRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventFindTeleportSpot_Parms, TestRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementUtils_eventFindTeleportSpot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventFindTeleportSpot_Parms), &Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_MoverComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_TestLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_TestRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "FindTeleportSpot", Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::MovementUtils_eventFindTeleportSpot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::MovementUtils_eventFindTeleportSpot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_FindTeleportSpot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_FindTeleportSpot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execFindTeleportSpot)
{
	P_GET_OBJECT(UMoverComponent,Z_Param_MoverComp);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TestLocation);
	P_GET_STRUCT(FRotator,Z_Param_TestRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovementUtils::FindTeleportSpot(Z_Param_MoverComp,Z_Param_Out_TestLocation,Z_Param_TestRotation);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function FindTeleportSpot ***********************************

// ********** Begin Class UMovementUtils Function GetGravityVerticalComponent **********************
struct Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics
{
	struct MovementUtils_eventGetGravityVerticalComponent_Parms
	{
		FVector Vector;
		FVector UpDirection;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns the component of the vector in the gravity-space vertical direction.  */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Returns the component of the vector in the gravity-space vertical direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventGetGravityVerticalComponent_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventGetGravityVerticalComponent_Parms, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDirection_MetaData), NewProp_UpDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventGetGravityVerticalComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::NewProp_UpDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "GetGravityVerticalComponent", Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::MovementUtils_eventGetGravityVerticalComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::MovementUtils_eventGetGravityVerticalComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execGetGravityVerticalComponent)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_UpDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::GetGravityVerticalComponent(Z_Param_Out_Vector,Z_Param_Out_UpDirection);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function GetGravityVerticalComponent ************************

// ********** Begin Class UMovementUtils Function IsAngularVelocityZero ****************************
struct Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics
{
	struct MovementUtils_eventIsAngularVelocityZero_Parms
	{
		FRotator AngularVelocity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns whether this rotator representing angular velocity has any non-zero values. This function exists due to FRotator::IsZero queries performing undesired wrapping and clamping. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Returns whether this rotator representing angular velocity has any non-zero values. This function exists due to FRotator::IsZero queries performing undesired wrapping and clamping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventIsAngularVelocityZero_Parms, AngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
void Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementUtils_eventIsAngularVelocityZero_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventIsAngularVelocityZero_Parms), &Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "IsAngularVelocityZero", Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::MovementUtils_eventIsAngularVelocityZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::MovementUtils_eventIsAngularVelocityZero_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execIsAngularVelocityZero)
{
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_AngularVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovementUtils::IsAngularVelocityZero(Z_Param_Out_AngularVelocity);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function IsAngularVelocityZero ******************************

// ********** Begin Class UMovementUtils Function IsExceedingMaxSpeed ******************************
struct Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics
{
	struct MovementUtils_eventIsExceedingMaxSpeed_Parms
	{
		FVector Velocity;
		float InMaxSpeed;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Checks whether a given velocity is exceeding a maximum speed, with some leeway to account for numeric imprecision */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Checks whether a given velocity is exceeding a maximum speed, with some leeway to account for numeric imprecision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxSpeed;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventIsExceedingMaxSpeed_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::NewProp_InMaxSpeed = { "InMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventIsExceedingMaxSpeed_Parms, InMaxSpeed), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementUtils_eventIsExceedingMaxSpeed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventIsExceedingMaxSpeed_Parms), &Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::NewProp_InMaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "IsExceedingMaxSpeed", Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::MovementUtils_eventIsExceedingMaxSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::MovementUtils_eventIsExceedingMaxSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execIsExceedingMaxSpeed)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovementUtils::IsExceedingMaxSpeed(Z_Param_Out_Velocity,Z_Param_InMaxSpeed);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function IsExceedingMaxSpeed ********************************

// ********** Begin Class UMovementUtils Function ProjectToGravityFloor ****************************
struct Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics
{
	struct MovementUtils_eventProjectToGravityFloor_Parms
	{
		FVector Vector;
		FVector UpDirection;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Project a vector onto the floor defined by the gravity direction. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Project a vector onto the floor defined by the gravity direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventProjectToGravityFloor_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vector_MetaData), NewProp_Vector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::NewProp_UpDirection = { "UpDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventProjectToGravityFloor_Parms, UpDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpDirection_MetaData), NewProp_UpDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventProjectToGravityFloor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::NewProp_UpDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "ProjectToGravityFloor", Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::MovementUtils_eventProjectToGravityFloor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::MovementUtils_eventProjectToGravityFloor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execProjectToGravityFloor)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_UpDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementUtils::ProjectToGravityFloor(Z_Param_Out_Vector,Z_Param_Out_UpDirection);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function ProjectToGravityFloor ******************************

// ********** Begin Class UMovementUtils Function TestEncroachment *********************************
struct Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics
{
	struct MovementUtils_eventTestEncroachment_Parms
	{
		const UMoverComponent* MoverComp;
		FVector TestLocation;
		FRotator TestRotation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns whether MoverComp's Actor would encroach at TestLocation on something that blocks it. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Returns whether MoverComp's Actor would encroach at TestLocation on something that blocks it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoverComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestRotation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_MoverComp = { "MoverComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTestEncroachment_Parms, MoverComp), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverComp_MetaData), NewProp_MoverComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_TestLocation = { "TestLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTestEncroachment_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_TestRotation = { "TestRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTestEncroachment_Parms, TestRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementUtils_eventTestEncroachment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTestEncroachment_Parms), &Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_MoverComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_TestLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_TestRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "TestEncroachment", Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::MovementUtils_eventTestEncroachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::MovementUtils_eventTestEncroachment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_TestEncroachment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_TestEncroachment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execTestEncroachment)
{
	P_GET_OBJECT(UMoverComponent,Z_Param_MoverComp);
	P_GET_STRUCT(FVector,Z_Param_TestLocation);
	P_GET_STRUCT(FRotator,Z_Param_TestRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovementUtils::TestEncroachment(Z_Param_MoverComp,Z_Param_TestLocation,Z_Param_TestRotation);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function TestEncroachment ***********************************

// ********** Begin Class UMovementUtils Function TestEncroachmentAndAdjust ************************
struct Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics
{
	struct MovementUtils_eventTestEncroachmentAndAdjust_Parms
	{
		const UMoverComponent* MoverComp;
		FVector TestLocation;
		FRotator TestRotation;
		FVector OutProposedAdjustment;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** \n\x09 * Returns whether MoverComp's Actor would encroach at TestLocation on something that blocks it.\n\x09 * If blocked, we'll attempt to find an adjustment and set OutProposedAdjustment accordingly. \n\x09 * OutProposedAdjustment will be zero'd if there's no blockage or an adjustment could not be found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Returns whether MoverComp's Actor would encroach at TestLocation on something that blocks it.\nIf blocked, we'll attempt to find an adjustment and set OutProposedAdjustment accordingly.\nOutProposedAdjustment will be zero'd if there's no blockage or an adjustment could not be found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoverComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutProposedAdjustment;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_MoverComp = { "MoverComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTestEncroachmentAndAdjust_Parms, MoverComp), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverComp_MetaData), NewProp_MoverComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_TestLocation = { "TestLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTestEncroachmentAndAdjust_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_TestRotation = { "TestRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTestEncroachmentAndAdjust_Parms, TestRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_OutProposedAdjustment = { "OutProposedAdjustment", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTestEncroachmentAndAdjust_Parms, OutProposedAdjustment), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementUtils_eventTestEncroachmentAndAdjust_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTestEncroachmentAndAdjust_Parms), &Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_MoverComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_TestLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_TestRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_OutProposedAdjustment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "TestEncroachmentAndAdjust", Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::MovementUtils_eventTestEncroachmentAndAdjust_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::MovementUtils_eventTestEncroachmentAndAdjust_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execTestEncroachmentAndAdjust)
{
	P_GET_OBJECT(UMoverComponent,Z_Param_MoverComp);
	P_GET_STRUCT(FVector,Z_Param_TestLocation);
	P_GET_STRUCT(FRotator,Z_Param_TestRotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutProposedAdjustment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovementUtils::TestEncroachmentAndAdjust(Z_Param_MoverComp,Z_Param_TestLocation,Z_Param_TestRotation,Z_Param_Out_OutProposedAdjustment);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function TestEncroachmentAndAdjust **************************

// ********** Begin Class UMovementUtils Function TryMoveToSlideAlongSurface ***********************
struct Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics
{
	struct MovementUtils_eventTryMoveToSlideAlongSurface_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Delta;
		float PctOfDeltaToMove;
		FQuat Rotation;
		FVector Normal;
		FHitResult Hit;
		bool bHandleImpact;
		FMovementRecord MoveRecord;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Attempts to move a component along a surface. Returns the percent of time applied, with 0.0 meaning no movement occurred.\n\x09 * Note: This function takes a movement record that collects moves applied to the actor see @FMovementRecord\n\x09 */" },
		{ "DisplayName", "Try Move To Slide Along Surface (Movement Record)" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Attempts to move a component along a surface. Returns the percent of time applied, with 0.0 meaning no movement occurred.\nNote: This function takes a movement record that collects moves applied to the actor see @FMovementRecord" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurface_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurface_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_PctOfDeltaToMove = { "PctOfDeltaToMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurface_Parms, PctOfDeltaToMove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurface_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurface_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurface_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
void Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_bHandleImpact_SetBit(void* Obj)
{
	((MovementUtils_eventTryMoveToSlideAlongSurface_Parms*)Obj)->bHandleImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_bHandleImpact = { "bHandleImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTryMoveToSlideAlongSurface_Parms), &Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_bHandleImpact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_MoveRecord = { "MoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurface_Parms, MoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurface_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_PctOfDeltaToMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_bHandleImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_MoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "TryMoveToSlideAlongSurface", Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::MovementUtils_eventTryMoveToSlideAlongSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::MovementUtils_eventTryMoveToSlideAlongSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execTryMoveToSlideAlongSurface)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PctOfDeltaToMove);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_UBOOL(Z_Param_bHandleImpact);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_MoveRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovementUtils::TryMoveToSlideAlongSurface(Z_Param_Out_MovingComps,Z_Param_Out_Delta,Z_Param_PctOfDeltaToMove,Z_Param_Rotation,Z_Param_Out_Normal,Z_Param_Out_Hit,Z_Param_bHandleImpact,Z_Param_Out_MoveRecord);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function TryMoveToSlideAlongSurface *************************

// ********** Begin Class UMovementUtils Function TryMoveToSlideAlongSurfaceNoMovementRecord *******
struct Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics
{
	struct MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Delta;
		float PctOfDeltaToMove;
		FQuat Rotation;
		FVector Normal;
		FHitResult Hit;
		bool bHandleImpact;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Attempts to move a component along a surface. Returns the percent of time applied, with 0.0 meaning no movement occurred.\n\x09 * Note: This function doesn't update a movement record so velocity should be gathered/set using a different method\n\x09 */" },
		{ "DisplayName", "Try Move To Slide Along Surface (No Movement Record)" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Attempts to move a component along a surface. Returns the percent of time applied, with 0.0 meaning no movement occurred.\nNote: This function doesn't update a movement record so velocity should be gathered/set using a different method" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_PctOfDeltaToMove = { "PctOfDeltaToMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms, PctOfDeltaToMove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
void Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_bHandleImpact_SetBit(void* Obj)
{
	((MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms*)Obj)->bHandleImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_bHandleImpact = { "bHandleImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms), &Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_bHandleImpact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_PctOfDeltaToMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_bHandleImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "TryMoveToSlideAlongSurfaceNoMovementRecord", Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::MovementUtils_eventTryMoveToSlideAlongSurfaceNoMovementRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execTryMoveToSlideAlongSurfaceNoMovementRecord)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PctOfDeltaToMove);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_UBOOL(Z_Param_bHandleImpact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovementUtils::TryMoveToSlideAlongSurfaceNoMovementRecord(Z_Param_Out_MovingComps,Z_Param_Out_Delta,Z_Param_PctOfDeltaToMove,Z_Param_Rotation,Z_Param_Out_Normal,Z_Param_Out_Hit,Z_Param_bHandleImpact);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function TryMoveToSlideAlongSurfaceNoMovementRecord *********

// ********** Begin Class UMovementUtils Function TrySafeMoveAndSlideUpdatedComponent **************
struct Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics
{
	struct MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Delta;
		FQuat NewRotation;
		bool bSweep;
		FHitResult OutHit;
		ETeleportType Teleport;
		FMovementRecord MoveRecord;
		bool bSlideAlongSurface;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Attempts to move a component and resolve any penetration issues with the proposed move Delta.\n\x09 * This function handles blocking moves and slides along the surface or stops on impact. It uses @TryMoveToSlideAlongSurface to slide\n\x09 * along the surface on hit, so if other behavior is needed for sliding (like Falling based sliding) consider using\n\x09 * @TrySafeMoveUpdatedComponent and a slide function or setting @bSlideAlongSurface to false and then using a separate sliding function.\n\x09 * Note: This function takes a movement record that collects moves applied to the actor see @FMovementRecord.\n\x09 * @param MovingComps Encapsulates components involved in movement\n\x09 * @param Delta The desired location change in world space\n\x09 * @param NewRotation The new desired rotation in world space\n\x09 * @param bSweep Whether we sweep to the destination location\n\x09 * @param OutHit Optional output describing the blocking hit that stopped the move, if any\n\x09 * @param Teleport Whether we teleport the physics state (if physics collision is enabled for this object)\n\x09 * @param MoveRecord Move record to add moves to\n\x09 * @param bSlideAlongSurface If true the actor slides along a blocking surface. If false the actor will stop if the move was blocked\n\x09 * @return Returns the percent of the move applied 0 to 1, where 1 represents the whole move being applied\n\x09 */" },
		{ "CPP_Default_bSlideAlongSurface", "true" },
		{ "DisplayName", "Try Safe Move And Slide (Movement Record)" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Attempts to move a component and resolve any penetration issues with the proposed move Delta.\nThis function handles blocking moves and slides along the surface or stops on impact. It uses @TryMoveToSlideAlongSurface to slide\nalong the surface on hit, so if other behavior is needed for sliding (like Falling based sliding) consider using\n@TrySafeMoveUpdatedComponent and a slide function or setting @bSlideAlongSurface to false and then using a separate sliding function.\nNote: This function takes a movement record that collects moves applied to the actor see @FMovementRecord.\n@param MovingComps Encapsulates components involved in movement\n@param Delta The desired location change in world space\n@param NewRotation The new desired rotation in world space\n@param bSweep Whether we sweep to the destination location\n@param OutHit Optional output describing the blocking hit that stopped the move, if any\n@param Teleport Whether we teleport the physics state (if physics collision is enabled for this object)\n@param MoveRecord Move record to add moves to\n@param bSlideAlongSurface If true the actor slides along a blocking surface. If false the actor will stop if the move was blocked\n@return Returns the percent of the move applied 0 to 1, where 1 represents the whole move being applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Teleport_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Teleport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveRecord;
	static void NewProp_bSlideAlongSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlideAlongSurface;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRotation_MetaData), NewProp_NewRotation_MetaData) };
void Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms), &Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_Teleport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_Teleport = { "Teleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms, Teleport), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(0, nullptr) }; // 1982391065
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_MoveRecord = { "MoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms, MoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
void Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_bSlideAlongSurface_SetBit(void* Obj)
{
	((MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms*)Obj)->bSlideAlongSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_bSlideAlongSurface = { "bSlideAlongSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms), &Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_bSlideAlongSurface_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_Teleport_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_Teleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_MoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_bSlideAlongSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "TrySafeMoveAndSlideUpdatedComponent", Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::MovementUtils_eventTrySafeMoveAndSlideUpdatedComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execTrySafeMoveAndSlideUpdatedComponent)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_NewRotation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_ENUM(ETeleportType,Z_Param_Teleport);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_MoveRecord);
	P_GET_UBOOL(Z_Param_bSlideAlongSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovementUtils::TrySafeMoveAndSlideUpdatedComponent(Z_Param_Out_MovingComps,Z_Param_Out_Delta,Z_Param_Out_NewRotation,Z_Param_bSweep,Z_Param_Out_OutHit,ETeleportType(Z_Param_Teleport),Z_Param_Out_MoveRecord,Z_Param_bSlideAlongSurface);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function TrySafeMoveAndSlideUpdatedComponent ****************

// ********** Begin Class UMovementUtils Function TrySafeMoveAndSlideUpdatedComponentNoMovementRecord 
struct Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics
{
	struct MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Delta;
		FQuat NewRotation;
		bool bSweep;
		FHitResult OutHit;
		ETeleportType Teleport;
		bool bSlideAlongSurface;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n \x09 * Attempts to move a component and resolve any penetration issues with the proposed move Delta.\n \x09 * This function handles blocking moves and slides along the surface or stops on impact. It uses @TryMoveToSlideAlongSurface to slide\n \x09 * along the surface on hit, so if other behavior is needed for sliding (like Falling based sliding) consider using\n \x09 * @TrySafeMoveUpdatedComponent and a slide function or setting @bSlideAlongSurface to false and then using a separate sliding function.\n \x09 * Note: This function doesn't update a movement record so velocity should be gathered/set using a different method\n \x09 * @param MovingComps Encapsulates components involved in movement\n \x09 * @param Delta The desired location change in world space\n \x09 * @param NewRotation The new desired rotation in world space\n \x09 * @param bSweep Whether we sweep to the destination location\n \x09 * @param OutHit Optional output describing the blocking hit that stopped the move, if any\n \x09 * @param Teleport Whether we teleport the physics state (if physics collision is enabled for this object)\n \x09 * @param bSlideAlongSurface If true the actor slides along a blocking surface. If false the actor will stop if the move was blocked\n \x09 * @return Returns the percent of the move applied 0 to 1, where 1 represents the whole move being applied\n \x09 */" },
		{ "CPP_Default_bSlideAlongSurface", "true" },
		{ "DisplayName", "Try Safe Move And Slide (No Movement Record)" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Attempts to move a component and resolve any penetration issues with the proposed move Delta.\nThis function handles blocking moves and slides along the surface or stops on impact. It uses @TryMoveToSlideAlongSurface to slide\nalong the surface on hit, so if other behavior is needed for sliding (like Falling based sliding) consider using\n@TrySafeMoveUpdatedComponent and a slide function or setting @bSlideAlongSurface to false and then using a separate sliding function.\nNote: This function doesn't update a movement record so velocity should be gathered/set using a different method\n@param MovingComps Encapsulates components involved in movement\n@param Delta The desired location change in world space\n@param NewRotation The new desired rotation in world space\n@param bSweep Whether we sweep to the destination location\n@param OutHit Optional output describing the blocking hit that stopped the move, if any\n@param Teleport Whether we teleport the physics state (if physics collision is enabled for this object)\n@param bSlideAlongSurface If true the actor slides along a blocking surface. If false the actor will stop if the move was blocked\n@return Returns the percent of the move applied 0 to 1, where 1 represents the whole move being applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Teleport_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Teleport;
	static void NewProp_bSlideAlongSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlideAlongSurface;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRotation_MetaData), NewProp_NewRotation_MetaData) };
void Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms), &Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_Teleport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_Teleport = { "Teleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms, Teleport), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(0, nullptr) }; // 1982391065
void Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_bSlideAlongSurface_SetBit(void* Obj)
{
	((MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms*)Obj)->bSlideAlongSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_bSlideAlongSurface = { "bSlideAlongSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms), &Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_bSlideAlongSurface_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_Teleport_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_Teleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_bSlideAlongSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "TrySafeMoveAndSlideUpdatedComponentNoMovementRecord", Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::MovementUtils_eventTrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execTrySafeMoveAndSlideUpdatedComponentNoMovementRecord)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_NewRotation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_ENUM(ETeleportType,Z_Param_Teleport);
	P_GET_UBOOL(Z_Param_bSlideAlongSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovementUtils::TrySafeMoveAndSlideUpdatedComponentNoMovementRecord(Z_Param_Out_MovingComps,Z_Param_Out_Delta,Z_Param_Out_NewRotation,Z_Param_bSweep,Z_Param_Out_OutHit,ETeleportType(Z_Param_Teleport),Z_Param_bSlideAlongSurface);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function TrySafeMoveAndSlideUpdatedComponentNoMovementRecord 

// ********** Begin Class UMovementUtils Function TrySafeMoveUpdatedComponent **********************
struct Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics
{
	struct MovementUtils_eventTrySafeMoveUpdatedComponent_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Delta;
		FQuat NewRotation;
		bool bSweep;
		FHitResult OutHit;
		ETeleportType Teleport;
		FMovementRecord MoveRecord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Attempts to move a component and resolve any penetration issues with the proposed move Delta\n\x09 * Note: This function takes a movement record that collects moves applied to the actor see @FMovementRecord\n\x09 */" },
		{ "DisplayName", "Try Safe Move Updated Component (Movement Record)" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Attempts to move a component and resolve any penetration issues with the proposed move Delta\nNote: This function takes a movement record that collects moves applied to the actor see @FMovementRecord" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Teleport_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Teleport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveRecord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponent_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponent_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponent_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRotation_MetaData), NewProp_NewRotation_MetaData) };
void Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((MovementUtils_eventTrySafeMoveUpdatedComponent_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTrySafeMoveUpdatedComponent_Parms), &Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponent_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_Teleport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_Teleport = { "Teleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponent_Parms, Teleport), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(0, nullptr) }; // 1982391065
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_MoveRecord = { "MoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponent_Parms, MoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
void Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementUtils_eventTrySafeMoveUpdatedComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTrySafeMoveUpdatedComponent_Parms), &Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_Teleport_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_Teleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_MoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "TrySafeMoveUpdatedComponent", Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::MovementUtils_eventTrySafeMoveUpdatedComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::MovementUtils_eventTrySafeMoveUpdatedComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execTrySafeMoveUpdatedComponent)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_NewRotation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_ENUM(ETeleportType,Z_Param_Teleport);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_MoveRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovementUtils::TrySafeMoveUpdatedComponent(Z_Param_Out_MovingComps,Z_Param_Out_Delta,Z_Param_Out_NewRotation,Z_Param_bSweep,Z_Param_Out_OutHit,ETeleportType(Z_Param_Teleport),Z_Param_Out_MoveRecord);
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function TrySafeMoveUpdatedComponent ************************

// ********** Begin Class UMovementUtils Function TrySafeMoveUpdatedComponentNoMovementRecord ******
struct Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics
{
	struct MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms
	{
		FMovingComponentSet MovingComps;
		FVector Delta;
		FQuat NewRotation;
		bool bSweep;
		FHitResult OutHit;
		ETeleportType Teleport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n \x09 * Attempts to move a component and resolve any penetration issues with the proposed move Delta\n \x09 * Note: This function doesn't update a movement record so velocity should be gathered/set using a different method\n \x09 */" },
		{ "DisplayName", "Try Safe Move Updated Component (No Movement Record)" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "Attempts to move a component and resolve any penetration issues with the proposed move Delta\nNote: This function doesn't update a movement record so velocity should be gathered/set using a different method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Teleport_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Teleport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRotation_MetaData), NewProp_NewRotation_MetaData) };
void Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms), &Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_Teleport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_Teleport = { "Teleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms, Teleport), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(0, nullptr) }; // 1982391065
void Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms), &Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_Teleport_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_Teleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementUtils, nullptr, "TrySafeMoveUpdatedComponentNoMovementRecord", Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::MovementUtils_eventTrySafeMoveUpdatedComponentNoMovementRecord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementUtils::execTrySafeMoveUpdatedComponentNoMovementRecord)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Delta);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_NewRotation);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_ENUM(ETeleportType,Z_Param_Teleport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovementUtils::TrySafeMoveUpdatedComponentNoMovementRecord(Z_Param_Out_MovingComps,Z_Param_Out_Delta,Z_Param_Out_NewRotation,Z_Param_bSweep,Z_Param_Out_OutHit,ETeleportType(Z_Param_Teleport));
	P_NATIVE_END;
}
// ********** End Class UMovementUtils Function TrySafeMoveUpdatedComponentNoMovementRecord ********

// ********** Begin Class UMovementUtils ***********************************************************
void UMovementUtils::StaticRegisterNativesUMovementUtils()
{
	UClass* Class = UMovementUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyGravityToOrientationIntent", &UMovementUtils::execApplyGravityToOrientationIntent },
		{ "CanEscapeGravity", &UMovementUtils::execCanEscapeGravity },
		{ "ComputeAngularVelocity", &UMovementUtils::execComputeAngularVelocity },
		{ "ComputeCombinedVelocity", &UMovementUtils::execComputeCombinedVelocity },
		{ "ComputeDirectionIntent", &UMovementUtils::execComputeDirectionIntent },
		{ "ComputeSlideDelta", &UMovementUtils::execComputeSlideDelta },
		{ "ComputeVelocity", &UMovementUtils::execComputeVelocity },
		{ "ComputeVelocityFromGravity", &UMovementUtils::execComputeVelocityFromGravity },
		{ "ComputeVelocityFromPositions", &UMovementUtils::execComputeVelocityFromPositions },
		{ "ConstrainToPlane", &UMovementUtils::execConstrainToPlane },
		{ "DeduceUpDirectionFromGravity", &UMovementUtils::execDeduceUpDirectionFromGravity },
		{ "FindTeleportSpot", &UMovementUtils::execFindTeleportSpot },
		{ "GetGravityVerticalComponent", &UMovementUtils::execGetGravityVerticalComponent },
		{ "IsAngularVelocityZero", &UMovementUtils::execIsAngularVelocityZero },
		{ "IsExceedingMaxSpeed", &UMovementUtils::execIsExceedingMaxSpeed },
		{ "ProjectToGravityFloor", &UMovementUtils::execProjectToGravityFloor },
		{ "TestEncroachment", &UMovementUtils::execTestEncroachment },
		{ "TestEncroachmentAndAdjust", &UMovementUtils::execTestEncroachmentAndAdjust },
		{ "TryMoveToSlideAlongSurface", &UMovementUtils::execTryMoveToSlideAlongSurface },
		{ "TryMoveToSlideAlongSurfaceNoMovementRecord", &UMovementUtils::execTryMoveToSlideAlongSurfaceNoMovementRecord },
		{ "TrySafeMoveAndSlideUpdatedComponent", &UMovementUtils::execTrySafeMoveAndSlideUpdatedComponent },
		{ "TrySafeMoveAndSlideUpdatedComponentNoMovementRecord", &UMovementUtils::execTrySafeMoveAndSlideUpdatedComponentNoMovementRecord },
		{ "TrySafeMoveUpdatedComponent", &UMovementUtils::execTrySafeMoveUpdatedComponent },
		{ "TrySafeMoveUpdatedComponentNoMovementRecord", &UMovementUtils::execTrySafeMoveUpdatedComponentNoMovementRecord },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMovementUtils;
UClass* UMovementUtils::GetPrivateStaticClass()
{
	using TClass = UMovementUtils;
	if (!Z_Registration_Info_UClass_UMovementUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovementUtils"),
			Z_Registration_Info_UClass_UMovementUtils.InnerSingleton,
			StaticRegisterNativesUMovementUtils,
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
	return Z_Registration_Info_UClass_UMovementUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovementUtils_NoRegister()
{
	return UMovementUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovementUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MovementUtils: a collection of stateless static BP-accessible functions for a variety of movement-related operations\n */" },
		{ "IncludePath", "MoveLibrary/MovementUtils.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtils.h" },
		{ "ToolTip", "MovementUtils: a collection of stateless static BP-accessible functions for a variety of movement-related operations" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovementUtils_ApplyGravityToOrientationIntent, "ApplyGravityToOrientationIntent" }, // 1625656860
		{ &Z_Construct_UFunction_UMovementUtils_CanEscapeGravity, "CanEscapeGravity" }, // 2604686855
		{ &Z_Construct_UFunction_UMovementUtils_ComputeAngularVelocity, "ComputeAngularVelocity" }, // 869022810
		{ &Z_Construct_UFunction_UMovementUtils_ComputeCombinedVelocity, "ComputeCombinedVelocity" }, // 3097706235
		{ &Z_Construct_UFunction_UMovementUtils_ComputeDirectionIntent, "ComputeDirectionIntent" }, // 2031691068
		{ &Z_Construct_UFunction_UMovementUtils_ComputeSlideDelta, "ComputeSlideDelta" }, // 2759695303
		{ &Z_Construct_UFunction_UMovementUtils_ComputeVelocity, "ComputeVelocity" }, // 1813509156
		{ &Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromGravity, "ComputeVelocityFromGravity" }, // 2345047943
		{ &Z_Construct_UFunction_UMovementUtils_ComputeVelocityFromPositions, "ComputeVelocityFromPositions" }, // 2776583878
		{ &Z_Construct_UFunction_UMovementUtils_ConstrainToPlane, "ConstrainToPlane" }, // 498704033
		{ &Z_Construct_UFunction_UMovementUtils_DeduceUpDirectionFromGravity, "DeduceUpDirectionFromGravity" }, // 2073399840
		{ &Z_Construct_UFunction_UMovementUtils_FindTeleportSpot, "FindTeleportSpot" }, // 3628707693
		{ &Z_Construct_UFunction_UMovementUtils_GetGravityVerticalComponent, "GetGravityVerticalComponent" }, // 1780305209
		{ &Z_Construct_UFunction_UMovementUtils_IsAngularVelocityZero, "IsAngularVelocityZero" }, // 1913963797
		{ &Z_Construct_UFunction_UMovementUtils_IsExceedingMaxSpeed, "IsExceedingMaxSpeed" }, // 1023511994
		{ &Z_Construct_UFunction_UMovementUtils_ProjectToGravityFloor, "ProjectToGravityFloor" }, // 220526309
		{ &Z_Construct_UFunction_UMovementUtils_TestEncroachment, "TestEncroachment" }, // 1037185145
		{ &Z_Construct_UFunction_UMovementUtils_TestEncroachmentAndAdjust, "TestEncroachmentAndAdjust" }, // 3624358662
		{ &Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurface, "TryMoveToSlideAlongSurface" }, // 1502191661
		{ &Z_Construct_UFunction_UMovementUtils_TryMoveToSlideAlongSurfaceNoMovementRecord, "TryMoveToSlideAlongSurfaceNoMovementRecord" }, // 1119051090
		{ &Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponent, "TrySafeMoveAndSlideUpdatedComponent" }, // 2917137489
		{ &Z_Construct_UFunction_UMovementUtils_TrySafeMoveAndSlideUpdatedComponentNoMovementRecord, "TrySafeMoveAndSlideUpdatedComponentNoMovementRecord" }, // 4057727825
		{ &Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponent, "TrySafeMoveUpdatedComponent" }, // 857738419
		{ &Z_Construct_UFunction_UMovementUtils_TrySafeMoveUpdatedComponentNoMovementRecord, "TrySafeMoveUpdatedComponentNoMovementRecord" }, // 3355204581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovementUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementUtils_Statics::ClassParams = {
	&UMovementUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementUtils()
{
	if (!Z_Registration_Info_UClass_UMovementUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementUtils.OuterSingleton, Z_Construct_UClass_UMovementUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementUtils.OuterSingleton;
}
UMovementUtils::UMovementUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementUtils);
UMovementUtils::~UMovementUtils() {}
// ********** End Class UMovementUtils *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTrajectorySampleInfo::StaticStruct, Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics::NewStructOps, TEXT("TrajectorySampleInfo"), &Z_Registration_Info_UScriptStruct_FTrajectorySampleInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrajectorySampleInfo), 3606441607U) },
		{ FComputeVelocityParams::StaticStruct, Z_Construct_UScriptStruct_FComputeVelocityParams_Statics::NewStructOps, TEXT("ComputeVelocityParams"), &Z_Registration_Info_UScriptStruct_FComputeVelocityParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeVelocityParams), 2240887725U) },
		{ FComputeCombinedVelocityParams::StaticStruct, Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics::NewStructOps, TEXT("ComputeCombinedVelocityParams"), &Z_Registration_Info_UScriptStruct_FComputeCombinedVelocityParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeCombinedVelocityParams), 1455967790U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovementUtils, UMovementUtils::StaticClass, TEXT("UMovementUtils"), &Z_Registration_Info_UClass_UMovementUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementUtils), 1754303890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h__Script_Mover_1013911562(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
