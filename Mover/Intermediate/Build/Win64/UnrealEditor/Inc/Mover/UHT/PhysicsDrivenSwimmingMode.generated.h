// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/Modes/PhysicsDrivenSwimmingMode.h"

#ifdef MOVER_PhysicsDrivenSwimmingMode_generated_h
#error "PhysicsDrivenSwimmingMode.generated.h already included, missing '#pragma once' in PhysicsDrivenSwimmingMode.h"
#endif
#define MOVER_PhysicsDrivenSwimmingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsDrivenSwimmingMode ***********************************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenSwimmingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenSwimmingMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsDrivenSwimmingMode(); \
	friend struct Z_Construct_UClass_UPhysicsDrivenSwimmingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPhysicsDrivenSwimmingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsDrivenSwimmingMode, USwimmingMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPhysicsDrivenSwimmingMode_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsDrivenSwimmingMode) \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsDrivenSwimmingMode*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenSwimmingMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPhysicsDrivenSwimmingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsDrivenSwimmingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsDrivenSwimmingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsDrivenSwimmingMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsDrivenSwimmingMode(UPhysicsDrivenSwimmingMode&&) = delete; \
	UPhysicsDrivenSwimmingMode(const UPhysicsDrivenSwimmingMode&) = delete; \
	MOVER_API virtual ~UPhysicsDrivenSwimmingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenSwimmingMode_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenSwimmingMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenSwimmingMode_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenSwimmingMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsDrivenSwimmingMode;

// ********** End Class UPhysicsDrivenSwimmingMode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_Modes_PhysicsDrivenSwimmingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
