// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/AsyncWalkingMode.h"

#ifdef MOVER_AsyncWalkingMode_generated_h
#error "AsyncWalkingMode.generated.h already included, missing '#pragma once' in AsyncWalkingMode.h"
#endif
#define MOVER_AsyncWalkingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Class UAsyncWalkingMode ********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTurnGeneratorClass); \
	DECLARE_FUNCTION(execGetTurnGenerator);


MOVER_API UClass* Z_Construct_UClass_UAsyncWalkingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncWalkingMode(); \
	friend struct Z_Construct_UClass_UAsyncWalkingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UAsyncWalkingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncWalkingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UAsyncWalkingMode_NoRegister) \
	DECLARE_SERIALIZER(UAsyncWalkingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncWalkingMode(UAsyncWalkingMode&&) = delete; \
	UAsyncWalkingMode(const UAsyncWalkingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UAsyncWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncWalkingMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncWalkingMode) \
	MOVER_API virtual ~UAsyncWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncWalkingMode;

// ********** End Class UAsyncWalkingMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
