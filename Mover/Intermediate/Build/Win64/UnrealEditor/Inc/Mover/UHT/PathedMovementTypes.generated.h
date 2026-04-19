// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PathedMovement/PathedMovementTypes.h"

#ifdef MOVER_PathedMovementTypes_generated_h
#error "PathedMovementTypes.generated.h already included, missing '#pragma once' in PathedMovementTypes.h"
#endif
#define MOVER_PathedMovementTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMutablePathedMovementProperties **********************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMutablePathedMovementProperties;
// ********** End ScriptStruct FMutablePathedMovementProperties ************************************

// ********** Begin ScriptStruct FPathedPhysicsMovementInputs **************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FPathedPhysicsMovementInputs;
// ********** End ScriptStruct FPathedPhysicsMovementInputs ****************************************

// ********** Begin ScriptStruct FPathedPhysicsMovementState ***************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FPathedPhysicsMovementState;
// ********** End ScriptStruct FPathedPhysicsMovementState *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h

// ********** Begin Enum EPathedPhysicsPlaybackBehavior ********************************************
#define FOREACH_ENUM_EPATHEDPHYSICSPLAYBACKBEHAVIOR(op) \
	op(EPathedPhysicsPlaybackBehavior::OneShot) \
	op(EPathedPhysicsPlaybackBehavior::ThereAndBack) \
	op(EPathedPhysicsPlaybackBehavior::Looping) \
	op(EPathedPhysicsPlaybackBehavior::PingPong) 

enum class EPathedPhysicsPlaybackBehavior : uint8;
template<> struct TIsUEnumClass<EPathedPhysicsPlaybackBehavior> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EPathedPhysicsPlaybackBehavior>();
// ********** End Enum EPathedPhysicsPlaybackBehavior **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
