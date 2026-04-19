// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverExamplesCharacter.h"

#ifdef MOVEREXAMPLES_MoverExamplesCharacter_generated_h
#error "MoverExamplesCharacter.generated.h already included, missing '#pragma once' in MoverExamplesCharacter.h"
#endif
#define MOVEREXAMPLES_MoverExamplesCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCharacterMoverComponent;
struct FMoverInputCmdContext;

// ********** Begin Class AMoverExamplesCharacter **************************************************
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestMoveByVelocity); \
	DECLARE_FUNCTION(execRequestMoveByIntent); \
	DECLARE_FUNCTION(execGetMoverComponent);


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_CALLBACK_WRAPPERS
MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesCharacter_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoverExamplesCharacter(); \
	friend struct Z_Construct_UClass_AMoverExamplesCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMoverExamplesCharacter, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverExamples"), Z_Construct_UClass_AMoverExamplesCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMoverExamplesCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMoverExamplesCharacter*>(this); }


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMoverExamplesCharacter(AMoverExamplesCharacter&&) = delete; \
	AMoverExamplesCharacter(const AMoverExamplesCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoverExamplesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoverExamplesCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoverExamplesCharacter) \
	NO_API virtual ~AMoverExamplesCharacter();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMoverExamplesCharacter;

// ********** End Class AMoverExamplesCharacter ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
