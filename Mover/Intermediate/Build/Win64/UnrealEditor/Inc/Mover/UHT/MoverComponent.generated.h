// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverComponent.h"

#ifdef MOVER_MoverComponent_generated_h
#error "MoverComponent.generated.h already included, missing '#pragma once' in MoverComponent.h"
#endif
#define MOVER_MoverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class APhysicsVolume;
class UBaseMovementMode;
class UMoverBlackboard;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FHitResult;
struct FMovementModifierHandle;
struct FMoverAuxStateContext;
struct FMoverInputCmdContext;
struct FMoverOnImpactParams;
struct FMoverPredictTrajectoryParams;
struct FMoverSyncState;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FPlanarConstraint;
struct FProposedMove;
struct FTrajectorySampleInfo;

// ********** Begin Delegate FMover_OnPreSimTick ***************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_35_DELEGATE \
MOVER_API void FMover_OnPreSimTick_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPreSimTick, FMoverTimeStep const& TimeStep, FMoverInputCmdContext const& InputCmd);


// ********** End Delegate FMover_OnPreSimTick *****************************************************

// ********** Begin Delegate FMover_OnPreMovement **************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_38_DELEGATE \
MOVER_API void FMover_OnPreMovement_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPreMovement, FMoverTimeStep const& TimeStep, FMoverInputCmdContext const& InputCmd, FMoverSyncState const& SyncState, FMoverAuxStateContext const& AuxState);


// ********** End Delegate FMover_OnPreMovement ****************************************************

// ********** Begin Delegate FMover_OnPostMovement *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_41_DELEGATE \
MOVER_API void FMover_OnPostMovement_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostMovement, FMoverTimeStep const& TimeStep, FMoverSyncState& SyncState, FMoverAuxStateContext& AuxState);


// ********** End Delegate FMover_OnPostMovement ***************************************************

// ********** Begin Delegate FMover_OnPostSimTick **************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_44_DELEGATE \
MOVER_API void FMover_OnPostSimTick_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostSimTick, FMoverTimeStep const& TimeStep);


// ********** End Delegate FMover_OnPostSimTick ****************************************************

// ********** Begin Delegate FMover_OnPostSimRollback **********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_47_DELEGATE \
MOVER_API void FMover_OnPostSimRollback_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostSimRollback, FMoverTimeStep const& CurrentTimeStep, FMoverTimeStep const& ExpungedTimeStep);


// ********** End Delegate FMover_OnPostSimRollback ************************************************

// ********** Begin Delegate FMover_OnMovementModeChanged ******************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_50_DELEGATE \
MOVER_API void FMover_OnMovementModeChanged_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnMovementModeChanged, FName const& PreviousMovementModeName, FName const& NewMovementModeName);


// ********** End Delegate FMover_OnMovementModeChanged ********************************************

// ********** Begin Delegate FMover_OnPostFinalize *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_53_DELEGATE \
MOVER_API void FMover_OnPostFinalize_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnPostFinalize, FMoverSyncState const& SyncState, FMoverAuxStateContext const& AuxState);


// ********** End Delegate FMover_OnPostFinalize ***************************************************

// ********** Begin Delegate FMover_ProcessGeneratedMovement ***************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_56_DELEGATE \
MOVER_API void FMover_ProcessGeneratedMovement_DelegateWrapper(const FScriptDelegate& Mover_ProcessGeneratedMovement, FMoverTickStartData const& StartState, FMoverTimeStep const& TimeStep, FProposedMove& OutProposedMove);


// ********** End Delegate FMover_ProcessGeneratedMovement *****************************************

// ********** Begin Class UMoverComponent **********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPhysicsVolumeChanged); \
	DECLARE_FUNCTION(execHandleImpact); \
	DECLARE_FUNCTION(execRemoveGameplayTags); \
	DECLARE_FUNCTION(execRemoveGameplayTag); \
	DECLARE_FUNCTION(execAddGameplayTags); \
	DECLARE_FUNCTION(execAddGameplayTag); \
	DECLARE_FUNCTION(execHasGameplayTagInState); \
	DECLARE_FUNCTION(execHasGameplayTag); \
	DECLARE_FUNCTION(execIsModifierActiveOrQueued); \
	DECLARE_FUNCTION(execFindMovementModeByName); \
	DECLARE_FUNCTION(execFindMovementMode); \
	DECLARE_FUNCTION(execFindSharedSettings_BP); \
	DECLARE_FUNCTION(execFindSharedSettings_Mutable_BP); \
	DECLARE_FUNCTION(execGetSimBlackboard); \
	DECLARE_FUNCTION(execTryGetFloorCheckHitResult); \
	DECLARE_FUNCTION(execGetLastTimeStep); \
	DECLARE_FUNCTION(execGetLastInputCmd); \
	DECLARE_FUNCTION(execHasValidCachedInputCmd); \
	DECLARE_FUNCTION(execGetSyncState); \
	DECLARE_FUNCTION(execHasValidCachedState); \
	DECLARE_FUNCTION(execGetMovementBaseBoneName); \
	DECLARE_FUNCTION(execGetMovementBase); \
	DECLARE_FUNCTION(execGetMovementMode); \
	DECLARE_FUNCTION(execGetMovementModeName); \
	DECLARE_FUNCTION(execGetPredictedTrajectory); \
	DECLARE_FUNCTION(execGetFutureTrajectory); \
	DECLARE_FUNCTION(execGetTargetOrientation); \
	DECLARE_FUNCTION(execGetMovementIntent); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execSetPrimaryVisualComponent); \
	DECLARE_FUNCTION(execGetPrimaryVisualComponent); \
	DECLARE_FUNCTION(execGetUpdatedComponent); \
	DECLARE_FUNCTION(execSetUpdatedComponent); \
	DECLARE_FUNCTION(execIsUsingDeferredGroupMovement); \
	DECLARE_FUNCTION(execSetUseDeferredGroupMovement); \
	DECLARE_FUNCTION(execGetBaseVisualComponentTransform); \
	DECLARE_FUNCTION(execSetBaseVisualComponentTransform); \
	DECLARE_FUNCTION(execSetPlanarConstraint); \
	DECLARE_FUNCTION(execGetPlanarConstraint); \
	DECLARE_FUNCTION(execGetUpDirection); \
	DECLARE_FUNCTION(execGetGravityAcceleration); \
	DECLARE_FUNCTION(execSetGravityOverride); \
	DECLARE_FUNCTION(execRemoveMovementMode); \
	DECLARE_FUNCTION(execAddMovementModeFromObject); \
	DECLARE_FUNCTION(execAddMovementModeFromClass); \
	DECLARE_FUNCTION(execQueueNextMode); \
	DECLARE_FUNCTION(execCancelModifierFromHandle); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execUnbindProcessGeneratedMovement); \
	DECLARE_FUNCTION(execBindProcessGeneratedMovement);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetStartingMovementModeNames);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverComponent(); \
	friend struct Z_Construct_UClass_UMoverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverComponent_NoRegister) \
	DECLARE_SERIALIZER(UMoverComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverComponent(UMoverComponent&&) = delete; \
	UMoverComponent(const UMoverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverComponent) \
	MOVER_API virtual ~UMoverComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_61_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverComponent;

// ********** End Class UMoverComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
