// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/MovementUtilsTypes.h"

#ifdef MOVER_MovementUtilsTypes_generated_h
#error "MovementUtilsTypes.generated.h already included, missing '#pragma once' in MovementUtilsTypes.h"
#endif
#define MOVER_MovementUtilsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FProposedMove *****************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtilsTypes_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProposedMove_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FProposedMove;
// ********** End ScriptStruct FProposedMove *******************************************************

// ********** Begin ScriptStruct FMovingComponentSet ***********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtilsTypes_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovingComponentSet_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMovingComponentSet;
// ********** End ScriptStruct FMovingComponentSet *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtilsTypes_h

// ********** Begin Enum EMoveMixMode **************************************************************
#define FOREACH_ENUM_EMOVEMIXMODE(op) \
	op(EMoveMixMode::AdditiveVelocity) \
	op(EMoveMixMode::OverrideVelocity) \
	op(EMoveMixMode::OverrideAll) \
	op(EMoveMixMode::OverrideAllExceptVerticalVelocity) 

enum class EMoveMixMode : uint8;
template<> struct TIsUEnumClass<EMoveMixMode> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EMoveMixMode>();
// ********** End Enum EMoveMixMode ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
