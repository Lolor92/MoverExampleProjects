// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h"

#ifdef MOVER_BasicLayeredMoves_generated_h
#error "BasicLayeredMoves.generated.h already included, missing '#pragma once' in BasicLayeredMoves.h"
#endif
#define MOVER_BasicLayeredMoves_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLayeredMove_LinearVelocity ***************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


struct FLayeredMove_LinearVelocity;
// ********** End ScriptStruct FLayeredMove_LinearVelocity *****************************************

// ********** Begin ScriptStruct FLayeredMove_JumpImpulseOverDuration ******************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


struct FLayeredMove_JumpImpulseOverDuration;
// ********** End ScriptStruct FLayeredMove_JumpImpulseOverDuration ********************************

// ********** Begin ScriptStruct FLayeredMove_JumpTo ***********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


struct FLayeredMove_JumpTo;
// ********** End ScriptStruct FLayeredMove_JumpTo *************************************************

// ********** Begin ScriptStruct FLayeredMove_MoveTo ***********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


struct FLayeredMove_MoveTo;
// ********** End ScriptStruct FLayeredMove_MoveTo *************************************************

// ********** Begin ScriptStruct FLayeredMove_MoveToDynamic ****************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_249_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMove_MoveTo Super;


struct FLayeredMove_MoveToDynamic;
// ********** End ScriptStruct FLayeredMove_MoveToDynamic ******************************************

// ********** Begin ScriptStruct FLayeredMove_RadialImpulse ****************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h_286_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FLayeredMoveBase Super;


struct FLayeredMove_RadialImpulse;
// ********** End ScriptStruct FLayeredMove_RadialImpulse ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h

// ********** Begin Enum ELayeredMove_ConstantVelocitySettingsFlags ********************************
#define FOREACH_ENUM_ELAYEREDMOVE_CONSTANTVELOCITYSETTINGSFLAGS(op) \
	op(ELayeredMove_ConstantVelocitySettingsFlags::NoFlags) \
	op(ELayeredMove_ConstantVelocitySettingsFlags::VelocityStartRelative) \
	op(ELayeredMove_ConstantVelocitySettingsFlags::VelocityAlwaysRelative) 

enum class ELayeredMove_ConstantVelocitySettingsFlags : uint8;
template<> struct TIsUEnumClass<ELayeredMove_ConstantVelocitySettingsFlags> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<ELayeredMove_ConstantVelocitySettingsFlags>();
// ********** End Enum ELayeredMove_ConstantVelocitySettingsFlags **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
