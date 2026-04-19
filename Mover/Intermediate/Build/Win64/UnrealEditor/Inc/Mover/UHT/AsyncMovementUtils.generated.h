// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/AsyncMovementUtils.h"

#ifdef MOVER_AsyncMovementUtils_generated_h
#error "AsyncMovementUtils.generated.h already included, missing '#pragma once' in AsyncMovementUtils.h"
#endif
#define MOVER_AsyncMovementUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FHitResult;
struct FMovementRecord;
struct FMovingComponentSet;

// ********** Begin Class UAsyncMovementUtils ******************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestSlidingMoveAlongHitSurface); \
	DECLARE_FUNCTION(execTestDepenetratingMove);


MOVER_API UClass* Z_Construct_UClass_UAsyncMovementUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncMovementUtils(); \
	friend struct Z_Construct_UClass_UAsyncMovementUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UAsyncMovementUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncMovementUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UAsyncMovementUtils_NoRegister) \
	DECLARE_SERIALIZER(UAsyncMovementUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UAsyncMovementUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncMovementUtils(UAsyncMovementUtils&&) = delete; \
	UAsyncMovementUtils(const UAsyncMovementUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UAsyncMovementUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncMovementUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncMovementUtils) \
	MOVER_API virtual ~UAsyncMovementUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncMovementUtils;

// ********** End Class UAsyncMovementUtils ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_AsyncMovementUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
