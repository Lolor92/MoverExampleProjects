// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/MovementUtils.h"

#ifdef MOVER_MovementUtils_generated_h
#error "MovementUtils.generated.h already included, missing '#pragma once' in MovementUtils.h"
#endif
#define MOVER_MovementUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMoverComponent;
enum class EMoveInputType : uint8;
enum class ETeleportType : uint8;
struct FComputeCombinedVelocityParams;
struct FComputeVelocityParams;
struct FHitResult;
struct FMovementRecord;
struct FMovingComponentSet;

// ********** Begin ScriptStruct FTrajectorySampleInfo *********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrajectorySampleInfo_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FTrajectorySampleInfo;
// ********** End ScriptStruct FTrajectorySampleInfo ***********************************************

// ********** Begin ScriptStruct FComputeVelocityParams ********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComputeVelocityParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FComputeVelocityParams;
// ********** End ScriptStruct FComputeVelocityParams **********************************************

// ********** Begin ScriptStruct FComputeCombinedVelocityParams ************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComputeCombinedVelocityParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FComputeCombinedVelocityParams;
// ********** End ScriptStruct FComputeCombinedVelocityParams **************************************

// ********** Begin Class UMovementUtils ***********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestEncroachmentAndAdjust); \
	DECLARE_FUNCTION(execTestEncroachment); \
	DECLARE_FUNCTION(execFindTeleportSpot); \
	DECLARE_FUNCTION(execIsAngularVelocityZero); \
	DECLARE_FUNCTION(execComputeDirectionIntent); \
	DECLARE_FUNCTION(execComputeAngularVelocity); \
	DECLARE_FUNCTION(execComputeVelocityFromPositions); \
	DECLARE_FUNCTION(execTrySafeMoveUpdatedComponentNoMovementRecord); \
	DECLARE_FUNCTION(execTrySafeMoveUpdatedComponent); \
	DECLARE_FUNCTION(execTrySafeMoveAndSlideUpdatedComponentNoMovementRecord); \
	DECLARE_FUNCTION(execTrySafeMoveAndSlideUpdatedComponent); \
	DECLARE_FUNCTION(execTryMoveToSlideAlongSurfaceNoMovementRecord); \
	DECLARE_FUNCTION(execTryMoveToSlideAlongSurface); \
	DECLARE_FUNCTION(execComputeSlideDelta); \
	DECLARE_FUNCTION(execGetGravityVerticalComponent); \
	DECLARE_FUNCTION(execProjectToGravityFloor); \
	DECLARE_FUNCTION(execApplyGravityToOrientationIntent); \
	DECLARE_FUNCTION(execConstrainToPlane); \
	DECLARE_FUNCTION(execCanEscapeGravity); \
	DECLARE_FUNCTION(execDeduceUpDirectionFromGravity); \
	DECLARE_FUNCTION(execComputeVelocityFromGravity); \
	DECLARE_FUNCTION(execComputeCombinedVelocity); \
	DECLARE_FUNCTION(execComputeVelocity); \
	DECLARE_FUNCTION(execIsExceedingMaxSpeed);


MOVER_API UClass* Z_Construct_UClass_UMovementUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementUtils(); \
	friend struct Z_Construct_UClass_UMovementUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMovementUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMovementUtils_NoRegister) \
	DECLARE_SERIALIZER(UMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovementUtils(UMovementUtils&&) = delete; \
	UMovementUtils(const UMovementUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementUtils) \
	MOVER_API virtual ~UMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_135_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovementUtils;

// ********** End Class UMovementUtils *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
