// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/AsyncFallingMode.h"

#ifdef MOVER_AsyncFallingMode_generated_h
#error "AsyncFallingMode.generated.h already included, missing '#pragma once' in AsyncFallingMode.h"
#endif
#define MOVER_AsyncFallingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FFloorCheckResult;
struct FMoverTickEndData;
struct FRelativeBaseInfo;

// ********** Begin Class UAsyncFallingMode ********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessLanded);


MOVER_API UClass* Z_Construct_UClass_UAsyncFallingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncFallingMode(); \
	friend struct Z_Construct_UClass_UAsyncFallingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UAsyncFallingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncFallingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UAsyncFallingMode_NoRegister) \
	DECLARE_SERIALIZER(UAsyncFallingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncFallingMode(UAsyncFallingMode&&) = delete; \
	UAsyncFallingMode(const UAsyncFallingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UAsyncFallingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncFallingMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncFallingMode) \
	MOVER_API virtual ~UAsyncFallingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncFallingMode;

// ********** End Class UAsyncFallingMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
