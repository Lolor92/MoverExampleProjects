// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/MovementModifiers/StanceModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStanceModifier() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UEnum* Z_Construct_UEnum_Mover_EStanceMode();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementModifierBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FStanceModifier();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EStanceMode ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStanceMode;
static UEnum* EStanceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStanceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EStanceMode, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EStanceMode"));
	}
	return Z_Registration_Info_UEnum_EStanceMode.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EStanceMode>()
{
	return EStanceMode_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EStanceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouch.Comment", "// Actor goes into crouch\n" },
		{ "Crouch.Name", "EStanceMode::Crouch" },
		{ "Crouch.ToolTip", "Actor goes into crouch" },
		{ "Invalid.Comment", "// Invalid default stance\n" },
		{ "Invalid.Name", "EStanceMode::Invalid" },
		{ "Invalid.ToolTip", "Invalid default stance" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/MovementModifiers/StanceModifier.h" },
		{ "Prone.Comment", "// Actor goes into prone - not currently implemented\n" },
		{ "Prone.Name", "EStanceMode::Prone" },
		{ "Prone.ToolTip", "Actor goes into prone - not currently implemented" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStanceMode::Invalid", (int64)EStanceMode::Invalid },
		{ "EStanceMode::Crouch", (int64)EStanceMode::Crouch },
		{ "EStanceMode::Prone", (int64)EStanceMode::Prone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EStanceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EStanceMode",
	"EStanceMode",
	Z_Construct_UEnum_Mover_EStanceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EStanceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EStanceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EStanceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EStanceMode()
{
	if (!Z_Registration_Info_UEnum_EStanceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStanceMode.InnerSingleton, Z_Construct_UEnum_Mover_EStanceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStanceMode.InnerSingleton;
}
// ********** End Enum EStanceMode *****************************************************************

// ********** Begin ScriptStruct FStanceModifier ***************************************************
static_assert(std::is_polymorphic<FStanceModifier>() == std::is_polymorphic<FMovementModifierBase>(), "USTRUCT FStanceModifier cannot be polymorphic unless super FMovementModifierBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStanceModifier;
class UScriptStruct* FStanceModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStanceModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStanceModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStanceModifier, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("StanceModifier"));
	}
	return Z_Registration_Info_UScriptStruct_FStanceModifier.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStanceModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stances: Applies settings to the actor to make them go into different stances like crouch or prone(not implemented), affects actor maxacceleration and capsule height\n * Note: This modifier currently uses the CDO of the actor to reset values to \"standing\" values.\n *\x09\x09 This modifier also assumes the actor is using a capsule as it's updated component for now\n */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/MovementModifiers/StanceModifier.h" },
		{ "ToolTip", "Stances: Applies settings to the actor to make them go into different stances like crouch or prone(not implemented), affects actor maxacceleration and capsule height\nNote: This modifier currently uses the CDO of the actor to reset values to \"standing\" values.\n             This modifier also assumes the actor is using a capsule as it's updated component for now" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStanceModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStanceModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMovementModifierBase,
	&NewStructOps,
	"StanceModifier",
	nullptr,
	0,
	sizeof(FStanceModifier),
	alignof(FStanceModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStanceModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStanceModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStanceModifier()
{
	if (!Z_Registration_Info_UScriptStruct_FStanceModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStanceModifier.InnerSingleton, Z_Construct_UScriptStruct_FStanceModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStanceModifier.InnerSingleton;
}
// ********** End ScriptStruct FStanceModifier *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_MovementModifiers_StanceModifier_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStanceMode_StaticEnum, TEXT("EStanceMode"), &Z_Registration_Info_UEnum_EStanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 511421531U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStanceModifier::StaticStruct, Z_Construct_UScriptStruct_FStanceModifier_Statics::NewStructOps, TEXT("StanceModifier"), &Z_Registration_Info_UScriptStruct_FStanceModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStanceModifier), 3316877274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_MovementModifiers_StanceModifier_h__Script_Mover_3795459157(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_MovementModifiers_StanceModifier_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_MovementModifiers_StanceModifier_h__Script_Mover_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_MovementModifiers_StanceModifier_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_MovementModifiers_StanceModifier_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
