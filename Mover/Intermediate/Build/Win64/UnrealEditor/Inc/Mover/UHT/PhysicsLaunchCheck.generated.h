// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/Transitions/PhysicsLaunchCheck.h"

#ifdef MOVER_PhysicsLaunchCheck_generated_h
#error "PhysicsLaunchCheck.generated.h already included, missing '#pragma once' in PhysicsLaunchCheck.h"
#endif
#define MOVER_PhysicsLaunchCheck_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsLaunchCheck ******************************************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsLaunchCheck_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsLaunchCheck(); \
	friend struct Z_Construct_UClass_UPhysicsLaunchCheck_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPhysicsLaunchCheck_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsLaunchCheck, UBaseMovementModeTransition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPhysicsLaunchCheck_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsLaunchCheck)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsLaunchCheck(UPhysicsLaunchCheck&&) = delete; \
	UPhysicsLaunchCheck(const UPhysicsLaunchCheck&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsLaunchCheck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsLaunchCheck); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsLaunchCheck) \
	MOVER_API virtual ~UPhysicsLaunchCheck();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsLaunchCheck;

// ********** End Class UPhysicsLaunchCheck ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Transitions_PhysicsLaunchCheck_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
