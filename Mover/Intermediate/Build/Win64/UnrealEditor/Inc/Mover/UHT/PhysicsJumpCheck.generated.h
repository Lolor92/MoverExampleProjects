// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/Transitions/PhysicsJumpCheck.h"

#ifdef MOVER_PhysicsJumpCheck_generated_h
#error "PhysicsJumpCheck.generated.h already included, missing '#pragma once' in PhysicsJumpCheck.h"
#endif
#define MOVER_PhysicsJumpCheck_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsJumpCheck ********************************************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsJumpCheck_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsJumpCheck(); \
	friend struct Z_Construct_UClass_UPhysicsJumpCheck_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPhysicsJumpCheck_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsJumpCheck, UBaseMovementModeTransition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPhysicsJumpCheck_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsJumpCheck)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPhysicsJumpCheck(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsJumpCheck) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsJumpCheck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsJumpCheck); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsJumpCheck(UPhysicsJumpCheck&&) = delete; \
	UPhysicsJumpCheck(const UPhysicsJumpCheck&) = delete; \
	MOVER_API virtual ~UPhysicsJumpCheck();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsJumpCheck;

// ********** End Class UPhysicsJumpCheck **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsJumpCheck_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
