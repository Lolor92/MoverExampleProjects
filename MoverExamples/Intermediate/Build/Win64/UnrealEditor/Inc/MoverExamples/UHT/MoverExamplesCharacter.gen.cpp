// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverExamplesCharacter.h"
#include "MoverSimulationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverExamplesCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UCharacterMoverComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverInputProducerInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UNavMoverComponent_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverInputCmdContext();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesCharacter();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMoverExamplesCharacter Function GetMoverComponent ***********************
struct Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics
{
	struct MoverExamplesCharacter_eventGetMoverComponent_Parms
	{
		UCharacterMoverComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Accessor for the actor's movement component\n" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "Accessor for the actor's movement component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverExamplesCharacter_eventGetMoverComponent_Parms, ReturnValue), Z_Construct_UClass_UCharacterMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMoverExamplesCharacter, nullptr, "GetMoverComponent", Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::MoverExamplesCharacter_eventGetMoverComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::MoverExamplesCharacter_eventGetMoverComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoverExamplesCharacter::execGetMoverComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterMoverComponent**)Z_Param__Result=P_THIS->GetMoverComponent();
	P_NATIVE_END;
}
// ********** End Class AMoverExamplesCharacter Function GetMoverComponent *************************

// ********** Begin Class AMoverExamplesCharacter Function OnProduceInputInBlueprint ***************
struct MoverExamplesCharacter_eventOnProduceInputInBlueprint_Parms
{
	float DeltaMs;
	FMoverInputCmdContext InputCmd;
	FMoverInputCmdContext ReturnValue;
};
static FName NAME_AMoverExamplesCharacter_OnProduceInputInBlueprint = FName(TEXT("OnProduceInputInBlueprint"));
FMoverInputCmdContext AMoverExamplesCharacter::OnProduceInputInBlueprint(float DeltaMs, FMoverInputCmdContext InputCmd)
{
	MoverExamplesCharacter_eventOnProduceInputInBlueprint_Parms Parms;
	Parms.DeltaMs=DeltaMs;
	Parms.InputCmd=InputCmd;
	UFunction* Func = FindFunctionChecked(NAME_AMoverExamplesCharacter_OnProduceInputInBlueprint);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Implement this event in Blueprints to author input for the next simulation frame. Consider also calling Parent event.\n" },
		{ "DisplayName", "On Produce Input" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ScriptName", "OnProduceInput" },
		{ "ToolTip", "Implement this event in Blueprints to author input for the next simulation frame. Consider also calling Parent event." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaMs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCmd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::NewProp_DeltaMs = { "DeltaMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverExamplesCharacter_eventOnProduceInputInBlueprint_Parms, DeltaMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::NewProp_InputCmd = { "InputCmd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverExamplesCharacter_eventOnProduceInputInBlueprint_Parms, InputCmd), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(0, nullptr) }; // 300648549
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverExamplesCharacter_eventOnProduceInputInBlueprint_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoverInputCmdContext, METADATA_PARAMS(0, nullptr) }; // 300648549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::NewProp_DeltaMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::NewProp_InputCmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMoverExamplesCharacter, nullptr, "OnProduceInputInBlueprint", Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::PropPointers), sizeof(MoverExamplesCharacter_eventOnProduceInputInBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MoverExamplesCharacter_eventOnProduceInputInBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AMoverExamplesCharacter Function OnProduceInputInBlueprint *****************

// ********** Begin Class AMoverExamplesCharacter Function RequestMoveByIntent *********************
struct Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics
{
	struct MoverExamplesCharacter_eventRequestMoveByIntent_Parms
	{
		FVector DesiredIntent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MoverExamples" },
		{ "Comment", "// Request the character starts moving with an intended directional magnitude. A length of 1 indicates maximum acceleration.\n" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "Request the character starts moving with an intended directional magnitude. A length of 1 indicates maximum acceleration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredIntent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredIntent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::NewProp_DesiredIntent = { "DesiredIntent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverExamplesCharacter_eventRequestMoveByIntent_Parms, DesiredIntent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredIntent_MetaData), NewProp_DesiredIntent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::NewProp_DesiredIntent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMoverExamplesCharacter, nullptr, "RequestMoveByIntent", Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::MoverExamplesCharacter_eventRequestMoveByIntent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::MoverExamplesCharacter_eventRequestMoveByIntent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoverExamplesCharacter::execRequestMoveByIntent)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DesiredIntent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestMoveByIntent(Z_Param_Out_DesiredIntent);
	P_NATIVE_END;
}
// ********** End Class AMoverExamplesCharacter Function RequestMoveByIntent ***********************

// ********** Begin Class AMoverExamplesCharacter Function RequestMoveByVelocity *******************
struct Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics
{
	struct MoverExamplesCharacter_eventRequestMoveByVelocity_Parms
	{
		FVector DesiredVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MoverExamples" },
		{ "Comment", "// Request the character starts moving with a desired velocity. This will be used in lieu of any other input.\n" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "Request the character starts moving with a desired velocity. This will be used in lieu of any other input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::NewProp_DesiredVelocity = { "DesiredVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverExamplesCharacter_eventRequestMoveByVelocity_Parms, DesiredVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredVelocity_MetaData), NewProp_DesiredVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::NewProp_DesiredVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMoverExamplesCharacter, nullptr, "RequestMoveByVelocity", Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::MoverExamplesCharacter_eventRequestMoveByVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::MoverExamplesCharacter_eventRequestMoveByVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMoverExamplesCharacter::execRequestMoveByVelocity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DesiredVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestMoveByVelocity(Z_Param_Out_DesiredVelocity);
	P_NATIVE_END;
}
// ********** End Class AMoverExamplesCharacter Function RequestMoveByVelocity *********************

// ********** Begin Class AMoverExamplesCharacter **************************************************
void AMoverExamplesCharacter::StaticRegisterNativesAMoverExamplesCharacter()
{
	UClass* Class = AMoverExamplesCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMoverComponent", &AMoverExamplesCharacter::execGetMoverComponent },
		{ "RequestMoveByIntent", &AMoverExamplesCharacter::execRequestMoveByIntent },
		{ "RequestMoveByVelocity", &AMoverExamplesCharacter::execRequestMoveByVelocity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMoverExamplesCharacter;
UClass* AMoverExamplesCharacter::GetPrivateStaticClass()
{
	using TClass = AMoverExamplesCharacter;
	if (!Z_Registration_Info_UClass_AMoverExamplesCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverExamplesCharacter"),
			Z_Registration_Info_UClass_AMoverExamplesCharacter.InnerSingleton,
			StaticRegisterNativesAMoverExamplesCharacter,
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
	return Z_Registration_Info_UClass_AMoverExamplesCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMoverExamplesCharacter_NoRegister()
{
	return AMoverExamplesCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMoverExamplesCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * MoverExamplesCharacter: the base pawn class used by the MoverExamples plugin. Handles coalescing of input events.\n * Cannot be instantiated on its own.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MoverExamplesCharacter.h" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "MoverExamplesCharacter: the base pawn class used by the MoverExamples plugin. Handles coalescing of input events.\nCannot be instantiated on its own." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlyInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Fly Input Action */" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "Fly Input Action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBaseRelativeMovement_MetaData[] = {
		{ "Category", "MoverExamples" },
		{ "Comment", "// Whether or not we author our movement inputs relative to whatever base we're standing on, or leave them in world space. Only applies if standing on a base of some sort.\n" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "Whether or not we author our movement inputs relative to whatever base we're standing on, or leave them in world space. Only applies if standing on a base of some sort." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientRotationToMovement_MetaData[] = {
		{ "Category", "MoverExamples" },
		{ "Comment", "/**\n\x09 * If true, rotate the Character toward the direction the actor is moving\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "If true, rotate the Character toward the direction the actor is moving" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainLastInputOrientation_MetaData[] = {
		{ "Category", "MoverExamples" },
		{ "Comment", "/**\n\x09 * If true, the actor will continue orienting towards the last intended orientation (from input) even after movement intent input has ceased.\n\x09 * This makes the character finish orienting after a quick stick flick from the player.  If false, character will not turn without input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "If true, the actor will continue orienting towards the last intended orientation (from input) even after movement intent input has ceased.\nThis makes the character finish orienting after a quick stick flick from the player.  If false, character will not turn without input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMotionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMoverComponent_MetaData[] = {
		{ "Category", "Nav Movement" },
		{ "Comment", "/** Holds functionality for nav movement data and functions */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverExamplesCharacter.h" },
		{ "ToolTip", "Holds functionality for nav movement data and functions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlyInputAction;
	static void NewProp_bUseBaseRelativeMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBaseRelativeMovement;
	static void NewProp_bOrientRotationToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientRotationToMovement;
	static void NewProp_bMaintainLastInputOrientation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainLastInputOrientation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMotionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavMoverComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoverExamplesCharacter_GetMoverComponent, "GetMoverComponent" }, // 3609813468
		{ &Z_Construct_UFunction_AMoverExamplesCharacter_OnProduceInputInBlueprint, "OnProduceInputInBlueprint" }, // 698011754
		{ &Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByIntent, "RequestMoveByIntent" }, // 1778542151
		{ &Z_Construct_UFunction_AMoverExamplesCharacter_RequestMoveByVelocity, "RequestMoveByVelocity" }, // 2508690934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoverExamplesCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_MoveInputAction = { "MoveInputAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoverExamplesCharacter, MoveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputAction_MetaData), NewProp_MoveInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_LookInputAction = { "LookInputAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoverExamplesCharacter, LookInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookInputAction_MetaData), NewProp_LookInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_JumpInputAction = { "JumpInputAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoverExamplesCharacter, JumpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpInputAction_MetaData), NewProp_JumpInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_FlyInputAction = { "FlyInputAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoverExamplesCharacter, FlyInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlyInputAction_MetaData), NewProp_FlyInputAction_MetaData) };
void Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bUseBaseRelativeMovement_SetBit(void* Obj)
{
	((AMoverExamplesCharacter*)Obj)->bUseBaseRelativeMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bUseBaseRelativeMovement = { "bUseBaseRelativeMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMoverExamplesCharacter), &Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bUseBaseRelativeMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBaseRelativeMovement_MetaData), NewProp_bUseBaseRelativeMovement_MetaData) };
void Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bOrientRotationToMovement_SetBit(void* Obj)
{
	((AMoverExamplesCharacter*)Obj)->bOrientRotationToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bOrientRotationToMovement = { "bOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMoverExamplesCharacter), &Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bOrientRotationToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientRotationToMovement_MetaData), NewProp_bOrientRotationToMovement_MetaData) };
void Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bMaintainLastInputOrientation_SetBit(void* Obj)
{
	((AMoverExamplesCharacter*)Obj)->bMaintainLastInputOrientation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bMaintainLastInputOrientation = { "bMaintainLastInputOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMoverExamplesCharacter), &Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bMaintainLastInputOrientation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainLastInputOrientation_MetaData), NewProp_bMaintainLastInputOrientation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_CharacterMotionComponent = { "CharacterMotionComponent", nullptr, (EPropertyFlags)0x01240800000a201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoverExamplesCharacter, CharacterMotionComponent), Z_Construct_UClass_UCharacterMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMotionComponent_MetaData), NewProp_CharacterMotionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_NavMoverComponent = { "NavMoverComponent", nullptr, (EPropertyFlags)0x01240800000a201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoverExamplesCharacter, NavMoverComponent), Z_Construct_UClass_UNavMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMoverComponent_MetaData), NewProp_NavMoverComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoverExamplesCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_MoveInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_LookInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_JumpInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_FlyInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bUseBaseRelativeMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bOrientRotationToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_bMaintainLastInputOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_CharacterMotionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoverExamplesCharacter_Statics::NewProp_NavMoverComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoverExamplesCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoverExamplesCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoverExamplesCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMoverInputProducerInterface_NoRegister, (int32)VTABLE_OFFSET(AMoverExamplesCharacter, IMoverInputProducerInterface), false },  // 3428663988
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoverExamplesCharacter_Statics::ClassParams = {
	&AMoverExamplesCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMoverExamplesCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoverExamplesCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoverExamplesCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoverExamplesCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoverExamplesCharacter()
{
	if (!Z_Registration_Info_UClass_AMoverExamplesCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoverExamplesCharacter.OuterSingleton, Z_Construct_UClass_AMoverExamplesCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoverExamplesCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoverExamplesCharacter);
AMoverExamplesCharacter::~AMoverExamplesCharacter() {}
// ********** End Class AMoverExamplesCharacter ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h__Script_MoverExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoverExamplesCharacter, AMoverExamplesCharacter::StaticClass, TEXT("AMoverExamplesCharacter"), &Z_Registration_Info_UClass_AMoverExamplesCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoverExamplesCharacter), 671555657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h__Script_MoverExamples_3155499512(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesCharacter_h__Script_MoverExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
