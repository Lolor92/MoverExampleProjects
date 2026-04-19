// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverExamplesGameState.h"

#ifdef MOVEREXAMPLES_MoverExamplesGameState_generated_h
#error "MoverExamplesGameState.generated.h already included, missing '#pragma once' in MoverExamplesGameState.h"
#endif
#define MOVEREXAMPLES_MoverExamplesGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMoverExamplesGameState **************************************************
MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesGameState_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoverExamplesGameState(); \
	friend struct Z_Construct_UClass_AMoverExamplesGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(AMoverExamplesGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverExamples"), Z_Construct_UClass_AMoverExamplesGameState_NoRegister) \
	DECLARE_SERIALIZER(AMoverExamplesGameState)


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMoverExamplesGameState(AMoverExamplesGameState&&) = delete; \
	AMoverExamplesGameState(const AMoverExamplesGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoverExamplesGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoverExamplesGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoverExamplesGameState) \
	NO_API virtual ~AMoverExamplesGameState();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMoverExamplesGameState;

// ********** End Class AMoverExamplesGameState ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
