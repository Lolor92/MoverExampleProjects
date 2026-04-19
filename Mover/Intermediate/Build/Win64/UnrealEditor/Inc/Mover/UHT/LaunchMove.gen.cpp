// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/LayeredMoves/LaunchMove.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLaunchMove() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_Launch();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveBase();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLayeredMove_Launch ***********************************************
static_assert(std::is_polymorphic<FLayeredMove_Launch>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_Launch cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_Launch;
class UScriptStruct* FLayeredMove_Launch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_Launch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_Launch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_Launch, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_Launch"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_Launch.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Launch Move: provides an impulse velocity to the actor after (optionally) forcing them into a particular movement mode */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/LaunchMove.h" },
		{ "ToolTip", "Launch Move: provides an impulse velocity to the actor after (optionally) forcing them into a particular movement mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Velocity to apply to the actor. Could be additive or overriding depending on MixMode setting.\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/LaunchMove.h" },
		{ "ToolTip", "Velocity to apply to the actor. Could be additive or overriding depending on MixMode setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceMovementMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional movement mode name to force the actor into before applying the impulse velocity.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/LaunchMove.h" },
		{ "ToolTip", "Optional movement mode name to force the actor into before applying the impulse velocity." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ForceMovementMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_Launch>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_Launch, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchVelocity_MetaData), NewProp_LaunchVelocity_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::NewProp_ForceMovementMode = { "ForceMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_Launch, ForceMovementMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceMovementMode_MetaData), NewProp_ForceMovementMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::NewProp_LaunchVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::NewProp_ForceMovementMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_Launch",
	Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::PropPointers),
	sizeof(FLayeredMove_Launch),
	alignof(FLayeredMove_Launch),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_Launch()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_Launch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_Launch.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_Launch.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_Launch *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayeredMove_Launch::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_Launch_Statics::NewStructOps, TEXT("LayeredMove_Launch"), &Z_Registration_Info_UScriptStruct_FLayeredMove_Launch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_Launch), 2500502973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h__Script_Mover_3443194499(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_LaunchMove_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
