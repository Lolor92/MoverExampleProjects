// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementBases/FollowPathMode.h"

#ifdef MOVEREXAMPLES_FollowPathMode_generated_h
#error "FollowPathMode.generated.h already included, missing '#pragma once' in FollowPathMode.h"
#endif
#define MOVEREXAMPLES_FollowPathMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFollowPathMode **********************************************************
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UFollowPathMode_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUFollowPathMode(); \
	friend struct Z_Construct_UClass_UFollowPathMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVEREXAMPLES_API UClass* Z_Construct_UClass_UFollowPathMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UFollowPathMode, UBaseMovementMode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoverExamples"), Z_Construct_UClass_UFollowPathMode_NoRegister) \
	DECLARE_SERIALIZER(UFollowPathMode)


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFollowPathMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFollowPathMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFollowPathMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFollowPathMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFollowPathMode(UFollowPathMode&&) = delete; \
	UFollowPathMode(const UFollowPathMode&) = delete; \
	NO_API virtual ~UFollowPathMode();


#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h_32_PROLOG
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h_35_INCLASS \
	FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFollowPathMode;

// ********** End Class UFollowPathMode ************************************************************

// ********** Begin ScriptStruct FFollowPathState **************************************************
#define FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFollowPathState_Statics; \
	MOVEREXAMPLES_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FFollowPathState;
// ********** End ScriptStruct FFollowPathState ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h

// ********** Begin Enum EFollowPathRotationType ***************************************************
#define FOREACH_ENUM_EFOLLOWPATHROTATIONTYPE(op) \
	op(EFollowPathRotationType::Fixed) \
	op(EFollowPathRotationType::AlignWithPathTangents) \
	op(EFollowPathRotationType::AlignWithPath) 

enum class EFollowPathRotationType : uint8;
template<> struct TIsUEnumClass<EFollowPathRotationType> { enum { Value = true }; };
template<> MOVEREXAMPLES_API UEnum* StaticEnum<EFollowPathRotationType>();
// ********** End Enum EFollowPathRotationType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
