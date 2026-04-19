// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Module/RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions() {}

// ********** Begin Cross Module References ********************************************************
ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoverTickPhase();
MOVERANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions();
UPackage* Z_Construct_UPackage__Script_MoverAnimNext();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions *****
static_assert(std::is_polymorphic<FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions>() == std::is_polymorphic<FRigVMTrait_ModuleEventDependency>(), "USTRUCT FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions cannot be polymorphic unless super FRigVMTrait_ModuleEventDependency is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions;
class UScriptStruct* FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions, (UObject*)Z_Construct_UPackage__Script_MoverAnimNext(), TEXT("RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions"));
	}
	return Z_Registration_Info_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A dependency on one of the tick functions that make up a MoverComponent's update flow. This uses \n * the first-found MoverComponent on the current actor.\n * TODO: add support beyond standalone (non-networked) Mover backends\n */" },
		{ "DisplayName", "Mover Component Tick Functions" },
		{ "ModuleRelativePath", "Private/Module/RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions.h" },
		{ "ShowTooltip", "TRUE" },
		{ "ToolTip", "A dependency on one of the tick functions that make up a MoverComponent's update flow. This uses\nthe first-found MoverComponent on the current actor.\nTODO: add support beyond standalone (non-networked) Mover backends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependentMoverTickPhase_MetaData[] = {
		{ "Category", "Dependency" },
		{ "Comment", "// The Mover tick phase that this dependency relates to\n" },
		{ "ModuleRelativePath", "Private/Module/RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions.h" },
		{ "ToolTip", "The Mover tick phase that this dependency relates to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DependentMoverTickPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DependentMoverTickPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::NewProp_DependentMoverTickPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::NewProp_DependentMoverTickPhase = { "DependentMoverTickPhase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions, DependentMoverTickPhase), Z_Construct_UEnum_Mover_EMoverTickPhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependentMoverTickPhase_MetaData), NewProp_DependentMoverTickPhase_MetaData) }; // 1977002097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::NewProp_DependentMoverTickPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::NewProp_DependentMoverTickPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverAnimNext,
	Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency,
	&NewStructOps,
	"RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions",
	Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::PropPointers),
	sizeof(FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions),
	alignof(FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions()
{
	if (!Z_Registration_Info_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions.InnerSingleton, Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions.InnerSingleton;
}
// ********** End ScriptStruct FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions *******

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Module_RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_h__Script_MoverAnimNext_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions::StaticStruct, Z_Construct_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_Statics::NewStructOps, TEXT("RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions"), &Z_Registration_Info_UScriptStruct_FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMTrait_ModuleEventDependency_MoverComponentTickFunctions), 2164025367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Module_RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_h__Script_MoverAnimNext_3440537079(TEXT("/Script/MoverAnimNext"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Module_RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_h__Script_MoverAnimNext_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Module_RigVMTrait_ModuleEventDependency_MoverComponentTickFunctions_h__Script_MoverAnimNext_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
