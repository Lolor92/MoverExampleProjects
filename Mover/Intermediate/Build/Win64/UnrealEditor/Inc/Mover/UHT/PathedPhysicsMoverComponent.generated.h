// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h"

#ifdef MOVER_PathedPhysicsMoverComponent_generated_h
#error "PathedPhysicsMoverComponent.generated.h already included, missing '#pragma once' in PathedPhysicsMoverComponent.h"
#endif
#define MOVER_PathedPhysicsMoverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EPathedPhysicsPlaybackBehavior : uint8;

// ********** Begin Class UPathedPhysicsMoverComponent *********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPathOriginTransform); \
	DECLARE_FUNCTION(execSetPathOriginTransform); \
	DECLARE_FUNCTION(execIsJointEnabled); \
	DECLARE_FUNCTION(execSetDefaultPlaybackBehavior); \
	DECLARE_FUNCTION(execGetDefaultPlaybackBehavior); \
	DECLARE_FUNCTION(execSetPlaybackDirection); \
	DECLARE_FUNCTION(execIsInReverse); \
	DECLARE_FUNCTION(execSetIsMoving); \
	DECLARE_FUNCTION(execIsMoving);


MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsMoverComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathedPhysicsMoverComponent(); \
	friend struct Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsMoverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathedPhysicsMoverComponent, UMoverComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPathedPhysicsMoverComponent_NoRegister) \
	DECLARE_SERIALIZER(UPathedPhysicsMoverComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathedPhysicsMoverComponent(UPathedPhysicsMoverComponent&&) = delete; \
	UPathedPhysicsMoverComponent(const UPathedPhysicsMoverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPathedPhysicsMoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathedPhysicsMoverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPathedPhysicsMoverComponent) \
	MOVER_API virtual ~UPathedPhysicsMoverComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPathedPhysicsMoverComponent;

// ********** End Class UPathedPhysicsMoverComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
