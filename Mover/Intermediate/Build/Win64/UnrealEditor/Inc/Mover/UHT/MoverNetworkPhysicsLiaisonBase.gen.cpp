// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Backends/MoverNetworkPhysicsLiaisonBase.h"
#include "MoverComponent.h"
#include "MoverSimulationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverNetworkPhysicsLiaisonBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentPhysicsStateChange();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsData();
MOVER_API UClass* Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase();
MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverInputCmdContext();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverSyncState();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsMoverState();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNetworkPhysicsMoverInputs ****************************************
static_assert(std::is_polymorphic<FNetworkPhysicsMoverInputs>() == std::is_polymorphic<FNetworkPhysicsData>(), "USTRUCT FNetworkPhysicsMoverInputs cannot be polymorphic unless super FNetworkPhysicsData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverInputs;
class UScriptStruct* FNetworkPhysicsMoverInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("NetworkPhysicsMoverInputs"));
	}
	return Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverInputs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Physics networking\n" },
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPhysicsLiaisonBase.h" },
		{ "ToolTip", "Physics networking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCmdContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPhysicsLiaisonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCmdContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsMoverInputs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::NewProp_InputCmdContext = { "InputCmdContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsMoverInputs, InputCmdContext), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCmdContext_MetaData), NewProp_InputCmdContext_MetaData) }; // 300648549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::NewProp_InputCmdContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FNetworkPhysicsData,
	&NewStructOps,
	"NetworkPhysicsMoverInputs",
	Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::PropPointers),
	sizeof(FNetworkPhysicsMoverInputs),
	alignof(FNetworkPhysicsMoverInputs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs()
{
	if (!Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverInputs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverInputs.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverInputs.InnerSingleton;
}
// ********** End ScriptStruct FNetworkPhysicsMoverInputs ******************************************

// ********** Begin ScriptStruct FNetworkPhysicsMoverState *****************************************
static_assert(std::is_polymorphic<FNetworkPhysicsMoverState>() == std::is_polymorphic<FNetworkPhysicsData>(), "USTRUCT FNetworkPhysicsMoverState cannot be polymorphic unless super FNetworkPhysicsData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverState;
class UScriptStruct* FNetworkPhysicsMoverState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsMoverState, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("NetworkPhysicsMoverState"));
	}
	return Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPhysicsLiaisonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncStateContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPhysicsLiaisonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncStateContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsMoverState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::NewProp_SyncStateContext = { "SyncStateContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsMoverState, SyncStateContext), Z_Construct_UScriptStruct_FMoverSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncStateContext_MetaData), NewProp_SyncStateContext_MetaData) }; // 1107017417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::NewProp_SyncStateContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FNetworkPhysicsData,
	&NewStructOps,
	"NetworkPhysicsMoverState",
	Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::PropPointers),
	sizeof(FNetworkPhysicsMoverState),
	alignof(FNetworkPhysicsMoverState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsMoverState()
{
	if (!Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverState.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverState.InnerSingleton;
}
// ********** End ScriptStruct FNetworkPhysicsMoverState *******************************************

// ********** Begin Class UMoverNetworkPhysicsLiaisonComponentBase Function HandleComponentPhysicsStateChanged 
struct Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics
{
	struct MoverNetworkPhysicsLiaisonComponentBase_eventHandleComponentPhysicsStateChanged_Parms
	{
		UPrimitiveComponent* ChangedComponent;
		EComponentPhysicsStateChange StateChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPhysicsLiaisonBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StateChange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StateChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::NewProp_ChangedComponent = { "ChangedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverNetworkPhysicsLiaisonComponentBase_eventHandleComponentPhysicsStateChanged_Parms, ChangedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangedComponent_MetaData), NewProp_ChangedComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::NewProp_StateChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::NewProp_StateChange = { "StateChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverNetworkPhysicsLiaisonComponentBase_eventHandleComponentPhysicsStateChanged_Parms, StateChange), Z_Construct_UEnum_Engine_EComponentPhysicsStateChange, METADATA_PARAMS(0, nullptr) }; // 1948275289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::NewProp_ChangedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::NewProp_StateChange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::NewProp_StateChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase, nullptr, "HandleComponentPhysicsStateChanged", Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::MoverNetworkPhysicsLiaisonComponentBase_eventHandleComponentPhysicsStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::MoverNetworkPhysicsLiaisonComponentBase_eventHandleComponentPhysicsStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverNetworkPhysicsLiaisonComponentBase::execHandleComponentPhysicsStateChanged)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ChangedComponent);
	P_GET_ENUM(EComponentPhysicsStateChange,Z_Param_StateChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleComponentPhysicsStateChanged(Z_Param_ChangedComponent,EComponentPhysicsStateChange(Z_Param_StateChange));
	P_NATIVE_END;
}
// ********** End Class UMoverNetworkPhysicsLiaisonComponentBase Function HandleComponentPhysicsStateChanged 

// ********** Begin Class UMoverNetworkPhysicsLiaisonComponentBase Function HandleOwningPawnControllerChanged_Server 
struct Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics
{
	struct MoverNetworkPhysicsLiaisonComponentBase_eventHandleOwningPawnControllerChanged_Server_Parms
	{
		APawn* OwnerPawn;
		AController* OldController;
		AController* NewController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPhysicsLiaisonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverNetworkPhysicsLiaisonComponentBase_eventHandleOwningPawnControllerChanged_Server_Parms, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverNetworkPhysicsLiaisonComponentBase_eventHandleOwningPawnControllerChanged_Server_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverNetworkPhysicsLiaisonComponentBase_eventHandleOwningPawnControllerChanged_Server_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::NewProp_OwnerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::NewProp_OldController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::NewProp_NewController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase, nullptr, "HandleOwningPawnControllerChanged_Server", Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::MoverNetworkPhysicsLiaisonComponentBase_eventHandleOwningPawnControllerChanged_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::MoverNetworkPhysicsLiaisonComponentBase_eventHandleOwningPawnControllerChanged_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverNetworkPhysicsLiaisonComponentBase::execHandleOwningPawnControllerChanged_Server)
{
	P_GET_OBJECT(APawn,Z_Param_OwnerPawn);
	P_GET_OBJECT(AController,Z_Param_OldController);
	P_GET_OBJECT(AController,Z_Param_NewController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwningPawnControllerChanged_Server(Z_Param_OwnerPawn,Z_Param_OldController,Z_Param_NewController);
	P_NATIVE_END;
}
// ********** End Class UMoverNetworkPhysicsLiaisonComponentBase Function HandleOwningPawnControllerChanged_Server 

// ********** Begin Class UMoverNetworkPhysicsLiaisonComponentBase *********************************
void UMoverNetworkPhysicsLiaisonComponentBase::StaticRegisterNativesUMoverNetworkPhysicsLiaisonComponentBase()
{
	UClass* Class = UMoverNetworkPhysicsLiaisonComponentBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleComponentPhysicsStateChanged", &UMoverNetworkPhysicsLiaisonComponentBase::execHandleComponentPhysicsStateChanged },
		{ "HandleOwningPawnControllerChanged_Server", &UMoverNetworkPhysicsLiaisonComponentBase::execHandleOwningPawnControllerChanged_Server },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponentBase;
UClass* UMoverNetworkPhysicsLiaisonComponentBase::GetPrivateStaticClass()
{
	using TClass = UMoverNetworkPhysicsLiaisonComponentBase;
	if (!Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverNetworkPhysicsLiaisonComponentBase"),
			Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponentBase.InnerSingleton,
			StaticRegisterNativesUMoverNetworkPhysicsLiaisonComponentBase,
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
	return Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_NoRegister()
{
	return UMoverNetworkPhysicsLiaisonComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for liaison components to act as a middleman between an actor's Mover component and the Chaos physics network prediction system to move\n * the Mover's updated component on the physics thread (PT).\n * \n * This is accomplished by registering a FPhysicsMoverManagerAsyncCallback and exposing the game thread (GT) and PT methods for the TSimCallback to\n * virtual methods on this liaison.\n */" },
		{ "IncludePath", "Backends/MoverNetworkPhysicsLiaisonBase.h" },
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPhysicsLiaisonBase.h" },
		{ "ToolTip", "Base class for liaison components to act as a middleman between an actor's Mover component and the Chaos physics network prediction system to move\nthe Mover's updated component on the physics thread (PT).\n\nThis is accomplished by registering a FPhysicsMoverManagerAsyncCallback and exposing the game thread (GT) and PT methods for the TSimCallback to\nvirtual methods on this liaison." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkPhysicsComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Backends/MoverNetworkPhysicsLiaisonBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetworkPhysicsComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleComponentPhysicsStateChanged, "HandleComponentPhysicsStateChanged" }, // 1238146771
		{ &Z_Construct_UFunction_UMoverNetworkPhysicsLiaisonComponentBase_HandleOwningPawnControllerChanged_Server, "HandleOwningPawnControllerChanged_Server" }, // 3733570128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverNetworkPhysicsLiaisonComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::NewProp_NetworkPhysicsComponent = { "NetworkPhysicsComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverNetworkPhysicsLiaisonComponentBase, NetworkPhysicsComponent), Z_Construct_UClass_UNetworkPhysicsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkPhysicsComponent_MetaData), NewProp_NetworkPhysicsComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::NewProp_NetworkPhysicsComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMoverBackendLiaisonInterface_NoRegister, (int32)VTABLE_OFFSET(UMoverNetworkPhysicsLiaisonComponentBase, IMoverBackendLiaisonInterface), false },  // 2819606442
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::ClassParams = {
	&UMoverNetworkPhysicsLiaisonComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase()
{
	if (!Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponentBase.OuterSingleton, Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponentBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverNetworkPhysicsLiaisonComponentBase);
UMoverNetworkPhysicsLiaisonComponentBase::~UMoverNetworkPhysicsLiaisonComponentBase() {}
// ********** End Class UMoverNetworkPhysicsLiaisonComponentBase ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetworkPhysicsMoverInputs::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics::NewStructOps, TEXT("NetworkPhysicsMoverInputs"), &Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsMoverInputs), 2538810686U) },
		{ FNetworkPhysicsMoverState::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics::NewStructOps, TEXT("NetworkPhysicsMoverState"), &Z_Registration_Info_UScriptStruct_FNetworkPhysicsMoverState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsMoverState), 849614434U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase, UMoverNetworkPhysicsLiaisonComponentBase::StaticClass, TEXT("UMoverNetworkPhysicsLiaisonComponentBase"), &Z_Registration_Info_UClass_UMoverNetworkPhysicsLiaisonComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverNetworkPhysicsLiaisonComponentBase), 751921792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h__Script_Mover_2290891652(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
