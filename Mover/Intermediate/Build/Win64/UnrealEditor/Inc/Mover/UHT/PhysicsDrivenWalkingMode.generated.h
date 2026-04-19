// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/Modes/PhysicsDrivenWalkingMode.h"

#ifdef MOVER_PhysicsDrivenWalkingMode_generated_h
#error "PhysicsDrivenWalkingMode.generated.h already included, missing '#pragma once' in PhysicsDrivenWalkingMode.h"
#endif
#define MOVER_PhysicsDrivenWalkingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsDrivenWalkingMode ************************************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenWalkingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsDrivenWalkingMode(); \
	friend struct Z_Construct_UClass_UPhysicsDrivenWalkingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenWalkingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsDrivenWalkingMode, UWalkingMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPhysicsDrivenWalkingMode_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsDrivenWalkingMode) \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsDrivenWalkingMode*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPhysicsDrivenWalkingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsDrivenWalkingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsDrivenWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsDrivenWalkingMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsDrivenWalkingMode(UPhysicsDrivenWalkingMode&&) = delete; \
	UPhysicsDrivenWalkingMode(const UPhysicsDrivenWalkingMode&) = delete; \
	MOVER_API virtual ~UPhysicsDrivenWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsDrivenWalkingMode;

// ********** End Class UPhysicsDrivenWalkingMode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenWalkingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
