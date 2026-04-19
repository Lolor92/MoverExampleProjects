// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/SwimmingMode.h"

#ifdef MOVER_SwimmingMode_generated_h
#error "SwimmingMode.generated.h already included, missing '#pragma once' in SwimmingMode.h"
#endif
#define MOVER_SwimmingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSwimmingControlSettings ******************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSwimmingControlSettings_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FSwimmingControlSettings;
// ********** End ScriptStruct FSwimmingControlSettings ********************************************

// ********** Begin Class USwimmingMode ************************************************************
MOVER_API UClass* Z_Construct_UClass_USwimmingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_197_INCLASS \
private: \
	static void StaticRegisterNativesUSwimmingMode(); \
	friend struct Z_Construct_UClass_USwimmingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_USwimmingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(USwimmingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_USwimmingMode_NoRegister) \
	DECLARE_SERIALIZER(USwimmingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_197_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API USwimmingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USwimmingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, USwimmingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USwimmingMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USwimmingMode(USwimmingMode&&) = delete; \
	USwimmingMode(const USwimmingMode&) = delete; \
	MOVER_API virtual ~USwimmingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_194_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_197_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_197_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h_197_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USwimmingMode;

// ********** End Class USwimmingMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_SwimmingMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
