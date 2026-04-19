// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterVariants/AbilityInputs.h"

#ifdef MOVEREXAMPLES_AbilityInputs_generated_h
#error "AbilityInputs.generated.h already included, missing '#pragma once' in AbilityInputs.h"
#endif
#define MOVEREXAMPLES_AbilityInputs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMoverDataCollection;
struct FMoverExampleAbilityInputs;

// ********** Begin ScriptStruct FMoverExampleAbilityInputs ****************************************
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FMoverExampleAbilityInputs;
// ********** End ScriptStruct FMoverExampleAbilityInputs ******************************************

// ********** Begin Class UMoverExampleAbilityInputsLibrary ****************************************
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMoverExampleAbilityInputs);


MOVEREXAMPLES_API UClass* Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverExampleAbilityInputsLibrary(); \
	friend struct Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVEREXAMPLES_API UClass* Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverExampleAbilityInputsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoverExamples"), Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMoverExampleAbilityInputsLibrary)


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoverExampleAbilityInputsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverExampleAbilityInputsLibrary(UMoverExampleAbilityInputsLibrary&&) = delete; \
	UMoverExampleAbilityInputsLibrary(const UMoverExampleAbilityInputsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverExampleAbilityInputsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverExampleAbilityInputsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverExampleAbilityInputsLibrary) \
	NO_API virtual ~UMoverExampleAbilityInputsLibrary();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h_101_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverExampleAbilityInputsLibrary;

// ********** End Class UMoverExampleAbilityInputsLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
