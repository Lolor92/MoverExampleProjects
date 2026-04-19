// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Backends/MoverPathedPhysicsLiaison.h"

#ifdef MOVER_MoverPathedPhysicsLiaison_generated_h
#error "MoverPathedPhysicsLiaison.generated.h already included, missing '#pragma once' in MoverPathedPhysicsLiaison.h"
#endif
#define MOVER_MoverPathedPhysicsLiaison_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoverPathedPhysicsLiaisonComponent **************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleMovementModeChanged);


MOVER_API UClass* Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverPathedPhysicsLiaisonComponent(); \
	friend struct Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverPathedPhysicsLiaisonComponent, UMoverNetworkPhysicsLiaisonComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_NoRegister) \
	DECLARE_SERIALIZER(UMoverPathedPhysicsLiaisonComponent) \
	DECLARE_WITHIN(UPathedPhysicsMoverComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverPathedPhysicsLiaisonComponent(UMoverPathedPhysicsLiaisonComponent&&) = delete; \
	UMoverPathedPhysicsLiaisonComponent(const UMoverPathedPhysicsLiaisonComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverPathedPhysicsLiaisonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverPathedPhysicsLiaisonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverPathedPhysicsLiaisonComponent) \
	MOVER_API virtual ~UMoverPathedPhysicsLiaisonComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverPathedPhysicsLiaisonComponent;

// ********** End Class UMoverPathedPhysicsLiaisonComponent ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
