// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/MoverBlackboard.h"

#ifdef MOVER_MoverBlackboard_generated_h
#error "MoverBlackboard.generated.h already included, missing '#pragma once' in MoverBlackboard.h"
#endif
#define MOVER_MoverBlackboard_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoverBlackboard *********************************************************
MOVER_API UClass* Z_Construct_UClass_UMoverBlackboard_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverBlackboard(); \
	friend struct Z_Construct_UClass_UMoverBlackboard_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverBlackboard_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverBlackboard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverBlackboard_NoRegister) \
	DECLARE_SERIALIZER(UMoverBlackboard)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMoverBlackboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverBlackboard(UMoverBlackboard&&) = delete; \
	UMoverBlackboard(const UMoverBlackboard&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverBlackboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverBlackboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverBlackboard) \
	MOVER_API virtual ~UMoverBlackboard();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverBlackboard;

// ********** End Class UMoverBlackboard ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
