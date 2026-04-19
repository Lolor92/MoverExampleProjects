// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/ModularMovement.h"
#include "MoveLibrary/MovementUtilsTypes.h"
#include "MoverDataModelTypes.h"
#include "MoverSimulationTypes.h"
#include "MoverTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModularMovement() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
MOVER_API UClass* Z_Construct_UClass_UBlueprintableTurnGenerator();
MOVER_API UClass* Z_Construct_UClass_UBlueprintableTurnGenerator_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UExactDampedTurnGenerator();
MOVER_API UClass* Z_Construct_UClass_UExactDampedTurnGenerator_NoRegister();
MOVER_API UClass* Z_Construct_UClass_ULinearTurnGenerator();
MOVER_API UClass* Z_Construct_UClass_ULinearTurnGenerator_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverBlackboard_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UTurnGeneratorInterface();
MOVER_API UClass* Z_Construct_UClass_UTurnGeneratorInterface_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDefaultSyncState();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTickStartData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTimeStep();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FProposedMove();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UTurnGeneratorInterface Function GetTurn *****************************
struct TurnGeneratorInterface_eventGetTurn_Parms
{
	FRotator TargetOrientation;
	FMoverTickStartData FullStartState;
	FMoverDefaultSyncState MoverState;
	FMoverTimeStep TimeStep;
	FProposedMove ProposedMove;
	UMoverBlackboard* SimBlackboard;
	FRotator ReturnValue;

	/** Constructor, initializes return property only **/
	TurnGeneratorInterface_eventGetTurn_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FRotator ITurnGeneratorInterface::GetTurn(FRotator TargetOrientation, FMoverTickStartData const& FullStartState, FMoverDefaultSyncState const& MoverState, FMoverTimeStep const& TimeStep, FProposedMove const& ProposedMove, UMoverBlackboard* SimBlackboard)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTurn instead.");
	TurnGeneratorInterface_eventGetTurn_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTurnGeneratorInterface_GetTurn = FName(TEXT("GetTurn"));
FRotator ITurnGeneratorInterface::Execute_GetTurn(UObject* O, FRotator TargetOrientation, FMoverTickStartData const& FullStartState, FMoverDefaultSyncState const& MoverState, FMoverTimeStep const& TimeStep, FProposedMove const& ProposedMove, UMoverBlackboard* SimBlackboard)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTurnGeneratorInterface::StaticClass()));
	TurnGeneratorInterface_eventGetTurn_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTurnGeneratorInterface_GetTurn);
	if (Func)
	{
		Parms.TargetOrientation=TargetOrientation;
		Parms.FullStartState=FullStartState;
		Parms.MoverState=MoverState;
		Parms.TimeStep=TimeStep;
		Parms.ProposedMove=ProposedMove;
		Parms.SimBlackboard=SimBlackboard;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITurnGeneratorInterface*)(O->GetNativeInterfaceAddress(UTurnGeneratorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTurn_Implementation(TargetOrientation,FullStartState,MoverState,TimeStep,ProposedMove,SimBlackboard);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns an additive angular velocity (per-axis degrees/second) based on the starting state and timestep */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ModularMovement.h" },
		{ "ToolTip", "Returns an additive angular velocity (per-axis degrees/second) based on the starting state and timestep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullStartState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProposedMove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOrientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FullStartState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoverState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProposedMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimBlackboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_TargetOrientation = { "TargetOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnGeneratorInterface_eventGetTurn_Parms, TargetOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_FullStartState = { "FullStartState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnGeneratorInterface_eventGetTurn_Parms, FullStartState), Z_Construct_UScriptStruct_FMoverTickStartData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullStartState_MetaData), NewProp_FullStartState_MetaData) }; // 593582306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_MoverState = { "MoverState", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnGeneratorInterface_eventGetTurn_Parms, MoverState), Z_Construct_UScriptStruct_FMoverDefaultSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverState_MetaData), NewProp_MoverState_MetaData) }; // 198310774
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnGeneratorInterface_eventGetTurn_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_ProposedMove = { "ProposedMove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnGeneratorInterface_eventGetTurn_Parms, ProposedMove), Z_Construct_UScriptStruct_FProposedMove, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProposedMove_MetaData), NewProp_ProposedMove_MetaData) }; // 545505266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_SimBlackboard = { "SimBlackboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnGeneratorInterface_eventGetTurn_Parms, SimBlackboard), Z_Construct_UClass_UMoverBlackboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnGeneratorInterface_eventGetTurn_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_TargetOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_FullStartState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_MoverState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_ProposedMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_SimBlackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTurnGeneratorInterface, nullptr, "GetTurn", Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::PropPointers), sizeof(TurnGeneratorInterface_eventGetTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TurnGeneratorInterface_eventGetTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITurnGeneratorInterface::execGetTurn)
{
	P_GET_STRUCT(FRotator,Z_Param_TargetOrientation);
	P_GET_STRUCT_REF(FMoverTickStartData,Z_Param_Out_FullStartState);
	P_GET_STRUCT_REF(FMoverDefaultSyncState,Z_Param_Out_MoverState);
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_TimeStep);
	P_GET_STRUCT_REF(FProposedMove,Z_Param_Out_ProposedMove);
	P_GET_OBJECT(UMoverBlackboard,Z_Param_SimBlackboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetTurn_Implementation(Z_Param_TargetOrientation,Z_Param_Out_FullStartState,Z_Param_Out_MoverState,Z_Param_Out_TimeStep,Z_Param_Out_ProposedMove,Z_Param_SimBlackboard);
	P_NATIVE_END;
}
// ********** End Interface UTurnGeneratorInterface Function GetTurn *******************************

// ********** Begin Interface UTurnGeneratorInterface **********************************************
void UTurnGeneratorInterface::StaticRegisterNativesUTurnGeneratorInterface()
{
	UClass* Class = UTurnGeneratorInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTurn", &ITurnGeneratorInterface::execGetTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTurnGeneratorInterface;
UClass* UTurnGeneratorInterface::GetPrivateStaticClass()
{
	using TClass = UTurnGeneratorInterface;
	if (!Z_Registration_Info_UClass_UTurnGeneratorInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TurnGeneratorInterface"),
			Z_Registration_Info_UClass_UTurnGeneratorInterface.InnerSingleton,
			StaticRegisterNativesUTurnGeneratorInterface,
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
	return Z_Registration_Info_UClass_UTurnGeneratorInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UTurnGeneratorInterface_NoRegister()
{
	return UTurnGeneratorInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTurnGeneratorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ModularMovement.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnGeneratorInterface_GetTurn, "GetTurn" }, // 3755030437
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITurnGeneratorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTurnGeneratorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnGeneratorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnGeneratorInterface_Statics::ClassParams = {
	&UTurnGeneratorInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnGeneratorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnGeneratorInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnGeneratorInterface()
{
	if (!Z_Registration_Info_UClass_UTurnGeneratorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnGeneratorInterface.OuterSingleton, Z_Construct_UClass_UTurnGeneratorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnGeneratorInterface.OuterSingleton;
}
UTurnGeneratorInterface::UTurnGeneratorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnGeneratorInterface);
// ********** End Interface UTurnGeneratorInterface ************************************************

// ********** Begin Class ULinearTurnGenerator *****************************************************
void ULinearTurnGenerator::StaticRegisterNativesULinearTurnGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULinearTurnGenerator;
UClass* ULinearTurnGenerator::GetPrivateStaticClass()
{
	using TClass = ULinearTurnGenerator;
	if (!Z_Registration_Info_UClass_ULinearTurnGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LinearTurnGenerator"),
			Z_Registration_Info_UClass_ULinearTurnGenerator.InnerSingleton,
			StaticRegisterNativesULinearTurnGenerator,
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
	return Z_Registration_Info_UClass_ULinearTurnGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_ULinearTurnGenerator_NoRegister()
{
	return ULinearTurnGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULinearTurnGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Modular mechanism for turning a Mover actor in place using linear angular velocity.\n */" },
		{ "IncludePath", "MoveLibrary/ModularMovement.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ModularMovement.h" },
		{ "ToolTip", "Modular mechanism for turning a Mover actor in place using linear angular velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadingRate_MetaData[] = {
		{ "Category", "Linear Turning" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Maximum angular velocity of heading changes (degrees per second). AKA Yaw, AKA Z. Negative numbers will cause rotation to snap instantly to desired orientation. */" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ModularMovement.h" },
		{ "ToolTip", "Maximum angular velocity of heading changes (degrees per second). AKA Yaw, AKA Z. Negative numbers will cause rotation to snap instantly to desired orientation." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRate_MetaData[] = {
		{ "Category", "Linear Turning" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Maximum angular velocity of pitch changes (degrees per second). Negative numbers will cause rotation to snap instantly to desired orientation. */" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ModularMovement.h" },
		{ "ToolTip", "Maximum angular velocity of pitch changes (degrees per second). Negative numbers will cause rotation to snap instantly to desired orientation." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollRate_MetaData[] = {
		{ "Category", "Linear Turning" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Maximum angular velocity of roll changes (degrees per second). Negative numbers will cause rotation to snap instantly to desired orientation. */" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ModularMovement.h" },
		{ "ToolTip", "Maximum angular velocity of roll changes (degrees per second). Negative numbers will cause rotation to snap instantly to desired orientation." },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadingRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinearTurnGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULinearTurnGenerator_Statics::NewProp_HeadingRate = { "HeadingRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULinearTurnGenerator, HeadingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadingRate_MetaData), NewProp_HeadingRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULinearTurnGenerator_Statics::NewProp_PitchRate = { "PitchRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULinearTurnGenerator, PitchRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRate_MetaData), NewProp_PitchRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULinearTurnGenerator_Statics::NewProp_RollRate = { "RollRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULinearTurnGenerator, RollRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollRate_MetaData), NewProp_RollRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULinearTurnGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearTurnGenerator_Statics::NewProp_HeadingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearTurnGenerator_Statics::NewProp_PitchRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearTurnGenerator_Statics::NewProp_RollRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULinearTurnGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULinearTurnGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULinearTurnGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULinearTurnGenerator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTurnGeneratorInterface_NoRegister, (int32)VTABLE_OFFSET(ULinearTurnGenerator, ITurnGeneratorInterface), false },  // 977525596
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULinearTurnGenerator_Statics::ClassParams = {
	&ULinearTurnGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULinearTurnGenerator_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULinearTurnGenerator_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULinearTurnGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ULinearTurnGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULinearTurnGenerator()
{
	if (!Z_Registration_Info_UClass_ULinearTurnGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULinearTurnGenerator.OuterSingleton, Z_Construct_UClass_ULinearTurnGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULinearTurnGenerator.OuterSingleton;
}
ULinearTurnGenerator::ULinearTurnGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULinearTurnGenerator);
ULinearTurnGenerator::~ULinearTurnGenerator() {}
// ********** End Class ULinearTurnGenerator *******************************************************

// ********** Begin Class UExactDampedTurnGenerator ************************************************
void UExactDampedTurnGenerator::StaticRegisterNativesUExactDampedTurnGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UExactDampedTurnGenerator;
UClass* UExactDampedTurnGenerator::GetPrivateStaticClass()
{
	using TClass = UExactDampedTurnGenerator;
	if (!Z_Registration_Info_UClass_UExactDampedTurnGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ExactDampedTurnGenerator"),
			Z_Registration_Info_UClass_UExactDampedTurnGenerator.InnerSingleton,
			StaticRegisterNativesUExactDampedTurnGenerator,
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
	return Z_Registration_Info_UClass_UExactDampedTurnGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UExactDampedTurnGenerator_NoRegister()
{
	return UExactDampedTurnGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExactDampedTurnGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Modular mechanism for turning a Mover actor in place using an exact damped spring\n */" },
		{ "IncludePath", "MoveLibrary/ModularMovement.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ModularMovement.h" },
		{ "ToolTip", "Modular mechanism for turning a Mover actor in place using an exact damped spring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfLifeSeconds_MetaData[] = {
		{ "Category", "Exact Damped Turning" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Time required to reach halfway to the target orientation (smaller = quicker) */" },
		{ "ForceUnits", "seconds" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ModularMovement.h" },
		{ "ToolTip", "Time required to reach halfway to the target orientation (smaller = quicker)" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfLifeSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExactDampedTurnGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExactDampedTurnGenerator_Statics::NewProp_HalfLifeSeconds = { "HalfLifeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExactDampedTurnGenerator, HalfLifeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfLifeSeconds_MetaData), NewProp_HalfLifeSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExactDampedTurnGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExactDampedTurnGenerator_Statics::NewProp_HalfLifeSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExactDampedTurnGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExactDampedTurnGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExactDampedTurnGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UExactDampedTurnGenerator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTurnGeneratorInterface_NoRegister, (int32)VTABLE_OFFSET(UExactDampedTurnGenerator, ITurnGeneratorInterface), false },  // 977525596
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExactDampedTurnGenerator_Statics::ClassParams = {
	&UExactDampedTurnGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExactDampedTurnGenerator_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExactDampedTurnGenerator_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExactDampedTurnGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UExactDampedTurnGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExactDampedTurnGenerator()
{
	if (!Z_Registration_Info_UClass_UExactDampedTurnGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExactDampedTurnGenerator.OuterSingleton, Z_Construct_UClass_UExactDampedTurnGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExactDampedTurnGenerator.OuterSingleton;
}
UExactDampedTurnGenerator::UExactDampedTurnGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExactDampedTurnGenerator);
UExactDampedTurnGenerator::~UExactDampedTurnGenerator() {}
// ********** End Class UExactDampedTurnGenerator **************************************************

// ********** Begin Class UBlueprintableTurnGenerator **********************************************
void UBlueprintableTurnGenerator::StaticRegisterNativesUBlueprintableTurnGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBlueprintableTurnGenerator;
UClass* UBlueprintableTurnGenerator::GetPrivateStaticClass()
{
	using TClass = UBlueprintableTurnGenerator;
	if (!Z_Registration_Info_UClass_UBlueprintableTurnGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlueprintableTurnGenerator"),
			Z_Registration_Info_UClass_UBlueprintableTurnGenerator.InnerSingleton,
			StaticRegisterNativesUBlueprintableTurnGenerator,
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
	return Z_Registration_Info_UClass_UBlueprintableTurnGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlueprintableTurnGenerator_NoRegister()
{
	return UBlueprintableTurnGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlueprintableTurnGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for blueprint-implemented turn generators. This is necessary due to the lack of support for specifying \n * EditInlineNew on a BP class, so it has to inherit the flag from a native parent.\n */" },
		{ "IncludePath", "MoveLibrary/ModularMovement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ModularMovement.h" },
		{ "ToolTip", "Base class for blueprint-implemented turn generators. This is necessary due to the lack of support for specifying\nEditInlineNew on a BP class, so it has to inherit the flag from a native parent." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintableTurnGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlueprintableTurnGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintableTurnGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBlueprintableTurnGenerator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UTurnGeneratorInterface_NoRegister, (int32)VTABLE_OFFSET(UBlueprintableTurnGenerator, ITurnGeneratorInterface), false },  // 977525596
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintableTurnGenerator_Statics::ClassParams = {
	&UBlueprintableTurnGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintableTurnGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintableTurnGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintableTurnGenerator()
{
	if (!Z_Registration_Info_UClass_UBlueprintableTurnGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintableTurnGenerator.OuterSingleton, Z_Construct_UClass_UBlueprintableTurnGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintableTurnGenerator.OuterSingleton;
}
UBlueprintableTurnGenerator::UBlueprintableTurnGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintableTurnGenerator);
UBlueprintableTurnGenerator::~UBlueprintableTurnGenerator() {}
// ********** End Class UBlueprintableTurnGenerator ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnGeneratorInterface, UTurnGeneratorInterface::StaticClass, TEXT("UTurnGeneratorInterface"), &Z_Registration_Info_UClass_UTurnGeneratorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnGeneratorInterface), 977525596U) },
		{ Z_Construct_UClass_ULinearTurnGenerator, ULinearTurnGenerator::StaticClass, TEXT("ULinearTurnGenerator"), &Z_Registration_Info_UClass_ULinearTurnGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULinearTurnGenerator), 3937189014U) },
		{ Z_Construct_UClass_UExactDampedTurnGenerator, UExactDampedTurnGenerator::StaticClass, TEXT("UExactDampedTurnGenerator"), &Z_Registration_Info_UClass_UExactDampedTurnGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExactDampedTurnGenerator), 474422644U) },
		{ Z_Construct_UClass_UBlueprintableTurnGenerator, UBlueprintableTurnGenerator::StaticClass, TEXT("UBlueprintableTurnGenerator"), &Z_Registration_Info_UClass_UBlueprintableTurnGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintableTurnGenerator), 1304636357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h__Script_Mover_3115894517(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
