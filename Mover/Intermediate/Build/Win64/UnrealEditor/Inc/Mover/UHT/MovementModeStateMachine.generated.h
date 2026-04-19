// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementModeStateMachine.h"

#ifdef MOVER_MovementModeStateMachine_generated_h
#error "MovementModeStateMachine.generated.h already included, missing '#pragma once' in MovementModeStateMachine.h"
#endif
#define MOVER_MovementModeStateMachine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovementModeStateMachine ************************************************
MOVER_API UClass* Z_Construct_UClass_UMovementModeStateMachine_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMovementModeStateMachine(); \
	friend struct Z_Construct_UClass_UMovementModeStateMachine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMovementModeStateMachine_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovementModeStateMachine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMovementModeStateMachine_NoRegister) \
	DECLARE_SERIALIZER(UMovementModeStateMachine)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMovementModeStateMachine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementModeStateMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMovementModeStateMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementModeStateMachine); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovementModeStateMachine(UMovementModeStateMachine&&) = delete; \
	UMovementModeStateMachine(const UMovementModeStateMachine&) = delete; \
	MOVER_API virtual ~UMovementModeStateMachine();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h_26_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovementModeStateMachine;

// ********** End Class UMovementModeStateMachine **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
