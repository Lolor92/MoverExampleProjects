// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/RigUnit_GenerateMoverTrajectory.h"
#include "Animation/TrajectoryTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRigUnit_GenerateMoverTrajectory() {}

// ********** Begin Cross Module References ********************************************************
ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformTrajectory();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVERANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory();
UPackage* Z_Construct_UPackage__Script_MoverAnimNext();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRigUnit_GenerateMoverTrajectory **********************************
static_assert(std::is_polymorphic<FRigUnit_GenerateMoverTrajectory>() == std::is_polymorphic<FRigUnit_AnimNextBase>(), "USTRUCT FRigUnit_GenerateMoverTrajectory cannot be polymorphic unless super FRigUnit_AnimNextBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRigUnit_GenerateMoverTrajectory;
class UScriptStruct* FRigUnit_GenerateMoverTrajectory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_GenerateMoverTrajectory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRigUnit_GenerateMoverTrajectory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory, (UObject*)Z_Construct_UPackage__Script_MoverAnimNext(), TEXT("RigUnit_GenerateMoverTrajectory"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GenerateMoverTrajectory_Execute;
		Arguments_FRigUnit_GenerateMoverTrajectory_Execute.Emplace(TEXT("MoverComponent"), TEXT("TObjectPtr<UMoverComponent>"));
		Arguments_FRigUnit_GenerateMoverTrajectory_Execute.Emplace(TEXT("DeltaTime"), TEXT("float"));
		Arguments_FRigUnit_GenerateMoverTrajectory_Execute.Emplace(TEXT("HistorySamplingInterval"), TEXT("float"));
		Arguments_FRigUnit_GenerateMoverTrajectory_Execute.Emplace(TEXT("NumHistorySamples"), TEXT("int32"));
		Arguments_FRigUnit_GenerateMoverTrajectory_Execute.Emplace(TEXT("PredictionSamplingInterval"), TEXT("float"));
		Arguments_FRigUnit_GenerateMoverTrajectory_Execute.Emplace(TEXT("NumPredictionSamples"), TEXT("int32"));
		Arguments_FRigUnit_GenerateMoverTrajectory_Execute.Emplace(TEXT("InOutTrajectory"), TEXT("FTransformTrajectory"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GenerateMoverTrajectory::Execute"), &FRigUnit_GenerateMoverTrajectory::RigVMExecute, Z_Registration_Info_UScriptStruct_FRigUnit_GenerateMoverTrajectory.OuterSingleton, Arguments_FRigUnit_GenerateMoverTrajectory_Execute);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_GenerateMoverTrajectory.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Mover" },
		{ "DisplayName", "Generate Trajectory from Mover" },
		{ "Keywords", "Mover, Trajectory" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_GenerateMoverTrajectory.h" },
		{ "NodeColor", "0, 1, 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverComponent_MetaData[] = {
		{ "Category", "Graph" },
		{ "EditInline", "true" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_GenerateMoverTrajectory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "Category", "Graph" },
		{ "Comment", "// This should be the most recent simulation time that was used to get us to our current state\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_GenerateMoverTrajectory.h" },
		{ "ToolTip", "This should be the most recent simulation time that was used to get us to our current state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HistorySamplingInterval_MetaData[] = {
		{ "Category", "Graph" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_GenerateMoverTrajectory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHistorySamples_MetaData[] = {
		{ "Category", "Graph" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_GenerateMoverTrajectory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionSamplingInterval_MetaData[] = {
		{ "Category", "Graph" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_GenerateMoverTrajectory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPredictionSamples_MetaData[] = {
		{ "Category", "Graph" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_GenerateMoverTrajectory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOutTrajectory_MetaData[] = {
		{ "Category", "Graph" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_GenerateMoverTrajectory.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoverComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HistorySamplingInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHistorySamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictionSamplingInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPredictionSamples;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOutTrajectory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GenerateMoverTrajectory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_MoverComponent = { "MoverComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GenerateMoverTrajectory, MoverComponent), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverComponent_MetaData), NewProp_MoverComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GenerateMoverTrajectory, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_HistorySamplingInterval = { "HistorySamplingInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GenerateMoverTrajectory, HistorySamplingInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HistorySamplingInterval_MetaData), NewProp_HistorySamplingInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_NumHistorySamples = { "NumHistorySamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GenerateMoverTrajectory, NumHistorySamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumHistorySamples_MetaData), NewProp_NumHistorySamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_PredictionSamplingInterval = { "PredictionSamplingInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GenerateMoverTrajectory, PredictionSamplingInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionSamplingInterval_MetaData), NewProp_PredictionSamplingInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_NumPredictionSamples = { "NumPredictionSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GenerateMoverTrajectory, NumPredictionSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPredictionSamples_MetaData), NewProp_NumPredictionSamples_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_InOutTrajectory = { "InOutTrajectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GenerateMoverTrajectory, InOutTrajectory), Z_Construct_UScriptStruct_FTransformTrajectory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOutTrajectory_MetaData), NewProp_InOutTrajectory_MetaData) }; // 28565949
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_MoverComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_HistorySamplingInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_NumHistorySamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_PredictionSamplingInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_NumPredictionSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewProp_InOutTrajectory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverAnimNext,
	Z_Construct_UScriptStruct_FRigUnit_AnimNextBase,
	&NewStructOps,
	"RigUnit_GenerateMoverTrajectory",
	Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::PropPointers),
	sizeof(FRigUnit_GenerateMoverTrajectory),
	alignof(FRigUnit_GenerateMoverTrajectory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_GenerateMoverTrajectory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRigUnit_GenerateMoverTrajectory.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_GenerateMoverTrajectory.InnerSingleton;
}
void FRigUnit_GenerateMoverTrajectory::Execute()
{
	FAnimNextExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GenerateMoverTrajectory::Execute(const FAnimNextExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		MoverComponent,
		DeltaTime,
		HistorySamplingInterval,
		NumHistorySamples,
		PredictionSamplingInterval,
		NumPredictionSamples,
		InOutTrajectory
	);
}
// ********** End ScriptStruct FRigUnit_GenerateMoverTrajectory ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_GenerateMoverTrajectory_h__Script_MoverAnimNext_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GenerateMoverTrajectory::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GenerateMoverTrajectory_Statics::NewStructOps, TEXT("RigUnit_GenerateMoverTrajectory"), &Z_Registration_Info_UScriptStruct_FRigUnit_GenerateMoverTrajectory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GenerateMoverTrajectory), 1569659136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_GenerateMoverTrajectory_h__Script_MoverAnimNext_1822434367(TEXT("/Script/MoverAnimNext"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_GenerateMoverTrajectory_h__Script_MoverAnimNext_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_GenerateMoverTrajectory_h__Script_MoverAnimNext_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
