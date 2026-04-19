// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/MovementRecordUtils.h"

#ifdef MOVER_MovementRecordUtils_generated_h
#error "MovementRecordUtils.generated.h already included, missing '#pragma once' in MovementRecordUtils.h"
#endif
#define MOVER_MovementRecordUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMovementRecord;

// ********** Begin Class UMovementRecordUtils *****************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_GetRelevantVelocity); \
	DECLARE_FUNCTION(execK2_GetRelevantMoveDelta); \
	DECLARE_FUNCTION(execK2_GetTotalMoveDelta); \
	DECLARE_FUNCTION(execK2_SetDeltaSeconds);


MOVER_API UClass* Z_Construct_UClass_UMovementRecordUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementRecordUtils(); \
	friend struct Z_Construct_UClass_UMovementRecordUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMovementRecordUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovementRecordUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMovementRecordUtils_NoRegister) \
	DECLARE_SERIALIZER(UMovementRecordUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMovementRecordUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovementRecordUtils(UMovementRecordUtils&&) = delete; \
	UMovementRecordUtils(const UMovementRecordUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMovementRecordUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementRecordUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementRecordUtils) \
	MOVER_API virtual ~UMovementRecordUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovementRecordUtils;

// ********** End Class UMovementRecordUtils *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
