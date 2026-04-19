// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/AsyncMovementUtils.h"
#include "Engine/HitResult.h"
#include "MoveLibrary/MovementRecord.h"
#include "MoveLibrary/MovementUtilsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncMovementUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MOVER_API UClass* Z_Construct_UClass_UAsyncMovementUtils();
MOVER_API UClass* Z_Construct_UClass_UAsyncMovementUtils_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementRecord();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovingComponentSet();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncMovementUtils Function TestDepenetratingMove ***********************
struct Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics
{
	struct AsyncMovementUtils_eventTestDepenetratingMove_Parms
	{
		FMovingComponentSet MovingComps;
		FVector StartLocation;
		FVector TargetLocation;
		FQuat StartRotation;
		FQuat TargetRotation;
		bool bShouldSweep;
		FHitResult OutHit;
		FMovementRecord InOutMoveRecord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Tests potential movement of a component without actually moving it, taking penetration resolution issues into account first.  \n\x09 * Returns true if any movement was possible\n\x09 * Modifies OutHit with final movement hit data\n\x09 * Appends to InOutMoveRecord with any movement substeps\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AsyncMovementUtils.h" },
		{ "ToolTip", "Tests potential movement of a component without actually moving it, taking penetration resolution issues into account first.\nReturns true if any movement was possible\nModifies OutHit with final movement hit data\nAppends to InOutMoveRecord with any movement substeps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovingComps_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovingComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static void NewProp_bShouldSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutMoveRecord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestDepenetratingMove_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestDepenetratingMove_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestDepenetratingMove_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestDepenetratingMove_Parms, StartRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotation_MetaData), NewProp_StartRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestDepenetratingMove_Parms, TargetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
void Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_bShouldSweep_SetBit(void* Obj)
{
	((AsyncMovementUtils_eventTestDepenetratingMove_Parms*)Obj)->bShouldSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_bShouldSweep = { "bShouldSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncMovementUtils_eventTestDepenetratingMove_Parms), &Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_bShouldSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestDepenetratingMove_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_InOutMoveRecord = { "InOutMoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestDepenetratingMove_Parms, InOutMoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
void Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncMovementUtils_eventTestDepenetratingMove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncMovementUtils_eventTestDepenetratingMove_Parms), &Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_StartRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_bShouldSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_InOutMoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncMovementUtils, nullptr, "TestDepenetratingMove", Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::AsyncMovementUtils_eventTestDepenetratingMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::AsyncMovementUtils_eventTestDepenetratingMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncMovementUtils::execTestDepenetratingMove)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_StartRotation);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_TargetRotation);
	P_GET_UBOOL(Z_Param_bShouldSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_InOutMoveRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAsyncMovementUtils::TestDepenetratingMove(Z_Param_Out_MovingComps,Z_Param_Out_StartLocation,Z_Param_Out_TargetLocation,Z_Param_Out_StartRotation,Z_Param_Out_TargetRotation,Z_Param_bShouldSweep,Z_Param_Out_OutHit,Z_Param_Out_InOutMoveRecord);
	P_NATIVE_END;
}
// ********** End Class UAsyncMovementUtils Function TestDepenetratingMove *************************

// ********** Begin Class UAsyncMovementUtils Function TestSlidingMoveAlongHitSurface **************
struct Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics
{
	struct AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms
	{
		FMovingComponentSet MovingComps;
		FVector OriginalMoveDelta;
		FVector LocationAtHit;
		FQuat TargetRotation;
		FHitResult InOutHit;
		FMovementRecord InOutMoveRecord;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Tests potential movement of a component sliding along a surface, without actually moving it. \n\x09 * Returns the percent of time applied, with 0.0 meaning no movement would occur. \n\x09 * Modifies InOutHit with final movement hit data\n\x09 * Appends to InOutMoveRecord with any movement substeps\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AsyncMovementUtils.h" },
		{ "ToolTip", "Tests potential movement of a component sliding along a surface, without actually moving it.\nReturns the percent of time applied, with 0.0 meaning no movement would occur.\nModifies InOutHit with final movement hit data\nAppends to InOutMoveRecord with any movement substeps" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutMoveRecord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_MovingComps = { "MovingComps", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms, MovingComps), Z_Construct_UScriptStruct_FMovingComponentSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovingComps_MetaData), NewProp_MovingComps_MetaData) }; // 1058841493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_OriginalMoveDelta = { "OriginalMoveDelta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms, OriginalMoveDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMoveDelta_MetaData), NewProp_OriginalMoveDelta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_LocationAtHit = { "LocationAtHit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms, LocationAtHit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationAtHit_MetaData), NewProp_LocationAtHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms, TargetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_InOutHit = { "InOutHit", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms, InOutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_InOutMoveRecord = { "InOutMoveRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms, InOutMoveRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_MovingComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_OriginalMoveDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_LocationAtHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_InOutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_InOutMoveRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncMovementUtils, nullptr, "TestSlidingMoveAlongHitSurface", Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::AsyncMovementUtils_eventTestSlidingMoveAlongHitSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncMovementUtils::execTestSlidingMoveAlongHitSurface)
{
	P_GET_STRUCT_REF(FMovingComponentSet,Z_Param_Out_MovingComps);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginalMoveDelta);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationAtHit);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_TargetRotation);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_InOutHit);
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_InOutMoveRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAsyncMovementUtils::TestSlidingMoveAlongHitSurface(Z_Param_Out_MovingComps,Z_Param_Out_OriginalMoveDelta,Z_Param_Out_LocationAtHit,Z_Param_Out_TargetRotation,Z_Param_Out_InOutHit,Z_Param_Out_InOutMoveRecord);
	P_NATIVE_END;
}
// ********** End Class UAsyncMovementUtils Function TestSlidingMoveAlongHitSurface ****************

// ********** Begin Class UAsyncMovementUtils ******************************************************
void UAsyncMovementUtils::StaticRegisterNativesUAsyncMovementUtils()
{
	UClass* Class = UAsyncMovementUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestDepenetratingMove", &UAsyncMovementUtils::execTestDepenetratingMove },
		{ "TestSlidingMoveAlongHitSurface", &UAsyncMovementUtils::execTestSlidingMoveAlongHitSurface },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncMovementUtils;
UClass* UAsyncMovementUtils::GetPrivateStaticClass()
{
	using TClass = UAsyncMovementUtils;
	if (!Z_Registration_Info_UClass_UAsyncMovementUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncMovementUtils"),
			Z_Registration_Info_UClass_UAsyncMovementUtils.InnerSingleton,
			StaticRegisterNativesUAsyncMovementUtils,
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
	return Z_Registration_Info_UClass_UAsyncMovementUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncMovementUtils_NoRegister()
{
	return UAsyncMovementUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncMovementUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AsyncMovementUtils: a collection of stateless static BP-accessible functions focused on testing potential movements in a \n * threadsafe manner without actually causing immediate changes.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "MoveLibrary/AsyncMovementUtils.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/AsyncMovementUtils.h" },
		{ "ToolTip", "AsyncMovementUtils: a collection of stateless static BP-accessible functions focused on testing potential movements in a\nthreadsafe manner without actually causing immediate changes." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncMovementUtils_TestDepenetratingMove, "TestDepenetratingMove" }, // 1042314905
		{ &Z_Construct_UFunction_UAsyncMovementUtils_TestSlidingMoveAlongHitSurface, "TestSlidingMoveAlongHitSurface" }, // 1380532558
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncMovementUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAsyncMovementUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncMovementUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncMovementUtils_Statics::ClassParams = {
	&UAsyncMovementUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncMovementUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncMovementUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncMovementUtils()
{
	if (!Z_Registration_Info_UClass_UAsyncMovementUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncMovementUtils.OuterSingleton, Z_Construct_UClass_UAsyncMovementUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncMovementUtils.OuterSingleton;
}
UAsyncMovementUtils::UAsyncMovementUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncMovementUtils);
UAsyncMovementUtils::~UAsyncMovementUtils() {}
// ********** End Class UAsyncMovementUtils ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncMovementUtils, UAsyncMovementUtils::StaticClass, TEXT("UAsyncMovementUtils"), &Z_Registration_Info_UClass_UAsyncMovementUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncMovementUtils), 1441586777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h__Script_Mover_1254918732(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
