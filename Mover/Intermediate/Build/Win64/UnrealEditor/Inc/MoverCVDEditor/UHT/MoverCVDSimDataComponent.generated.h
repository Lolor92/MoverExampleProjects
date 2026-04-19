// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverCVDSimDataComponent.h"

#ifdef MOVERCVDEDITOR_MoverCVDSimDataComponent_generated_h
#error "MoverCVDSimDataComponent.generated.h already included, missing '#pragma once' in MoverCVDSimDataComponent.h"
#endif
#define MOVERCVDEDITOR_MoverCVDSimDataComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoverCVDSimDataComponent ************************************************
MOVERCVDEDITOR_API UClass* Z_Construct_UClass_UMoverCVDSimDataComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverCVDSimDataComponent(); \
	friend struct Z_Construct_UClass_UMoverCVDSimDataComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVERCVDEDITOR_API UClass* Z_Construct_UClass_UMoverCVDSimDataComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverCVDSimDataComponent, UChaosVDSolverDataComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverCVDEditor"), Z_Construct_UClass_UMoverCVDSimDataComponent_NoRegister) \
	DECLARE_SERIALIZER(UMoverCVDSimDataComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoverCVDSimDataComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverCVDSimDataComponent(UMoverCVDSimDataComponent&&) = delete; \
	UMoverCVDSimDataComponent(const UMoverCVDSimDataComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverCVDSimDataComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverCVDSimDataComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverCVDSimDataComponent) \
	NO_API virtual ~UMoverCVDSimDataComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverCVDSimDataComponent;

// ********** End Class UMoverCVDSimDataComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
