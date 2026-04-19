// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/Modes/PhysicsDrivenFlyingMode.h"

#ifdef MOVER_PhysicsDrivenFlyingMode_generated_h
#error "PhysicsDrivenFlyingMode.generated.h already included, missing '#pragma once' in PhysicsDrivenFlyingMode.h"
#endif
#define MOVER_PhysicsDrivenFlyingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsDrivenFlyingMode *************************************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenFlyingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsDrivenFlyingMode(); \
	friend struct Z_Construct_UClass_UPhysicsDrivenFlyingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenFlyingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsDrivenFlyingMode, UFlyingMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPhysicsDrivenFlyingMode_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsDrivenFlyingMode) \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsDrivenFlyingMode*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPhysicsDrivenFlyingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsDrivenFlyingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsDrivenFlyingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsDrivenFlyingMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsDrivenFlyingMode(UPhysicsDrivenFlyingMode&&) = delete; \
	UPhysicsDrivenFlyingMode(const UPhysicsDrivenFlyingMode&) = delete; \
	MOVER_API virtual ~UPhysicsDrivenFlyingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsDrivenFlyingMode;

// ********** End Class UPhysicsDrivenFlyingMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenFlyingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
