// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/ModularMovement.h"

#ifdef MOVER_ModularMovement_generated_h
#error "ModularMovement.generated.h already included, missing '#pragma once' in ModularMovement.h"
#endif
#define MOVER_ModularMovement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMoverBlackboard;
struct FMoverDefaultSyncState;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;

// ********** Begin Interface UTurnGeneratorInterface **********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FRotator GetTurn_Implementation(FRotator TargetOrientation, FMoverTickStartData const& FullStartState, FMoverDefaultSyncState const& MoverState, FMoverTimeStep const& TimeStep, FProposedMove const& ProposedMove, UMoverBlackboard* SimBlackboard) { return FRotator(ForceInit); }; \
	DECLARE_FUNCTION(execGetTurn);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_CALLBACK_WRAPPERS
MOVER_API UClass* Z_Construct_UClass_UTurnGeneratorInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UTurnGeneratorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTurnGeneratorInterface(UTurnGeneratorInterface&&) = delete; \
	UTurnGeneratorInterface(const UTurnGeneratorInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UTurnGeneratorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnGeneratorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnGeneratorInterface) \
	virtual ~UTurnGeneratorInterface() = default;


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTurnGeneratorInterface(); \
	friend struct Z_Construct_UClass_UTurnGeneratorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UTurnGeneratorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UTurnGeneratorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UTurnGeneratorInterface_NoRegister) \
	DECLARE_SERIALIZER(UTurnGeneratorInterface)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITurnGeneratorInterface() {} \
public: \
	typedef UTurnGeneratorInterface UClassType; \
	typedef ITurnGeneratorInterface ThisClass; \
	MOVER_API static FRotator Execute_GetTurn(UObject* O, FRotator TargetOrientation, FMoverTickStartData const& FullStartState, FMoverDefaultSyncState const& MoverState, FMoverTimeStep const& TimeStep, FProposedMove const& ProposedMove, UMoverBlackboard* SimBlackboard); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTurnGeneratorInterface;

// ********** End Interface UTurnGeneratorInterface ************************************************

// ********** Begin Class ULinearTurnGenerator *****************************************************
MOVER_API UClass* Z_Construct_UClass_ULinearTurnGenerator_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinearTurnGenerator(); \
	friend struct Z_Construct_UClass_ULinearTurnGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_ULinearTurnGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(ULinearTurnGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_ULinearTurnGenerator_NoRegister) \
	DECLARE_SERIALIZER(ULinearTurnGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<ULinearTurnGenerator*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API ULinearTurnGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULinearTurnGenerator(ULinearTurnGenerator&&) = delete; \
	ULinearTurnGenerator(const ULinearTurnGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, ULinearTurnGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinearTurnGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinearTurnGenerator) \
	MOVER_API virtual ~ULinearTurnGenerator();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULinearTurnGenerator;

// ********** End Class ULinearTurnGenerator *******************************************************

// ********** Begin Class UExactDampedTurnGenerator ************************************************
MOVER_API UClass* Z_Construct_UClass_UExactDampedTurnGenerator_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExactDampedTurnGenerator(); \
	friend struct Z_Construct_UClass_UExactDampedTurnGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UExactDampedTurnGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UExactDampedTurnGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UExactDampedTurnGenerator_NoRegister) \
	DECLARE_SERIALIZER(UExactDampedTurnGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<UExactDampedTurnGenerator*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UExactDampedTurnGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExactDampedTurnGenerator(UExactDampedTurnGenerator&&) = delete; \
	UExactDampedTurnGenerator(const UExactDampedTurnGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UExactDampedTurnGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExactDampedTurnGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExactDampedTurnGenerator) \
	MOVER_API virtual ~UExactDampedTurnGenerator();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_69_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExactDampedTurnGenerator;

// ********** End Class UExactDampedTurnGenerator **************************************************

// ********** Begin Class UBlueprintableTurnGenerator **********************************************
MOVER_API UClass* Z_Construct_UClass_UBlueprintableTurnGenerator_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintableTurnGenerator(); \
	friend struct Z_Construct_UClass_UBlueprintableTurnGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UBlueprintableTurnGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintableTurnGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UBlueprintableTurnGenerator_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintableTurnGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<UBlueprintableTurnGenerator*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UBlueprintableTurnGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintableTurnGenerator(UBlueprintableTurnGenerator&&) = delete; \
	UBlueprintableTurnGenerator(const UBlueprintableTurnGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UBlueprintableTurnGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintableTurnGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintableTurnGenerator) \
	MOVER_API virtual ~UBlueprintableTurnGenerator();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_88_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_91_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintableTurnGenerator;

// ********** End Class UBlueprintableTurnGenerator ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
