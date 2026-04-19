// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/GroundMovementUtils.h"

#ifdef MOVER_GroundMovementUtils_generated_h
#error "GroundMovementUtils.generated.h already included, missing '#pragma once' in GroundMovementUtils.h"
#endif
#define MOVER_GroundMovementUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FFloorCheckResult;
struct FGroundMoveParams;
struct FHitResult;
struct FMovementRecord;
struct FMovingComponentSet;
struct FProposedMove;

// ********** Begin ScriptStruct FGroundMoveParams *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGroundMoveParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FGroundMoveParams;
// ********** End ScriptStruct FGroundMoveParams ***************************************************

// ********** Begin Class UGroundMovementUtils *****************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestMoveToAdjustToFloor); \
	DECLARE_FUNCTION(execTestGroundedMoveAlongHitSurface); \
	DECLARE_FUNCTION(execCanStepUpOnHitSurface); \
	DECLARE_FUNCTION(execComputeDeflectedMoveOntoRamp); \
	DECLARE_FUNCTION(execTryWalkToSlideAlongSurface); \
	DECLARE_FUNCTION(execComputeControlledGroundMove);


MOVER_API UClass* Z_Construct_UClass_UGroundMovementUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroundMovementUtils(); \
	friend struct Z_Construct_UClass_UGroundMovementUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UGroundMovementUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UGroundMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UGroundMovementUtils_NoRegister) \
	DECLARE_SERIALIZER(UGroundMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UGroundMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGroundMovementUtils(UGroundMovementUtils&&) = delete; \
	UGroundMovementUtils(const UGroundMovementUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UGroundMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroundMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroundMovementUtils) \
	MOVER_API virtual ~UGroundMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_77_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGroundMovementUtils;

// ********** End Class UGroundMovementUtils *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_GroundMovementUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
