// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverCVDDataWrappers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverCVDDataWrappers() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDWrapperDataBase();
MOVERCVDDATA_API UScriptStruct* Z_Construct_UScriptStruct_FMoverCVDSimDataContainer();
MOVERCVDDATA_API UScriptStruct* Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper();
UPackage* Z_Construct_UPackage__Script_MoverCVDData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMoverCVDSimDataWrapper *******************************************
static_assert(std::is_polymorphic<FMoverCVDSimDataWrapper>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FMoverCVDSimDataWrapper cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverCVDSimDataWrapper;
class UScriptStruct* FMoverCVDSimDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverCVDSimDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverCVDSimDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper, (UObject*)Z_Construct_UPackage__Script_MoverCVDData(), TEXT("MoverCVDSimDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverCVDSimDataWrapper.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Mover Sim Data" },
		{ "ModuleRelativePath", "Public/MoverCVDDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverID_MetaData[] = {
		{ "Category", "Mover Info" },
		{ "ModuleRelativePath", "Public/MoverCVDDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleID_MetaData[] = {
		{ "Category", "Mover Info" },
		{ "ModuleRelativePath", "Public/MoverCVDDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SolverID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverCVDSimDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::NewProp_SolverID = { "SolverID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverCVDSimDataWrapper, SolverID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverID_MetaData), NewProp_SolverID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::NewProp_ParticleID = { "ParticleID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverCVDSimDataWrapper, ParticleID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleID_MetaData), NewProp_ParticleID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::NewProp_SolverID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::NewProp_ParticleID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverCVDData,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"MoverCVDSimDataWrapper",
	Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::PropPointers),
	sizeof(FMoverCVDSimDataWrapper),
	alignof(FMoverCVDSimDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverCVDSimDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverCVDSimDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverCVDSimDataWrapper.InnerSingleton;
}
// ********** End ScriptStruct FMoverCVDSimDataWrapper *********************************************

// ********** Begin ScriptStruct FMoverCVDSimDataContainer *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverCVDSimDataContainer;
class UScriptStruct* FMoverCVDSimDataContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverCVDSimDataContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverCVDSimDataContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverCVDSimDataContainer, (UObject*)Z_Construct_UPackage__Script_MoverCVDData(), TEXT("MoverCVDSimDataContainer"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverCVDSimDataContainer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverCVDSimDataContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverCVDDataWrappers.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverCVDSimDataContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverCVDSimDataContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverCVDData,
	nullptr,
	&NewStructOps,
	"MoverCVDSimDataContainer",
	nullptr,
	0,
	sizeof(FMoverCVDSimDataContainer),
	alignof(FMoverCVDSimDataContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverCVDSimDataContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverCVDSimDataContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverCVDSimDataContainer()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverCVDSimDataContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverCVDSimDataContainer.InnerSingleton, Z_Construct_UScriptStruct_FMoverCVDSimDataContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverCVDSimDataContainer.InnerSingleton;
}
// ********** End ScriptStruct FMoverCVDSimDataContainer *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDData_Public_MoverCVDDataWrappers_h__Script_MoverCVDData_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMoverCVDSimDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FMoverCVDSimDataWrapper_Statics::NewStructOps, TEXT("MoverCVDSimDataWrapper"), &Z_Registration_Info_UScriptStruct_FMoverCVDSimDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverCVDSimDataWrapper), 2053790984U) },
		{ FMoverCVDSimDataContainer::StaticStruct, Z_Construct_UScriptStruct_FMoverCVDSimDataContainer_Statics::NewStructOps, TEXT("MoverCVDSimDataContainer"), &Z_Registration_Info_UScriptStruct_FMoverCVDSimDataContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverCVDSimDataContainer), 2539738012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDData_Public_MoverCVDDataWrappers_h__Script_MoverCVDData_1498305567(TEXT("/Script/MoverCVDData"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDData_Public_MoverCVDDataWrappers_h__Script_MoverCVDData_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDData_Public_MoverCVDDataWrappers_h__Script_MoverCVDData_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
