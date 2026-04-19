// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/MovementMixer.h"

#ifdef MOVER_MovementMixer_generated_h
#error "MovementMixer.generated.h already included, missing '#pragma once' in MovementMixer.h"
#endif
#define MOVER_MovementMixer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovementMixer ***********************************************************
MOVER_API UClass* Z_Construct_UClass_UMovementMixer_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovementMixer(); \
	friend struct Z_Construct_UClass_UMovementMixer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMovementMixer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovementMixer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMovementMixer_NoRegister) \
	DECLARE_SERIALIZER(UMovementMixer)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovementMixer(UMovementMixer&&) = delete; \
	UMovementMixer(const UMovementMixer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMovementMixer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementMixer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovementMixer) \
	MOVER_API virtual ~UMovementMixer();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovementMixer;

// ********** End Class UMovementMixer *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
