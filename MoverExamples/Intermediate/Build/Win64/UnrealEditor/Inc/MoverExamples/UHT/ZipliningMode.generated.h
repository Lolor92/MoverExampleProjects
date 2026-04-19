// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterVariants/Ziplining/ZipliningMode.h"

#ifdef MOVEREXAMPLES_ZipliningMode_generated_h
#error "ZipliningMode.generated.h already included, missing '#pragma once' in ZipliningMode.h"
#endif
#define MOVEREXAMPLES_ZipliningMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZipliningMode ***********************************************************
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZipliningMode_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUZipliningMode(); \
	friend struct Z_Construct_UClass_UZipliningMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZipliningMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UZipliningMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoverExamples"), Z_Construct_UClass_UZipliningMode_NoRegister) \
	DECLARE_SERIALIZER(UZipliningMode)


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZipliningMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZipliningMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZipliningMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZipliningMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZipliningMode(UZipliningMode&&) = delete; \
	UZipliningMode(const UZipliningMode&) = delete; \
	NO_API virtual ~UZipliningMode();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZipliningMode;

// ********** End Class UZipliningMode *************************************************************

// ********** Begin ScriptStruct FZipliningState ***************************************************
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FZipliningState_Statics; \
	MOVEREXAMPLES_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FZipliningState;
// ********** End ScriptStruct FZipliningState *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
