// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PhysicsCharacterMoverComponent.h"
#include "MoverSimulationTypes.h"
#include "MoverTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhysicsCharacterMoverComponent() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UCharacterMoverComponent();
MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMoverComponent();
MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMoverComponent_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverAuxStateContext();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverInputCmdContext();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverSyncState();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTimeStep();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPhysicsCharacterMoverComponent Function OnMoverPostSimulationTick *******
struct Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics
{
	struct PhysicsCharacterMoverComponent_eventOnMoverPostSimulationTick_Parms
	{
		FMoverTimeStep TimeStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsCharacterMoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsCharacterMoverComponent_eventOnMoverPostSimulationTick_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::NewProp_TimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPhysicsCharacterMoverComponent, nullptr, "OnMoverPostSimulationTick", Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::PhysicsCharacterMoverComponent_eventOnMoverPostSimulationTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::PhysicsCharacterMoverComponent_eventOnMoverPostSimulationTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsCharacterMoverComponent::execOnMoverPostSimulationTick)
{
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_TimeStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoverPostSimulationTick(Z_Param_Out_TimeStep);
	P_NATIVE_END;
}
// ********** End Class UPhysicsCharacterMoverComponent Function OnMoverPostSimulationTick *********

// ********** Begin Class UPhysicsCharacterMoverComponent Function OnMoverPreMovement **************
struct Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics
{
	struct PhysicsCharacterMoverComponent_eventOnMoverPreMovement_Parms
	{
		FMoverTimeStep TimeStep;
		FMoverInputCmdContext InputCmd;
		FMoverSyncState SyncState;
		FMoverAuxStateContext AuxState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsCharacterMoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCmd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCmd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuxState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsCharacterMoverComponent_eventOnMoverPreMovement_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::NewProp_InputCmd = { "InputCmd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsCharacterMoverComponent_eventOnMoverPreMovement_Parms, InputCmd), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCmd_MetaData), NewProp_InputCmd_MetaData) }; // 300648549
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsCharacterMoverComponent_eventOnMoverPreMovement_Parms, SyncState), Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 1107017417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::NewProp_AuxState = { "AuxState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PhysicsCharacterMoverComponent_eventOnMoverPreMovement_Parms, AuxState), Z_Construct_UScriptStruct_FMoverAuxStateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxState_MetaData), NewProp_AuxState_MetaData) }; // 950104575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::NewProp_InputCmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::NewProp_AuxState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPhysicsCharacterMoverComponent, nullptr, "OnMoverPreMovement", Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::PhysicsCharacterMoverComponent_eventOnMoverPreMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::PhysicsCharacterMoverComponent_eventOnMoverPreMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPhysicsCharacterMoverComponent::execOnMoverPreMovement)
{
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_TimeStep);
	P_GET_STRUCT_REF(FMoverInputCmdContext,Z_Param_Out_InputCmd);
	P_GET_STRUCT_REF(FMoverSyncState,Z_Param_Out_SyncState);
	P_GET_STRUCT_REF(FMoverAuxStateContext,Z_Param_Out_AuxState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoverPreMovement(Z_Param_Out_TimeStep,Z_Param_Out_InputCmd,Z_Param_Out_SyncState,Z_Param_Out_AuxState);
	P_NATIVE_END;
}
// ********** End Class UPhysicsCharacterMoverComponent Function OnMoverPreMovement ****************

// ********** Begin Class UPhysicsCharacterMoverComponent ******************************************
void UPhysicsCharacterMoverComponent::StaticRegisterNativesUPhysicsCharacterMoverComponent()
{
	UClass* Class = UPhysicsCharacterMoverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMoverPostSimulationTick", &UPhysicsCharacterMoverComponent::execOnMoverPostSimulationTick },
		{ "OnMoverPreMovement", &UPhysicsCharacterMoverComponent::execOnMoverPreMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPhysicsCharacterMoverComponent;
UClass* UPhysicsCharacterMoverComponent::GetPrivateStaticClass()
{
	using TClass = UPhysicsCharacterMoverComponent;
	if (!Z_Registration_Info_UClass_UPhysicsCharacterMoverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhysicsCharacterMoverComponent"),
			Z_Registration_Info_UClass_UPhysicsCharacterMoverComponent.InnerSingleton,
			StaticRegisterNativesUPhysicsCharacterMoverComponent,
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
	return Z_Registration_Info_UClass_UPhysicsCharacterMoverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPhysicsCharacterMoverComponent_NoRegister()
{
	return UPhysicsCharacterMoverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPhysicsCharacterMoverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhysicsMover/PhysicsCharacterMoverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsCharacterMoverComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPostSimulationTick, "OnMoverPostSimulationTick" }, // 3241430279
		{ &Z_Construct_UFunction_UPhysicsCharacterMoverComponent_OnMoverPreMovement, "OnMoverPreMovement" }, // 1676359005
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsCharacterMoverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPhysicsCharacterMoverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMoverComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCharacterMoverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsCharacterMoverComponent_Statics::ClassParams = {
	&UPhysicsCharacterMoverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCharacterMoverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsCharacterMoverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsCharacterMoverComponent()
{
	if (!Z_Registration_Info_UClass_UPhysicsCharacterMoverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsCharacterMoverComponent.OuterSingleton, Z_Construct_UClass_UPhysicsCharacterMoverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsCharacterMoverComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsCharacterMoverComponent);
UPhysicsCharacterMoverComponent::~UPhysicsCharacterMoverComponent() {}
// ********** End Class UPhysicsCharacterMoverComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsCharacterMoverComponent, UPhysicsCharacterMoverComponent::StaticClass, TEXT("UPhysicsCharacterMoverComponent"), &Z_Registration_Info_UClass_UPhysicsCharacterMoverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsCharacterMoverComponent), 841488528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h__Script_Mover_3824259468(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsCharacterMoverComponent_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
