// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_GenerateMoverTrajectory.h"

#ifdef MOVERANIMNEXT_RigUnit_GenerateMoverTrajectory_generated_h
#error "RigUnit_GenerateMoverTrajectory.generated.h already included, missing '#pragma once' in RigUnit_GenerateMoverTrajectory.h"
#endif
#define MOVERANIMNEXT_RigUnit_GenerateMoverTrajectory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GenerateMoverTrajectory **********************************

#define FRigUnit_GenerateMoverTrajectory_Execute() \
	void FRigUnit_GenerateMoverTrajectory::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UMoverComponent>& MoverComponent, \
		const float DeltaTime, \
		const float HistorySamplingInterval, \
		const int32 NumHistorySamples, \
		const float PredictionSamplingInterval, \
		const int32 NumPredictionSamples, \
		FTransformTrajectory& InOutTrajectory \
	)

#define FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_GenerateMoverTrajectory_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics; \
	MOVERANIMNEXT_API static class UScriptStruct* StaticStruct(); \
	MOVERANIMNEXT_API virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UMoverComponent>& MoverComponent, \
		const float DeltaTime, \
		const float HistorySamplingInterval, \
		const int32 NumHistorySamples, \
		const float PredictionSamplingInterval, \
		const int32 NumPredictionSamples, \
		FTransformTrajectory& InOutTrajectory \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<UMoverComponent>& MoverComponent = *(TObjectPtr<UMoverComponent>*)RigVMMemoryHandles[0].GetData(false); \
		const float DeltaTime = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float HistorySamplingInterval = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const int32 NumHistorySamples = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		const float PredictionSamplingInterval = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 NumPredictionSamples = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		FTransformTrajectory& InOutTrajectory = *(FTransformTrajectory*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			MoverComponent, \
			DeltaTime, \
			HistorySamplingInterval, \
			NumHistorySamples, \
			PredictionSamplingInterval, \
			NumPredictionSamples, \
			InOutTrajectory \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_GenerateMoverTrajectory;
// ********** End ScriptStruct FRigUnit_GenerateMoverTrajectory ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_GenerateMoverTrajectory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
