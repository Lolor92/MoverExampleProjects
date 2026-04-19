// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Backends/MoverStandaloneLiaison.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverStandaloneLiaison() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
MOVER_API UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverStandaloneLiaisonComponent();
MOVER_API UClass* Z_Construct_UClass_UMoverStandaloneLiaisonComponent_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoverTickDependencyOrder();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoverTickPhase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMoverStandaloneProduceInputTickFunction **************************
static_assert(std::is_polymorphic<FMoverStandaloneProduceInputTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FMoverStandaloneProduceInputTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverStandaloneProduceInputTickFunction;
class UScriptStruct* FMoverStandaloneProduceInputTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverStandaloneProduceInputTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverStandaloneProduceInputTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverStandaloneProduceInputTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverStandaloneProduceInputTickFunction.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Tick task for producing input before the next movement simulation step\n" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Tick task for producing input before the next movement simulation step" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverStandaloneProduceInputTickFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FTickFunction,
	&NewStructOps,
	"MoverStandaloneProduceInputTickFunction",
	nullptr,
	0,
	sizeof(FMoverStandaloneProduceInputTickFunction),
	alignof(FMoverStandaloneProduceInputTickFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverStandaloneProduceInputTickFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverStandaloneProduceInputTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverStandaloneProduceInputTickFunction.InnerSingleton;
}
// ********** End ScriptStruct FMoverStandaloneProduceInputTickFunction ****************************

// ********** Begin ScriptStruct FMoverStandaloneSimulateMovementTickFunction **********************
static_assert(std::is_polymorphic<FMoverStandaloneSimulateMovementTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FMoverStandaloneSimulateMovementTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction;
class UScriptStruct* FMoverStandaloneSimulateMovementTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverStandaloneSimulateMovementTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Tick task for advancing the movement simulation step, after input has been produced\n" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Tick task for advancing the movement simulation step, after input has been produced" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverStandaloneSimulateMovementTickFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FTickFunction,
	&NewStructOps,
	"MoverStandaloneSimulateMovementTickFunction",
	nullptr,
	0,
	sizeof(FMoverStandaloneSimulateMovementTickFunction),
	alignof(FMoverStandaloneSimulateMovementTickFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction.InnerSingleton;
}
// ********** End ScriptStruct FMoverStandaloneSimulateMovementTickFunction ************************

// ********** Begin ScriptStruct FMoverStandaloneApplyStateTickFunction ****************************
static_assert(std::is_polymorphic<FMoverStandaloneApplyStateTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FMoverStandaloneApplyStateTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverStandaloneApplyStateTickFunction;
class UScriptStruct* FMoverStandaloneApplyStateTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverStandaloneApplyStateTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverStandaloneApplyStateTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverStandaloneApplyStateTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverStandaloneApplyStateTickFunction.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Tick task for applying the new simulation state to the actor/components, after movement has been simulated\n" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Tick task for applying the new simulation state to the actor/components, after movement has been simulated" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverStandaloneApplyStateTickFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FTickFunction,
	&NewStructOps,
	"MoverStandaloneApplyStateTickFunction",
	nullptr,
	0,
	sizeof(FMoverStandaloneApplyStateTickFunction),
	alignof(FMoverStandaloneApplyStateTickFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverStandaloneApplyStateTickFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverStandaloneApplyStateTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverStandaloneApplyStateTickFunction.InnerSingleton;
}
// ********** End ScriptStruct FMoverStandaloneApplyStateTickFunction ******************************

// ********** Begin Class UMoverStandaloneLiaisonComponent Function AddTickDependency **************
struct Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics
{
	struct MoverStandaloneLiaisonComponent_eventAddTickDependency_Parms
	{
		UActorComponent* OtherComponent;
		EMoverTickDependencyOrder TickOrder;
		EMoverTickPhase TickPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ticking" },
		{ "Comment", "/**\n\x09 * Adds a tick dependency between another component and one of mover's tick functions.\n\x09 * @param OtherComponent\x09\x09The component to add a dependency with.\n\x09 * @param TickOrder\x09\x09\x09\x09What order OtherComponent's should have relative to TickPhase i.e. OtherComponent Before SimulateMovement.\n\x09 * @param TickPhase\x09\x09\x09\x09The mover tick phase we want to a dependency with.\n\x09 */" },
		{ "Keywords", "Tick Dependency" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Adds a tick dependency between another component and one of mover's tick functions.\n@param OtherComponent                The component to add a dependency with.\n@param TickOrder                             What order OtherComponent's should have relative to TickPhase i.e. OtherComponent Before SimulateMovement.\n@param TickPhase                             The mover tick phase we want to a dependency with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TickOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TickOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TickPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TickPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverStandaloneLiaisonComponent_eventAddTickDependency_Parms, OtherComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_TickOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_TickOrder = { "TickOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverStandaloneLiaisonComponent_eventAddTickDependency_Parms, TickOrder), Z_Construct_UEnum_Mover_EMoverTickDependencyOrder, METADATA_PARAMS(0, nullptr) }; // 1164630601
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_TickPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_TickPhase = { "TickPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverStandaloneLiaisonComponent_eventAddTickDependency_Parms, TickPhase), Z_Construct_UEnum_Mover_EMoverTickPhase, METADATA_PARAMS(0, nullptr) }; // 1977002097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_OtherComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_TickOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_TickOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_TickPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::NewProp_TickPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverStandaloneLiaisonComponent, nullptr, "AddTickDependency", Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::MoverStandaloneLiaisonComponent_eventAddTickDependency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::MoverStandaloneLiaisonComponent_eventAddTickDependency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverStandaloneLiaisonComponent::execAddTickDependency)
{
	P_GET_OBJECT(UActorComponent,Z_Param_OtherComponent);
	P_GET_ENUM(EMoverTickDependencyOrder,Z_Param_TickOrder);
	P_GET_ENUM(EMoverTickPhase,Z_Param_TickPhase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTickDependency(Z_Param_OtherComponent,EMoverTickDependencyOrder(Z_Param_TickOrder),EMoverTickPhase(Z_Param_TickPhase));
	P_NATIVE_END;
}
// ********** End Class UMoverStandaloneLiaisonComponent Function AddTickDependency ****************

// ********** Begin Class UMoverStandaloneLiaisonComponent Function GetEnableProduceInput **********
struct Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics
{
	struct MoverStandaloneLiaisonComponent_eventGetEnableProduceInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ticking" },
		{ "Comment", "/** Whether this instance will have its produce-input tick called. */" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Whether this instance will have its produce-input tick called." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverStandaloneLiaisonComponent_eventGetEnableProduceInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverStandaloneLiaisonComponent_eventGetEnableProduceInput_Parms), &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverStandaloneLiaisonComponent, nullptr, "GetEnableProduceInput", Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::MoverStandaloneLiaisonComponent_eventGetEnableProduceInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::MoverStandaloneLiaisonComponent_eventGetEnableProduceInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverStandaloneLiaisonComponent::execGetEnableProduceInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnableProduceInput();
	P_NATIVE_END;
}
// ********** End Class UMoverStandaloneLiaisonComponent Function GetEnableProduceInput ************

// ********** Begin Class UMoverStandaloneLiaisonComponent Function GetUseAsyncMovementSimulationTick 
struct Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics
{
	struct MoverStandaloneLiaisonComponent_eventGetUseAsyncMovementSimulationTick_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ticking" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverStandaloneLiaisonComponent_eventGetUseAsyncMovementSimulationTick_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverStandaloneLiaisonComponent_eventGetUseAsyncMovementSimulationTick_Parms), &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverStandaloneLiaisonComponent, nullptr, "GetUseAsyncMovementSimulationTick", Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::MoverStandaloneLiaisonComponent_eventGetUseAsyncMovementSimulationTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::MoverStandaloneLiaisonComponent_eventGetUseAsyncMovementSimulationTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverStandaloneLiaisonComponent::execGetUseAsyncMovementSimulationTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUseAsyncMovementSimulationTick();
	P_NATIVE_END;
}
// ********** End Class UMoverStandaloneLiaisonComponent Function GetUseAsyncMovementSimulationTick 

// ********** Begin Class UMoverStandaloneLiaisonComponent Function GetUseAsyncProduceInput ********
struct Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics
{
	struct MoverStandaloneLiaisonComponent_eventGetUseAsyncProduceInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ticking" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoverStandaloneLiaisonComponent_eventGetUseAsyncProduceInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverStandaloneLiaisonComponent_eventGetUseAsyncProduceInput_Parms), &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverStandaloneLiaisonComponent, nullptr, "GetUseAsyncProduceInput", Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::MoverStandaloneLiaisonComponent_eventGetUseAsyncProduceInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::MoverStandaloneLiaisonComponent_eventGetUseAsyncProduceInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverStandaloneLiaisonComponent::execGetUseAsyncProduceInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUseAsyncProduceInput();
	P_NATIVE_END;
}
// ********** End Class UMoverStandaloneLiaisonComponent Function GetUseAsyncProduceInput **********

// ********** Begin Class UMoverStandaloneLiaisonComponent Function OnControllerChanged ************
struct Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics
{
	struct MoverStandaloneLiaisonComponent_eventOnControllerChanged_Parms
	{
		APawn* Pawn;
		AController* OldController;
		AController* NewController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called when controller changes, used to manage ticking dependencies\n" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Called when controller changes, used to manage ticking dependencies" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverStandaloneLiaisonComponent_eventOnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverStandaloneLiaisonComponent_eventOnControllerChanged_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverStandaloneLiaisonComponent_eventOnControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::NewProp_OldController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::NewProp_NewController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverStandaloneLiaisonComponent, nullptr, "OnControllerChanged", Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::MoverStandaloneLiaisonComponent_eventOnControllerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::MoverStandaloneLiaisonComponent_eventOnControllerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverStandaloneLiaisonComponent::execOnControllerChanged)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(AController,Z_Param_OldController);
	P_GET_OBJECT(AController,Z_Param_NewController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnControllerChanged(Z_Param_Pawn,Z_Param_OldController,Z_Param_NewController);
	P_NATIVE_END;
}
// ********** End Class UMoverStandaloneLiaisonComponent Function OnControllerChanged **************

// ********** Begin Class UMoverStandaloneLiaisonComponent Function SetEnableProduceInput **********
struct Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics
{
	struct MoverStandaloneLiaisonComponent_eventSetEnableProduceInput_Parms
	{
		bool bEnableInputProduction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ticking" },
		{ "Comment", "/** Sets whether this instance's produce-input tick will run at all. It may be useful to disable on actors that don't rely on Mover input to move.  */" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Sets whether this instance's produce-input tick will run at all. It may be useful to disable on actors that don't rely on Mover input to move." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableInputProduction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInputProduction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::NewProp_bEnableInputProduction_SetBit(void* Obj)
{
	((MoverStandaloneLiaisonComponent_eventSetEnableProduceInput_Parms*)Obj)->bEnableInputProduction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::NewProp_bEnableInputProduction = { "bEnableInputProduction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverStandaloneLiaisonComponent_eventSetEnableProduceInput_Parms), &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::NewProp_bEnableInputProduction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::NewProp_bEnableInputProduction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverStandaloneLiaisonComponent, nullptr, "SetEnableProduceInput", Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::MoverStandaloneLiaisonComponent_eventSetEnableProduceInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::MoverStandaloneLiaisonComponent_eventSetEnableProduceInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverStandaloneLiaisonComponent::execSetEnableProduceInput)
{
	P_GET_UBOOL(Z_Param_bEnableInputProduction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableProduceInput(Z_Param_bEnableInputProduction);
	P_NATIVE_END;
}
// ********** End Class UMoverStandaloneLiaisonComponent Function SetEnableProduceInput ************

// ********** Begin Class UMoverStandaloneLiaisonComponent Function SetUseAsyncMovementSimulationTick 
struct Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics
{
	struct MoverStandaloneLiaisonComponent_eventSetUseAsyncMovementSimulationTick_Parms
	{
		bool bUseAsyncMovementSim;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ticking" },
		{ "Comment", "/** Sets whether this instance's movement simulation tick can run on worker threads or not. See @bUseAsyncMovementSimulationTick */" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Sets whether this instance's movement simulation tick can run on worker threads or not. See @bUseAsyncMovementSimulationTick" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseAsyncMovementSim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncMovementSim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::NewProp_bUseAsyncMovementSim_SetBit(void* Obj)
{
	((MoverStandaloneLiaisonComponent_eventSetUseAsyncMovementSimulationTick_Parms*)Obj)->bUseAsyncMovementSim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::NewProp_bUseAsyncMovementSim = { "bUseAsyncMovementSim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverStandaloneLiaisonComponent_eventSetUseAsyncMovementSimulationTick_Parms), &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::NewProp_bUseAsyncMovementSim_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::NewProp_bUseAsyncMovementSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverStandaloneLiaisonComponent, nullptr, "SetUseAsyncMovementSimulationTick", Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::MoverStandaloneLiaisonComponent_eventSetUseAsyncMovementSimulationTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::MoverStandaloneLiaisonComponent_eventSetUseAsyncMovementSimulationTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverStandaloneLiaisonComponent::execSetUseAsyncMovementSimulationTick)
{
	P_GET_UBOOL(Z_Param_bUseAsyncMovementSim);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseAsyncMovementSimulationTick(Z_Param_bUseAsyncMovementSim);
	P_NATIVE_END;
}
// ********** End Class UMoverStandaloneLiaisonComponent Function SetUseAsyncMovementSimulationTick 

// ********** Begin Class UMoverStandaloneLiaisonComponent Function SetUseAsyncProduceInput ********
struct Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics
{
	struct MoverStandaloneLiaisonComponent_eventSetUseAsyncProduceInput_Parms
	{
		bool bUseAsyncInputProduction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ticking" },
		{ "Comment", "/** Sets whether this instance's produce input can run on worker threads or not. See @bUseAsyncProduceInput and @SetEnableProduceInput */" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Sets whether this instance's produce input can run on worker threads or not. See @bUseAsyncProduceInput and @SetEnableProduceInput" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseAsyncInputProduction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncInputProduction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::NewProp_bUseAsyncInputProduction_SetBit(void* Obj)
{
	((MoverStandaloneLiaisonComponent_eventSetUseAsyncProduceInput_Parms*)Obj)->bUseAsyncInputProduction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::NewProp_bUseAsyncInputProduction = { "bUseAsyncInputProduction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoverStandaloneLiaisonComponent_eventSetUseAsyncProduceInput_Parms), &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::NewProp_bUseAsyncInputProduction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::NewProp_bUseAsyncInputProduction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverStandaloneLiaisonComponent, nullptr, "SetUseAsyncProduceInput", Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::MoverStandaloneLiaisonComponent_eventSetUseAsyncProduceInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::MoverStandaloneLiaisonComponent_eventSetUseAsyncProduceInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverStandaloneLiaisonComponent::execSetUseAsyncProduceInput)
{
	P_GET_UBOOL(Z_Param_bUseAsyncInputProduction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseAsyncProduceInput(Z_Param_bUseAsyncInputProduction);
	P_NATIVE_END;
}
// ********** End Class UMoverStandaloneLiaisonComponent Function SetUseAsyncProduceInput **********

// ********** Begin Class UMoverStandaloneLiaisonComponent *****************************************
void UMoverStandaloneLiaisonComponent::StaticRegisterNativesUMoverStandaloneLiaisonComponent()
{
	UClass* Class = UMoverStandaloneLiaisonComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTickDependency", &UMoverStandaloneLiaisonComponent::execAddTickDependency },
		{ "GetEnableProduceInput", &UMoverStandaloneLiaisonComponent::execGetEnableProduceInput },
		{ "GetUseAsyncMovementSimulationTick", &UMoverStandaloneLiaisonComponent::execGetUseAsyncMovementSimulationTick },
		{ "GetUseAsyncProduceInput", &UMoverStandaloneLiaisonComponent::execGetUseAsyncProduceInput },
		{ "OnControllerChanged", &UMoverStandaloneLiaisonComponent::execOnControllerChanged },
		{ "SetEnableProduceInput", &UMoverStandaloneLiaisonComponent::execSetEnableProduceInput },
		{ "SetUseAsyncMovementSimulationTick", &UMoverStandaloneLiaisonComponent::execSetUseAsyncMovementSimulationTick },
		{ "SetUseAsyncProduceInput", &UMoverStandaloneLiaisonComponent::execSetUseAsyncProduceInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverStandaloneLiaisonComponent;
UClass* UMoverStandaloneLiaisonComponent::GetPrivateStaticClass()
{
	using TClass = UMoverStandaloneLiaisonComponent;
	if (!Z_Registration_Info_UClass_UMoverStandaloneLiaisonComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverStandaloneLiaisonComponent"),
			Z_Registration_Info_UClass_UMoverStandaloneLiaisonComponent.InnerSingleton,
			StaticRegisterNativesUMoverStandaloneLiaisonComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMoverStandaloneLiaisonComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverStandaloneLiaisonComponent_NoRegister()
{
	return UMoverStandaloneLiaisonComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MoverStandaloneLiaison: this component acts as a backend driver for an actor's Mover component, for use in Standalone (non-networked) games.\n * This class is set on a Mover component as the \"back end\".\n */" },
		{ "IncludePath", "Backends/MoverStandaloneLiaison.h" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "MoverStandaloneLiaison: this component acts as a backend driver for an actor's Mover component, for use in Standalone (non-networked) games.\nThis class is set on a Mover component as the \"back end\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncProduceInput_MetaData[] = {
		{ "Category", "Async Movement" },
		{ "Comment", "/**\n\x09 * Sets whether produce input can run on worker threads or not, also gated by global option.\n\x09 * Changes at runtime will take affect next frame. Has no effect on simulation ticking or applying results.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Sets whether produce input can run on worker threads or not, also gated by global option.\nChanges at runtime will take affect next frame. Has no effect on simulation ticking or applying results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncMovementSimulationTick_MetaData[] = {
		{ "Category", "Async Movement" },
		{ "Comment", "/**\n\x09 * Sets whether the movement simulation tick can run on worker threads or not, also gated by global option.\n\x09 * Changes at runtime will take affect next frame. Has no effect on input production or applying results.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Backends/MoverStandaloneLiaison.h" },
		{ "ToolTip", "Sets whether the movement simulation tick can run on worker threads or not, also gated by global option.\nChanges at runtime will take affect next frame. Has no effect on input production or applying results." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseAsyncProduceInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncProduceInput;
	static void NewProp_bUseAsyncMovementSimulationTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncMovementSimulationTick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_AddTickDependency, "AddTickDependency" }, // 3067291752
		{ &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetEnableProduceInput, "GetEnableProduceInput" }, // 3755088860
		{ &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncMovementSimulationTick, "GetUseAsyncMovementSimulationTick" }, // 1322081616
		{ &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_GetUseAsyncProduceInput, "GetUseAsyncProduceInput" }, // 196360935
		{ &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_OnControllerChanged, "OnControllerChanged" }, // 1070122631
		{ &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetEnableProduceInput, "SetEnableProduceInput" }, // 943816467
		{ &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncMovementSimulationTick, "SetUseAsyncMovementSimulationTick" }, // 67412439
		{ &Z_Construct_UFunction_UMoverStandaloneLiaisonComponent_SetUseAsyncProduceInput, "SetUseAsyncProduceInput" }, // 3091199718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverStandaloneLiaisonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::NewProp_bUseAsyncProduceInput_SetBit(void* Obj)
{
	((UMoverStandaloneLiaisonComponent*)Obj)->bUseAsyncProduceInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::NewProp_bUseAsyncProduceInput = { "bUseAsyncProduceInput", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverStandaloneLiaisonComponent), &Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::NewProp_bUseAsyncProduceInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncProduceInput_MetaData), NewProp_bUseAsyncProduceInput_MetaData) };
void Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::NewProp_bUseAsyncMovementSimulationTick_SetBit(void* Obj)
{
	((UMoverStandaloneLiaisonComponent*)Obj)->bUseAsyncMovementSimulationTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::NewProp_bUseAsyncMovementSimulationTick = { "bUseAsyncMovementSimulationTick", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverStandaloneLiaisonComponent), &Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::NewProp_bUseAsyncMovementSimulationTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsyncMovementSimulationTick_MetaData), NewProp_bUseAsyncMovementSimulationTick_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::NewProp_bUseAsyncProduceInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::NewProp_bUseAsyncMovementSimulationTick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister, (int32)VTABLE_OFFSET(UMoverStandaloneLiaisonComponent, IMoverBackendLiaisonInterface), false },  // 2819606442
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::ClassParams = {
	&UMoverStandaloneLiaisonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverStandaloneLiaisonComponent()
{
	if (!Z_Registration_Info_UClass_UMoverStandaloneLiaisonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverStandaloneLiaisonComponent.OuterSingleton, Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverStandaloneLiaisonComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverStandaloneLiaisonComponent);
UMoverStandaloneLiaisonComponent::~UMoverStandaloneLiaisonComponent() {}
// ********** End Class UMoverStandaloneLiaisonComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMoverStandaloneProduceInputTickFunction::StaticStruct, Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction_Statics::NewStructOps, TEXT("MoverStandaloneProduceInputTickFunction"), &Z_Registration_Info_UScriptStruct_FMoverStandaloneProduceInputTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverStandaloneProduceInputTickFunction), 1803649755U) },
		{ FMoverStandaloneSimulateMovementTickFunction::StaticStruct, Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction_Statics::NewStructOps, TEXT("MoverStandaloneSimulateMovementTickFunction"), &Z_Registration_Info_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverStandaloneSimulateMovementTickFunction), 490350413U) },
		{ FMoverStandaloneApplyStateTickFunction::StaticStruct, Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction_Statics::NewStructOps, TEXT("MoverStandaloneApplyStateTickFunction"), &Z_Registration_Info_UScriptStruct_FMoverStandaloneApplyStateTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverStandaloneApplyStateTickFunction), 3332935689U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverStandaloneLiaisonComponent, UMoverStandaloneLiaisonComponent::StaticClass, TEXT("UMoverStandaloneLiaisonComponent"), &Z_Registration_Info_UClass_UMoverStandaloneLiaisonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverStandaloneLiaisonComponent), 1729611497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h__Script_Mover_4118260010(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
