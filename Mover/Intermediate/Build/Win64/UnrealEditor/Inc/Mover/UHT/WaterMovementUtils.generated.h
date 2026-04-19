// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/WaterMovementUtils.h"

#ifdef MOVER_WaterMovementUtils_generated_h
#error "WaterMovementUtils.generated.h already included, missing '#pragma once' in WaterMovementUtils.h"
#endif
#define MOVER_WaterMovementUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FProposedMove;
struct FUpdateWaterSplineDataParams;
struct FWaterCheckResult;
struct FWaterMoveParams;

// ********** Begin ScriptStruct FWaterMoveParams **************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterMoveParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FWaterMoveParams;
// ********** End ScriptStruct FWaterMoveParams ****************************************************

// ********** Begin ScriptStruct FWaterFlowSplineData **********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterFlowSplineData_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FWaterFlowSplineData;
// ********** End ScriptStruct FWaterFlowSplineData ************************************************

// ********** Begin ScriptStruct FWaterCheckResult *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterCheckResult_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FWaterCheckResult;
// ********** End ScriptStruct FWaterCheckResult ***************************************************

// ********** Begin ScriptStruct FUpdateWaterSplineDataParams **************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateWaterSplineDataParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FUpdateWaterSplineDataParams;
// ********** End ScriptStruct FUpdateWaterSplineDataParams ****************************************

// ********** Begin Class UWaterMovementUtils ******************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateWaterSplineData); \
	DECLARE_FUNCTION(execComputeControlledWaterMove);


MOVER_API UClass* Z_Construct_UClass_UWaterMovementUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_189_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterMovementUtils(); \
	friend struct Z_Construct_UClass_UWaterMovementUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UWaterMovementUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UWaterMovementUtils_NoRegister) \
	DECLARE_SERIALIZER(UWaterMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_189_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UWaterMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterMovementUtils(UWaterMovementUtils&&) = delete; \
	UWaterMovementUtils(const UWaterMovementUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UWaterMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterMovementUtils) \
	MOVER_API virtual ~UWaterMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_186_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_189_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_189_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h_189_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterMovementUtils;

// ********** End Class UWaterMovementUtils ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_WaterMovementUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
