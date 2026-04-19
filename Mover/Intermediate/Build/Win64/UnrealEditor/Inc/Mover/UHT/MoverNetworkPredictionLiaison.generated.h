// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Backends/MoverNetworkPredictionLiaison.h"

#ifdef MOVER_MoverNetworkPredictionLiaison_generated_h
#error "MoverNetworkPredictionLiaison.generated.h already included, missing '#pragma once' in MoverNetworkPredictionLiaison.h"
#endif
#define MOVER_MoverNetworkPredictionLiaison_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoverNetworkPredictionLiaisonComponent **********************************
MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverNetworkPredictionLiaisonComponent(); \
	friend struct Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverNetworkPredictionLiaisonComponent, UNetworkPredictionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_NoRegister) \
	DECLARE_SERIALIZER(UMoverNetworkPredictionLiaisonComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMoverNetworkPredictionLiaisonComponent*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverNetworkPredictionLiaisonComponent(UMoverNetworkPredictionLiaisonComponent&&) = delete; \
	UMoverNetworkPredictionLiaisonComponent(const UMoverNetworkPredictionLiaisonComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverNetworkPredictionLiaisonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverNetworkPredictionLiaisonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverNetworkPredictionLiaisonComponent) \
	MOVER_API virtual ~UMoverNetworkPredictionLiaisonComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverNetworkPredictionLiaisonComponent;

// ********** End Class UMoverNetworkPredictionLiaisonComponent ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
