// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/LayeredMoves/AnimRootMotionLayeredMove.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimRootMotionLayeredMove() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveBase();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLayeredMove_AnimRootMotion ***************************************
static_assert(std::is_polymorphic<FLayeredMove_AnimRootMotion>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_AnimRootMotion cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_AnimRootMotion;
class UScriptStruct* FLayeredMove_AnimRootMotion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_AnimRootMotion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_AnimRootMotion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_AnimRootMotion"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_AnimRootMotion.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Anim Root Motion Move: handles root motion from a montage played on the primary visual component (skeletal mesh). \n * In this method, root motion is extracted independently from anim playback. The move will end itself if the animation\n * is interrupted on the mesh.\n */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/AnimRootMotionLayeredMove.h" },
		{ "ToolTip", "Anim Root Motion Move: handles root motion from a montage played on the primary visual component (skeletal mesh).\nIn this method, root motion is extracted independently from anim playback. The move will end itself if the animation\nis interrupted on the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/AnimRootMotionLayeredMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingMontagePosition_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Montage position when started (in unscaled seconds). \n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/AnimRootMotionLayeredMove.h" },
		{ "ToolTip", "Montage position when started (in unscaled seconds)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Rate at which this montage is intended to play\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/AnimRootMotionLayeredMove.h" },
		{ "ToolTip", "Rate at which this montage is intended to play" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingMontagePosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_AnimRootMotion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_AnimRootMotion, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Montage_MetaData), NewProp_Montage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::NewProp_StartingMontagePosition = { "StartingMontagePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_AnimRootMotion, StartingMontagePosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingMontagePosition_MetaData), NewProp_StartingMontagePosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_AnimRootMotion, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::NewProp_StartingMontagePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::NewProp_PlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_AnimRootMotion",
	Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::PropPointers),
	sizeof(FLayeredMove_AnimRootMotion),
	alignof(FLayeredMove_AnimRootMotion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_AnimRootMotion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_AnimRootMotion.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_AnimRootMotion.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_AnimRootMotion *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_AnimRootMotionLayeredMove_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayeredMove_AnimRootMotion::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_AnimRootMotion_Statics::NewStructOps, TEXT("LayeredMove_AnimRootMotion"), &Z_Registration_Info_UScriptStruct_FLayeredMove_AnimRootMotion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_AnimRootMotion), 4212199112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_AnimRootMotionLayeredMove_h__Script_Mover_3676141535(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_AnimRootMotionLayeredMove_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_AnimRootMotionLayeredMove_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
