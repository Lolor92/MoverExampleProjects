// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PhysicsMoverSimulationTypes.h"

#ifdef MOVER_PhysicsMoverSimulationTypes_generated_h
#error "PhysicsMoverSimulationTypes.generated.h already included, missing '#pragma once' in PhysicsMoverSimulationTypes.h"
#endif
#define MOVER_PhysicsMoverSimulationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPhysicsCharacterMovementModeInterface *******************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPhysicsCharacterMovementModeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsCharacterMovementModeInterface(UPhysicsCharacterMovementModeInterface&&) = delete; \
	UPhysicsCharacterMovementModeInterface(const UPhysicsCharacterMovementModeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsCharacterMovementModeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsCharacterMovementModeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsCharacterMovementModeInterface) \
	virtual ~UPhysicsCharacterMovementModeInterface() = default;


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_90_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPhysicsCharacterMovementModeInterface(); \
	friend struct Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsCharacterMovementModeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsCharacterMovementModeInterface)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_90_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_90_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_90_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_90_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPhysicsCharacterMovementModeInterface() {} \
public: \
	typedef UPhysicsCharacterMovementModeInterface UClassType; \
	typedef IPhysicsCharacterMovementModeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_87_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_90_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsCharacterMovementModeInterface;

// ********** End Interface UPhysicsCharacterMovementModeInterface *********************************

// ********** Begin ScriptStruct FMovementSettingsInputs *******************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FMovementSettingsInputs;
// ********** End ScriptStruct FMovementSettingsInputs *********************************************

// ********** Begin ScriptStruct FMoverAIInputs ****************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverAIInputs_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FMoverAIInputs;
// ********** End ScriptStruct FMoverAIInputs ******************************************************

// ********** Begin ScriptStruct FMoverLaunchInputs ************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FMoverLaunchInputs;
// ********** End ScriptStruct FMoverLaunchInputs **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h

// ********** Begin Enum EMoverLaunchVelocityMode **************************************************
#define FOREACH_ENUM_EMOVERLAUNCHVELOCITYMODE(op) \
	op(EMoverLaunchVelocityMode::Additive) \
	op(EMoverLaunchVelocityMode::Override) 

enum class EMoverLaunchVelocityMode : uint8;
template<> struct TIsUEnumClass<EMoverLaunchVelocityMode> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EMoverLaunchVelocityMode>();
// ********** End Enum EMoverLaunchVelocityMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
