// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/BasedMovementUtils.h"

#ifdef MOVER_BasedMovementUtils_generated_h
#error "BasedMovementUtils.generated.h already included, missing '#pragma once' in BasedMovementUtils.h"
#endif
#define MOVER_BasedMovementUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPrimitiveComponent;

// ********** Begin ScriptStruct FRelativeBaseInfo *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FRelativeBaseInfo;
// ********** End ScriptStruct FRelativeBaseInfo ***************************************************

// ********** Begin Class UBasedMovementUtils ******************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransformRotatorToLocal); \
	DECLARE_FUNCTION(execTransformRotatorToWorld); \
	DECLARE_FUNCTION(execTransformDirectionToLocal); \
	DECLARE_FUNCTION(execTransformDirectionToWorld); \
	DECLARE_FUNCTION(execTransformLocationToLocal); \
	DECLARE_FUNCTION(execTransformLocationToWorld); \
	DECLARE_FUNCTION(execTransformWorldRotatorToBased); \
	DECLARE_FUNCTION(execTransformBasedRotatorToWorld); \
	DECLARE_FUNCTION(execTransformWorldDirectionToBased); \
	DECLARE_FUNCTION(execTransformBasedDirectionToWorld); \
	DECLARE_FUNCTION(execTransformWorldLocationToBased); \
	DECLARE_FUNCTION(execTransformBasedLocationToWorld); \
	DECLARE_FUNCTION(execGetMovementBaseTransform); \
	DECLARE_FUNCTION(execIsBaseSimulatingPhysics); \
	DECLARE_FUNCTION(execIsADynamicBase);


MOVER_API UClass* Z_Construct_UClass_UBasedMovementUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasedMovementUtils(); \
	friend struct Z_Construct_UClass_UBasedMovementUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UBasedMovementUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UBasedMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UBasedMovementUtils_NoRegister) \
	DECLARE_SERIALIZER(UBasedMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UBasedMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBasedMovementUtils(UBasedMovementUtils&&) = delete; \
	UBasedMovementUtils(const UBasedMovementUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UBasedMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasedMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasedMovementUtils) \
	MOVER_API virtual ~UBasedMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_58_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBasedMovementUtils;

// ********** End Class UBasedMovementUtils ********************************************************

// ********** Begin ScriptStruct FMoverDynamicBasedMovementTickFunction ****************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FMoverDynamicBasedMovementTickFunction;
// ********** End ScriptStruct FMoverDynamicBasedMovementTickFunction ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
