// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementBases/FollowSplineMode.h"

#ifdef MOVEREXAMPLES_FollowSplineMode_generated_h
#error "FollowSplineMode.generated.h already included, missing '#pragma once' in FollowSplineMode.h"
#endif
#define MOVEREXAMPLES_FollowSplineMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FSplineOffsetRangeInput;

// ********** Begin ScriptStruct FSplineOffsetRangeInput *******************************************
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics; \
	MOVEREXAMPLES_API static class UScriptStruct* StaticStruct();


struct FSplineOffsetRangeInput;
// ********** End ScriptStruct FSplineOffsetRangeInput *********************************************

// ********** Begin Class UFollowSplineMode ********************************************************
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetControlSpline);


MOVEREXAMPLES_API UClass* Z_Construct_UClass_UFollowSplineMode_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUFollowSplineMode(); \
	friend struct Z_Construct_UClass_UFollowSplineMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVEREXAMPLES_API UClass* Z_Construct_UClass_UFollowSplineMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UFollowSplineMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoverExamples"), Z_Construct_UClass_UFollowSplineMode_NoRegister) \
	DECLARE_SERIALIZER(UFollowSplineMode)


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFollowSplineMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFollowSplineMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFollowSplineMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFollowSplineMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFollowSplineMode(UFollowSplineMode&&) = delete; \
	UFollowSplineMode(const UFollowSplineMode&) = delete; \
	NO_API virtual ~UFollowSplineMode();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_52_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_INCLASS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFollowSplineMode;

// ********** End Class UFollowSplineMode **********************************************************

// ********** Begin ScriptStruct FFollowSplineState ************************************************
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFollowSplineState_Statics; \
	MOVEREXAMPLES_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FFollowSplineState;
// ********** End ScriptStruct FFollowSplineState **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h

// ********** Begin Enum ESplineOffsetUnit *********************************************************
#define FOREACH_ENUM_ESPLINEOFFSETUNIT(op) \
	op(ESplineOffsetUnit::Percentage) \
	op(ESplineOffsetUnit::DurationAbsoluteSeconds) \
	op(ESplineOffsetUnit::DistanceAbsolute) 

enum class ESplineOffsetUnit : uint8;
template<> struct TIsUEnumClass<ESplineOffsetUnit> { enum { Value = true }; };
template<> MOVEREXAMPLES_API UEnum* StaticEnum<ESplineOffsetUnit>();
// ********** End Enum ESplineOffsetUnit ***********************************************************

// ********** Begin Enum EFollowSplineRotationType *************************************************
#define FOREACH_ENUM_EFOLLOWSPLINEROTATIONTYPE(op) \
	op(EFollowSplineRotationType::FollowSplineTangent) \
	op(EFollowSplineRotationType::NoRotation) 

enum class EFollowSplineRotationType : uint8;
template<> struct TIsUEnumClass<EFollowSplineRotationType> { enum { Value = true }; };
template<> MOVEREXAMPLES_API UEnum* StaticEnum<EFollowSplineRotationType>();
// ********** End Enum EFollowSplineRotationType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
