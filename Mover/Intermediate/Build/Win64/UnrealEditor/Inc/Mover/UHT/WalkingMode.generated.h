// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Modes/WalkingMode.h"

#ifdef MOVER_WalkingMode_generated_h
#error "WalkingMode.generated.h already included, missing '#pragma once' in WalkingMode.h"
#endif
#define MOVER_WalkingMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Class UWalkingMode *************************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetTurnGeneratorClass); \
	DECLARE_FUNCTION(execGetTurnGenerator);


MOVER_API UClass* Z_Construct_UClass_UWalkingMode_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUWalkingMode(); \
	friend struct Z_Construct_UClass_UWalkingMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UWalkingMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UWalkingMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UWalkingMode_NoRegister) \
	DECLARE_SERIALIZER(UWalkingMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UWalkingMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWalkingMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UWalkingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWalkingMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWalkingMode(UWalkingMode&&) = delete; \
	UWalkingMode(const UWalkingMode&) = delete; \
	MOVER_API virtual ~UWalkingMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_36_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWalkingMode;

// ********** End Class UWalkingMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h

// ********** Begin Enum EStaticFloorCheckPolicy ***************************************************
#define FOREACH_ENUM_ESTATICFLOORCHECKPOLICY(op) \
	op(EStaticFloorCheckPolicy::Always) \
	op(EStaticFloorCheckPolicy::OnDynamicBaseOnly) 

enum class EStaticFloorCheckPolicy : uint8;
template<> struct TIsUEnumClass<EStaticFloorCheckPolicy> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EStaticFloorCheckPolicy>();
// ********** End Enum EStaticFloorCheckPolicy *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
