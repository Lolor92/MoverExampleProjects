// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/AirMovementUtils.h"

#ifdef MOVER_AirMovementUtils_generated_h
#error "AirMovementUtils.generated.h already included, missing '#pragma once' in AirMovementUtils.h"
#endif
#define MOVER_AirMovementUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FFloorCheckResult;
struct FFreeMoveParams;
struct FHitResult;
struct FMovementRecord;
struct FMovingComponentSet;
struct FProposedMove;

// ********** Begin ScriptStruct FFreeMoveParams ***************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFreeMoveParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FFreeMoveParams;
// ********** End ScriptStruct FFreeMoveParams *****************************************************

// ********** Begin Class UAirMovementUtils ********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestFallingMoveAlongHitSurface); \
	DECLARE_FUNCTION(execTryMoveToFallAlongSurface); \
	DECLARE_FUNCTION(execIsValidLandingSpot); \
	DECLARE_FUNCTION(execComputeControlledFreeMove);


MOVER_API UClass* Z_Construct_UClass_UAirMovementUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAirMovementUtils(); \
	friend struct Z_Construct_UClass_UAirMovementUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UAirMovementUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UAirMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UAirMovementUtils_NoRegister) \
	DECLARE_SERIALIZER(UAirMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UAirMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAirMovementUtils(UAirMovementUtils&&) = delete; \
	UAirMovementUtils(const UAirMovementUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UAirMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAirMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAirMovementUtils) \
	MOVER_API virtual ~UAirMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_63_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAirMovementUtils;

// ********** End Class UAirMovementUtils **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AirMovementUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
