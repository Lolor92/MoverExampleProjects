// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementMode.h"

#ifdef MOVER_MovementMode_generated_h
#error "MovementMode.generated.h already included, missing '#pragma once' in MovementMode.h"
#endif
#define MOVER_MovementMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMoverComponent;
struct FMoverTickEndData;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;
struct FSimulationTickParams;

// ********** Begin Interface UMovementSettingsInterface *******************************************
MOVER_API UClass* Z_Construct_UClass_UMovementSettingsInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMovementSettingsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovementSettingsInterface(UMovementSettingsInterface&&) = delete; \
	UMovementSettingsInterface(const UMovementSettingsInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMovementSettingsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementSettingsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementSettingsInterface) \
	virtual ~UMovementSettingsInterface() = default;


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovementSettingsInterface(); \
	friend struct Z_Construct_UClass_UMovementSettingsInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMovementSettingsInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovementSettingsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMovementSettingsInterface_NoRegister) \
	DECLARE_SERIALIZER(UMovementSettingsInterface)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovementSettingsInterface() {} \
public: \
	typedef UMovementSettingsInterface UClassType; \
	typedef IMovementSettingsInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovementSettingsInterface;

// ********** End Interface UMovementSettingsInterface *********************************************

// ********** Begin Class UBaseMovementMode ********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	MOVER_API virtual void SimulationTick_Implementation(FSimulationTickParams const& Params, FMoverTickEndData& OutputState); \
	MOVER_API virtual void GenerateMove_Implementation(FMoverTickStartData const& StartState, FMoverTimeStep const& TimeStep, FProposedMove& OutProposedMove) const; \
	DECLARE_FUNCTION(execK2_GetMoverComponent); \
	DECLARE_FUNCTION(execSimulationTick); \
	DECLARE_FUNCTION(execGenerateMove);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_41_CALLBACK_WRAPPERS
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseMovementMode(); \
	friend struct Z_Construct_UClass_UBaseMovementMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseMovementMode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UBaseMovementMode_NoRegister) \
	DECLARE_SERIALIZER(UBaseMovementMode) \
	DECLARE_WITHIN(UMoverComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UBaseMovementMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseMovementMode(UBaseMovementMode&&) = delete; \
	UBaseMovementMode(const UBaseMovementMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UBaseMovementMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMovementMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMovementMode) \
	MOVER_API virtual ~UBaseMovementMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_38_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_41_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseMovementMode;

// ********** End Class UBaseMovementMode **********************************************************

// ********** Begin Class UNullMovementMode ********************************************************
MOVER_API UClass* Z_Construct_UClass_UNullMovementMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_144_INCLASS \
private: \
	static void StaticRegisterNativesUNullMovementMode(); \
	friend struct Z_Construct_UClass_UNullMovementMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UNullMovementMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UNullMovementMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UNullMovementMode_NoRegister) \
	DECLARE_SERIALIZER(UNullMovementMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_144_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UNullMovementMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNullMovementMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UNullMovementMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNullMovementMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNullMovementMode(UNullMovementMode&&) = delete; \
	UNullMovementMode(const UNullMovementMode&) = delete; \
	MOVER_API virtual ~UNullMovementMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_141_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_144_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_144_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_144_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNullMovementMode;

// ********** End Class UNullMovementMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
