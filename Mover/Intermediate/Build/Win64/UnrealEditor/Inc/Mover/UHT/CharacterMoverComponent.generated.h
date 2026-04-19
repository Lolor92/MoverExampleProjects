// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/CharacterMoverComponent.h"

#ifdef MOVER_CharacterMoverComponent_generated_h
#error "CharacterMoverComponent.generated.h already included, missing '#pragma once' in CharacterMoverComponent.h"
#endif
#define MOVER_CharacterMoverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EStanceMode : uint8;
struct FMoverInputCmdContext;
struct FMoverTimeStep;

// ********** Begin Delegate FMover_OnStanceChanged ************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_16_DELEGATE \
MOVER_API void FMover_OnStanceChanged_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnStanceChanged, EStanceMode OldStance, EStanceMode NewStance);


// ********** End Delegate FMover_OnStanceChanged **************************************************

// ********** Begin Class UCharacterMoverComponent *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoverPreSimulationTick); \
	DECLARE_FUNCTION(execUnCrouch); \
	DECLARE_FUNCTION(execCrouch); \
	DECLARE_FUNCTION(execCanCrouch); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execCanActorJump); \
	DECLARE_FUNCTION(execIsSlopeSliding); \
	DECLARE_FUNCTION(execIsSwimming); \
	DECLARE_FUNCTION(execIsOnGround); \
	DECLARE_FUNCTION(execIsAirborne); \
	DECLARE_FUNCTION(execIsFalling); \
	DECLARE_FUNCTION(execIsFlying); \
	DECLARE_FUNCTION(execIsCrouching); \
	DECLARE_FUNCTION(execSetHandleStanceChanges); \
	DECLARE_FUNCTION(execGetHandleStanceChanges); \
	DECLARE_FUNCTION(execSetHandleJump); \
	DECLARE_FUNCTION(execGetHandleJump);


MOVER_API UClass* Z_Construct_UClass_UCharacterMoverComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterMoverComponent(); \
	friend struct Z_Construct_UClass_UCharacterMoverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UCharacterMoverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterMoverComponent, UMoverComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UCharacterMoverComponent_NoRegister) \
	DECLARE_SERIALIZER(UCharacterMoverComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterMoverComponent(UCharacterMoverComponent&&) = delete; \
	UCharacterMoverComponent(const UCharacterMoverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UCharacterMoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMoverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterMoverComponent) \
	MOVER_API virtual ~UCharacterMoverComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterMoverComponent;

// ********** End Class UCharacterMoverComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
