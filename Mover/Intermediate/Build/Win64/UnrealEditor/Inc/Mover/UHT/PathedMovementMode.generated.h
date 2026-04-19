// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PathedMovement/PathedMovementMode.h"

#ifdef MOVER_PathedMovementMode_generated_h
#error "PathedMovementMode.generated.h already included, missing '#pragma once' in PathedMovementMode.h"
#endif
#define MOVER_PathedMovementMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPathedMovementPatternBase;

// ********** Begin Class UPathedPhysicsMovementMode ***********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUseJointConstraint); \
	DECLARE_FUNCTION(execSetPathDuration_BeginPlayOnly); \
	DECLARE_FUNCTION(execBP_FindPattern);


MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsMovementMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathedPhysicsMovementMode(); \
	friend struct Z_Construct_UClass_UPathedPhysicsMovementMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsMovementMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathedPhysicsMovementMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPathedPhysicsMovementMode_NoRegister) \
	DECLARE_SERIALIZER(UPathedPhysicsMovementMode) \
	DECLARE_WITHIN(UPathedPhysicsMoverComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathedPhysicsMovementMode(UPathedPhysicsMovementMode&&) = delete; \
	UPathedPhysicsMovementMode(const UPathedPhysicsMovementMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathedPhysicsMovementMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathedPhysicsMovementMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPathedPhysicsMovementMode) \
	NO_API virtual ~UPathedPhysicsMovementMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPathedPhysicsMovementMode;

// ********** End Class UPathedPhysicsMovementMode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
