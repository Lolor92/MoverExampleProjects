// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PathedMovement/LookAtRotationPathPattern.h"

#ifdef MOVER_LookAtRotationPathPattern_generated_h
#error "LookAtRotationPathPattern.generated.h already included, missing '#pragma once' in LookAtRotationPathPattern.h"
#endif
#define MOVER_LookAtRotationPathPattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULookAtRotationPattern ***************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLookAtLocation); \
	DECLARE_FUNCTION(execSetRelativeLookAtLocation);


MOVER_API UClass* Z_Construct_UClass_ULookAtRotationPattern_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULookAtRotationPattern(); \
	friend struct Z_Construct_UClass_ULookAtRotationPattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_ULookAtRotationPattern_NoRegister(); \
public: \
	DECLARE_CLASS2(ULookAtRotationPattern, UPathedMovementPatternBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_ULookAtRotationPattern_NoRegister) \
	DECLARE_SERIALIZER(ULookAtRotationPattern)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULookAtRotationPattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULookAtRotationPattern(ULookAtRotationPattern&&) = delete; \
	ULookAtRotationPattern(const ULookAtRotationPattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULookAtRotationPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULookAtRotationPattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULookAtRotationPattern) \
	NO_API virtual ~ULookAtRotationPattern();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULookAtRotationPattern;

// ********** End Class ULookAtRotationPattern *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
