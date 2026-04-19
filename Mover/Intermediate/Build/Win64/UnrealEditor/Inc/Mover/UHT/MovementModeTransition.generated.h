// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementModeTransition.h"

#ifdef MOVER_MovementModeTransition_generated_h
#error "MovementModeTransition.generated.h already included, missing '#pragma once' in MovementModeTransition.h"
#endif
#define MOVER_MovementModeTransition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMoverComponent;
struct FSimulationTickParams;
struct FTransitionEvalResult;

// ********** Begin ScriptStruct FTransitionEvalResult *********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransitionEvalResult_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FTransitionEvalResult;
// ********** End ScriptStruct FTransitionEvalResult ***********************************************

// ********** Begin Class UBaseMovementModeTransition **********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	MOVER_API virtual void Trigger_Implementation(FSimulationTickParams const& Params); \
	MOVER_API virtual FTransitionEvalResult Evaluate_Implementation(FSimulationTickParams const& Params) const; \
	DECLARE_FUNCTION(execTrigger); \
	DECLARE_FUNCTION(execEvaluate); \
	DECLARE_FUNCTION(execK2_GetMoverComponent);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_40_CALLBACK_WRAPPERS
MOVER_API UClass* Z_Construct_UClass_UBaseMovementModeTransition_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseMovementModeTransition(); \
	friend struct Z_Construct_UClass_UBaseMovementModeTransition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UBaseMovementModeTransition_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseMovementModeTransition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UBaseMovementModeTransition_NoRegister) \
	DECLARE_SERIALIZER(UBaseMovementModeTransition)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UBaseMovementModeTransition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseMovementModeTransition(UBaseMovementModeTransition&&) = delete; \
	UBaseMovementModeTransition(const UBaseMovementModeTransition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UBaseMovementModeTransition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMovementModeTransition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMovementModeTransition) \
	MOVER_API virtual ~UBaseMovementModeTransition();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_40_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseMovementModeTransition;

// ********** End Class UBaseMovementModeTransition ************************************************

// ********** Begin Class UImmediateMovementModeTransition *****************************************
MOVER_API UClass* Z_Construct_UClass_UImmediateMovementModeTransition_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUImmediateMovementModeTransition(); \
	friend struct Z_Construct_UClass_UImmediateMovementModeTransition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UImmediateMovementModeTransition_NoRegister(); \
public: \
	DECLARE_CLASS2(UImmediateMovementModeTransition, UBaseMovementModeTransition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UImmediateMovementModeTransition_NoRegister) \
	DECLARE_SERIALIZER(UImmediateMovementModeTransition)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UImmediateMovementModeTransition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImmediateMovementModeTransition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UImmediateMovementModeTransition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImmediateMovementModeTransition); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImmediateMovementModeTransition(UImmediateMovementModeTransition&&) = delete; \
	UImmediateMovementModeTransition(const UImmediateMovementModeTransition&) = delete; \
	MOVER_API virtual ~UImmediateMovementModeTransition();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_111_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_114_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImmediateMovementModeTransition;

// ********** End Class UImmediateMovementModeTransition *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
