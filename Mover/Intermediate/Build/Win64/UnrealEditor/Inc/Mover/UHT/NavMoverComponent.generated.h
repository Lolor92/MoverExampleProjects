// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/NavMoverComponent.h"

#ifdef MOVER_NavMoverComponent_generated_h
#error "NavMoverComponent.generated.h already included, missing '#pragma once' in NavMoverComponent.h"
#endif
#define MOVER_NavMoverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavMoverComponent *******************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSwimming); \
	DECLARE_FUNCTION(execConsumeNavMovementData); \
	DECLARE_FUNCTION(execGetMaxSpeedForNavMovement); \
	DECLARE_FUNCTION(execGetVelocityForNavMovement);


MOVER_API UClass* Z_Construct_UClass_UNavMoverComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavMoverComponent(); \
	friend struct Z_Construct_UClass_UNavMoverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UNavMoverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavMoverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UNavMoverComponent_NoRegister) \
	DECLARE_SERIALIZER(UNavMoverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavMoverComponent*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavMoverComponent(UNavMoverComponent&&) = delete; \
	UNavMoverComponent(const UNavMoverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UNavMoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMoverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavMoverComponent) \
	MOVER_API virtual ~UNavMoverComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavMoverComponent;

// ********** End Class UNavMoverComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
