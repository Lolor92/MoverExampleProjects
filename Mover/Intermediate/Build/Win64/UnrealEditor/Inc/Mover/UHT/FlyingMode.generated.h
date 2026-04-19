// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/FlyingMode.h"

#ifdef MOVER_FlyingMode_generated_h
#error "FlyingMode.generated.h already included, missing '#pragma once' in FlyingMode.h"
#endif
#define MOVER_FlyingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFlyingMode **************************************************************
MOVER_API UClass* Z_Construct_UClass_UFlyingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFlyingMode(); \
	friend struct Z_Construct_UClass_UFlyingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UFlyingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UFlyingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UFlyingMode_NoRegister) \
	DECLARE_SERIALIZER(UFlyingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UFlyingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlyingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UFlyingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlyingMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFlyingMode(UFlyingMode&&) = delete; \
	UFlyingMode(const UFlyingMode&) = delete; \
	MOVER_API virtual ~UFlyingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFlyingMode;

// ********** End Class UFlyingMode ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
