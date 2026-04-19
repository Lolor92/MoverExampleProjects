// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/CharacterMoverComponent.h"
#include "MoverSimulationTypes.h"
#include "MoverTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterMoverComponent() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UCharacterMoverComponent();
MOVER_API UClass* Z_Construct_UClass_UCharacterMoverComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EStanceMode();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverInputCmdContext();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTimeStep();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FMover_OnStanceChanged ************************************************
struct Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics
{
	struct _Script_Mover_eventMover_OnStanceChanged_Parms
	{
		EStanceMode OldStance;
		EStanceMode NewStance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Fires when a stance is changed, if stance handling is enabled (see @SetHandleStanceChanges)\n * Note: If a stance was just Activated it will fire with an invalid OldStance\n *\x09\x09 If a stance was just Deactivated it will fire with an invalid NewStance\n */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Fires when a stance is changed, if stance handling is enabled (see @SetHandleStanceChanges)\nNote: If a stance was just Activated it will fire with an invalid OldStance\n             If a stance was just Deactivated it will fire with an invalid NewStance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldStance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::NewProp_OldStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::NewProp_OldStance = { "OldStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnStanceChanged_Parms, OldStance), Z_Construct_UEnum_Mover_EStanceMode, METADATA_PARAMS(0, nullptr) }; // 511421531
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::NewProp_NewStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::NewProp_NewStance = { "NewStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mover_eventMover_OnStanceChanged_Parms, NewStance), Z_Construct_UEnum_Mover_EStanceMode, METADATA_PARAMS(0, nullptr) }; // 511421531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::NewProp_OldStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::NewProp_OldStance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::NewProp_NewStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::NewProp_NewStance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mover, nullptr, "Mover_OnStanceChanged__DelegateSignature", Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::_Script_Mover_eventMover_OnStanceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::_Script_Mover_eventMover_OnStanceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMover_OnStanceChanged_DelegateWrapper(const FMulticastScriptDelegate& Mover_OnStanceChanged, EStanceMode OldStance, EStanceMode NewStance)
{
	struct _Script_Mover_eventMover_OnStanceChanged_Parms
	{
		EStanceMode OldStance;
		EStanceMode NewStance;
	};
	_Script_Mover_eventMover_OnStanceChanged_Parms Parms;
	Parms.OldStance=OldStance;
	Parms.NewStance=NewStance;
	Mover_OnStanceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMover_OnStanceChanged **************************************************

// ********** Begin Class UCharacterMoverComponent Function CanActorJump ***************************
struct Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics
{
	struct CharacterMoverComponent_eventCanActorJump_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Can this Actor jump?\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Can this Actor jump?" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventCanActorJump_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventCanActorJump_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "CanActorJump", Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::CharacterMoverComponent_eventCanActorJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::CharacterMoverComponent_eventCanActorJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execCanActorJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanActorJump();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function CanActorJump *****************************

// ********** Begin Class UCharacterMoverComponent Function CanCrouch ******************************
struct Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics
{
	struct CharacterMoverComponent_eventCanCrouch_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Whether this actor can currently crouch or not \n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Whether this actor can currently crouch or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventCanCrouch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventCanCrouch_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "CanCrouch", Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::CharacterMoverComponent_eventCanCrouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::CharacterMoverComponent_eventCanCrouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execCanCrouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanCrouch();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function CanCrouch ********************************

// ********** Begin Class UCharacterMoverComponent Function Crouch *********************************
struct Z_Construct_UFunction_UCharacterMoverComponent_Crouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Perform crouch on actor\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Perform crouch on actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_Crouch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "Crouch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_Crouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_Crouch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_Crouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_Crouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execCrouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Crouch();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function Crouch ***********************************

// ********** Begin Class UCharacterMoverComponent Function GetHandleJump **************************
struct Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics
{
	struct CharacterMoverComponent_eventGetHandleJump_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "// Returns whether this component is tasked with handling jump input or not\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Returns whether this component is tasked with handling jump input or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventGetHandleJump_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventGetHandleJump_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "GetHandleJump", Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::CharacterMoverComponent_eventGetHandleJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::CharacterMoverComponent_eventGetHandleJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execGetHandleJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHandleJump();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function GetHandleJump ****************************

// ********** Begin Class UCharacterMoverComponent Function GetHandleStanceChanges *****************
struct Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics
{
	struct CharacterMoverComponent_eventGetHandleStanceChanges_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "// Returns whether this component is tasked with handling character stance changes, including crouching\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Returns whether this component is tasked with handling character stance changes, including crouching" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventGetHandleStanceChanges_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventGetHandleStanceChanges_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "GetHandleStanceChanges", Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::CharacterMoverComponent_eventGetHandleStanceChanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::CharacterMoverComponent_eventGetHandleStanceChanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execGetHandleStanceChanges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHandleStanceChanges();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function GetHandleStanceChanges *******************

// ********** Begin Class UCharacterMoverComponent Function IsAirborne *****************************
struct Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics
{
	struct CharacterMoverComponent_eventIsAirborne_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Is this actor in a airborne state? (e.g. Flying, Falling)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Is this actor in a airborne state? (e.g. Flying, Falling)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventIsAirborne_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventIsAirborne_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "IsAirborne", Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::CharacterMoverComponent_eventIsAirborne_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::CharacterMoverComponent_eventIsAirborne_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execIsAirborne)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAirborne();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function IsAirborne *******************************

// ********** Begin Class UCharacterMoverComponent Function IsCrouching ****************************
struct Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics
{
	struct CharacterMoverComponent_eventIsCrouching_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns true if currently crouching */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Returns true if currently crouching" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventIsCrouching_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventIsCrouching_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "IsCrouching", Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::CharacterMoverComponent_eventIsCrouching_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::CharacterMoverComponent_eventIsCrouching_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execIsCrouching)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCrouching();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function IsCrouching ******************************

// ********** Begin Class UCharacterMoverComponent Function IsFalling ******************************
struct Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics
{
	struct CharacterMoverComponent_eventIsFalling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Is this actor in a falling state? Note that this includes upwards motion induced by jumping.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Is this actor in a falling state? Note that this includes upwards motion induced by jumping." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventIsFalling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventIsFalling_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "IsFalling", Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::CharacterMoverComponent_eventIsFalling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::CharacterMoverComponent_eventIsFalling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_IsFalling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_IsFalling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execIsFalling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFalling();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function IsFalling ********************************

// ********** Begin Class UCharacterMoverComponent Function IsFlying *******************************
struct Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics
{
	struct CharacterMoverComponent_eventIsFlying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns true if currently flying (moving through a non-fluid volume without resting on the ground) */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Returns true if currently flying (moving through a non-fluid volume without resting on the ground)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventIsFlying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventIsFlying_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "IsFlying", Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::CharacterMoverComponent_eventIsFlying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::CharacterMoverComponent_eventIsFlying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_IsFlying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_IsFlying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execIsFlying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFlying();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function IsFlying *********************************

// ********** Begin Class UCharacterMoverComponent Function IsOnGround *****************************
struct Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics
{
	struct CharacterMoverComponent_eventIsOnGround_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Is this actor in a grounded state? (e.g. Walking)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Is this actor in a grounded state? (e.g. Walking)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventIsOnGround_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventIsOnGround_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "IsOnGround", Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::CharacterMoverComponent_eventIsOnGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::CharacterMoverComponent_eventIsOnGround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execIsOnGround)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOnGround();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function IsOnGround *******************************

// ********** Begin Class UCharacterMoverComponent Function IsSlopeSliding *************************
struct Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics
{
	struct CharacterMoverComponent_eventIsSlopeSliding_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Is this actor sliding on an unwalkable slope\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Is this actor sliding on an unwalkable slope" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventIsSlopeSliding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventIsSlopeSliding_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "IsSlopeSliding", Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::CharacterMoverComponent_eventIsSlopeSliding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::CharacterMoverComponent_eventIsSlopeSliding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execIsSlopeSliding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSlopeSliding();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function IsSlopeSliding ***************************

// ********** Begin Class UCharacterMoverComponent Function IsSwimming *****************************
struct Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics
{
	struct CharacterMoverComponent_eventIsSwimming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Is this actor in a Swimming state? (e.g. Swimming)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Is this actor in a Swimming state? (e.g. Swimming)" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventIsSwimming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventIsSwimming_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "IsSwimming", Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::CharacterMoverComponent_eventIsSwimming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::CharacterMoverComponent_eventIsSwimming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execIsSwimming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSwimming();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function IsSwimming *******************************

// ********** Begin Class UCharacterMoverComponent Function Jump ***********************************
struct Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics
{
	struct CharacterMoverComponent_eventJump_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Perform jump on actor\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Perform jump on actor" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventJump_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventJump_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "Jump", Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::CharacterMoverComponent_eventJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::CharacterMoverComponent_eventJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Jump();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function Jump *************************************

// ********** Begin Class UCharacterMoverComponent Function OnMoverPreSimulationTick ***************
struct Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics
{
	struct CharacterMoverComponent_eventOnMoverPreSimulationTick_Parms
	{
		FMoverTimeStep TimeStep;
		FMoverInputCmdContext InputCmd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputCmd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCmd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMoverComponent_eventOnMoverPreSimulationTick_Parms, TimeStep), Z_Construct_UScriptStruct_FMoverTimeStep, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) }; // 2334791403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::NewProp_InputCmd = { "InputCmd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMoverComponent_eventOnMoverPreSimulationTick_Parms, InputCmd), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputCmd_MetaData), NewProp_InputCmd_MetaData) }; // 300648549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::NewProp_TimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::NewProp_InputCmd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "OnMoverPreSimulationTick", Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::CharacterMoverComponent_eventOnMoverPreSimulationTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::CharacterMoverComponent_eventOnMoverPreSimulationTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execOnMoverPreSimulationTick)
{
	P_GET_STRUCT_REF(FMoverTimeStep,Z_Param_Out_TimeStep);
	P_GET_STRUCT_REF(FMoverInputCmdContext,Z_Param_Out_InputCmd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoverPreSimulationTick(Z_Param_Out_TimeStep,Z_Param_Out_InputCmd);
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function OnMoverPreSimulationTick *****************

// ********** Begin Class UCharacterMoverComponent Function SetHandleJump **************************
struct Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics
{
	struct CharacterMoverComponent_eventSetHandleJump_Parms
	{
		bool bInHandleJump;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "// If true, this component will handle default character inputs for jumping\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "If true, this component will handle default character inputs for jumping" },
	};
#endif // WITH_METADATA
	static void NewProp_bInHandleJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHandleJump;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::NewProp_bInHandleJump_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventSetHandleJump_Parms*)Obj)->bInHandleJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::NewProp_bInHandleJump = { "bInHandleJump", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventSetHandleJump_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::NewProp_bInHandleJump_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::NewProp_bInHandleJump,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "SetHandleJump", Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::CharacterMoverComponent_eventSetHandleJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::CharacterMoverComponent_eventSetHandleJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execSetHandleJump)
{
	P_GET_UBOOL(Z_Param_bInHandleJump);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandleJump(Z_Param_bInHandleJump);
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function SetHandleJump ****************************

// ********** Begin Class UCharacterMoverComponent Function SetHandleStanceChanges *****************
struct Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics
{
	struct CharacterMoverComponent_eventSetHandleStanceChanges_Parms
	{
		bool bInHandleStanceChanges;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "// If true, this component will process stancing changes and crouching inputs\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "If true, this component will process stancing changes and crouching inputs" },
	};
#endif // WITH_METADATA
	static void NewProp_bInHandleStanceChanges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHandleStanceChanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::NewProp_bInHandleStanceChanges_SetBit(void* Obj)
{
	((CharacterMoverComponent_eventSetHandleStanceChanges_Parms*)Obj)->bInHandleStanceChanges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::NewProp_bInHandleStanceChanges = { "bInHandleStanceChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterMoverComponent_eventSetHandleStanceChanges_Parms), &Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::NewProp_bInHandleStanceChanges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::NewProp_bInHandleStanceChanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "SetHandleStanceChanges", Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::CharacterMoverComponent_eventSetHandleStanceChanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::CharacterMoverComponent_eventSetHandleStanceChanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execSetHandleStanceChanges)
{
	P_GET_UBOOL(Z_Param_bInHandleStanceChanges);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandleStanceChanges(Z_Param_bInHandleStanceChanges);
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function SetHandleStanceChanges *******************

// ********** Begin Class UCharacterMoverComponent Function UnCrouch *******************************
struct Z_Construct_UFunction_UCharacterMoverComponent_UnCrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Perform uncrouch on actor\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Perform uncrouch on actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMoverComponent_UnCrouch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterMoverComponent, nullptr, "UnCrouch", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMoverComponent_UnCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMoverComponent_UnCrouch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterMoverComponent_UnCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMoverComponent_UnCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterMoverComponent::execUnCrouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnCrouch();
	P_NATIVE_END;
}
// ********** End Class UCharacterMoverComponent Function UnCrouch *********************************

// ********** Begin Class UCharacterMoverComponent *************************************************
void UCharacterMoverComponent::StaticRegisterNativesUCharacterMoverComponent()
{
	UClass* Class = UCharacterMoverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanActorJump", &UCharacterMoverComponent::execCanActorJump },
		{ "CanCrouch", &UCharacterMoverComponent::execCanCrouch },
		{ "Crouch", &UCharacterMoverComponent::execCrouch },
		{ "GetHandleJump", &UCharacterMoverComponent::execGetHandleJump },
		{ "GetHandleStanceChanges", &UCharacterMoverComponent::execGetHandleStanceChanges },
		{ "IsAirborne", &UCharacterMoverComponent::execIsAirborne },
		{ "IsCrouching", &UCharacterMoverComponent::execIsCrouching },
		{ "IsFalling", &UCharacterMoverComponent::execIsFalling },
		{ "IsFlying", &UCharacterMoverComponent::execIsFlying },
		{ "IsOnGround", &UCharacterMoverComponent::execIsOnGround },
		{ "IsSlopeSliding", &UCharacterMoverComponent::execIsSlopeSliding },
		{ "IsSwimming", &UCharacterMoverComponent::execIsSwimming },
		{ "Jump", &UCharacterMoverComponent::execJump },
		{ "OnMoverPreSimulationTick", &UCharacterMoverComponent::execOnMoverPreSimulationTick },
		{ "SetHandleJump", &UCharacterMoverComponent::execSetHandleJump },
		{ "SetHandleStanceChanges", &UCharacterMoverComponent::execSetHandleStanceChanges },
		{ "UnCrouch", &UCharacterMoverComponent::execUnCrouch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterMoverComponent;
UClass* UCharacterMoverComponent::GetPrivateStaticClass()
{
	using TClass = UCharacterMoverComponent;
	if (!Z_Registration_Info_UClass_UCharacterMoverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterMoverComponent"),
			Z_Registration_Info_UClass_UCharacterMoverComponent.InnerSingleton,
			StaticRegisterNativesUCharacterMoverComponent,
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
	return Z_Registration_Info_UClass_UCharacterMoverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterMoverComponent_NoRegister()
{
	return UCharacterMoverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterMoverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "DefaultMovementSet/CharacterMoverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStanceChanged_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Broadcast when this actor changes stances.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Broadcast when this actor changes stances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToCrouch_MetaData[] = {
		{ "Category", "Mover|Crouch" },
		{ "Comment", "/** If true, try to crouch (or keep crouching) on next update. If false, try to stop crouching on next update. */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "If true, try to crouch (or keep crouching) on next update. If false, try to stop crouching on next update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandleJump_MetaData[] = {
		{ "BlueprintGetter", "GetHandleJump" },
		{ "BlueprintSetter", "SetHandleJump" },
		{ "Category", "Mover|Character" },
		{ "Comment", "// Whether this component should directly handle jumping or not \n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Whether this component should directly handle jumping or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandleStanceChanges_MetaData[] = {
		{ "BlueprintGetter", "GetHandleStanceChanges" },
		{ "BlueprintSetter", "SetHandleStanceChanges" },
		{ "Category", "Mover|Character" },
		{ "Comment", "// Whether this component should directly handle stance changes, including crouching input\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/CharacterMoverComponent.h" },
		{ "ToolTip", "Whether this component should directly handle stance changes, including crouching input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStanceChanged;
	static void NewProp_bWantsToCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToCrouch;
	static void NewProp_bHandleJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleJump;
	static void NewProp_bHandleStanceChanges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleStanceChanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterMoverComponent_CanActorJump, "CanActorJump" }, // 2209672038
		{ &Z_Construct_UFunction_UCharacterMoverComponent_CanCrouch, "CanCrouch" }, // 309099598
		{ &Z_Construct_UFunction_UCharacterMoverComponent_Crouch, "Crouch" }, // 299433339
		{ &Z_Construct_UFunction_UCharacterMoverComponent_GetHandleJump, "GetHandleJump" }, // 3820753795
		{ &Z_Construct_UFunction_UCharacterMoverComponent_GetHandleStanceChanges, "GetHandleStanceChanges" }, // 2650916445
		{ &Z_Construct_UFunction_UCharacterMoverComponent_IsAirborne, "IsAirborne" }, // 2830834933
		{ &Z_Construct_UFunction_UCharacterMoverComponent_IsCrouching, "IsCrouching" }, // 1750084043
		{ &Z_Construct_UFunction_UCharacterMoverComponent_IsFalling, "IsFalling" }, // 3009495122
		{ &Z_Construct_UFunction_UCharacterMoverComponent_IsFlying, "IsFlying" }, // 4232922371
		{ &Z_Construct_UFunction_UCharacterMoverComponent_IsOnGround, "IsOnGround" }, // 3592431155
		{ &Z_Construct_UFunction_UCharacterMoverComponent_IsSlopeSliding, "IsSlopeSliding" }, // 1235646949
		{ &Z_Construct_UFunction_UCharacterMoverComponent_IsSwimming, "IsSwimming" }, // 678775685
		{ &Z_Construct_UFunction_UCharacterMoverComponent_Jump, "Jump" }, // 3346305105
		{ &Z_Construct_UFunction_UCharacterMoverComponent_OnMoverPreSimulationTick, "OnMoverPreSimulationTick" }, // 3631388204
		{ &Z_Construct_UFunction_UCharacterMoverComponent_SetHandleJump, "SetHandleJump" }, // 94756097
		{ &Z_Construct_UFunction_UCharacterMoverComponent_SetHandleStanceChanges, "SetHandleStanceChanges" }, // 2280896983
		{ &Z_Construct_UFunction_UCharacterMoverComponent_UnCrouch, "UnCrouch" }, // 549670454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMoverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_OnStanceChanged = { "OnStanceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterMoverComponent, OnStanceChanged), Z_Construct_UDelegateFunction_Mover_Mover_OnStanceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStanceChanged_MetaData), NewProp_OnStanceChanged_MetaData) }; // 1401953832
void Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bWantsToCrouch_SetBit(void* Obj)
{
	((UCharacterMoverComponent*)Obj)->bWantsToCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bWantsToCrouch = { "bWantsToCrouch", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMoverComponent), &Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bWantsToCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToCrouch_MetaData), NewProp_bWantsToCrouch_MetaData) };
void Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bHandleJump_SetBit(void* Obj)
{
	((UCharacterMoverComponent*)Obj)->bHandleJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bHandleJump = { "bHandleJump", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMoverComponent), &Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bHandleJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandleJump_MetaData), NewProp_bHandleJump_MetaData) };
void Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bHandleStanceChanges_SetBit(void* Obj)
{
	((UCharacterMoverComponent*)Obj)->bHandleStanceChanges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bHandleStanceChanges = { "bHandleStanceChanges", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCharacterMoverComponent), &Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bHandleStanceChanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandleStanceChanges_MetaData), NewProp_bHandleStanceChanges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterMoverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_OnStanceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bWantsToCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bHandleJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMoverComponent_Statics::NewProp_bHandleStanceChanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMoverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterMoverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoverComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMoverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMoverComponent_Statics::ClassParams = {
	&UCharacterMoverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterMoverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMoverComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMoverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterMoverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterMoverComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterMoverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMoverComponent.OuterSingleton, Z_Construct_UClass_UCharacterMoverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterMoverComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMoverComponent);
UCharacterMoverComponent::~UCharacterMoverComponent() {}
// ********** End Class UCharacterMoverComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMoverComponent, UCharacterMoverComponent::StaticClass, TEXT("UCharacterMoverComponent"), &Z_Registration_Info_UClass_UCharacterMoverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMoverComponent), 1648684257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h__Script_Mover_3790665196(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_CharacterMoverComponent_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
