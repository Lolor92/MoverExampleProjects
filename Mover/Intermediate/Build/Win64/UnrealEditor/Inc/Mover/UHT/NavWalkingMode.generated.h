// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/NavWalkingMode.h"

#ifdef MOVER_NavWalkingMode_generated_h
#error "NavWalkingMode.generated.h already included, missing '#pragma once' in NavWalkingMode.h"
#endif
#define MOVER_NavWalkingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Class UNavWalkingMode **********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTurnGeneratorClass); \
	DECLARE_FUNCTION(execGetTurnGenerator);


MOVER_API UClass* Z_Construct_UClass_UNavWalkingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavWalkingMode(); \
	friend struct Z_Construct_UClass_UNavWalkingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UNavWalkingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavWalkingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UNavWalkingMode_NoRegister) \
	DECLARE_SERIALIZER(UNavWalkingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavWalkingMode(UNavWalkingMode&&) = delete; \
	UNavWalkingMode(const UNavWalkingMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UNavWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavWalkingMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavWalkingMode) \
	MOVER_API virtual ~UNavWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavWalkingMode;

// ********** End Class UNavWalkingMode ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h

// ********** Begin Enum EOffNavMeshBehavior *******************************************************
#define FOREACH_ENUM_EOFFNAVMESHBEHAVIOR(op) \
	op(EOffNavMeshBehavior::SwitchToWalking) \
	op(EOffNavMeshBehavior::MoveWithoutNavMesh) \
	op(EOffNavMeshBehavior::DoNotMove) \
	op(EOffNavMeshBehavior::RotateOnly) 

enum class EOffNavMeshBehavior : uint8;
template<> struct TIsUEnumClass<EOffNavMeshBehavior> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EOffNavMeshBehavior>();
// ********** End Enum EOffNavMeshBehavior *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
