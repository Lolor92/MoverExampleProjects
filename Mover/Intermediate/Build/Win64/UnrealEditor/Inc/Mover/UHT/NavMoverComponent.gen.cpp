// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/NavMoverComponent.h"
#include "AI/Navigation/NavigationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNavMoverComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UNavMovementInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavMovementProperties();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UNavMoverComponent();
MOVER_API UClass* Z_Construct_UClass_UNavMoverComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNavMoverComponent Function ConsumeNavMovementData ***********************
struct Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics
{
	struct NavMoverComponent_eventConsumeNavMovementData_Parms
	{
		FVector OutMoveInputIntent;
		FVector OutMoveInputVelocity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "// Writes internal cached requested velocities to the MoveInput passed in. Returns true if it had move input to write.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "Writes internal cached requested velocities to the MoveInput passed in. Returns true if it had move input to write." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMoveInputIntent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMoveInputVelocity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NewProp_OutMoveInputIntent = { "OutMoveInputIntent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavMoverComponent_eventConsumeNavMovementData_Parms, OutMoveInputIntent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NewProp_OutMoveInputVelocity = { "OutMoveInputVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavMoverComponent_eventConsumeNavMovementData_Parms, OutMoveInputVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMoverComponent_eventConsumeNavMovementData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMoverComponent_eventConsumeNavMovementData_Parms), &Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NewProp_OutMoveInputIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NewProp_OutMoveInputVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNavMoverComponent, nullptr, "ConsumeNavMovementData", Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NavMoverComponent_eventConsumeNavMovementData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::NavMoverComponent_eventConsumeNavMovementData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMoverComponent::execConsumeNavMovementData)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutMoveInputIntent);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutMoveInputVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConsumeNavMovementData(Z_Param_Out_OutMoveInputIntent,Z_Param_Out_OutMoveInputVelocity);
	P_NATIVE_END;
}
// ********** End Class UNavMoverComponent Function ConsumeNavMovementData *************************

// ********** Begin Class UNavMoverComponent Function GetMaxSpeedForNavMovement ********************
struct Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics
{
	struct NavMoverComponent_eventGetMaxSpeedForNavMovement_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Get the max speed of the movement component */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "Get the max speed of the movement component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavMoverComponent_eventGetMaxSpeedForNavMovement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNavMoverComponent, nullptr, "GetMaxSpeedForNavMovement", Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::NavMoverComponent_eventGetMaxSpeedForNavMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::NavMoverComponent_eventGetMaxSpeedForNavMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMoverComponent::execGetMaxSpeedForNavMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxSpeedForNavMovement();
	P_NATIVE_END;
}
// ********** End Class UNavMoverComponent Function GetMaxSpeedForNavMovement **********************

// ********** Begin Class UNavMoverComponent Function GetVelocityForNavMovement ********************
struct Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics
{
	struct NavMoverComponent_eventGetVelocityForNavMovement_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Get the current velocity of the movement component */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "Get the current velocity of the movement component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavMoverComponent_eventGetVelocityForNavMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNavMoverComponent, nullptr, "GetVelocityForNavMovement", Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::NavMoverComponent_eventGetVelocityForNavMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::NavMoverComponent_eventGetVelocityForNavMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMoverComponent::execGetVelocityForNavMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVelocityForNavMovement();
	P_NATIVE_END;
}
// ********** End Class UNavMoverComponent Function GetVelocityForNavMovement **********************

// ********** Begin Class UNavMoverComponent Function IsSwimming ***********************************
struct Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics
{
	struct NavMoverComponent_eventIsSwimming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "Comment", "/** Returns true if currently swimming (moving through a fluid volume) */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "Returns true if currently swimming (moving through a fluid volume)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavMoverComponent_eventIsSwimming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavMoverComponent_eventIsSwimming_Parms), &Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNavMoverComponent, nullptr, "IsSwimming", Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::NavMoverComponent_eventIsSwimming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::NavMoverComponent_eventIsSwimming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavMoverComponent_IsSwimming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavMoverComponent_IsSwimming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavMoverComponent::execIsSwimming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSwimming();
	P_NATIVE_END;
}
// ********** End Class UNavMoverComponent Function IsSwimming *************************************

// ********** Begin Class UNavMoverComponent *******************************************************
void UNavMoverComponent::StaticRegisterNativesUNavMoverComponent()
{
	UClass* Class = UNavMoverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConsumeNavMovementData", &UNavMoverComponent::execConsumeNavMovementData },
		{ "GetMaxSpeedForNavMovement", &UNavMoverComponent::execGetMaxSpeedForNavMovement },
		{ "GetVelocityForNavMovement", &UNavMoverComponent::execGetVelocityForNavMovement },
		{ "IsSwimming", &UNavMoverComponent::execIsSwimming },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNavMoverComponent;
UClass* UNavMoverComponent::GetPrivateStaticClass()
{
	using TClass = UNavMoverComponent;
	if (!Z_Registration_Info_UClass_UNavMoverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NavMoverComponent"),
			Z_Registration_Info_UClass_UNavMoverComponent.InnerSingleton,
			StaticRegisterNativesUNavMoverComponent,
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
	return Z_Registration_Info_UClass_UNavMoverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UNavMoverComponent_NoRegister()
{
	return UNavMoverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNavMoverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * NavMoverComponent: Responsible for implementing INavMoveInterface with UMoverComponent so pathfinding and other forms of navigation movement work.\n * This component also caches the input given to it that is then consumed by the mover system.\n * Note: This component relies on the parent actor having a MoverComponent as well. By default this component only has a reference to MoverComponent meaning\n * we use other ways (such as gameplay tags for the active movement mode) to check for state rather than calling specific functions on the active MoverComponent.\n */" },
		{ "IncludePath", "DefaultMovementSet/NavMoverComponent.h" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "NavMoverComponent: Responsible for implementing INavMoveInterface with UMoverComponent so pathfinding and other forms of navigation movement work.\nThis component also caches the input given to it that is then consumed by the mover system.\nNote: This component relies on the parent actor having a MoverComponent as well. By default this component only has a reference to MoverComponent meaning\nwe use other ways (such as gameplay tags for the active movement mode) to check for state rather than calling specific functions on the active MoverComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[] = {
		{ "Category", "Nav Movement" },
		{ "Comment", "/** Properties that define how the component can move. */" },
		{ "DisplayName", "Movement Capabilities" },
		{ "Keywords", "Nav Agent" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "Properties that define how the component can move." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[] = {
		{ "Comment", "/** Expresses runtime state of character's movement. Put all temporal changes to movement properties here */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "Expresses runtime state of character's movement. Put all temporal changes to movement properties here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMovementProperties_MetaData[] = {
		{ "Category", "Nav Movement" },
		{ "Comment", "/** associated properties for nav movement */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "associated properties for nav movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathFollowingComp_MetaData[] = {
		{ "Comment", "/** object implementing IPathFollowingAgentInterface. Is private to control access to it.\n\x09 *\x09@see SetPathFollowingAgent, GetPathFollowingAgent */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "object implementing IPathFollowingAgentInterface. Is private to control access to it.\n    @see SetPathFollowingAgent, GetPathFollowingAgent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverComponent_MetaData[] = {
		{ "Comment", "/** Associated Movement component that will actually move the actor */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/NavMoverComponent.h" },
		{ "ToolTip", "Associated Movement component that will actually move the actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavAgentProps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavMovementProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathFollowingComp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MoverComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavMoverComponent_ConsumeNavMovementData, "ConsumeNavMovementData" }, // 2164773530
		{ &Z_Construct_UFunction_UNavMoverComponent_GetMaxSpeedForNavMovement, "GetMaxSpeedForNavMovement" }, // 26963417
		{ &Z_Construct_UFunction_UNavMoverComponent_GetVelocityForNavMovement, "GetVelocityForNavMovement" }, // 1423055762
		{ &Z_Construct_UFunction_UNavMoverComponent_IsSwimming, "IsSwimming" }, // 1475155396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavMoverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_NavAgentProps = { "NavAgentProps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMoverComponent, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavAgentProps_MetaData), NewProp_NavAgentProps_MetaData) }; // 1845052602
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMoverComponent, MovementState), Z_Construct_UScriptStruct_FMovementProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementState_MetaData), NewProp_MovementState_MetaData) }; // 188019305
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_NavMovementProperties = { "NavMovementProperties", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMoverComponent, NavMovementProperties), Z_Construct_UScriptStruct_FNavMovementProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMovementProperties_MetaData), NewProp_NavMovementProperties_MetaData) }; // 862414521
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_PathFollowingComp = { "PathFollowingComp", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMoverComponent, PathFollowingComp), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathFollowingComp_MetaData), NewProp_PathFollowingComp_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_MoverComponent = { "MoverComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavMoverComponent, MoverComponent), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverComponent_MetaData), NewProp_MoverComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavMoverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_NavAgentProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_MovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_NavMovementProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_PathFollowingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMoverComponent_Statics::NewProp_MoverComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavMoverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavMoverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavMoverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNavMoverComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavMovementInterface_NoRegister, (int32)VTABLE_OFFSET(UNavMoverComponent, INavMovementInterface), false },  // 514977244
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavMoverComponent_Statics::ClassParams = {
	&UNavMoverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavMoverComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavMoverComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavMoverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavMoverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavMoverComponent()
{
	if (!Z_Registration_Info_UClass_UNavMoverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavMoverComponent.OuterSingleton, Z_Construct_UClass_UNavMoverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavMoverComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavMoverComponent);
UNavMoverComponent::~UNavMoverComponent() {}
// ********** End Class UNavMoverComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavMoverComponent, UNavMoverComponent::StaticClass, TEXT("UNavMoverComponent"), &Z_Registration_Info_UClass_UNavMoverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavMoverComponent), 2887290321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h__Script_Mover_3532765567(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_NavMoverComponent_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
