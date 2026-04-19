// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestCustomLayeredMoves.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTestCustomLayeredMoves() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveBase();
MOVERTESTS_API UScriptStruct* Z_Construct_UScriptStruct_FTestCustomLayeredMove();
UPackage* Z_Construct_UPackage__Script_MoverTests();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTestCustomLayeredMove ********************************************
static_assert(std::is_polymorphic<FTestCustomLayeredMove>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FTestCustomLayeredMove cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTestCustomLayeredMove;
class UScriptStruct* FTestCustomLayeredMove::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTestCustomLayeredMove.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTestCustomLayeredMove.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestCustomLayeredMove, (UObject*)Z_Construct_UPackage__Script_MoverTests(), TEXT("TestCustomLayeredMove"));
	}
	return Z_Registration_Info_UScriptStruct_FTestCustomLayeredMove.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Custom Layered move for testing purposes - acts the same as the Launch layered move\n */" },
		{ "ModuleRelativePath", "Public/TestCustomLayeredMoves.h" },
		{ "ToolTip", "Custom Layered move for testing purposes - acts the same as the Launch layered move" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Velocity to apply to the actor. Could be additive or overriding depending on MixMode setting.\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/TestCustomLayeredMoves.h" },
		{ "ToolTip", "Velocity to apply to the actor. Could be additive or overriding depending on MixMode setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceMovementMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional movement mode name to force the actor into before applying the impulse velocity.\n" },
		{ "ModuleRelativePath", "Public/TestCustomLayeredMoves.h" },
		{ "ToolTip", "Optional movement mode name to force the actor into before applying the impulse velocity." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ForceMovementMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestCustomLayeredMove>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestCustomLayeredMove, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchVelocity_MetaData), NewProp_LaunchVelocity_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::NewProp_ForceMovementMode = { "ForceMovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestCustomLayeredMove, ForceMovementMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceMovementMode_MetaData), NewProp_ForceMovementMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::NewProp_LaunchVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::NewProp_ForceMovementMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverTests,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"TestCustomLayeredMove",
	Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::PropPointers),
	sizeof(FTestCustomLayeredMove),
	alignof(FTestCustomLayeredMove),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestCustomLayeredMove()
{
	if (!Z_Registration_Info_UScriptStruct_FTestCustomLayeredMove.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTestCustomLayeredMove.InnerSingleton, Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTestCustomLayeredMove.InnerSingleton;
}
// ********** End ScriptStruct FTestCustomLayeredMove **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverTests_Source_MoverTests_Public_TestCustomLayeredMoves_h__Script_MoverTests_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTestCustomLayeredMove::StaticStruct, Z_Construct_UScriptStruct_FTestCustomLayeredMove_Statics::NewStructOps, TEXT("TestCustomLayeredMove"), &Z_Registration_Info_UScriptStruct_FTestCustomLayeredMove, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestCustomLayeredMove), 2447613269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverTests_Source_MoverTests_Public_TestCustomLayeredMoves_h__Script_MoverTests_237873269(TEXT("/Script/MoverTests"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverTests_Source_MoverTests_Public_TestCustomLayeredMoves_h__Script_MoverTests_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverTests_Source_MoverTests_Public_TestCustomLayeredMoves_h__Script_MoverTests_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
