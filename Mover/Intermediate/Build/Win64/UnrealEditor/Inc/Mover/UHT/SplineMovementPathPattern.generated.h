// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PathedMovement/SplineMovementPathPattern.h"

#ifdef MOVER_SplineMovementPathPattern_generated_h
#error "SplineMovementPathPattern.generated.h already included, missing '#pragma once' in SplineMovementPathPattern.h"
#endif
#define MOVER_SplineMovementPathPattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSplinePathPatternPointData ***************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplinePathPatternPointData_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FSplinePathPatternPointData;
// ********** End ScriptStruct FSplinePathPatternPointData *****************************************

// ********** Begin Class USplineMovementPathPattern ***********************************************
MOVER_API UClass* Z_Construct_UClass_USplineMovementPathPattern_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineMovementPathPattern(); \
	friend struct Z_Construct_UClass_USplineMovementPathPattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_USplineMovementPathPattern_NoRegister(); \
public: \
	DECLARE_CLASS2(USplineMovementPathPattern, UPathedMovementPatternBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_USplineMovementPathPattern_NoRegister) \
	DECLARE_SERIALIZER(USplineMovementPathPattern)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMovementPathPattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplineMovementPathPattern(USplineMovementPathPattern&&) = delete; \
	USplineMovementPathPattern(const USplineMovementPathPattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMovementPathPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMovementPathPattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMovementPathPattern) \
	NO_API virtual ~USplineMovementPathPattern();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplineMovementPathPattern;

// ********** End Class USplineMovementPathPattern *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_SplineMovementPathPattern_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
