// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_PlayMontageOnMoverActor.h"

#ifdef MOVEREDITOR_K2Node_PlayMontageOnMoverActor_generated_h
#error "K2Node_PlayMontageOnMoverActor.generated.h already included, missing '#pragma once' in K2Node_PlayMontageOnMoverActor.h"
#endif
#define MOVEREDITOR_K2Node_PlayMontageOnMoverActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_PlayMontageOnMoverActor ******************************************
MOVEREDITOR_API UClass* Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_PlayMontageOnMoverActor(); \
	friend struct Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVEREDITOR_API UClass* Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_PlayMontageOnMoverActor, UK2Node_BaseAsyncTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoverEditor"), Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_PlayMontageOnMoverActor)


#define FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_PlayMontageOnMoverActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_PlayMontageOnMoverActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_PlayMontageOnMoverActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_PlayMontageOnMoverActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_PlayMontageOnMoverActor(UK2Node_PlayMontageOnMoverActor&&) = delete; \
	UK2Node_PlayMontageOnMoverActor(const UK2Node_PlayMontageOnMoverActor&) = delete; \
	NO_API virtual ~UK2Node_PlayMontageOnMoverActor();


#define FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_PlayMontageOnMoverActor;

// ********** End Class UK2Node_PlayMontageOnMoverActor ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
