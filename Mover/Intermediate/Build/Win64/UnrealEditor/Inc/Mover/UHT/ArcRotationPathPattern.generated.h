// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PathedMovement/ArcRotationPathPattern.h"

#ifdef MOVER_ArcRotationPathPattern_generated_h
#error "ArcRotationPathPattern.generated.h already included, missing '#pragma once' in ArcRotationPathPattern.h"
#endif
#define MOVER_ArcRotationPathPattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UArcRotationPattern ******************************************************
MOVER_API UClass* Z_Construct_UClass_UArcRotationPattern_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArcRotationPattern(); \
	friend struct Z_Construct_UClass_UArcRotationPattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UArcRotationPattern_NoRegister(); \
public: \
	DECLARE_CLASS2(UArcRotationPattern, UPathedMovementPatternBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UArcRotationPattern_NoRegister) \
	DECLARE_SERIALIZER(UArcRotationPattern)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArcRotationPattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UArcRotationPattern(UArcRotationPattern&&) = delete; \
	UArcRotationPattern(const UArcRotationPattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArcRotationPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArcRotationPattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArcRotationPattern) \
	NO_API virtual ~UArcRotationPattern();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UArcRotationPattern;

// ********** End Class UArcRotationPattern ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_ArcRotationPathPattern_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
