// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/AsyncFlyingMode.h"

#ifdef MOVER_AsyncFlyingMode_generated_h
#error "AsyncFlyingMode.generated.h already included, missing '#pragma once' in AsyncFlyingMode.h"
#endif
#define MOVER_AsyncFlyingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAsyncFlyingMode *********************************************************
MOVER_API UClass* Z_Construct_UClass_UAsyncFlyingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncFlyingMode(); \
	friend struct Z_Construct_UClass_UAsyncFlyingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UAsyncFlyingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncFlyingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UAsyncFlyingMode_NoRegister) \
	DECLARE_SERIALIZER(UAsyncFlyingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UAsyncFlyingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncFlyingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UAsyncFlyingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncFlyingMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncFlyingMode(UAsyncFlyingMode&&) = delete; \
	UAsyncFlyingMode(const UAsyncFlyingMode&) = delete; \
	MOVER_API virtual ~UAsyncFlyingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncFlyingMode;

// ********** End Class UAsyncFlyingMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
