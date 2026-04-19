// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverSimulation.h"

#ifdef MOVER_MoverSimulation_generated_h
#error "MoverSimulation.generated.h already included, missing '#pragma once' in MoverSimulation.h"
#endif
#define MOVER_MoverSimulation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMoverBlackboard;

// ********** Begin Class UMoverSimulation *********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlackboard_Mutable); \
	DECLARE_FUNCTION(execGetBlackboard);


MOVER_API UClass* Z_Construct_UClass_UMoverSimulation_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverSimulation(); \
	friend struct Z_Construct_UClass_UMoverSimulation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverSimulation_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverSimulation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverSimulation_NoRegister) \
	DECLARE_SERIALIZER(UMoverSimulation)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverSimulation(UMoverSimulation&&) = delete; \
	UMoverSimulation(const UMoverSimulation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverSimulation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverSimulation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverSimulation) \
	MOVER_API virtual ~UMoverSimulation();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverSimulation;

// ********** End Class UMoverSimulation ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
