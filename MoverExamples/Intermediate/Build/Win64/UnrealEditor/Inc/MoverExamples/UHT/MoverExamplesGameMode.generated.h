// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverExamplesGameMode.h"

#ifdef MOVEREXAMPLES_MoverExamplesGameMode_generated_h
#error "MoverExamplesGameMode.generated.h already included, missing '#pragma once' in MoverExamplesGameMode.h"
#endif
#define MOVEREXAMPLES_MoverExamplesGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMoverExamplesGameMode ***************************************************
MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesGameMode_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoverExamplesGameMode(); \
	friend struct Z_Construct_UClass_AMoverExamplesGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AMoverExamplesGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverExamples"), Z_Construct_UClass_AMoverExamplesGameMode_NoRegister) \
	DECLARE_SERIALIZER(AMoverExamplesGameMode)


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMoverExamplesGameMode(AMoverExamplesGameMode&&) = delete; \
	AMoverExamplesGameMode(const AMoverExamplesGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoverExamplesGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoverExamplesGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoverExamplesGameMode) \
	NO_API virtual ~AMoverExamplesGameMode();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMoverExamplesGameMode;

// ********** End Class AMoverExamplesGameMode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
