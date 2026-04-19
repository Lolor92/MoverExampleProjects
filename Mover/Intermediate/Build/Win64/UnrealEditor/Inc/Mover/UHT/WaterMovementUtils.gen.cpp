// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/WaterMovementUtils.h"
#include "Engine/HitResult.h"
#include "MoveLibrary/MovementUtilsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWaterMovementUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MOVER_API UClass* Z_Construct_UClass_UWaterMovementUtils();
MOVER_API UClass* Z_Construct_UClass_UWaterMovementUtils_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoveInputType();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FProposedMove();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterCheckResult();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterFlowSplineData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterMoveParams();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWaterMoveParams **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWaterMoveParams;
class UScriptStruct* FWaterMoveParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWaterMoveParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWaterMoveParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterMoveParams, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("WaterMoveParams"));
	}
	return Z_Registration_Info_UScriptStruct_FWaterMoveParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWaterMoveParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input parameters for ComputeControlledWaterMove()\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "Input parameters for ComputeControlledWaterMove()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputType_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationIntent_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorOrientation_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningRate_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurningBoost_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAcceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldToGravityQuat_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToGravityQuat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterMoveParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveInputType = { "MoveInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, MoveInputType), Z_Construct_UEnum_Mover_EMoveInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputType_MetaData), NewProp_MoveInputType_MetaData) }; // 3894675629
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, MoveInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_OrientationIntent = { "OrientationIntent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, OrientationIntent), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationIntent_MetaData), NewProp_OrientationIntent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_PriorVelocity = { "PriorVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, PriorVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorVelocity_MetaData), NewProp_PriorVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_PriorOrientation = { "PriorOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, PriorOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorOrientation_MetaData), NewProp_PriorOrientation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, Deceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deceleration_MetaData), NewProp_Deceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_TurningRate = { "TurningRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, TurningRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningRate_MetaData), NewProp_TurningRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_TurningBoost = { "TurningBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, TurningBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurningBoost_MetaData), NewProp_TurningBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, DeltaSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaSeconds_MetaData), NewProp_DeltaSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveAcceleration = { "MoveAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, MoveAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAcceleration_MetaData), NewProp_MoveAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_WorldToGravityQuat = { "WorldToGravityQuat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterMoveParams, WorldToGravityQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldToGravityQuat_MetaData), NewProp_WorldToGravityQuat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterMoveParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_OrientationIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_PriorVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_PriorOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_Deceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_TurningRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_TurningBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewProp_WorldToGravityQuat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterMoveParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterMoveParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"WaterMoveParams",
	Z_Construct_UScriptStruct_FWaterMoveParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterMoveParams_Statics::PropPointers),
	sizeof(FWaterMoveParams),
	alignof(FWaterMoveParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterMoveParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaterMoveParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaterMoveParams()
{
	if (!Z_Registration_Info_UScriptStruct_FWaterMoveParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWaterMoveParams.InnerSingleton, Z_Construct_UScriptStruct_FWaterMoveParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWaterMoveParams.InnerSingleton;
}
// ********** End ScriptStruct FWaterMoveParams ****************************************************

// ********** Begin ScriptStruct FWaterFlowSplineData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWaterFlowSplineData;
class UScriptStruct* FWaterFlowSplineData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWaterFlowSplineData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWaterFlowSplineData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterFlowSplineData, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("WaterFlowSplineData"));
	}
	return Z_Registration_Info_UScriptStruct_FWaterFlowSplineData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWaterFlowSplineData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data about the water volume and its interaction with the pawn used in calculating swimming movement\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "Data about the water volume and its interaction with the pawn used in calculating swimming movement" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterFlowSplineData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterFlowSplineData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"WaterFlowSplineData",
	nullptr,
	0,
	sizeof(FWaterFlowSplineData),
	alignof(FWaterFlowSplineData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterFlowSplineData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaterFlowSplineData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaterFlowSplineData()
{
	if (!Z_Registration_Info_UScriptStruct_FWaterFlowSplineData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWaterFlowSplineData.InnerSingleton, Z_Construct_UScriptStruct_FWaterFlowSplineData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWaterFlowSplineData.InnerSingleton;
}
// ********** End ScriptStruct FWaterFlowSplineData ************************************************

// ********** Begin ScriptStruct FWaterCheckResult *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWaterCheckResult;
class UScriptStruct* FWaterCheckResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWaterCheckResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWaterCheckResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterCheckResult, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("WaterCheckResult"));
	}
	return Z_Registration_Info_UScriptStruct_FWaterCheckResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWaterCheckResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data about the overlapping volume typically used for swimming */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "Data about the overlapping volume typically used for swimming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwimmableVolume_MetaData[] = {
		{ "Category", "CharacterVolume" },
		{ "Comment", "/** True if the hit found a valid swimmable volume. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "True if the hit found a valid swimmable volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "Category", "CharacterVolume" },
		{ "Comment", "/** Hit result of the test that found a volume. Includes more specific data about the point of impact and surface normal at that point. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "Hit result of the test that found a volume. Includes more specific data about the point of impact and surface normal at that point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterSplineData_MetaData[] = {
		{ "Category", "CharacterVolume" },
		{ "Comment", "/** Water Spline data to be used in calculating swimming movement, FX, etc. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "Water Spline data to be used in calculating swimming movement, FX, etc." },
	};
#endif // WITH_METADATA
	static void NewProp_bSwimmableVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwimmableVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterSplineData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterCheckResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FWaterCheckResult_Statics::NewProp_bSwimmableVolume_SetBit(void* Obj)
{
	((FWaterCheckResult*)Obj)->bSwimmableVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaterCheckResult_Statics::NewProp_bSwimmableVolume = { "bSwimmableVolume", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FWaterCheckResult), &Z_Construct_UScriptStruct_FWaterCheckResult_Statics::NewProp_bSwimmableVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwimmableVolume_MetaData), NewProp_bSwimmableVolume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterCheckResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterCheckResult, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterCheckResult_Statics::NewProp_WaterSplineData = { "WaterSplineData", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaterCheckResult, WaterSplineData), Z_Construct_UScriptStruct_FWaterFlowSplineData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterSplineData_MetaData), NewProp_WaterSplineData_MetaData) }; // 2329805660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterCheckResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterCheckResult_Statics::NewProp_bSwimmableVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterCheckResult_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterCheckResult_Statics::NewProp_WaterSplineData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCheckResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterCheckResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"WaterCheckResult",
	Z_Construct_UScriptStruct_FWaterCheckResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCheckResult_Statics::PropPointers),
	sizeof(FWaterCheckResult),
	alignof(FWaterCheckResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterCheckResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaterCheckResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaterCheckResult()
{
	if (!Z_Registration_Info_UScriptStruct_FWaterCheckResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWaterCheckResult.InnerSingleton, Z_Construct_UScriptStruct_FWaterCheckResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWaterCheckResult.InnerSingleton;
}
// ********** End ScriptStruct FWaterCheckResult ***************************************************

// ********** Begin ScriptStruct FUpdateWaterSplineDataParams **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUpdateWaterSplineDataParams;
class UScriptStruct* FUpdateWaterSplineDataParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUpdateWaterSplineDataParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUpdateWaterSplineDataParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("UpdateWaterSplineDataParams"));
	}
	return Z_Registration_Info_UScriptStruct_FUpdateWaterSplineDataParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input parameters for Updating WaterSplineData\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "Input parameters for Updating WaterSplineData" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetImmersionDepth_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocityDepthForMax_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocityMinMultiplier_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetImmersionDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterVelocityDepthForMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterVelocityMinMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateWaterSplineDataParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_TargetImmersionDepth = { "TargetImmersionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateWaterSplineDataParams, TargetImmersionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetImmersionDepth_MetaData), NewProp_TargetImmersionDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_WaterVelocityDepthForMax = { "WaterVelocityDepthForMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateWaterSplineDataParams, WaterVelocityDepthForMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterVelocityDepthForMax_MetaData), NewProp_WaterVelocityDepthForMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_WaterVelocityMinMultiplier = { "WaterVelocityMinMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateWaterSplineDataParams, WaterVelocityMinMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterVelocityMinMultiplier_MetaData), NewProp_WaterVelocityMinMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_PlayerVelocity = { "PlayerVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateWaterSplineDataParams, PlayerVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerVelocity_MetaData), NewProp_PlayerVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateWaterSplineDataParams, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLocation_MetaData), NewProp_PlayerLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateWaterSplineDataParams, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHalfHeight_MetaData), NewProp_CapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_TargetImmersionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_WaterVelocityDepthForMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_WaterVelocityMinMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_PlayerVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_PlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewProp_CapsuleHalfHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"UpdateWaterSplineDataParams",
	Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::PropPointers),
	sizeof(FUpdateWaterSplineDataParams),
	alignof(FUpdateWaterSplineDataParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams()
{
	if (!Z_Registration_Info_UScriptStruct_FUpdateWaterSplineDataParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUpdateWaterSplineDataParams.InnerSingleton, Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUpdateWaterSplineDataParams.InnerSingleton;
}
// ********** End ScriptStruct FUpdateWaterSplineDataParams ****************************************

// ********** Begin Class UWaterMovementUtils Function ComputeControlledWaterMove ******************
struct Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics
{
	struct WaterMovementUtils_eventComputeControlledWaterMove_Parms
	{
		FWaterMoveParams InParams;
		FProposedMove ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Generate a new movement based on move/orientation intents and the prior state for the swimming move */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "Generate a new movement based on move/orientation intents and the prior state for the swimming move" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaterMovementUtils_eventComputeControlledWaterMove_Parms, InParams), Z_Construct_UScriptStruct_FWaterMoveParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParams_MetaData), NewProp_InParams_MetaData) }; // 2364538443
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaterMovementUtils_eventComputeControlledWaterMove_Parms, ReturnValue), Z_Construct_UScriptStruct_FProposedMove, METADATA_PARAMS(0, nullptr) }; // 545505266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::NewProp_InParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWaterMovementUtils, nullptr, "ComputeControlledWaterMove", Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::WaterMovementUtils_eventComputeControlledWaterMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::WaterMovementUtils_eventComputeControlledWaterMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaterMovementUtils::execComputeControlledWaterMove)
{
	P_GET_STRUCT_REF(FWaterMoveParams,Z_Param_Out_InParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FProposedMove*)Z_Param__Result=UWaterMovementUtils::ComputeControlledWaterMove(Z_Param_Out_InParams);
	P_NATIVE_END;
}
// ********** End Class UWaterMovementUtils Function ComputeControlledWaterMove ********************

// ********** Begin Class UWaterMovementUtils Function UpdateWaterSplineData ***********************
struct Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics
{
	struct WaterMovementUtils_eventUpdateWaterSplineData_Parms
	{
		FUpdateWaterSplineDataParams UpdateWaterSplineDataParams;
		FWaterCheckResult WaterCheckResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Updates the water spline data used in calculated swimming movement */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "Updates the water spline data used in calculated swimming movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateWaterSplineDataParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateWaterSplineDataParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterCheckResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::NewProp_UpdateWaterSplineDataParams = { "UpdateWaterSplineDataParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaterMovementUtils_eventUpdateWaterSplineData_Parms, UpdateWaterSplineDataParams), Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateWaterSplineDataParams_MetaData), NewProp_UpdateWaterSplineDataParams_MetaData) }; // 3300549233
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::NewProp_WaterCheckResult = { "WaterCheckResult", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaterMovementUtils_eventUpdateWaterSplineData_Parms, WaterCheckResult), Z_Construct_UScriptStruct_FWaterCheckResult, METADATA_PARAMS(0, nullptr) }; // 3901361364
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::NewProp_UpdateWaterSplineDataParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::NewProp_WaterCheckResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWaterMovementUtils, nullptr, "UpdateWaterSplineData", Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::WaterMovementUtils_eventUpdateWaterSplineData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::WaterMovementUtils_eventUpdateWaterSplineData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWaterMovementUtils::execUpdateWaterSplineData)
{
	P_GET_STRUCT_REF(FUpdateWaterSplineDataParams,Z_Param_Out_UpdateWaterSplineDataParams);
	P_GET_STRUCT_REF(FWaterCheckResult,Z_Param_Out_WaterCheckResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWaterMovementUtils::UpdateWaterSplineData(Z_Param_Out_UpdateWaterSplineDataParams,Z_Param_Out_WaterCheckResult);
	P_NATIVE_END;
}
// ********** End Class UWaterMovementUtils Function UpdateWaterSplineData *************************

// ********** Begin Class UWaterMovementUtils ******************************************************
void UWaterMovementUtils::StaticRegisterNativesUWaterMovementUtils()
{
	UClass* Class = UWaterMovementUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputeControlledWaterMove", &UWaterMovementUtils::execComputeControlledWaterMove },
		{ "UpdateWaterSplineData", &UWaterMovementUtils::execUpdateWaterSplineData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWaterMovementUtils;
UClass* UWaterMovementUtils::GetPrivateStaticClass()
{
	using TClass = UWaterMovementUtils;
	if (!Z_Registration_Info_UClass_UWaterMovementUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WaterMovementUtils"),
			Z_Registration_Info_UClass_UWaterMovementUtils.InnerSingleton,
			StaticRegisterNativesUWaterMovementUtils,
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
	return Z_Registration_Info_UClass_UWaterMovementUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UWaterMovementUtils_NoRegister()
{
	return UWaterMovementUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWaterMovementUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * WaterMovementUtils: a collection of stateless static BP-accessible functions for a variety of water movement-related operations\n */" },
		{ "IncludePath", "MoveLibrary/WaterMovementUtils.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/WaterMovementUtils.h" },
		{ "ToolTip", "WaterMovementUtils: a collection of stateless static BP-accessible functions for a variety of water movement-related operations" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaterMovementUtils_ComputeControlledWaterMove, "ComputeControlledWaterMove" }, // 3983696558
		{ &Z_Construct_UFunction_UWaterMovementUtils_UpdateWaterSplineData, "UpdateWaterSplineData" }, // 138957531
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterMovementUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWaterMovementUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMovementUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterMovementUtils_Statics::ClassParams = {
	&UWaterMovementUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMovementUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaterMovementUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaterMovementUtils()
{
	if (!Z_Registration_Info_UClass_UWaterMovementUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterMovementUtils.OuterSingleton, Z_Construct_UClass_UWaterMovementUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaterMovementUtils.OuterSingleton;
}
UWaterMovementUtils::UWaterMovementUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterMovementUtils);
UWaterMovementUtils::~UWaterMovementUtils() {}
// ********** End Class UWaterMovementUtils ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWaterMoveParams::StaticStruct, Z_Construct_UScriptStruct_FWaterMoveParams_Statics::NewStructOps, TEXT("WaterMoveParams"), &Z_Registration_Info_UScriptStruct_FWaterMoveParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterMoveParams), 2364538443U) },
		{ FWaterFlowSplineData::StaticStruct, Z_Construct_UScriptStruct_FWaterFlowSplineData_Statics::NewStructOps, TEXT("WaterFlowSplineData"), &Z_Registration_Info_UScriptStruct_FWaterFlowSplineData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterFlowSplineData), 2329805660U) },
		{ FWaterCheckResult::StaticStruct, Z_Construct_UScriptStruct_FWaterCheckResult_Statics::NewStructOps, TEXT("WaterCheckResult"), &Z_Registration_Info_UScriptStruct_FWaterCheckResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterCheckResult), 3901361364U) },
		{ FUpdateWaterSplineDataParams::StaticStruct, Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics::NewStructOps, TEXT("UpdateWaterSplineDataParams"), &Z_Registration_Info_UScriptStruct_FUpdateWaterSplineDataParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateWaterSplineDataParams), 3300549233U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaterMovementUtils, UWaterMovementUtils::StaticClass, TEXT("UWaterMovementUtils"), &Z_Registration_Info_UClass_UWaterMovementUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterMovementUtils), 401848098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h__Script_Mover_908472601(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
