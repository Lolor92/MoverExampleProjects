// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementMode.h"
#include "GameplayTagContainer.h"
#include "MoveLibrary/MovementUtilsTypes.h"
#include "MoverComponent.h"
#include "MoverSimulationTypes.h"
#include "MoverTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementModeTransition_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMovementSettingsInterface();
MOVER_API UClass* Z_Construct_UClass_UMovementSettingsInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UNullMovementMode();
MOVER_API UClass* Z_Construct_UClass_UNullMovementMode_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTickEndData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTickStartData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTimeStep();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FProposedMove();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FSimulationTickParams();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UMovementSettingsInterface *******************************************
void UMovementSettingsInterface::StaticRegisterNativesUMovementSettingsInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMovementSettingsInterface;
UClass* UMovementSettingsInterface::GetPrivateStaticClass()
{
	using TClass = UMovementSettingsInterface;
	if (!Z_Registration_Info_UClass_UMovementSettingsInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovementSettingsInterface"),
			Z_Registration_Info_UClass_UMovementSettingsInterface.InnerSingleton,
			StaticRegisterNativesUMovementSettingsInterface,
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
	return Z_Registration_Info_UClass_UMovementSettingsInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovementSettingsInterface_NoRegister()
{
	return UMovementSettingsInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovementSettingsInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovementSettingsInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovementSettingsInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementSettingsInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementSettingsInterface_Statics::ClassParams = {
	&UMovementSettingsInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementSettingsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementSettingsInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementSettingsInterface()
{
	if (!Z_Registration_Info_UClass_UMovementSettingsInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementSettingsInterface.OuterSingleton, Z_Construct_UClass_UMovementSettingsInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementSettingsInterface.OuterSingleton;
}
UMovementSettingsInterface::UMovementSettingsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementSettingsInterface);
// ********** End Interface UMovementSettingsInterface *********************************************

// ********** Begin Class UBaseMovementMode Function GenerateMove **********************************
struct BaseMovementMode_eventGenerateMove_Parms
{
	FMoverTickStartData StartState;
	FMoverTimeStep TimeStep;
	FProposedMove OutProposedMove;
};
static FName NAME_UBaseMovementMode_GenerateMove = FName(TEXT("GenerateMove"));
void UBaseMovementMode::GenerateMove(FMoverTickStartData const& StartState, FMoverTimeStep const& TimeStep, FProposedMove& OutProposedMove) const
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementMode_GenerateMove);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseMovementMode_eventGenerateMove_Parms Parms;
		Parms.StartState=StartState;
		Parms.TimeStep=TimeStep;
		Parms.OutProposedMove=OutProposedMove;
		const_cast<UBaseMovementMode*>(this)->ProcessEvent(Func,&Parms);
		OutProposedMove=Parms.OutProposedMove;
	}
	else
	{
		const_cast<UBaseMovementMode*>(this)->GenerateMove_Implementation(StartState, TimeStep, OutProposedMove);
	}
}
struct Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Generate Move" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutProposedMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::NewProp_StartState = { "StartState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementMode_eventGenerateMove_Parms, StartState), Z_Construct_UScriptStruct_FMoverTickStartData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartState_MetaData), NewProp_StartState_MetaData) }; // 593582306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementMode_eventGenerateMove_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::NewProp_OutProposedMove = { "OutProposedMove", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementMode_eventGenerateMove_Parms, OutProposedMove), Z_Construct_UScriptStruct_FProposedMove, METADATA_PARAMS(0, nullptr) }; // 545505266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::NewProp_StartState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::NewProp_OutProposedMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementMode, nullptr, "GenerateMove", Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::PropPointers), sizeof(BaseMovementMode_eventGenerateMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseMovementMode_eventGenerateMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseMovementMode_GenerateMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementMode_GenerateMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseMovementMode::execGenerateMove)
{
	P_GET_STRUCT_REF(FMoverTickStartData,Z_Param_Out_StartState);
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_TimeStep);
	P_GET_STRUCT_REF(FProposedMove,Z_Param_Out_OutProposedMove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateMove_Implementation(Z_Param_Out_StartState,Z_Param_Out_TimeStep,Z_Param_Out_OutProposedMove);
	P_NATIVE_END;
}
// ********** End Class UBaseMovementMode Function GenerateMove ************************************

// ********** Begin Class UBaseMovementMode Function K2_GetMoverComponent **************************
struct Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics
{
	struct BaseMovementMode_eventK2_GetMoverComponent_Parms
	{
		UMoverComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Gets the MoverComponent that owns this movement mode */" },
		{ "DisplayName", "Get Mover Component" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ScriptName", "GetMoverComponent" },
		{ "ToolTip", "Gets the MoverComponent that owns this movement mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementMode_eventK2_GetMoverComponent_Parms, ReturnValue), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementMode, nullptr, "K2_GetMoverComponent", Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::BaseMovementMode_eventK2_GetMoverComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::BaseMovementMode_eventK2_GetMoverComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseMovementMode::execK2_GetMoverComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMoverComponent**)Z_Param__Result=P_THIS->K2_GetMoverComponent();
	P_NATIVE_END;
}
// ********** End Class UBaseMovementMode Function K2_GetMoverComponent ****************************

// ********** Begin Class UBaseMovementMode Function K2_OnActivated ********************************
static FName NAME_UBaseMovementMode_K2_OnActivated = FName(TEXT("K2_OnActivated"));
void UBaseMovementMode::K2_OnActivated()
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementMode_K2_OnActivated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UBaseMovementMode_K2_OnActivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Activated" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ScriptName", "OnActivated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementMode_K2_OnActivated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementMode, nullptr, "K2_OnActivated", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_K2_OnActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementMode_K2_OnActivated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseMovementMode_K2_OnActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementMode_K2_OnActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBaseMovementMode Function K2_OnActivated **********************************

// ********** Begin Class UBaseMovementMode Function K2_OnDeactivated ******************************
static FName NAME_UBaseMovementMode_K2_OnDeactivated = FName(TEXT("K2_OnDeactivated"));
void UBaseMovementMode::K2_OnDeactivated()
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementMode_K2_OnDeactivated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UBaseMovementMode_K2_OnDeactivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Deactivated" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ScriptName", "OnDeactivated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementMode_K2_OnDeactivated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementMode, nullptr, "K2_OnDeactivated", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_K2_OnDeactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementMode_K2_OnDeactivated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseMovementMode_K2_OnDeactivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementMode_K2_OnDeactivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBaseMovementMode Function K2_OnDeactivated ********************************

// ********** Begin Class UBaseMovementMode Function K2_OnRegistered *******************************
struct BaseMovementMode_eventK2_OnRegistered_Parms
{
	FName ModeName;
};
static FName NAME_UBaseMovementMode_K2_OnRegistered = FName(TEXT("K2_OnRegistered"));
void UBaseMovementMode::K2_OnRegistered(const FName ModeName)
{
	BaseMovementMode_eventK2_OnRegistered_Parms Parms;
	Parms.ModeName=ModeName;
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementMode_K2_OnRegistered);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Registered" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ScriptName", "OnRegistered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::NewProp_ModeName = { "ModeName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementMode_eventK2_OnRegistered_Parms, ModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModeName_MetaData), NewProp_ModeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::NewProp_ModeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementMode, nullptr, "K2_OnRegistered", Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::PropPointers), sizeof(BaseMovementMode_eventK2_OnRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseMovementMode_eventK2_OnRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBaseMovementMode Function K2_OnRegistered *********************************

// ********** Begin Class UBaseMovementMode Function K2_OnUnregistered *****************************
static FName NAME_UBaseMovementMode_K2_OnUnregistered = FName(TEXT("K2_OnUnregistered"));
void UBaseMovementMode::K2_OnUnregistered()
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementMode_K2_OnUnregistered);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UBaseMovementMode_K2_OnUnregistered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Unregistered" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ScriptName", "OnUnregistered" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementMode_K2_OnUnregistered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementMode, nullptr, "K2_OnUnregistered", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_K2_OnUnregistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementMode_K2_OnUnregistered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBaseMovementMode_K2_OnUnregistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementMode_K2_OnUnregistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UBaseMovementMode Function K2_OnUnregistered *******************************

// ********** Begin Class UBaseMovementMode Function SimulationTick ********************************
struct BaseMovementMode_eventSimulationTick_Parms
{
	FSimulationTickParams Params;
	FMoverTickEndData OutputState;
};
static FName NAME_UBaseMovementMode_SimulationTick = FName(TEXT("SimulationTick"));
void UBaseMovementMode::SimulationTick(FSimulationTickParams const& Params, FMoverTickEndData& OutputState)
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseMovementMode_SimulationTick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BaseMovementMode_eventSimulationTick_Parms Parms;
		Parms.Params=Params;
		Parms.OutputState=OutputState;
	ProcessEvent(Func,&Parms);
		OutputState=Parms.OutputState;
	}
	else
	{
		SimulationTick_Implementation(Params, OutputState);
	}
}
struct Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "Simulation Tick" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementMode_eventSimulationTick_Parms, Params), Z_Construct_UScriptStruct_FSimulationTickParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 318922666
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::NewProp_OutputState = { "OutputState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMovementMode_eventSimulationTick_Parms, OutputState), Z_Construct_UScriptStruct_FMoverTickEndData, METADATA_PARAMS(0, nullptr) }; // 2932995429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::NewProp_OutputState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBaseMovementMode, nullptr, "SimulationTick", Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::PropPointers), sizeof(BaseMovementMode_eventSimulationTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseMovementMode_eventSimulationTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseMovementMode_SimulationTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMovementMode_SimulationTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseMovementMode::execSimulationTick)
{
	P_GET_STRUCT_REF(FSimulationTickParams,Z_Param_Out_Params);
	P_GET_STRUCT_REF(FMoverTickEndData,Z_Param_Out_OutputState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SimulationTick_Implementation(Z_Param_Out_Params,Z_Param_Out_OutputState);
	P_NATIVE_END;
}
// ********** End Class UBaseMovementMode Function SimulationTick **********************************

// ********** Begin Class UBaseMovementMode ********************************************************
void UBaseMovementMode::StaticRegisterNativesUBaseMovementMode()
{
	UClass* Class = UBaseMovementMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateMove", &UBaseMovementMode::execGenerateMove },
		{ "K2_GetMoverComponent", &UBaseMovementMode::execK2_GetMoverComponent },
		{ "SimulationTick", &UBaseMovementMode::execSimulationTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseMovementMode;
UClass* UBaseMovementMode::GetPrivateStaticClass()
{
	using TClass = UBaseMovementMode;
	if (!Z_Registration_Info_UClass_UBaseMovementMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseMovementMode"),
			Z_Registration_Info_UClass_UBaseMovementMode.InnerSingleton,
			StaticRegisterNativesUBaseMovementMode,
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
	return Z_Registration_Info_UClass_UBaseMovementMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseMovementMode_NoRegister()
{
	return UBaseMovementMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all movement modes, exposing simulation update methods for both C++ and blueprint extension\n */" },
		{ "IncludePath", "MovementMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ToolTip", "Base class for all movement modes, exposing simulation update methods for both C++ and blueprint extension" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSettingsClasses_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Settings object type that this mode depends on. May be shared with other movement modes. When the mode is added to a Mover Component, it will create a shared instance of this settings class. */" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "MustImplement", "/Script/Mover.MovementSettingsInterface" },
		{ "ToolTip", "Settings object type that this mode depends on. May be shared with other movement modes. When the mode is added to a Mover Component, it will create a shared instance of this settings class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_Inner_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Transition checks for the current mode. Evaluated in order, stopping at the first successful transition check */" },
		{ "EditInline", "true" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ToolTip", "Transition checks for the current mode. Evaluated in order, stopping at the first successful transition check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Transition checks for the current mode. Evaluated in order, stopping at the first successful transition check */" },
		{ "EditInline", "true" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ToolTip", "Transition checks for the current mode. Evaluated in order, stopping at the first successful transition check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** A list of gameplay tags associated with this movement mode */" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ToolTip", "A list of gameplay tags associated with this movement mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAsync_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** \n\x09 * Whether this movement mode supports being part of an asynchronous movement simulation (running concurrently with the gameplay thread) \n\x09 * Specifically for the GenerateMove and SimulationTick functions\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ToolTip", "Whether this movement mode supports being part of an asynchronous movement simulation (running concurrently with the gameplay thread)\nSpecifically for the GenerateMove and SimulationTick functions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SharedSettingsClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedSettingsClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Transitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static void NewProp_bSupportsAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseMovementMode_GenerateMove, "GenerateMove" }, // 2638705818
		{ &Z_Construct_UFunction_UBaseMovementMode_K2_GetMoverComponent, "K2_GetMoverComponent" }, // 120399506
		{ &Z_Construct_UFunction_UBaseMovementMode_K2_OnActivated, "K2_OnActivated" }, // 4050037463
		{ &Z_Construct_UFunction_UBaseMovementMode_K2_OnDeactivated, "K2_OnDeactivated" }, // 468841625
		{ &Z_Construct_UFunction_UBaseMovementMode_K2_OnRegistered, "K2_OnRegistered" }, // 521153280
		{ &Z_Construct_UFunction_UBaseMovementMode_K2_OnUnregistered, "K2_OnUnregistered" }, // 1357039765
		{ &Z_Construct_UFunction_UBaseMovementMode_SimulationTick, "SimulationTick" }, // 4237838221
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMovementMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_SharedSettingsClasses_Inner = { "SharedSettingsClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_SharedSettingsClasses = { "SharedSettingsClasses", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMovementMode, SharedSettingsClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSettingsClasses_MetaData), NewProp_SharedSettingsClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseMovementModeTransition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transitions_Inner_MetaData), NewProp_Transitions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x011400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMovementMode, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transitions_MetaData), NewProp_Transitions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMovementMode, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 2104890724
void Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_bSupportsAsync_SetBit(void* Obj)
{
	((UBaseMovementMode*)Obj)->bSupportsAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_bSupportsAsync = { "bSupportsAsync", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseMovementMode), &Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_bSupportsAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAsync_MetaData), NewProp_bSupportsAsync_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_SharedSettingsClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_SharedSettingsClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_Transitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_Transitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMovementMode_Statics::NewProp_bSupportsAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseMovementMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMovementMode_Statics::ClassParams = {
	&UBaseMovementMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseMovementMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementMode_Statics::PropPointers),
	0,
	0x00A810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMovementMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseMovementMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseMovementMode()
{
	if (!Z_Registration_Info_UClass_UBaseMovementMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMovementMode.OuterSingleton, Z_Construct_UClass_UBaseMovementMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseMovementMode.OuterSingleton;
}
UBaseMovementMode::UBaseMovementMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMovementMode);
UBaseMovementMode::~UBaseMovementMode() {}
// ********** End Class UBaseMovementMode **********************************************************

// ********** Begin Class UNullMovementMode ********************************************************
void UNullMovementMode::StaticRegisterNativesUNullMovementMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNullMovementMode;
UClass* UNullMovementMode::GetPrivateStaticClass()
{
	using TClass = UNullMovementMode;
	if (!Z_Registration_Info_UClass_UNullMovementMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NullMovementMode"),
			Z_Registration_Info_UClass_UNullMovementMode.InnerSingleton,
			StaticRegisterNativesUNullMovementMode,
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
	return Z_Registration_Info_UClass_UNullMovementMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UNullMovementMode_NoRegister()
{
	return UNullMovementMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNullMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NullMovementMode: a default do-nothing mode used as a placeholder when no other mode is active\n */" },
		{ "IncludePath", "MovementMode.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/MovementMode.h" },
		{ "ToolTip", "NullMovementMode: a default do-nothing mode used as a placeholder when no other mode is active" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNullMovementMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNullMovementMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNullMovementMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNullMovementMode_Statics::ClassParams = {
	&UNullMovementMode::StaticClass,
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
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNullMovementMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UNullMovementMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNullMovementMode()
{
	if (!Z_Registration_Info_UClass_UNullMovementMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNullMovementMode.OuterSingleton, Z_Construct_UClass_UNullMovementMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNullMovementMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNullMovementMode);
UNullMovementMode::~UNullMovementMode() {}
// ********** End Class UNullMovementMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovementSettingsInterface, UMovementSettingsInterface::StaticClass, TEXT("UMovementSettingsInterface"), &Z_Registration_Info_UClass_UMovementSettingsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementSettingsInterface), 4158598344U) },
		{ Z_Construct_UClass_UBaseMovementMode, UBaseMovementMode::StaticClass, TEXT("UBaseMovementMode"), &Z_Registration_Info_UClass_UBaseMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMovementMode), 592081827U) },
		{ Z_Construct_UClass_UNullMovementMode, UNullMovementMode::StaticClass, TEXT("UNullMovementMode"), &Z_Registration_Info_UClass_UNullMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNullMovementMode), 988592104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h__Script_Mover_3493497739(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
