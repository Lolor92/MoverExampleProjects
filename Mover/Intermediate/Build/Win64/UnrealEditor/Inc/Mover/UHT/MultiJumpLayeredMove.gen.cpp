// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/LayeredMoves/MultiJumpLayeredMove.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMultiJumpLayeredMove() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_MultiJump();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveBase();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLayeredMove_MultiJump ********************************************
static_assert(std::is_polymorphic<FLayeredMove_MultiJump>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_MultiJump cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_MultiJump;
class UScriptStruct* FLayeredMove_MultiJump::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_MultiJump.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_MultiJump.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_MultiJump, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_MultiJump"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_MultiJump.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** MultiJump: layered move for handling multiple jumps without touching the ground i.e. a double jump.\n  * Note: This layered move ends automatically when the actor hits a valid floor so duration is expected to be less than 0. */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/MultiJumpLayeredMove.h" },
		{ "ToolTip", "MultiJump: layered move for handling multiple jumps without touching the ground i.e. a double jump.\nNote: This layered move ends automatically when the actor hits a valid floor so duration is expected to be less than 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumInAirJumps_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum Jumps an actor could perform while in the air */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/MultiJumpLayeredMove.h" },
		{ "ToolTip", "Maximum Jumps an actor could perform while in the air" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpwardsSpeed_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ClampMin", "0" },
		{ "Comment", "// Units per second, in whatever direction the target actor considers 'up'\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/MultiJumpLayeredMove.h" },
		{ "ToolTip", "Units per second, in whatever direction the target actor considers 'up'" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpsInAirRemaining_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/MultiJumpLayeredMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfLastJumpMS_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/MultiJumpLayeredMove.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumInAirJumps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpwardsSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JumpsInAirRemaining;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfLastJumpMS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_MultiJump>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::NewProp_MaximumInAirJumps = { "MaximumInAirJumps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_MultiJump, MaximumInAirJumps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumInAirJumps_MetaData), NewProp_MaximumInAirJumps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::NewProp_UpwardsSpeed = { "UpwardsSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_MultiJump, UpwardsSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpwardsSpeed_MetaData), NewProp_UpwardsSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::NewProp_JumpsInAirRemaining = { "JumpsInAirRemaining", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_MultiJump, JumpsInAirRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpsInAirRemaining_MetaData), NewProp_JumpsInAirRemaining_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::NewProp_TimeOfLastJumpMS = { "TimeOfLastJumpMS", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_MultiJump, TimeOfLastJumpMS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfLastJumpMS_MetaData), NewProp_TimeOfLastJumpMS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::NewProp_MaximumInAirJumps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::NewProp_UpwardsSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::NewProp_JumpsInAirRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::NewProp_TimeOfLastJumpMS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_MultiJump",
	Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::PropPointers),
	sizeof(FLayeredMove_MultiJump),
	alignof(FLayeredMove_MultiJump),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_MultiJump()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_MultiJump.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_MultiJump.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_MultiJump.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_MultiJump **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_MultiJumpLayeredMove_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayeredMove_MultiJump::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_MultiJump_Statics::NewStructOps, TEXT("LayeredMove_MultiJump"), &Z_Registration_Info_UScriptStruct_FLayeredMove_MultiJump, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_MultiJump), 4168335238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_MultiJumpLayeredMove_h__Script_Mover_2709829247(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_MultiJumpLayeredMove_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_MultiJumpLayeredMove_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
