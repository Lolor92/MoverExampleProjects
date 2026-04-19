// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LayeredMove.h"

#ifdef MOVER_LayeredMove_generated_h
#error "LayeredMove.generated.h already included, missing '#pragma once' in LayeredMove.h"
#endif
#define MOVER_LayeredMove_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLayeredMoveFinishVelocitySettings ********************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMoveFinishVelocitySettings_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FLayeredMoveFinishVelocitySettings;
// ********** End ScriptStruct FLayeredMoveFinishVelocitySettings **********************************

// ********** Begin ScriptStruct FLayeredMoveBase **************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMoveBase_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FLayeredMoveBase;
// ********** End ScriptStruct FLayeredMoveBase ****************************************************

// ********** Begin ScriptStruct FLayeredMoveGroup *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLayeredMoveGroup_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FLayeredMoveGroup;
// ********** End ScriptStruct FLayeredMoveGroup ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_LayeredMove_h

// ********** Begin Enum ELayeredMoveFinishVelocityMode ********************************************
#define FOREACH_ENUM_ELAYEREDMOVEFINISHVELOCITYMODE(op) \
	op(ELayeredMoveFinishVelocityMode::MaintainLastRootMotionVelocity) \
	op(ELayeredMoveFinishVelocityMode::SetVelocity) \
	op(ELayeredMoveFinishVelocityMode::ClampVelocity) 

enum class ELayeredMoveFinishVelocityMode : uint8;
template<> struct TIsUEnumClass<ELayeredMoveFinishVelocityMode> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<ELayeredMoveFinishVelocityMode>();
// ********** End Enum ELayeredMoveFinishVelocityMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
