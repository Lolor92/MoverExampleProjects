// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/AsyncNavWalkingMode.h"

#ifdef MOVER_AsyncNavWalkingMode_generated_h
#error "AsyncNavWalkingMode.generated.h already included, missing '#pragma once' in AsyncNavWalkingMode.h"
#endif
#define MOVER_AsyncNavWalkingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Class UAsyncNavWalkingMode *****************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTurnGeneratorClass); \
	DECLARE_FUNCTION(execGetTurnGenerator);


MOVER_API UClass* Z_Construct_UClass_UAsyncNavWalkingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncNavWalkingMode(); \
	friend struct Z_Construct_UClass_UAsyncNavWalkingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UAsyncNavWalkingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncNavWalkingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UAsyncNavWalkingMode_NoRegister) \
	DECLARE_SERIALIZER(UAsyncNavWalkingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncNavWalkingMode(UAsyncNavWalkingMode&&) = delete; \
	UAsyncNavWalkingMode(const UAsyncNavWalkingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UAsyncNavWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncNavWalkingMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncNavWalkingMode) \
	MOVER_API virtual ~UAsyncNavWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncNavWalkingMode;

// ********** End Class UAsyncNavWalkingMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
