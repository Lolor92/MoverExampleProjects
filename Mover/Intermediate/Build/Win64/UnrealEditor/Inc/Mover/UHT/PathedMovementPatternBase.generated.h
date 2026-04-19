// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PathedMovement/PathedMovementPatternBase.h"

#ifdef MOVER_PathedMovementPatternBase_generated_h
#error "PathedMovementPatternBase.generated.h already included, missing '#pragma once' in PathedMovementPatternBase.h"
#endif
#define MOVER_PathedMovementPatternBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPathedMovementPatternBase ***********************************************
MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathedMovementPatternBase(); \
	friend struct Z_Construct_UClass_UPathedMovementPatternBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathedMovementPatternBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPathedMovementPatternBase_NoRegister) \
	DECLARE_SERIALIZER(UPathedMovementPatternBase) \
	DECLARE_WITHIN(UPathedPhysicsMovementMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathedMovementPatternBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathedMovementPatternBase(UPathedMovementPatternBase&&) = delete; \
	UPathedMovementPatternBase(const UPathedMovementPatternBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathedMovementPatternBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathedMovementPatternBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathedMovementPatternBase) \
	NO_API virtual ~UPathedMovementPatternBase();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPathedMovementPatternBase;

// ********** End Class UPathedMovementPatternBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h

// ********** Begin Enum EPatternAxisMaskFlags *****************************************************
#define FOREACH_ENUM_EPATTERNAXISMASKFLAGS(op) \
	op(EPatternAxisMaskFlags::None) \
	op(EPatternAxisMaskFlags::X) \
	op(EPatternAxisMaskFlags::Y) \
	op(EPatternAxisMaskFlags::Z) \
	op(EPatternAxisMaskFlags::All) 

enum class EPatternAxisMaskFlags : uint8;
template<> struct TIsUEnumClass<EPatternAxisMaskFlags> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EPatternAxisMaskFlags>();
// ********** End Enum EPatternAxisMaskFlags *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
