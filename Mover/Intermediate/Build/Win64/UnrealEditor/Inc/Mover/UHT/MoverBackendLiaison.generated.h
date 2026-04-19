// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Backends/MoverBackendLiaison.h"

#ifdef MOVER_MoverBackendLiaison_generated_h
#error "MoverBackendLiaison.generated.h already included, missing '#pragma once' in MoverBackendLiaison.h"
#endif
#define MOVER_MoverBackendLiaison_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMoverBackendLiaisonInterface ****************************************
MOVER_API UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMoverBackendLiaisonInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverBackendLiaisonInterface(UMoverBackendLiaisonInterface&&) = delete; \
	UMoverBackendLiaisonInterface(const UMoverBackendLiaisonInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverBackendLiaisonInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverBackendLiaisonInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverBackendLiaisonInterface) \
	virtual ~UMoverBackendLiaisonInterface() = default;


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMoverBackendLiaisonInterface(); \
	friend struct Z_Construct_UClass_UMoverBackendLiaisonInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverBackendLiaisonInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister) \
	DECLARE_SERIALIZER(UMoverBackendLiaisonInterface)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMoverBackendLiaisonInterface() {} \
public: \
	typedef UMoverBackendLiaisonInterface UClassType; \
	typedef IMoverBackendLiaisonInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverBackendLiaisonInterface;

// ********** End Interface UMoverBackendLiaisonInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverBackendLiaison_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
