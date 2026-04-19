// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/RigUnit_TrajectoryAnalysis.h"
#include "Animation/TrajectoryTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRigUnit_TrajectoryAnalysis() {}

// ********** Begin Cross Module References ********************************************************
ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformTrajectory();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformTrajectorySample();
MOVERANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity();
MOVERANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime();
MOVERANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity();
UPackage* Z_Construct_UPackage__Script_MoverAnimNext();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRigUnit_GetTrajectorySampleAtTime ********************************
static_assert(std::is_polymorphic<FRigUnit_GetTrajectorySampleAtTime>() == std::is_polymorphic<FRigUnit_AnimNextBase>(), "USTRUCT FRigUnit_GetTrajectorySampleAtTime cannot be polymorphic unless super FRigUnit_AnimNextBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime;
class UScriptStruct* FRigUnit_GetTrajectorySampleAtTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime, (UObject*)Z_Construct_UPackage__Script_MoverAnimNext(), TEXT("RigUnit_GetTrajectorySampleAtTime"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetTrajectorySampleAtTime_Execute;
		Arguments_FRigUnit_GetTrajectorySampleAtTime_Execute.Emplace(TEXT("OutTrajectorySample"), TEXT("FTransformTrajectorySample"));
		Arguments_FRigUnit_GetTrajectorySampleAtTime_Execute.Emplace(TEXT("InTrajectory"), TEXT("FTransformTrajectory"));
		Arguments_FRigUnit_GetTrajectorySampleAtTime_Execute.Emplace(TEXT("Time"), TEXT("float"));
		Arguments_FRigUnit_GetTrajectorySampleAtTime_Execute.Emplace(TEXT("bExtrapolate"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetTrajectorySampleAtTime::Execute"), &FRigUnit_GetTrajectorySampleAtTime::RigVMExecute, Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime.OuterSingleton, Arguments_FRigUnit_GetTrajectorySampleAtTime_Execute);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Trajectory" },
		{ "DisplayName", "Get Trajectory Sample At Time" },
		{ "Keywords", "Trajectory" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
		{ "NodeColor", "0, 1, 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutTrajectorySample_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTrajectory_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtrapolate_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTrajectorySample;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTrajectory;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_bExtrapolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtrapolate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetTrajectorySampleAtTime>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_OutTrajectorySample = { "OutTrajectorySample", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectorySampleAtTime, OutTrajectorySample), Z_Construct_UScriptStruct_FTransformTrajectorySample, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutTrajectorySample_MetaData), NewProp_OutTrajectorySample_MetaData) }; // 860077304
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_InTrajectory = { "InTrajectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectorySampleAtTime, InTrajectory), Z_Construct_UScriptStruct_FTransformTrajectory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTrajectory_MetaData), NewProp_InTrajectory_MetaData) }; // 28565949
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectorySampleAtTime, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_bExtrapolate_SetBit(void* Obj)
{
	((FRigUnit_GetTrajectorySampleAtTime*)Obj)->bExtrapolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_bExtrapolate = { "bExtrapolate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetTrajectorySampleAtTime), &Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_bExtrapolate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtrapolate_MetaData), NewProp_bExtrapolate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_OutTrajectorySample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_InTrajectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewProp_bExtrapolate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverAnimNext,
	Z_Construct_UScriptStruct_FRigUnit_AnimNextBase,
	&NewStructOps,
	"RigUnit_GetTrajectorySampleAtTime",
	Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::PropPointers),
	sizeof(FRigUnit_GetTrajectorySampleAtTime),
	alignof(FRigUnit_GetTrajectorySampleAtTime),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime.InnerSingleton;
}
void FRigUnit_GetTrajectorySampleAtTime::Execute()
{
	FAnimNextExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetTrajectorySampleAtTime::Execute(const FAnimNextExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		OutTrajectorySample,
		InTrajectory,
		Time,
		bExtrapolate
	);
}
// ********** End ScriptStruct FRigUnit_GetTrajectorySampleAtTime **********************************

// ********** Begin ScriptStruct FRigUnit_GetTrajectoryVelocity ************************************
static_assert(std::is_polymorphic<FRigUnit_GetTrajectoryVelocity>() == std::is_polymorphic<FRigUnit_AnimNextBase>(), "USTRUCT FRigUnit_GetTrajectoryVelocity cannot be polymorphic unless super FRigUnit_AnimNextBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryVelocity;
class UScriptStruct* FRigUnit_GetTrajectoryVelocity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryVelocity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryVelocity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity, (UObject*)Z_Construct_UPackage__Script_MoverAnimNext(), TEXT("RigUnit_GetTrajectoryVelocity"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetTrajectoryVelocity_Execute;
		Arguments_FRigUnit_GetTrajectoryVelocity_Execute.Emplace(TEXT("InTrajectory"), TEXT("FTransformTrajectory"));
		Arguments_FRigUnit_GetTrajectoryVelocity_Execute.Emplace(TEXT("OutVelocity"), TEXT("FVector"));
		Arguments_FRigUnit_GetTrajectoryVelocity_Execute.Emplace(TEXT("Time1"), TEXT("float"));
		Arguments_FRigUnit_GetTrajectoryVelocity_Execute.Emplace(TEXT("Time2"), TEXT("float"));
		Arguments_FRigUnit_GetTrajectoryVelocity_Execute.Emplace(TEXT("bExtrapolate"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetTrajectoryVelocity::Execute"), &FRigUnit_GetTrajectoryVelocity::RigVMExecute, Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryVelocity.OuterSingleton, Arguments_FRigUnit_GetTrajectoryVelocity_Execute);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryVelocity.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Trajectory" },
		{ "DisplayName", "Get Trajectory Velocity" },
		{ "Keywords", "Trajectory" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
		{ "NodeColor", "0, 1, 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTrajectory_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutVelocity_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time1_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time2_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtrapolate_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTrajectory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time2;
	static void NewProp_bExtrapolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtrapolate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetTrajectoryVelocity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_InTrajectory = { "InTrajectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectoryVelocity, InTrajectory), Z_Construct_UScriptStruct_FTransformTrajectory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTrajectory_MetaData), NewProp_InTrajectory_MetaData) }; // 28565949
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_OutVelocity = { "OutVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectoryVelocity, OutVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutVelocity_MetaData), NewProp_OutVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_Time1 = { "Time1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectoryVelocity, Time1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time1_MetaData), NewProp_Time1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_Time2 = { "Time2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectoryVelocity, Time2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time2_MetaData), NewProp_Time2_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_bExtrapolate_SetBit(void* Obj)
{
	((FRigUnit_GetTrajectoryVelocity*)Obj)->bExtrapolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_bExtrapolate = { "bExtrapolate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetTrajectoryVelocity), &Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_bExtrapolate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtrapolate_MetaData), NewProp_bExtrapolate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_InTrajectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_OutVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_Time1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_Time2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewProp_bExtrapolate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverAnimNext,
	Z_Construct_UScriptStruct_FRigUnit_AnimNextBase,
	&NewStructOps,
	"RigUnit_GetTrajectoryVelocity",
	Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::PropPointers),
	sizeof(FRigUnit_GetTrajectoryVelocity),
	alignof(FRigUnit_GetTrajectoryVelocity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryVelocity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryVelocity.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryVelocity.InnerSingleton;
}
void FRigUnit_GetTrajectoryVelocity::Execute()
{
	FAnimNextExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetTrajectoryVelocity::Execute(const FAnimNextExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		InTrajectory,
		OutVelocity,
		Time1,
		Time2,
		bExtrapolate
	);
}
// ********** End ScriptStruct FRigUnit_GetTrajectoryVelocity **************************************

// ********** Begin ScriptStruct FRigUnit_GetTrajectoryAngularVelocity *****************************
static_assert(std::is_polymorphic<FRigUnit_GetTrajectoryAngularVelocity>() == std::is_polymorphic<FRigUnit_AnimNextBase>(), "USTRUCT FRigUnit_GetTrajectoryAngularVelocity cannot be polymorphic unless super FRigUnit_AnimNextBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity;
class UScriptStruct* FRigUnit_GetTrajectoryAngularVelocity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity, (UObject*)Z_Construct_UPackage__Script_MoverAnimNext(), TEXT("RigUnit_GetTrajectoryAngularVelocity"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetTrajectoryAngularVelocity_Execute;
		Arguments_FRigUnit_GetTrajectoryAngularVelocity_Execute.Emplace(TEXT("InTrajectory"), TEXT("FTransformTrajectory"));
		Arguments_FRigUnit_GetTrajectoryAngularVelocity_Execute.Emplace(TEXT("OutAngularVelocity"), TEXT("FVector"));
		Arguments_FRigUnit_GetTrajectoryAngularVelocity_Execute.Emplace(TEXT("Time1"), TEXT("float"));
		Arguments_FRigUnit_GetTrajectoryAngularVelocity_Execute.Emplace(TEXT("Time2"), TEXT("float"));
		Arguments_FRigUnit_GetTrajectoryAngularVelocity_Execute.Emplace(TEXT("bExtrapolate"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetTrajectoryAngularVelocity::Execute"), &FRigUnit_GetTrajectoryAngularVelocity::RigVMExecute, Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity.OuterSingleton, Arguments_FRigUnit_GetTrajectoryAngularVelocity_Execute);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Trajectory" },
		{ "DisplayName", "Get Trajectory Angular Velocity" },
		{ "Keywords", "Trajectory" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
		{ "NodeColor", "0, 1, 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTrajectory_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutAngularVelocity_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time1_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time2_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtrapolate_MetaData[] = {
		{ "Category", "Trajectory" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Graph/RigUnit_TrajectoryAnalysis.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTrajectory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time2;
	static void NewProp_bExtrapolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtrapolate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetTrajectoryAngularVelocity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_InTrajectory = { "InTrajectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectoryAngularVelocity, InTrajectory), Z_Construct_UScriptStruct_FTransformTrajectory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTrajectory_MetaData), NewProp_InTrajectory_MetaData) }; // 28565949
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_OutAngularVelocity = { "OutAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectoryAngularVelocity, OutAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutAngularVelocity_MetaData), NewProp_OutAngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_Time1 = { "Time1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectoryAngularVelocity, Time1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time1_MetaData), NewProp_Time1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_Time2 = { "Time2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetTrajectoryAngularVelocity, Time2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time2_MetaData), NewProp_Time2_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_bExtrapolate_SetBit(void* Obj)
{
	((FRigUnit_GetTrajectoryAngularVelocity*)Obj)->bExtrapolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_bExtrapolate = { "bExtrapolate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetTrajectoryAngularVelocity), &Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_bExtrapolate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtrapolate_MetaData), NewProp_bExtrapolate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_InTrajectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_OutAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_Time1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_Time2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewProp_bExtrapolate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverAnimNext,
	Z_Construct_UScriptStruct_FRigUnit_AnimNextBase,
	&NewStructOps,
	"RigUnit_GetTrajectoryAngularVelocity",
	Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::PropPointers),
	sizeof(FRigUnit_GetTrajectoryAngularVelocity),
	alignof(FRigUnit_GetTrajectoryAngularVelocity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity.InnerSingleton;
}
void FRigUnit_GetTrajectoryAngularVelocity::Execute()
{
	FAnimNextExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetTrajectoryAngularVelocity::Execute(const FAnimNextExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		InTrajectory,
		OutAngularVelocity,
		Time1,
		Time2,
		bExtrapolate
	);
}
// ********** End ScriptStruct FRigUnit_GetTrajectoryAngularVelocity *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_TrajectoryAnalysis_h__Script_MoverAnimNext_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_GetTrajectorySampleAtTime::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime_Statics::NewStructOps, TEXT("RigUnit_GetTrajectorySampleAtTime"), &Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectorySampleAtTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetTrajectorySampleAtTime), 2191257957U) },
		{ FRigUnit_GetTrajectoryVelocity::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryVelocity_Statics::NewStructOps, TEXT("RigUnit_GetTrajectoryVelocity"), &Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetTrajectoryVelocity), 364113526U) },
		{ FRigUnit_GetTrajectoryAngularVelocity::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity_Statics::NewStructOps, TEXT("RigUnit_GetTrajectoryAngularVelocity"), &Z_Registration_Info_UScriptStruct_FRigUnit_GetTrajectoryAngularVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetTrajectoryAngularVelocity), 1903978345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_TrajectoryAnalysis_h__Script_MoverAnimNext_3633292043(TEXT("/Script/MoverAnimNext"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_TrajectoryAnalysis_h__Script_MoverAnimNext_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverAnimNext_Source_MoverAnimNext_Private_Graph_RigUnit_TrajectoryAnalysis_h__Script_MoverAnimNext_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
