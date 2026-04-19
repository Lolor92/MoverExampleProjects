// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debug/MoverDebugComponent.h"

#ifdef MOVER_MoverDebugComponent_generated_h
#error "MoverDebugComponent.generated.h already included, missing '#pragma once' in MoverDebugComponent.h"
#endif
#define MOVER_MoverDebugComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMoverTimeStep;
struct FTrajectorySampleInfo;

// ********** Begin Class UMoverDebugComponent *****************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMovementSimRollback); \
	DECLARE_FUNCTION(execOnMovementSimTick); \
	DECLARE_FUNCTION(execOnHistoryTrackingRollback); \
	DECLARE_FUNCTION(execGetPastTrajectory); \
	DECLARE_FUNCTION(execSetHistoryTracking);


MOVER_API UClass* Z_Construct_UClass_UMoverDebugComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverDebugComponent(); \
	friend struct Z_Construct_UClass_UMoverDebugComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverDebugComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverDebugComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverDebugComponent_NoRegister) \
	DECLARE_SERIALIZER(UMoverDebugComponent)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverDebugComponent(UMoverDebugComponent&&) = delete; \
	UMoverDebugComponent(const UMoverDebugComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverDebugComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverDebugComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverDebugComponent) \
	MOVER_API virtual ~UMoverDebugComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverDebugComponent;

// ********** End Class UMoverDebugComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Debug_MoverDebugComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
