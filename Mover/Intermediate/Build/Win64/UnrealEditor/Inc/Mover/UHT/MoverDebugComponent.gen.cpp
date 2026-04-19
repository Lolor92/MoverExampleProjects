// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debug/MoverDebugComponent.h"
#include "MoveLibrary/MovementUtils.h"
#include "MoverTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverDebugComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOVER_API UClass* Z_Construct_UClass_UMoverDebugComponent();
MOVER_API UClass* Z_Construct_UClass_UMoverDebugComponent_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTimeStep();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleInfo();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverDebugComponent Function GetPastTrajectory **************************
struct Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics
{
	struct MoverDebugComponent_eventGetPastTrajectory_Parms
	{
		TArray<FTrajectorySampleInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Get a read-only sampling of where the actor has recently been, ordered by ascending age. Will be empty unless history tracking is enabled. @see SetHistoryTracking */" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Get a read-only sampling of where the actor has recently been, ordered by ascending age. Will be empty unless history tracking is enabled. @see SetHistoryTracking" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTrajectorySampleInfo, METADATA_PARAMS(0, nullptr) }; // 3606441607
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDebugComponent_eventGetPastTrajectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3606441607
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDebugComponent, nullptr, "GetPastTrajectory", Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::MoverDebugComponent_eventGetPastTrajectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::MoverDebugComponent_eventGetPastTrajectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDebugComponent::execGetPastTrajectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTrajectorySampleInfo>*)Z_Param__Result=P_THIS->GetPastTrajectory();
	P_NATIVE_END;
}
// ********** End Class UMoverDebugComponent Function GetPastTrajectory ****************************

// ********** Begin Class UMoverDebugComponent Function OnHistoryTrackingRollback ******************
struct Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics
{
	struct MoverDebugComponent_eventOnHistoryTrackingRollback_Parms
	{
		FMoverTimeStep NewTimeStep;
		FMoverTimeStep InvalidatedTimeStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidatedTimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidatedTimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::NewProp_NewTimeStep = { "NewTimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDebugComponent_eventOnHistoryTrackingRollback_Parms, NewTimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTimeStep_MetaData), NewProp_NewTimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::NewProp_InvalidatedTimeStep = { "InvalidatedTimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDebugComponent_eventOnHistoryTrackingRollback_Parms, InvalidatedTimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidatedTimeStep_MetaData), NewProp_InvalidatedTimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::NewProp_NewTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::NewProp_InvalidatedTimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDebugComponent, nullptr, "OnHistoryTrackingRollback", Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::MoverDebugComponent_eventOnHistoryTrackingRollback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::MoverDebugComponent_eventOnHistoryTrackingRollback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDebugComponent::execOnHistoryTrackingRollback)
{
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_NewTimeStep);
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_InvalidatedTimeStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHistoryTrackingRollback(Z_Param_Out_NewTimeStep,Z_Param_Out_InvalidatedTimeStep);
	P_NATIVE_END;
}
// ********** End Class UMoverDebugComponent Function OnHistoryTrackingRollback ********************

// ********** Begin Class UMoverDebugComponent Function OnMovementSimRollback **********************
struct Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics
{
	struct MoverDebugComponent_eventOnMovementSimRollback_Parms
	{
		FMoverTimeStep NewTimeStep;
		FMoverTimeStep InvalidatedTimeStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidatedTimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidatedTimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::NewProp_NewTimeStep = { "NewTimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDebugComponent_eventOnMovementSimRollback_Parms, NewTimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTimeStep_MetaData), NewProp_NewTimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::NewProp_InvalidatedTimeStep = { "InvalidatedTimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDebugComponent_eventOnMovementSimRollback_Parms, InvalidatedTimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidatedTimeStep_MetaData), NewProp_InvalidatedTimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::NewProp_NewTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::NewProp_InvalidatedTimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDebugComponent, nullptr, "OnMovementSimRollback", Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::MoverDebugComponent_eventOnMovementSimRollback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::MoverDebugComponent_eventOnMovementSimRollback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDebugComponent::execOnMovementSimRollback)
{
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_NewTimeStep);
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_InvalidatedTimeStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMovementSimRollback(Z_Param_Out_NewTimeStep,Z_Param_Out_InvalidatedTimeStep);
	P_NATIVE_END;
}
// ********** End Class UMoverDebugComponent Function OnMovementSimRollback ************************

// ********** Begin Class UMoverDebugComponent Function OnMovementSimTick **************************
struct Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics
{
	struct MoverDebugComponent_eventOnMovementSimTick_Parms
	{
		FMoverTimeStep TimeStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Begin Trail simulation\n" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Begin Trail simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDebugComponent_eventOnMovementSimTick_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::NewProp_TimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDebugComponent, nullptr, "OnMovementSimTick", Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::MoverDebugComponent_eventOnMovementSimTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::MoverDebugComponent_eventOnMovementSimTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDebugComponent::execOnMovementSimTick)
{
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_TimeStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMovementSimTick(Z_Param_Out_TimeStep);
	P_NATIVE_END;
}
// ********** End Class UMoverDebugComponent Function OnMovementSimTick ****************************

// ********** Begin Class UMoverDebugComponent Function SetHistoryTracking *************************
struct Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics
{
	struct MoverDebugComponent_eventSetHistoryTracking_Parms
	{
		float SecondsToTrack;
		float SamplesPerSecond;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Change history tracking feature settings. Anything <= 0 for SecondsToTrack will disable the feature. */" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Change history tracking feature settings. Anything <= 0 for SecondsToTrack will disable the feature." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsToTrack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplesPerSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::NewProp_SecondsToTrack = { "SecondsToTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDebugComponent_eventSetHistoryTracking_Parms, SecondsToTrack), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::NewProp_SamplesPerSecond = { "SamplesPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDebugComponent_eventSetHistoryTracking_Parms, SamplesPerSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::NewProp_SecondsToTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::NewProp_SamplesPerSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDebugComponent, nullptr, "SetHistoryTracking", Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::MoverDebugComponent_eventSetHistoryTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::MoverDebugComponent_eventSetHistoryTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDebugComponent::execSetHistoryTracking)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SecondsToTrack);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SamplesPerSecond);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHistoryTracking(Z_Param_SecondsToTrack,Z_Param_SamplesPerSecond);
	P_NATIVE_END;
}
// ********** End Class UMoverDebugComponent Function SetHistoryTracking ***************************

// ********** Begin Class UMoverDebugComponent *****************************************************
void UMoverDebugComponent::StaticRegisterNativesUMoverDebugComponent()
{
	UClass* Class = UMoverDebugComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPastTrajectory", &UMoverDebugComponent::execGetPastTrajectory },
		{ "OnHistoryTrackingRollback", &UMoverDebugComponent::execOnHistoryTrackingRollback },
		{ "OnMovementSimRollback", &UMoverDebugComponent::execOnMovementSimRollback },
		{ "OnMovementSimTick", &UMoverDebugComponent::execOnMovementSimTick },
		{ "SetHistoryTracking", &UMoverDebugComponent::execSetHistoryTracking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverDebugComponent;
UClass* UMoverDebugComponent::GetPrivateStaticClass()
{
	using TClass = UMoverDebugComponent;
	if (!Z_Registration_Info_UClass_UMoverDebugComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverDebugComponent"),
			Z_Registration_Info_UClass_UMoverDebugComponent.InnerSingleton,
			StaticRegisterNativesUMoverDebugComponent,
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
	return Z_Registration_Info_UClass_UMoverDebugComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverDebugComponent_NoRegister()
{
	return UMoverDebugComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverDebugComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Component to help display debug information for actors using the Mover Component. Is expected to be attached to the actor that has the mover component.\n *  Currently supports trajectory functionality and trailing functionality. Is also used in the gameplay debugger under the mover category. */" },
		{ "IncludePath", "Debug/MoverDebugComponent.h" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Component to help display debug information for actors using the Mover Component. Is expected to be attached to the actor that has the mover component.\nCurrently supports trajectory functionality and trailing functionality. Is also used in the gameplay debugger under the mover category." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookaheadSeconds_MetaData[] = {
		{ "Category", "MoverDebug" },
		{ "Comment", "/** Number of seconds to lookahead and show the current trajectory */" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Number of seconds to lookahead and show the current trajectory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookaheadSamplesPerSecond_MetaData[] = {
		{ "Category", "MoverDebug" },
		{ "Comment", "/** Number of times trajectory will be sampled each second */" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Number of times trajectory will be sampled each second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTrajectory_MetaData[] = {
		{ "Category", "MoverDebug" },
		{ "Comment", "/** Whether this component should show the trajectory of the movement component of the Actor it's attached too */" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Whether this component should show the trajectory of the movement component of the Actor it's attached too" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTrail_MetaData[] = {
		{ "Category", "MoverDebug" },
		{ "Comment", "/** Whether this component should show the trail of the movement component of the Actor it's attached too */" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Whether this component should show the trail of the movement component of the Actor it's attached too" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCorrections_MetaData[] = {
		{ "Category", "MoverDebug" },
		{ "Comment", "/** Whether this component should show the corrections and rollbacks applied to the Actor it's attached too */" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Whether this component should show the corrections and rollbacks applied to the Actor it's attached too" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HistoryTrackingSeconds_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Begin Motion history tracking\n// Max age of tracked samples. Feature is disabled for values <= 0. @see SetHistoryTracking\n" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Begin Motion history tracking\nMax age of tracked samples. Feature is disabled for values <= 0. @see SetHistoryTracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HistorySamplesPerSecond_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Target sampling rate for history tracking. Note that sampling rate is variable and may be higher during times of rapid change. @see SetHistoryTracking\n" },
		{ "ModuleRelativePath", "Public/Debug/MoverDebugComponent.h" },
		{ "ToolTip", "Target sampling rate for history tracking. Note that sampling rate is variable and may be higher during times of rapid change. @see SetHistoryTracking" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookaheadSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LookaheadSamplesPerSecond;
	static void NewProp_bShowTrajectory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTrajectory;
	static void NewProp_bShowTrail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTrail;
	static void NewProp_bShowCorrections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCorrections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HistoryTrackingSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistorySamplesPerSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverDebugComponent_GetPastTrajectory, "GetPastTrajectory" }, // 1383559218
		{ &Z_Construct_UFunction_UMoverDebugComponent_OnHistoryTrackingRollback, "OnHistoryTrackingRollback" }, // 1466380013
		{ &Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimRollback, "OnMovementSimRollback" }, // 1157055195
		{ &Z_Construct_UFunction_UMoverDebugComponent_OnMovementSimTick, "OnMovementSimTick" }, // 1177650717
		{ &Z_Construct_UFunction_UMoverDebugComponent_SetHistoryTracking, "SetHistoryTracking" }, // 89378194
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverDebugComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_LookaheadSeconds = { "LookaheadSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverDebugComponent, LookaheadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookaheadSeconds_MetaData), NewProp_LookaheadSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_LookaheadSamplesPerSecond = { "LookaheadSamplesPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverDebugComponent, LookaheadSamplesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookaheadSamplesPerSecond_MetaData), NewProp_LookaheadSamplesPerSecond_MetaData) };
void Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowTrajectory_SetBit(void* Obj)
{
	((UMoverDebugComponent*)Obj)->bShowTrajectory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowTrajectory = { "bShowTrajectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverDebugComponent), &Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowTrajectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTrajectory_MetaData), NewProp_bShowTrajectory_MetaData) };
void Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowTrail_SetBit(void* Obj)
{
	((UMoverDebugComponent*)Obj)->bShowTrail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowTrail = { "bShowTrail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverDebugComponent), &Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowTrail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTrail_MetaData), NewProp_bShowTrail_MetaData) };
void Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowCorrections_SetBit(void* Obj)
{
	((UMoverDebugComponent*)Obj)->bShowCorrections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowCorrections = { "bShowCorrections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverDebugComponent), &Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowCorrections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCorrections_MetaData), NewProp_bShowCorrections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_HistoryTrackingSeconds = { "HistoryTrackingSeconds", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverDebugComponent, HistoryTrackingSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HistoryTrackingSeconds_MetaData), NewProp_HistoryTrackingSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_HistorySamplesPerSecond = { "HistorySamplesPerSecond", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverDebugComponent, HistorySamplesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HistorySamplesPerSecond_MetaData), NewProp_HistorySamplesPerSecond_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoverDebugComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_LookaheadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_LookaheadSamplesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowTrajectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowTrail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_bShowCorrections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_HistoryTrackingSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverDebugComponent_Statics::NewProp_HistorySamplesPerSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDebugComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoverDebugComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDebugComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverDebugComponent_Statics::ClassParams = {
	&UMoverDebugComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoverDebugComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDebugComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDebugComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverDebugComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverDebugComponent()
{
	if (!Z_Registration_Info_UClass_UMoverDebugComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverDebugComponent.OuterSingleton, Z_Construct_UClass_UMoverDebugComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverDebugComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverDebugComponent);
UMoverDebugComponent::~UMoverDebugComponent() {}
// ********** End Class UMoverDebugComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverDebugComponent, UMoverDebugComponent::StaticClass, TEXT("UMoverDebugComponent"), &Z_Registration_Info_UClass_UMoverDebugComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverDebugComponent), 2592760307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h__Script_Mover_4047596438(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
