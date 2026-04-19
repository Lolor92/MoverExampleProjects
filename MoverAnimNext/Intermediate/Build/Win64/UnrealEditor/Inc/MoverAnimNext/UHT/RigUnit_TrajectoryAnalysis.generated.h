// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/RigUnit_TrajectoryAnalysis.h"

#ifdef MOVERANIMNEXT_RigUnit_TrajectoryAnalysis_generated_h
#error "RigUnit_TrajectoryAnalysis.generated.h already included, missing '#pragma once' in RigUnit_TrajectoryAnalysis.h"
#endif
#define MOVERANIMNEXT_RigUnit_TrajectoryAnalysis_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetTrajectorySampleAtTime ********************************

#define FRigUnit_GetTrajectorySampleAtTime_Execute() \
	void FRigUnit_GetTrajectorySampleAtTime::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		FTransformTrajectorySample& OutTrajectorySample, \
		const FTransformTrajectory& InTrajectory, \
		const float Time, \
		const bool bExtrapolate \
	)

#define FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_TrajectoryAnalysis_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics; \
	MOVERANIMNEXT_API static class UScriptStruct* StaticStruct(); \
	MOVERANIMNEXT_API virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		FTransformTrajectorySample& OutTrajectorySample, \
		const FTransformTrajectory& InTrajectory, \
		const float Time, \
		const bool bExtrapolate \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransformTrajectorySample& OutTrajectorySample = *(FTransformTrajectorySample*)RigVMMemoryHandles[0].GetData(false); \
		const FTransformTrajectory& InTrajectory = *(FTransformTrajectory*)RigVMMemoryHandles[1].GetData(false); \
		const float Time = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bExtrapolate = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			OutTrajectorySample, \
			InTrajectory, \
			Time, \
			bExtrapolate \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_GetTrajectorySampleAtTime;
// ********** End ScriptStruct FRigUnit_GetTrajectorySampleAtTime **********************************

// ********** Begin ScriptStruct FRigUnit_GetTrajectoryVelocity ************************************

#define FRigUnit_GetTrajectoryVelocity_Execute() \
	void FRigUnit_GetTrajectoryVelocity::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FTransformTrajectory& InTrajectory, \
		FVector& OutVelocity, \
		const float Time1, \
		const float Time2, \
		const bool bExtrapolate \
	)

#define FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_TrajectoryAnalysis_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics; \
	MOVERANIMNEXT_API static class UScriptStruct* StaticStruct(); \
	MOVERANIMNEXT_API virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FTransformTrajectory& InTrajectory, \
		FVector& OutVelocity, \
		const float Time1, \
		const float Time2, \
		const bool bExtrapolate \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransformTrajectory& InTrajectory = *(FTransformTrajectory*)RigVMMemoryHandles[0].GetData(false); \
		FVector& OutVelocity = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const float Time1 = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Time2 = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const bool bExtrapolate = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			InTrajectory, \
			OutVelocity, \
			Time1, \
			Time2, \
			bExtrapolate \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_GetTrajectoryVelocity;
// ********** End ScriptStruct FRigUnit_GetTrajectoryVelocity **************************************

// ********** Begin ScriptStruct FRigUnit_GetTrajectoryAngularVelocity *****************************

#define FRigUnit_GetTrajectoryAngularVelocity_Execute() \
	void FRigUnit_GetTrajectoryAngularVelocity::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FTransformTrajectory& InTrajectory, \
		FVector& OutAngularVelocity, \
		const float Time1, \
		const float Time2, \
		const bool bExtrapolate \
	)

#define FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_TrajectoryAnalysis_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics; \
	MOVERANIMNEXT_API static class UScriptStruct* StaticStruct(); \
	MOVERANIMNEXT_API virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const FTransformTrajectory& InTrajectory, \
		FVector& OutAngularVelocity, \
		const float Time1, \
		const float Time2, \
		const bool bExtrapolate \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransformTrajectory& InTrajectory = *(FTransformTrajectory*)RigVMMemoryHandles[0].GetData(false); \
		FVector& OutAngularVelocity = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const float Time1 = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Time2 = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const bool bExtrapolate = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			InTrajectory, \
			OutAngularVelocity, \
			Time1, \
			Time2, \
			bExtrapolate \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_GetTrajectoryAngularVelocity;
// ********** End ScriptStruct FRigUnit_GetTrajectoryAngularVelocity *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_TrajectoryAnalysis_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
