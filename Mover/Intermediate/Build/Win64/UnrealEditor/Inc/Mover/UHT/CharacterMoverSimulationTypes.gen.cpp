// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/CharacterMoverSimulationTypes.h"
#include "MoveLibrary/FloorQueryUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterMoverSimulationTypes() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FFloorCheckResult();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FFloorResultData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLandedEventData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverSimulationEventData();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLandedEventData **************************************************
static_assert(std::is_polymorphic<FLandedEventData>() == std::is_polymorphic<FMoverSimulationEventData>(), "USTRUCT FLandedEventData cannot be polymorphic unless super FMoverSimulationEventData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandedEventData;
class UScriptStruct* FLandedEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLandedEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLandedEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandedEventData, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LandedEventData"));
	}
	return Z_Registration_Info_UScriptStruct_FLandedEventData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLandedEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandedEventData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandedEventData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverSimulationEventData,
	&NewStructOps,
	"LandedEventData",
	nullptr,
	0,
	sizeof(FLandedEventData),
	alignof(FLandedEventData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandedEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandedEventData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandedEventData()
{
	if (!Z_Registration_Info_UScriptStruct_FLandedEventData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandedEventData.InnerSingleton, Z_Construct_UScriptStruct_FLandedEventData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLandedEventData.InnerSingleton;
}
// ********** End ScriptStruct FLandedEventData ****************************************************

// ********** Begin ScriptStruct FFloorResultData **************************************************
static_assert(std::is_polymorphic<FFloorResultData>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FFloorResultData cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFloorResultData;
class UScriptStruct* FFloorResultData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFloorResultData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFloorResultData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloorResultData, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("FloorResultData"));
	}
	return Z_Registration_Info_UScriptStruct_FFloorResultData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFloorResultData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverSimulationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorResult_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloorResultData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloorResultData_Statics::NewProp_FloorResult = { "FloorResult", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloorResultData, FloorResult), Z_Construct_UScriptStruct_FFloorCheckResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorResult_MetaData), NewProp_FloorResult_MetaData) }; // 375218055
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloorResultData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloorResultData_Statics::NewProp_FloorResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorResultData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloorResultData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"FloorResultData",
	Z_Construct_UScriptStruct_FFloorResultData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorResultData_Statics::PropPointers),
	sizeof(FFloorResultData),
	alignof(FFloorResultData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloorResultData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloorResultData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloorResultData()
{
	if (!Z_Registration_Info_UScriptStruct_FFloorResultData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFloorResultData.InnerSingleton, Z_Construct_UScriptStruct_FFloorResultData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFloorResultData.InnerSingleton;
}
// ********** End ScriptStruct FFloorResultData ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverSimulationTypes_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandedEventData::StaticStruct, Z_Construct_UScriptStruct_FLandedEventData_Statics::NewStructOps, TEXT("LandedEventData"), &Z_Registration_Info_UScriptStruct_FLandedEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandedEventData), 1024339529U) },
		{ FFloorResultData::StaticStruct, Z_Construct_UScriptStruct_FFloorResultData_Statics::NewStructOps, TEXT("FloorResultData"), &Z_Registration_Info_UScriptStruct_FFloorResultData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloorResultData), 120415975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverSimulationTypes_h__Script_Mover_2072720364(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverSimulationTypes_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverSimulationTypes_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
