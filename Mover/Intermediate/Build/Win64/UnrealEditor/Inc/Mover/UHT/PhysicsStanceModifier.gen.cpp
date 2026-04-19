// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/MovementModifiers/PhysicsStanceModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhysicsStanceModifier() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsStanceModifier();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FStanceModifier();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPhysicsStanceModifier ********************************************
static_assert(std::is_polymorphic<FPhysicsStanceModifier>() == std::is_polymorphic<FStanceModifier>(), "USTRUCT FPhysicsStanceModifier cannot be polymorphic unless super FStanceModifier is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPhysicsStanceModifier;
class UScriptStruct* FPhysicsStanceModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPhysicsStanceModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPhysicsStanceModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsStanceModifier, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("PhysicsStanceModifier"));
	}
	return Z_Registration_Info_UScriptStruct_FPhysicsStanceModifier.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPhysicsStanceModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Physics specialized version of FStanceModifier\n */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/MovementModifiers/PhysicsStanceModifier.h" },
		{ "ToolTip", "Physics specialized version of FStanceModifier" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsStanceModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsStanceModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FStanceModifier,
	&NewStructOps,
	"PhysicsStanceModifier",
	nullptr,
	0,
	sizeof(FPhysicsStanceModifier),
	alignof(FPhysicsStanceModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsStanceModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsStanceModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsStanceModifier()
{
	if (!Z_Registration_Info_UScriptStruct_FPhysicsStanceModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPhysicsStanceModifier.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsStanceModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPhysicsStanceModifier.InnerSingleton;
}
// ********** End ScriptStruct FPhysicsStanceModifier **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_MovementModifiers_PhysicsStanceModifier_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicsStanceModifier::StaticStruct, Z_Construct_UScriptStruct_FPhysicsStanceModifier_Statics::NewStructOps, TEXT("PhysicsStanceModifier"), &Z_Registration_Info_UScriptStruct_FPhysicsStanceModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsStanceModifier), 1899568842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_MovementModifiers_PhysicsStanceModifier_h__Script_Mover_1217203923(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_MovementModifiers_PhysicsStanceModifier_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_MovementModifiers_PhysicsStanceModifier_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
