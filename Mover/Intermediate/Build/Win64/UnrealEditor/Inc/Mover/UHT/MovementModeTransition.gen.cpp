// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementModeTransition.h"
#include "MoverSimulationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementModeTransition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementModeTransition();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementModeTransition_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UImmediateMovementModeTransition();
MOVER_API UClass* Z_Construct_UClass_UImmediateMovementModeTransition_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FSimulationTickParams();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FTransitionEvalResult();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTransitionEvalResult *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTransitionEvalResult;
class UScriptStruct* FTransitionEvalResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTransitionEvalResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTransitionEvalResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransitionEvalResult, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("TransitionEvalResult"));
	}
	return Z_Registration_Info_UScriptStruct_FTransitionEvalResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTransitionEvalResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Results from a movement mode transition evaluation\n */" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ToolTip", "Results from a movement mode transition evaluation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Mode name that should be transitioned to. NAME_None indicates no transition.\n" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ToolTip", "Mode name that should be transitioned to. NAME_None indicates no transition." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransitionEvalResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::NewProp_NextMode = { "NextMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransitionEvalResult, NextMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextMode_MetaData), NewProp_NextMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::NewProp_NextMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"TransitionEvalResult",
	Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::PropPointers),
	sizeof(FTransitionEvalResult),
	alignof(FTransitionEvalResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransitionEvalResult()
{
	if (!Z_Registration_Info_UScriptStruct_FTransitionEvalResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTransitionEvalResult.InnerSingleton, Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTransitionEvalResult.InnerSingleton;
}
// ********** End ScriptStruct FTransitionEvalResult ***********************************************

// ********** Begin Class UBaseMovementModeTransition Function Evaluate ****************************
struct BaseMovementModeTransition_eventEvaluate_Parms
{
	FSimulationTickParams Params;
	FTransitionEvalResult ReturnValue;
};
static FName NAME_UBaseMovementModeTransition_Evaluate = FName(TEXT("Evaluate"));
FTransitionEvalResult UBaseMovementModeTransition::Evaluate(FSimulationTickParams const& Params) const
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementModeTransition_Evaluate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseMovementModeTransition_eventEvaluate_Parms Parms;
		Parms.Params=Params;
		const_cast<UBaseMovementModeTransition*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UBaseMovementModeTransition*>(this)->Evaluate_Implementation(Params);
	}
}
struct Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MovementModeTransition" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementModeTransition_eventEvaluate_Parms, Params), Z_Construct_UScriptStruct_FSimulationTickParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 318922666
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementModeTransition_eventEvaluate_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransitionEvalResult, METADATA_PARAMS(0, nullptr) }; // 1110771697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementModeTransition, nullptr, "Evaluate", Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::PropPointers), sizeof(BaseMovementModeTransition_eventEvaluate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseMovementModeTransition_eventEvaluate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseMovementModeTransition::execEvaluate)
{
	P_GET_STRUCT_REF(FSimulationTickParams,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransitionEvalResult*)Z_Param__Result=P_THIS->Evaluate_Implementation(Z_Param_Out_Params);
	P_NATIVE_END;
}
// ********** End Class UBaseMovementModeTransition Function Evaluate ******************************

// ********** Begin Class UBaseMovementModeTransition Function K2_GetMoverComponent ****************
struct Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics
{
	struct BaseMovementModeTransition_eventK2_GetMoverComponent_Parms
	{
		UMoverComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Gets the MoverComponent that ultimately owns this transition */" },
		{ "DisplayName", "Get Mover Component" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ToolTip", "Gets the MoverComponent that ultimately owns this transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementModeTransition_eventK2_GetMoverComponent_Parms, ReturnValue), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementModeTransition, nullptr, "K2_GetMoverComponent", Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::BaseMovementModeTransition_eventK2_GetMoverComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::BaseMovementModeTransition_eventK2_GetMoverComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseMovementModeTransition::execK2_GetMoverComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMoverComponent**)Z_Param__Result=P_THIS->K2_GetMoverComponent();
	P_NATIVE_END;
}
// ********** End Class UBaseMovementModeTransition Function K2_GetMoverComponent ******************

// ********** Begin Class UBaseMovementModeTransition Function K2_OnRegistered *********************
static FName NAME_UBaseMovementModeTransition_K2_OnRegistered = FName(TEXT("K2_OnRegistered"));
void UBaseMovementModeTransition::K2_OnRegistered()
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementModeTransition_K2_OnRegistered);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnRegistered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MovementModeTransition" },
		{ "DisplayName", "On Registered" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ScriptName", "OnRegistered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnRegistered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementModeTransition, nullptr, "K2_OnRegistered", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnRegistered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBaseMovementModeTransition Function K2_OnRegistered ***********************

// ********** Begin Class UBaseMovementModeTransition Function K2_OnUnregistered *******************
static FName NAME_UBaseMovementModeTransition_K2_OnUnregistered = FName(TEXT("K2_OnUnregistered"));
void UBaseMovementModeTransition::K2_OnUnregistered()
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementModeTransition_K2_OnUnregistered);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnUnregistered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MovementModeTransition" },
		{ "DisplayName", "On Unregistered" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ScriptName", "OnUnregistered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnUnregistered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementModeTransition, nullptr, "K2_OnUnregistered", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnUnregistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnUnregistered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnUnregistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnUnregistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBaseMovementModeTransition Function K2_OnUnregistered *********************

// ********** Begin Class UBaseMovementModeTransition Function Trigger *****************************
struct BaseMovementModeTransition_eventTrigger_Parms
{
	FSimulationTickParams Params;
};
static FName NAME_UBaseMovementModeTransition_Trigger = FName(TEXT("Trigger"));
void UBaseMovementModeTransition::Trigger(FSimulationTickParams const& Params)
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementModeTransition_Trigger);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseMovementModeTransition_eventTrigger_Parms Parms;
		Parms.Params=Params;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Trigger_Implementation(Params);
	}
}
struct Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MovementModeTransition" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementModeTransition_eventTrigger_Parms, Params), Z_Construct_UScriptStruct_FSimulationTickParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 318922666
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementModeTransition, nullptr, "Trigger", Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::PropPointers), sizeof(BaseMovementModeTransition_eventTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseMovementModeTransition_eventTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseMovementModeTransition_Trigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementModeTransition_Trigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseMovementModeTransition::execTrigger)
{
	P_GET_STRUCT_REF(FSimulationTickParams,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Trigger_Implementation(Z_Param_Out_Params);
	P_NATIVE_END;
}
// ********** End Class UBaseMovementModeTransition Function Trigger *******************************

// ********** Begin Class UBaseMovementModeTransition **********************************************
void UBaseMovementModeTransition::StaticRegisterNativesUBaseMovementModeTransition()
{
	UClass* Class = UBaseMovementModeTransition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Evaluate", &UBaseMovementModeTransition::execEvaluate },
		{ "K2_GetMoverComponent", &UBaseMovementModeTransition::execK2_GetMoverComponent },
		{ "Trigger", &UBaseMovementModeTransition::execTrigger },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseMovementModeTransition;
UClass* UBaseMovementModeTransition::GetPrivateStaticClass()
{
	using TClass = UBaseMovementModeTransition;
	if (!Z_Registration_Info_UClass_UBaseMovementModeTransition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseMovementModeTransition"),
			Z_Registration_Info_UClass_UBaseMovementModeTransition.InnerSingleton,
			StaticRegisterNativesUBaseMovementModeTransition,
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
	return Z_Registration_Info_UClass_UBaseMovementModeTransition.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseMovementModeTransition_NoRegister()
{
	return UBaseMovementModeTransition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseMovementModeTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all transitions\n */" },
		{ "IncludePath", "MovementModeTransition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ToolTip", "Base class for all transitions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSettingsClasses_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Settings object type that this mode depends on. May be shared with other transitions and movement modes. When the transition is added to a Mover Component, it will create a shared instance of this settings class. */" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "MustImplement", "/Script/Mover.MovementSettingsInterface" },
		{ "ToolTip", "Settings object type that this mode depends on. May be shared with other transitions and movement modes. When the transition is added to a Mover Component, it will create a shared instance of this settings class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowModeReentry_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Whether this transition should reenter a mode if it evaluates true and wants to transition into a mode the actor is already in */" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ToolTip", "Whether this transition should reenter a mode if it evaluates true and wants to transition into a mode the actor is already in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFirstSubStepOnly_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Whether this transition should only apply to the first step of the update. If true, modes reached after transitions or mode changes\n\x09* in the current update will not consider this transition\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ToolTip", "Whether this transition should only apply to the first step of the update. If true, modes reached after transitions or mode changes\nin the current update will not consider this transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAsync_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** \n\x09 * Whether this movement mode transition supports being part of an asynchronous movement simulation (running concurrently with the gameplay thread) \n\x09 * Specifically for the Evaluate and Trigger functions\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ToolTip", "Whether this movement mode transition supports being part of an asynchronous movement simulation (running concurrently with the gameplay thread)\nSpecifically for the Evaluate and Trigger functions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SharedSettingsClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedSettingsClasses;
	static void NewProp_bAllowModeReentry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowModeReentry;
	static void NewProp_bFirstSubStepOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstSubStepOnly;
	static void NewProp_bSupportsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseMovementModeTransition_Evaluate, "Evaluate" }, // 3990560223
		{ &Z_Construct_UFunction_UBaseMovementModeTransition_K2_GetMoverComponent, "K2_GetMoverComponent" }, // 1789283488
		{ &Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnRegistered, "K2_OnRegistered" }, // 2419747372
		{ &Z_Construct_UFunction_UBaseMovementModeTransition_K2_OnUnregistered, "K2_OnUnregistered" }, // 1608338775
		{ &Z_Construct_UFunction_UBaseMovementModeTransition_Trigger, "Trigger" }, // 3515052905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMovementModeTransition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_SharedSettingsClasses_Inner = { "SharedSettingsClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_SharedSettingsClasses = { "SharedSettingsClasses", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMovementModeTransition, SharedSettingsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSettingsClasses_MetaData), NewProp_SharedSettingsClasses_MetaData) };
void Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bAllowModeReentry_SetBit(void* Obj)
{
	((UBaseMovementModeTransition*)Obj)->bAllowModeReentry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bAllowModeReentry = { "bAllowModeReentry", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseMovementModeTransition), &Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bAllowModeReentry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowModeReentry_MetaData), NewProp_bAllowModeReentry_MetaData) };
void Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bFirstSubStepOnly_SetBit(void* Obj)
{
	((UBaseMovementModeTransition*)Obj)->bFirstSubStepOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bFirstSubStepOnly = { "bFirstSubStepOnly", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseMovementModeTransition), &Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bFirstSubStepOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFirstSubStepOnly_MetaData), NewProp_bFirstSubStepOnly_MetaData) };
void Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bSupportsAsync_SetBit(void* Obj)
{
	((UBaseMovementModeTransition*)Obj)->bSupportsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bSupportsAsync = { "bSupportsAsync", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseMovementModeTransition), &Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bSupportsAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAsync_MetaData), NewProp_bSupportsAsync_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseMovementModeTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_SharedSettingsClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_SharedSettingsClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bAllowModeReentry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bFirstSubStepOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementModeTransition_Statics::NewProp_bSupportsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementModeTransition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseMovementModeTransition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementModeTransition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMovementModeTransition_Statics::ClassParams = {
	&UBaseMovementModeTransition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseMovementModeTransition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementModeTransition_Statics::PropPointers),
	0,
	0x002810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementModeTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseMovementModeTransition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseMovementModeTransition()
{
	if (!Z_Registration_Info_UClass_UBaseMovementModeTransition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMovementModeTransition.OuterSingleton, Z_Construct_UClass_UBaseMovementModeTransition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseMovementModeTransition.OuterSingleton;
}
UBaseMovementModeTransition::UBaseMovementModeTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMovementModeTransition);
UBaseMovementModeTransition::~UBaseMovementModeTransition() {}
// ********** End Class UBaseMovementModeTransition ************************************************

// ********** Begin Class UImmediateMovementModeTransition *****************************************
void UImmediateMovementModeTransition::StaticRegisterNativesUImmediateMovementModeTransition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UImmediateMovementModeTransition;
UClass* UImmediateMovementModeTransition::GetPrivateStaticClass()
{
	using TClass = UImmediateMovementModeTransition;
	if (!Z_Registration_Info_UClass_UImmediateMovementModeTransition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ImmediateMovementModeTransition"),
			Z_Registration_Info_UClass_UImmediateMovementModeTransition.InnerSingleton,
			StaticRegisterNativesUImmediateMovementModeTransition,
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
	return Z_Registration_Info_UClass_UImmediateMovementModeTransition.InnerSingleton;
}
UClass* Z_Construct_UClass_UImmediateMovementModeTransition_NoRegister()
{
	return UImmediateMovementModeTransition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UImmediateMovementModeTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple transition that evaluates true if a \"next mode\" is set. Used internally only by the Mover plugin. \n */" },
		{ "IncludePath", "MovementModeTransition.h" },
		{ "ModuleRelativePath", "Public/MovementModeTransition.h" },
		{ "ToolTip", "Simple transition that evaluates true if a \"next mode\" is set. Used internally only by the Mover plugin." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImmediateMovementModeTransition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImmediateMovementModeTransition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementModeTransition,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImmediateMovementModeTransition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImmediateMovementModeTransition_Statics::ClassParams = {
	&UImmediateMovementModeTransition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImmediateMovementModeTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UImmediateMovementModeTransition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImmediateMovementModeTransition()
{
	if (!Z_Registration_Info_UClass_UImmediateMovementModeTransition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImmediateMovementModeTransition.OuterSingleton, Z_Construct_UClass_UImmediateMovementModeTransition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImmediateMovementModeTransition.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImmediateMovementModeTransition);
UImmediateMovementModeTransition::~UImmediateMovementModeTransition() {}
// ********** End Class UImmediateMovementModeTransition *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTransitionEvalResult::StaticStruct, Z_Construct_UScriptStruct_FTransitionEvalResult_Statics::NewStructOps, TEXT("TransitionEvalResult"), &Z_Registration_Info_UScriptStruct_FTransitionEvalResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransitionEvalResult), 1110771697U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseMovementModeTransition, UBaseMovementModeTransition::StaticClass, TEXT("UBaseMovementModeTransition"), &Z_Registration_Info_UClass_UBaseMovementModeTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMovementModeTransition), 2735939172U) },
		{ Z_Construct_UClass_UImmediateMovementModeTransition, UImmediateMovementModeTransition::StaticClass, TEXT("UImmediateMovementModeTransition"), &Z_Registration_Info_UClass_UImmediateMovementModeTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImmediateMovementModeTransition), 264115429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h__Script_Mover_2557408938(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeTransition_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
