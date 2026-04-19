// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePathedPhysicsMoverComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent();
MOVER_API UClass* Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsMoverComponent();
MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsMoverComponent_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPathedPhysicsMoverComponent Function GetDefaultPlaybackBehavior *********
struct Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics
{
	struct PathedPhysicsMoverComponent_eventGetDefaultPlaybackBehavior_Parms
	{
		EPathedPhysicsPlaybackBehavior ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMover" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathedPhysicsMoverComponent_eventGetDefaultPlaybackBehavior_Parms, ReturnValue), Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior, METADATA_PARAMS(0, nullptr) }; // 1344396160
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMoverComponent, nullptr, "GetDefaultPlaybackBehavior", Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::PathedPhysicsMoverComponent_eventGetDefaultPlaybackBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::PathedPhysicsMoverComponent_eventGetDefaultPlaybackBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMoverComponent::execGetDefaultPlaybackBehavior)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EPathedPhysicsPlaybackBehavior*)Z_Param__Result=P_THIS->GetDefaultPlaybackBehavior();
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMoverComponent Function GetDefaultPlaybackBehavior ***********

// ********** Begin Class UPathedPhysicsMoverComponent Function GetPathOriginTransform *************
struct Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics
{
	struct PathedPhysicsMoverComponent_eventGetPathOriginTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMover" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathedPhysicsMoverComponent_eventGetPathOriginTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMoverComponent, nullptr, "GetPathOriginTransform", Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::PathedPhysicsMoverComponent_eventGetPathOriginTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::PathedPhysicsMoverComponent_eventGetPathOriginTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMoverComponent::execGetPathOriginTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetPathOriginTransform();
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMoverComponent Function GetPathOriginTransform ***************

// ********** Begin Class UPathedPhysicsMoverComponent Function IsInReverse ************************
struct Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics
{
	struct PathedPhysicsMoverComponent_eventIsInReverse_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMover" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PathedPhysicsMoverComponent_eventIsInReverse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathedPhysicsMoverComponent_eventIsInReverse_Parms), &Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMoverComponent, nullptr, "IsInReverse", Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::PathedPhysicsMoverComponent_eventIsInReverse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::PathedPhysicsMoverComponent_eventIsInReverse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMoverComponent::execIsInReverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInReverse();
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMoverComponent Function IsInReverse **************************

// ********** Begin Class UPathedPhysicsMoverComponent Function IsJointEnabled *********************
struct Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics
{
	struct PathedPhysicsMoverComponent_eventIsJointEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMover" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PathedPhysicsMoverComponent_eventIsJointEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathedPhysicsMoverComponent_eventIsJointEnabled_Parms), &Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMoverComponent, nullptr, "IsJointEnabled", Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::PathedPhysicsMoverComponent_eventIsJointEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::PathedPhysicsMoverComponent_eventIsJointEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMoverComponent::execIsJointEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsJointEnabled();
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMoverComponent Function IsJointEnabled ***********************

// ********** Begin Class UPathedPhysicsMoverComponent Function IsMoving ***************************
struct Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics
{
	struct PathedPhysicsMoverComponent_eventIsMoving_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMover" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PathedPhysicsMoverComponent_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathedPhysicsMoverComponent_eventIsMoving_Parms), &Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMoverComponent, nullptr, "IsMoving", Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::PathedPhysicsMoverComponent_eventIsMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::PathedPhysicsMoverComponent_eventIsMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMoverComponent::execIsMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMoving();
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMoverComponent Function IsMoving *****************************

// ********** Begin Class UPathedPhysicsMoverComponent Function SetDefaultPlaybackBehavior *********
struct Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics
{
	struct PathedPhysicsMoverComponent_eventSetDefaultPlaybackBehavior_Parms
	{
		EPathedPhysicsPlaybackBehavior PlaybackBehavior;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMover" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::NewProp_PlaybackBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::NewProp_PlaybackBehavior = { "PlaybackBehavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathedPhysicsMoverComponent_eventSetDefaultPlaybackBehavior_Parms, PlaybackBehavior), Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior, METADATA_PARAMS(0, nullptr) }; // 1344396160
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::NewProp_PlaybackBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::NewProp_PlaybackBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMoverComponent, nullptr, "SetDefaultPlaybackBehavior", Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::PathedPhysicsMoverComponent_eventSetDefaultPlaybackBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::PathedPhysicsMoverComponent_eventSetDefaultPlaybackBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMoverComponent::execSetDefaultPlaybackBehavior)
{
	P_GET_ENUM(EPathedPhysicsPlaybackBehavior,Z_Param_PlaybackBehavior);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultPlaybackBehavior(EPathedPhysicsPlaybackBehavior(Z_Param_PlaybackBehavior));
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMoverComponent Function SetDefaultPlaybackBehavior ***********

// ********** Begin Class UPathedPhysicsMoverComponent Function SetIsMoving ************************
struct Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics
{
	struct PathedPhysicsMoverComponent_eventSetIsMoving_Parms
	{
		bool bShouldMove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMover" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::NewProp_bShouldMove_SetBit(void* Obj)
{
	((PathedPhysicsMoverComponent_eventSetIsMoving_Parms*)Obj)->bShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathedPhysicsMoverComponent_eventSetIsMoving_Parms), &Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::NewProp_bShouldMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMoverComponent, nullptr, "SetIsMoving", Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::PathedPhysicsMoverComponent_eventSetIsMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::PathedPhysicsMoverComponent_eventSetIsMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMoverComponent::execSetIsMoving)
{
	P_GET_UBOOL(Z_Param_bShouldMove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsMoving(Z_Param_bShouldMove);
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMoverComponent Function SetIsMoving **************************

// ********** Begin Class UPathedPhysicsMoverComponent Function SetPathOriginTransform *************
struct Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics
{
	struct PathedPhysicsMoverComponent_eventSetPathOriginTransform_Parms
	{
		FTransform NewPathOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMover" },
		{ "Comment", "/**\n\x09 * Changes path origin (i.e. the transform at the very beginning), causing the whole path to shift accordlingly.\n\x09 * The updated component is immediately teleported by the delta between the old and new origins, retaining all other physics state\n\x09 * If a more gradual origin shift is desired, it's up to the caller to set this with a small lerp delta each frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
		{ "ToolTip", "Changes path origin (i.e. the transform at the very beginning), causing the whole path to shift accordlingly.\nThe updated component is immediately teleported by the delta between the old and new origins, retaining all other physics state\nIf a more gradual origin shift is desired, it's up to the caller to set this with a small lerp delta each frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPathOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPathOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::NewProp_NewPathOrigin = { "NewPathOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathedPhysicsMoverComponent_eventSetPathOriginTransform_Parms, NewPathOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPathOrigin_MetaData), NewProp_NewPathOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::NewProp_NewPathOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMoverComponent, nullptr, "SetPathOriginTransform", Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::PathedPhysicsMoverComponent_eventSetPathOriginTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::PathedPhysicsMoverComponent_eventSetPathOriginTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMoverComponent::execSetPathOriginTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewPathOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPathOriginTransform(Z_Param_Out_NewPathOrigin);
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMoverComponent Function SetPathOriginTransform ***************

// ********** Begin Class UPathedPhysicsMoverComponent Function SetPlaybackDirection ***************
struct Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics
{
	struct PathedPhysicsMoverComponent_eventSetPlaybackDirection_Parms
	{
		bool bPlayForward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMover" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bPlayForward_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayForward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::NewProp_bPlayForward_SetBit(void* Obj)
{
	((PathedPhysicsMoverComponent_eventSetPlaybackDirection_Parms*)Obj)->bPlayForward = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::NewProp_bPlayForward = { "bPlayForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathedPhysicsMoverComponent_eventSetPlaybackDirection_Parms), &Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::NewProp_bPlayForward_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::NewProp_bPlayForward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMoverComponent, nullptr, "SetPlaybackDirection", Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::PathedPhysicsMoverComponent_eventSetPlaybackDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::PathedPhysicsMoverComponent_eventSetPlaybackDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMoverComponent::execSetPlaybackDirection)
{
	P_GET_UBOOL(Z_Param_bPlayForward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackDirection(Z_Param_bPlayForward);
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMoverComponent Function SetPlaybackDirection *****************

// ********** Begin Class UPathedPhysicsMoverComponent *********************************************
void UPathedPhysicsMoverComponent::StaticRegisterNativesUPathedPhysicsMoverComponent()
{
	UClass* Class = UPathedPhysicsMoverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultPlaybackBehavior", &UPathedPhysicsMoverComponent::execGetDefaultPlaybackBehavior },
		{ "GetPathOriginTransform", &UPathedPhysicsMoverComponent::execGetPathOriginTransform },
		{ "IsInReverse", &UPathedPhysicsMoverComponent::execIsInReverse },
		{ "IsJointEnabled", &UPathedPhysicsMoverComponent::execIsJointEnabled },
		{ "IsMoving", &UPathedPhysicsMoverComponent::execIsMoving },
		{ "SetDefaultPlaybackBehavior", &UPathedPhysicsMoverComponent::execSetDefaultPlaybackBehavior },
		{ "SetIsMoving", &UPathedPhysicsMoverComponent::execSetIsMoving },
		{ "SetPathOriginTransform", &UPathedPhysicsMoverComponent::execSetPathOriginTransform },
		{ "SetPlaybackDirection", &UPathedPhysicsMoverComponent::execSetPlaybackDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPathedPhysicsMoverComponent;
UClass* UPathedPhysicsMoverComponent::GetPrivateStaticClass()
{
	using TClass = UPathedPhysicsMoverComponent;
	if (!Z_Registration_Info_UClass_UPathedPhysicsMoverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PathedPhysicsMoverComponent"),
			Z_Registration_Info_UClass_UPathedPhysicsMoverComponent.InnerSingleton,
			StaticRegisterNativesUPathedPhysicsMoverComponent,
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
	return Z_Registration_Info_UClass_UPathedPhysicsMoverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPathedPhysicsMoverComponent_NoRegister()
{
	return UPathedPhysicsMoverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoMoveOnSpawn_MetaData[] = {
		{ "Category", "Pathed Movement" },
		{ "Comment", "/** Whether to start moving along the path immediately upon beginning play */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
		{ "ToolTip", "Whether to start moving along the path immediately upon beginning play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlaybackBehavior_MetaData[] = {
		{ "Category", "Pathed Movement" },
		{ "Comment", "/** Default follow behavior for the path as a whole */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
		{ "ToolTip", "Default follow behavior for the path as a whole" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementStartDelay_MetaData[] = {
		{ "Category", "Pathed Movement" },
		{ "Comment", "/** How long after being told to StartMoving() to delay before actually moving. Generally used to stagger the start times of a handful of autoplaying instances. */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
		{ "ToolTip", "How long after being told to StartMoving() to delay before actually moving. Generally used to stagger the start times of a handful of autoplaying instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathedPhysicsLiaison_MetaData[] = {
		{ "Comment", "//@todo DanH: Allow disabling the joint at this level regardless of what the movement mode wants?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
		{ "ToolTip", "@todo DanH: Allow disabling the joint at this level regardless of what the movement mode wants?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayProgressPreviewMesh_MetaData[] = {
		{ "Category", "Pathed Movement|Debug" },
		{ "Comment", "/** When true and the root component of the actor is a mesh, a duplicate mesh will be shown at PreviewMeshProgress along the starting/default path */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
		{ "ToolTip", "When true and the root component of the actor is a mesh, a duplicate mesh will be shown at PreviewMeshProgress along the starting/default path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshProgress_MetaData[] = {
		{ "Category", "Pathed Movement|Debug" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How far along the starting/default path to preview the controlled mesh */" },
		{ "EditCondition", "bDisplayProgressPreviewMesh" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
		{ "ToolTip", "How far along the starting/default path to preview the controlled mesh" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressPreviewMeshMaterial_MetaData[] = {
		{ "Category", "Pathed Movement|Debug" },
		{ "Comment", "/** The material to apply to the preview mesh displayed along the path at PreviewMeshProgress (leave empty for an exact duplicate) */" },
		{ "EditCondition", "bDisplayProgressPreviewMesh" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
		{ "ToolTip", "The material to apply to the preview mesh displayed along the path at PreviewMeshProgress (leave empty for an exact duplicate)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoMoveOnSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoMoveOnSpawn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPlaybackBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPlaybackBehavior;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementStartDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathedPhysicsLiaison;
	static void NewProp_bDisplayProgressPreviewMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayProgressPreviewMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewMeshProgress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressPreviewMeshMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugDrawComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetDefaultPlaybackBehavior, "GetDefaultPlaybackBehavior" }, // 3008533364
		{ &Z_Construct_UFunction_UPathedPhysicsMoverComponent_GetPathOriginTransform, "GetPathOriginTransform" }, // 2013905861
		{ &Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsInReverse, "IsInReverse" }, // 2399760647
		{ &Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsJointEnabled, "IsJointEnabled" }, // 1103089652
		{ &Z_Construct_UFunction_UPathedPhysicsMoverComponent_IsMoving, "IsMoving" }, // 2343760477
		{ &Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetDefaultPlaybackBehavior, "SetDefaultPlaybackBehavior" }, // 1192594164
		{ &Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetIsMoving, "SetIsMoving" }, // 707612079
		{ &Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPathOriginTransform, "SetPathOriginTransform" }, // 3723192742
		{ &Z_Construct_UFunction_UPathedPhysicsMoverComponent_SetPlaybackDirection, "SetPlaybackDirection" }, // 3410545122
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathedPhysicsMoverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_bAutoMoveOnSpawn_SetBit(void* Obj)
{
	((UPathedPhysicsMoverComponent*)Obj)->bAutoMoveOnSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_bAutoMoveOnSpawn = { "bAutoMoveOnSpawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathedPhysicsMoverComponent), &Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_bAutoMoveOnSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoMoveOnSpawn_MetaData), NewProp_bAutoMoveOnSpawn_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_DefaultPlaybackBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_DefaultPlaybackBehavior = { "DefaultPlaybackBehavior", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMoverComponent, DefaultPlaybackBehavior), Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlaybackBehavior_MetaData), NewProp_DefaultPlaybackBehavior_MetaData) }; // 1344396160
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_MovementStartDelay = { "MovementStartDelay", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMoverComponent, MovementStartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementStartDelay_MetaData), NewProp_MovementStartDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_PathedPhysicsLiaison = { "PathedPhysicsLiaison", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMoverComponent, PathedPhysicsLiaison), Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathedPhysicsLiaison_MetaData), NewProp_PathedPhysicsLiaison_MetaData) };
void Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_bDisplayProgressPreviewMesh_SetBit(void* Obj)
{
	((UPathedPhysicsMoverComponent*)Obj)->bDisplayProgressPreviewMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_bDisplayProgressPreviewMesh = { "bDisplayProgressPreviewMesh", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathedPhysicsMoverComponent), &Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_bDisplayProgressPreviewMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayProgressPreviewMesh_MetaData), NewProp_bDisplayProgressPreviewMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_PreviewMeshProgress = { "PreviewMeshProgress", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMoverComponent, PreviewMeshProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshProgress_MetaData), NewProp_PreviewMeshProgress_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_ProgressPreviewMeshMaterial = { "ProgressPreviewMeshMaterial", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMoverComponent, ProgressPreviewMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressPreviewMeshMaterial_MetaData), NewProp_ProgressPreviewMeshMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_DebugDrawComp = { "DebugDrawComp", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMoverComponent, DebugDrawComp), Z_Construct_UClass_UPathedPhysicsDebugDrawComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawComp_MetaData), NewProp_DebugDrawComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_bAutoMoveOnSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_DefaultPlaybackBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_DefaultPlaybackBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_MovementStartDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_PathedPhysicsLiaison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_bDisplayProgressPreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_PreviewMeshProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_ProgressPreviewMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::NewProp_DebugDrawComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoverComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::ClassParams = {
	&UPathedPhysicsMoverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPathedPhysicsMoverComponent()
{
	if (!Z_Registration_Info_UClass_UPathedPhysicsMoverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathedPhysicsMoverComponent.OuterSingleton, Z_Construct_UClass_UPathedPhysicsMoverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathedPhysicsMoverComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPathedPhysicsMoverComponent);
UPathedPhysicsMoverComponent::~UPathedPhysicsMoverComponent() {}
// ********** End Class UPathedPhysicsMoverComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathedPhysicsMoverComponent, UPathedPhysicsMoverComponent::StaticClass, TEXT("UPathedPhysicsMoverComponent"), &Z_Registration_Info_UClass_UPathedPhysicsMoverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathedPhysicsMoverComponent), 4275832367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h__Script_Mover_937337963(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedPhysicsMoverComponent_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
