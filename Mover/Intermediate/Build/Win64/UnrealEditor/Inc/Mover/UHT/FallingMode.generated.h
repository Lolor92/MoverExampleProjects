// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/FallingMode.h"

#ifdef MOVER_FallingMode_generated_h
#error "FallingMode.generated.h already included, missing '#pragma once' in FallingMode.h"
#endif
#define MOVER_FallingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FFloorCheckResult;
struct FHitResult;
struct FMoverTickEndData;
struct FRelativeBaseInfo;

// ********** Begin Delegate FMover_OnLanded *******************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_15_DELEGATE \
MOVER_API void FMover_OnLanded_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnLanded, FName const& NextMovementModeName, FHitResult const& HitResult);


// ********** End Delegate FMover_OnLanded *********************************************************

// ********** Begin Class UFallingMode *************************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execProcessLanded);


MOVER_API UClass* Z_Construct_UClass_UFallingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFallingMode(); \
	friend struct Z_Construct_UClass_UFallingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UFallingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UFallingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UFallingMode_NoRegister) \
	DECLARE_SERIALIZER(UFallingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UFallingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFallingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UFallingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFallingMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFallingMode(UFallingMode&&) = delete; \
	UFallingMode(const UFallingMode&) = delete; \
	MOVER_API virtual ~UFallingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFallingMode;

// ********** End Class UFallingMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FallingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
