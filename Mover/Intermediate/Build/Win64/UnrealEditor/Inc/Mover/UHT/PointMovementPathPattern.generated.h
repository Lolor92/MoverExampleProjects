// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PathedMovement/PointMovementPathPattern.h"

#ifdef MOVER_PointMovementPathPattern_generated_h
#error "PointMovementPathPattern.generated.h already included, missing '#pragma once' in PointMovementPathPattern.h"
#endif
#define MOVER_PointMovementPathPattern_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPointMovementPathPoint *******************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FPointMovementPathPoint;
// ********** End ScriptStruct FPointMovementPathPoint *********************************************

// ********** Begin Class UPointMovementPathPattern ************************************************
MOVER_API UClass* Z_Construct_UClass_UPointMovementPathPattern_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointMovementPathPattern(); \
	friend struct Z_Construct_UClass_UPointMovementPathPattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPointMovementPathPattern_NoRegister(); \
public: \
	DECLARE_CLASS2(UPointMovementPathPattern, UPathedMovementPatternBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPointMovementPathPattern_NoRegister) \
	DECLARE_SERIALIZER(UPointMovementPathPattern)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointMovementPathPattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPointMovementPathPattern(UPointMovementPathPattern&&) = delete; \
	UPointMovementPathPattern(const UPointMovementPathPattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointMovementPathPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointMovementPathPattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointMovementPathPattern) \
	NO_API virtual ~UPointMovementPathPattern();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h_55_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPointMovementPathPattern;

// ********** End Class UPointMovementPathPattern **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h

// ********** Begin Enum EPointMovementLocationBasis ***********************************************
#define FOREACH_ENUM_EPOINTMOVEMENTLOCATIONBASIS(op) \
	op(EPointMovementLocationBasis::PreviousPoint) \
	op(EPointMovementLocationBasis::PathOrigin) \
	op(EPointMovementLocationBasis::World) 

enum class EPointMovementLocationBasis : uint8;
template<> struct TIsUEnumClass<EPointMovementLocationBasis> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EPointMovementLocationBasis>();
// ********** End Enum EPointMovementLocationBasis *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
