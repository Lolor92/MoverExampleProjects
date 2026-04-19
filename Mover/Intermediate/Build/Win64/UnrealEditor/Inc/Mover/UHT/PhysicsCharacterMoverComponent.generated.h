// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PhysicsCharacterMoverComponent.h"

#ifdef MOVER_PhysicsCharacterMoverComponent_generated_h
#error "PhysicsCharacterMoverComponent.generated.h already included, missing '#pragma once' in PhysicsCharacterMoverComponent.h"
#endif
#define MOVER_PhysicsCharacterMoverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMoverAuxStateContext;
struct FMoverInputCmdContext;
struct FMoverSyncState;
struct FMoverTimeStep;

// ********** Begin Class UPhysicsCharacterMoverComponent ******************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoverPostSimulationTick); \
	DECLARE_FUNCTION(execOnMoverPreMovement);


MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMoverComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsCharacterMoverComponent(); \
	friend struct Z_Construct_UClass_UPhysicsCharacterMoverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMoverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsCharacterMoverComponent, UCharacterMoverComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPhysicsCharacterMoverComponent_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsCharacterMoverComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsCharacterMoverComponent(UPhysicsCharacterMoverComponent&&) = delete; \
	UPhysicsCharacterMoverComponent(const UPhysicsCharacterMoverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsCharacterMoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsCharacterMoverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsCharacterMoverComponent) \
	MOVER_API virtual ~UPhysicsCharacterMoverComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsCharacterMoverComponent;

// ********** End Class UPhysicsCharacterMoverComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
