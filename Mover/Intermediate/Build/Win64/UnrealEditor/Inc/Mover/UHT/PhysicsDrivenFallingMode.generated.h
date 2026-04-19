// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/Modes/PhysicsDrivenFallingMode.h"

#ifdef MOVER_PhysicsDrivenFallingMode_generated_h
#error "PhysicsDrivenFallingMode.generated.h already included, missing '#pragma once' in PhysicsDrivenFallingMode.h"
#endif
#define MOVER_PhysicsDrivenFallingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsDrivenFallingMode ************************************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenFallingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsDrivenFallingMode(); \
	friend struct Z_Construct_UClass_UPhysicsDrivenFallingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenFallingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsDrivenFallingMode, UFallingMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPhysicsDrivenFallingMode_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsDrivenFallingMode) \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsDrivenFallingMode*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPhysicsDrivenFallingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsDrivenFallingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsDrivenFallingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsDrivenFallingMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsDrivenFallingMode(UPhysicsDrivenFallingMode&&) = delete; \
	UPhysicsDrivenFallingMode(const UPhysicsDrivenFallingMode&) = delete; \
	MOVER_API virtual ~UPhysicsDrivenFallingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsDrivenFallingMode;

// ********** End Class UPhysicsDrivenFallingMode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFallingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
