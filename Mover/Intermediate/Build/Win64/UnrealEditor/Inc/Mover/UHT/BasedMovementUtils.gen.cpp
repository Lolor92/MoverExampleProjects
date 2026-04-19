// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/BasedMovementUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasedMovementUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
MOVER_API UClass* Z_Construct_UClass_UBasedMovementUtils();
MOVER_API UClass* Z_Construct_UClass_UBasedMovementUtils_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FRelativeBaseInfo();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRelativeBaseInfo *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRelativeBaseInfo;
class UScriptStruct* FRelativeBaseInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRelativeBaseInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRelativeBaseInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRelativeBaseInfo, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("RelativeBaseInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FRelativeBaseInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data about the object a Mover actor is basing its movement on, such as when standing on a moving platform */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Data about the object a Mover actor is basing its movement on, such as when standing on a moving platform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Component we are moving relative to */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Component we are moving relative to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Bone name on component, for skeletal meshes. NAME_None if not a skeletal mesh or if bone is invalid. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Bone name on component, for skeletal meshes. NAME_None if not a skeletal mesh or if bone is invalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Last captured worldspace location of MovementBase / Bone */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Last captured worldspace location of MovementBase / Bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Last captured worldspace orientation of MovementBase / Bone */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Last captured worldspace orientation of MovementBase / Bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactLocalPosition_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Last captured location of the tethering point where the Mover actor is \"attached\", relative to the base. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Last captured location of the tethering point where the Mover actor is \"attached\", relative to the base." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContactLocalPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRelativeBaseInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x00140000000a080d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRelativeBaseInfo, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRelativeBaseInfo, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRelativeBaseInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRelativeBaseInfo, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_ContactLocalPosition = { "ContactLocalPosition", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRelativeBaseInfo, ContactLocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactLocalPosition_MetaData), NewProp_ContactLocalPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewProp_ContactLocalPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"RelativeBaseInfo",
	Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::PropPointers),
	sizeof(FRelativeBaseInfo),
	alignof(FRelativeBaseInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRelativeBaseInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FRelativeBaseInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRelativeBaseInfo.InnerSingleton, Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRelativeBaseInfo.InnerSingleton;
}
// ********** End ScriptStruct FRelativeBaseInfo ***************************************************

// ********** Begin Class UBasedMovementUtils Function GetMovementBaseTransform ********************
struct Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics
{
	struct BasedMovementUtils_eventGetMovementBaseTransform_Parms
	{
		const UPrimitiveComponent* MovementBase;
		FName BoneName;
		FVector OutLocation;
		FQuat OutQuat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Get the transform (local-to-world) for the given MovementBase, optionally at the location of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Get the transform (local-to-world) for the given MovementBase, optionally at the location of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutQuat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventGetMovementBaseTransform_Parms, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventGetMovementBaseTransform_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventGetMovementBaseTransform_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_OutQuat = { "OutQuat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventGetMovementBaseTransform_Parms, OutQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasedMovementUtils_eventGetMovementBaseTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasedMovementUtils_eventGetMovementBaseTransform_Parms), &Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_OutLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_OutQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "GetMovementBaseTransform", Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::BasedMovementUtils_eventGetMovementBaseTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::BasedMovementUtils_eventGetMovementBaseTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execGetMovementBaseTransform)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MovementBase);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutQuat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBasedMovementUtils::GetMovementBaseTransform(Z_Param_MovementBase,Z_Param_BoneName,Z_Param_Out_OutLocation,Z_Param_Out_OutQuat);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function GetMovementBaseTransform **********************

// ********** Begin Class UBasedMovementUtils Function IsADynamicBase ******************************
struct Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics
{
	struct BasedMovementUtils_eventIsADynamicBase_Parms
	{
		const UPrimitiveComponent* MovementBase;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Determine whether MovementBase can possibly move. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Determine whether MovementBase can possibly move." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventIsADynamicBase_Parms, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
void Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasedMovementUtils_eventIsADynamicBase_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasedMovementUtils_eventIsADynamicBase_Parms), &Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "IsADynamicBase", Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::BasedMovementUtils_eventIsADynamicBase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::BasedMovementUtils_eventIsADynamicBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execIsADynamicBase)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MovementBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBasedMovementUtils::IsADynamicBase(Z_Param_MovementBase);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function IsADynamicBase ********************************

// ********** Begin Class UBasedMovementUtils Function IsBaseSimulatingPhysics *********************
struct Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics
{
	struct BasedMovementUtils_eventIsBaseSimulatingPhysics_Parms
	{
		const UPrimitiveComponent* MovementBase;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Determine whether MovementBase's movement is performed via physics. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Determine whether MovementBase's movement is performed via physics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventIsBaseSimulatingPhysics_Parms, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
void Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasedMovementUtils_eventIsBaseSimulatingPhysics_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasedMovementUtils_eventIsBaseSimulatingPhysics_Parms), &Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "IsBaseSimulatingPhysics", Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::BasedMovementUtils_eventIsBaseSimulatingPhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::BasedMovementUtils_eventIsBaseSimulatingPhysics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execIsBaseSimulatingPhysics)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MovementBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBasedMovementUtils::IsBaseSimulatingPhysics(Z_Param_MovementBase);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function IsBaseSimulatingPhysics ***********************

// ********** Begin Class UBasedMovementUtils Function TransformBasedDirectionToWorld **************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics
{
	struct BasedMovementUtils_eventTransformBasedDirectionToWorld_Parms
	{
		const UPrimitiveComponent* MovementBase;
		FName BoneName;
		FVector LocalDirection;
		FVector OutDirectionWorldSpace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a local direction to a world direction for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a local direction to a world direction for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirectionWorldSpace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedDirectionToWorld_Parms, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedDirectionToWorld_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_LocalDirection = { "LocalDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedDirectionToWorld_Parms, LocalDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_OutDirectionWorldSpace = { "OutDirectionWorldSpace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedDirectionToWorld_Parms, OutDirectionWorldSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasedMovementUtils_eventTransformBasedDirectionToWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasedMovementUtils_eventTransformBasedDirectionToWorld_Parms), &Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_LocalDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_OutDirectionWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformBasedDirectionToWorld", Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::BasedMovementUtils_eventTransformBasedDirectionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::BasedMovementUtils_eventTransformBasedDirectionToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformBasedDirectionToWorld)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MovementBase);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_LocalDirection);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirectionWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBasedMovementUtils::TransformBasedDirectionToWorld(Z_Param_MovementBase,Z_Param_BoneName,Z_Param_LocalDirection,Z_Param_Out_OutDirectionWorldSpace);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformBasedDirectionToWorld ****************

// ********** Begin Class UBasedMovementUtils Function TransformBasedLocationToWorld ***************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics
{
	struct BasedMovementUtils_eventTransformBasedLocationToWorld_Parms
	{
		const UPrimitiveComponent* MovementBase;
		FName BoneName;
		FVector LocalLocation;
		FVector OutLocationWorldSpace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a local location to a world location for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a local location to a world location for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocationWorldSpace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedLocationToWorld_Parms, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedLocationToWorld_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_LocalLocation = { "LocalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedLocationToWorld_Parms, LocalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_OutLocationWorldSpace = { "OutLocationWorldSpace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedLocationToWorld_Parms, OutLocationWorldSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasedMovementUtils_eventTransformBasedLocationToWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasedMovementUtils_eventTransformBasedLocationToWorld_Parms), &Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_LocalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_OutLocationWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformBasedLocationToWorld", Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::BasedMovementUtils_eventTransformBasedLocationToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::BasedMovementUtils_eventTransformBasedLocationToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformBasedLocationToWorld)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MovementBase);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_LocalLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocationWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBasedMovementUtils::TransformBasedLocationToWorld(Z_Param_MovementBase,Z_Param_BoneName,Z_Param_LocalLocation,Z_Param_Out_OutLocationWorldSpace);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformBasedLocationToWorld *****************

// ********** Begin Class UBasedMovementUtils Function TransformBasedRotatorToWorld ****************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics
{
	struct BasedMovementUtils_eventTransformBasedRotatorToWorld_Parms
	{
		const UPrimitiveComponent* MovementBase;
		FName BoneName;
		FRotator LocalRotator;
		FRotator OutWorldSpaceRotator;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a local rotator to world space for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a local rotator to world space for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWorldSpaceRotator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedRotatorToWorld_Parms, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedRotatorToWorld_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_LocalRotator = { "LocalRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedRotatorToWorld_Parms, LocalRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_OutWorldSpaceRotator = { "OutWorldSpaceRotator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformBasedRotatorToWorld_Parms, OutWorldSpaceRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasedMovementUtils_eventTransformBasedRotatorToWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasedMovementUtils_eventTransformBasedRotatorToWorld_Parms), &Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_LocalRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_OutWorldSpaceRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformBasedRotatorToWorld", Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::BasedMovementUtils_eventTransformBasedRotatorToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::BasedMovementUtils_eventTransformBasedRotatorToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformBasedRotatorToWorld)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MovementBase);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FRotator,Z_Param_LocalRotator);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutWorldSpaceRotator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBasedMovementUtils::TransformBasedRotatorToWorld(Z_Param_MovementBase,Z_Param_BoneName,Z_Param_LocalRotator,Z_Param_Out_OutWorldSpaceRotator);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformBasedRotatorToWorld ******************

// ********** Begin Class UBasedMovementUtils Function TransformDirectionToLocal *******************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics
{
	struct BasedMovementUtils_eventTransformDirectionToLocal_Parms
	{
		FQuat BaseQuat;
		FVector WorldSpaceDirection;
		FVector OutLocalDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a world direction to a local direction for a given MovementBase, optionally relative to the orientation of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a world direction to a local direction for a given MovementBase, optionally relative to the orientation of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseQuat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocalDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::NewProp_BaseQuat = { "BaseQuat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformDirectionToLocal_Parms, BaseQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::NewProp_WorldSpaceDirection = { "WorldSpaceDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformDirectionToLocal_Parms, WorldSpaceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::NewProp_OutLocalDirection = { "OutLocalDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformDirectionToLocal_Parms, OutLocalDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::NewProp_BaseQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::NewProp_WorldSpaceDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::NewProp_OutLocalDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformDirectionToLocal", Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::BasedMovementUtils_eventTransformDirectionToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::BasedMovementUtils_eventTransformDirectionToLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformDirectionToLocal)
{
	P_GET_STRUCT(FQuat,Z_Param_BaseQuat);
	P_GET_STRUCT(FVector,Z_Param_WorldSpaceDirection);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocalDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBasedMovementUtils::TransformDirectionToLocal(Z_Param_BaseQuat,Z_Param_WorldSpaceDirection,Z_Param_Out_OutLocalDirection);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformDirectionToLocal *********************

// ********** Begin Class UBasedMovementUtils Function TransformDirectionToWorld *******************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics
{
	struct BasedMovementUtils_eventTransformDirectionToWorld_Parms
	{
		FQuat BaseQuat;
		FVector LocalDirection;
		FVector OutDirectionWorldSpace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a local direction to a world direction for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a local direction to a world direction for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseQuat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirectionWorldSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::NewProp_BaseQuat = { "BaseQuat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformDirectionToWorld_Parms, BaseQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::NewProp_LocalDirection = { "LocalDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformDirectionToWorld_Parms, LocalDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::NewProp_OutDirectionWorldSpace = { "OutDirectionWorldSpace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformDirectionToWorld_Parms, OutDirectionWorldSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::NewProp_BaseQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::NewProp_LocalDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::NewProp_OutDirectionWorldSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformDirectionToWorld", Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::BasedMovementUtils_eventTransformDirectionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::BasedMovementUtils_eventTransformDirectionToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformDirectionToWorld)
{
	P_GET_STRUCT(FQuat,Z_Param_BaseQuat);
	P_GET_STRUCT(FVector,Z_Param_LocalDirection);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirectionWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBasedMovementUtils::TransformDirectionToWorld(Z_Param_BaseQuat,Z_Param_LocalDirection,Z_Param_Out_OutDirectionWorldSpace);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformDirectionToWorld *********************

// ********** Begin Class UBasedMovementUtils Function TransformLocationToLocal ********************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics
{
	struct BasedMovementUtils_eventTransformLocationToLocal_Parms
	{
		FVector BasePos;
		FQuat BaseQuat;
		FVector WorldSpaceLocation;
		FVector OutLocalLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a world location to a local location for a given MovementBase, optionally at the location of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a world location to a local location for a given MovementBase, optionally at the location of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseQuat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocalLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::NewProp_BasePos = { "BasePos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformLocationToLocal_Parms, BasePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::NewProp_BaseQuat = { "BaseQuat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformLocationToLocal_Parms, BaseQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::NewProp_WorldSpaceLocation = { "WorldSpaceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformLocationToLocal_Parms, WorldSpaceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::NewProp_OutLocalLocation = { "OutLocalLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformLocationToLocal_Parms, OutLocalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::NewProp_BasePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::NewProp_BaseQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::NewProp_WorldSpaceLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::NewProp_OutLocalLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformLocationToLocal", Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::BasedMovementUtils_eventTransformLocationToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::BasedMovementUtils_eventTransformLocationToLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformLocationToLocal)
{
	P_GET_STRUCT(FVector,Z_Param_BasePos);
	P_GET_STRUCT(FQuat,Z_Param_BaseQuat);
	P_GET_STRUCT(FVector,Z_Param_WorldSpaceLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocalLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBasedMovementUtils::TransformLocationToLocal(Z_Param_BasePos,Z_Param_BaseQuat,Z_Param_WorldSpaceLocation,Z_Param_Out_OutLocalLocation);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformLocationToLocal **********************

// ********** Begin Class UBasedMovementUtils Function TransformLocationToWorld ********************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics
{
	struct BasedMovementUtils_eventTransformLocationToWorld_Parms
	{
		FVector BasePos;
		FQuat BaseQuat;
		FVector LocalLocation;
		FVector OutLocationWorldSpace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a local location to a world location for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a local location to a world location for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseQuat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocationWorldSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::NewProp_BasePos = { "BasePos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformLocationToWorld_Parms, BasePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::NewProp_BaseQuat = { "BaseQuat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformLocationToWorld_Parms, BaseQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::NewProp_LocalLocation = { "LocalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformLocationToWorld_Parms, LocalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::NewProp_OutLocationWorldSpace = { "OutLocationWorldSpace", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformLocationToWorld_Parms, OutLocationWorldSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::NewProp_BasePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::NewProp_BaseQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::NewProp_LocalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::NewProp_OutLocationWorldSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformLocationToWorld", Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::BasedMovementUtils_eventTransformLocationToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::BasedMovementUtils_eventTransformLocationToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformLocationToWorld)
{
	P_GET_STRUCT(FVector,Z_Param_BasePos);
	P_GET_STRUCT(FQuat,Z_Param_BaseQuat);
	P_GET_STRUCT(FVector,Z_Param_LocalLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocationWorldSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBasedMovementUtils::TransformLocationToWorld(Z_Param_BasePos,Z_Param_BaseQuat,Z_Param_LocalLocation,Z_Param_Out_OutLocationWorldSpace);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformLocationToWorld **********************

// ********** Begin Class UBasedMovementUtils Function TransformRotatorToLocal *********************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics
{
	struct BasedMovementUtils_eventTransformRotatorToLocal_Parms
	{
		FQuat BaseQuat;
		FRotator WorldSpaceRotator;
		FRotator OutLocalRotator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a world space rotator to a local rotator for a given MovementBase, optionally relative to the orientation of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a world space rotator to a local rotator for a given MovementBase, optionally relative to the orientation of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseQuat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceRotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocalRotator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::NewProp_BaseQuat = { "BaseQuat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformRotatorToLocal_Parms, BaseQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::NewProp_WorldSpaceRotator = { "WorldSpaceRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformRotatorToLocal_Parms, WorldSpaceRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::NewProp_OutLocalRotator = { "OutLocalRotator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformRotatorToLocal_Parms, OutLocalRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::NewProp_BaseQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::NewProp_WorldSpaceRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::NewProp_OutLocalRotator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformRotatorToLocal", Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::BasedMovementUtils_eventTransformRotatorToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::BasedMovementUtils_eventTransformRotatorToLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformRotatorToLocal)
{
	P_GET_STRUCT(FQuat,Z_Param_BaseQuat);
	P_GET_STRUCT(FRotator,Z_Param_WorldSpaceRotator);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutLocalRotator);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBasedMovementUtils::TransformRotatorToLocal(Z_Param_BaseQuat,Z_Param_WorldSpaceRotator,Z_Param_Out_OutLocalRotator);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformRotatorToLocal ***********************

// ********** Begin Class UBasedMovementUtils Function TransformRotatorToWorld *********************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics
{
	struct BasedMovementUtils_eventTransformRotatorToWorld_Parms
	{
		FQuat BaseQuat;
		FRotator LocalRotator;
		FRotator OutWorldSpaceRotator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a local rotator to world space for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a local rotator to world space for a given MovementBase. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseQuat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutWorldSpaceRotator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::NewProp_BaseQuat = { "BaseQuat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformRotatorToWorld_Parms, BaseQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::NewProp_LocalRotator = { "LocalRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformRotatorToWorld_Parms, LocalRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::NewProp_OutWorldSpaceRotator = { "OutWorldSpaceRotator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformRotatorToWorld_Parms, OutWorldSpaceRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::NewProp_BaseQuat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::NewProp_LocalRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::NewProp_OutWorldSpaceRotator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformRotatorToWorld", Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::BasedMovementUtils_eventTransformRotatorToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::BasedMovementUtils_eventTransformRotatorToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformRotatorToWorld)
{
	P_GET_STRUCT(FQuat,Z_Param_BaseQuat);
	P_GET_STRUCT(FRotator,Z_Param_LocalRotator);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutWorldSpaceRotator);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBasedMovementUtils::TransformRotatorToWorld(Z_Param_BaseQuat,Z_Param_LocalRotator,Z_Param_Out_OutWorldSpaceRotator);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformRotatorToWorld ***********************

// ********** Begin Class UBasedMovementUtils Function TransformWorldDirectionToBased **************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics
{
	struct BasedMovementUtils_eventTransformWorldDirectionToBased_Parms
	{
		const UPrimitiveComponent* MovementBase;
		FName BoneName;
		FVector WorldSpaceDirection;
		FVector OutLocalDirection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a world direction to a local direction for a given MovementBase, optionally relative to the orientation of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a world direction to a local direction for a given MovementBase, optionally relative to the orientation of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocalDirection;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldDirectionToBased_Parms, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldDirectionToBased_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_WorldSpaceDirection = { "WorldSpaceDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldDirectionToBased_Parms, WorldSpaceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_OutLocalDirection = { "OutLocalDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldDirectionToBased_Parms, OutLocalDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasedMovementUtils_eventTransformWorldDirectionToBased_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasedMovementUtils_eventTransformWorldDirectionToBased_Parms), &Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_WorldSpaceDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_OutLocalDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformWorldDirectionToBased", Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::BasedMovementUtils_eventTransformWorldDirectionToBased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::BasedMovementUtils_eventTransformWorldDirectionToBased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformWorldDirectionToBased)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MovementBase);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_WorldSpaceDirection);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocalDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBasedMovementUtils::TransformWorldDirectionToBased(Z_Param_MovementBase,Z_Param_BoneName,Z_Param_WorldSpaceDirection,Z_Param_Out_OutLocalDirection);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformWorldDirectionToBased ****************

// ********** Begin Class UBasedMovementUtils Function TransformWorldLocationToBased ***************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics
{
	struct BasedMovementUtils_eventTransformWorldLocationToBased_Parms
	{
		const UPrimitiveComponent* MovementBase;
		FName BoneName;
		FVector WorldSpaceLocation;
		FVector OutLocalLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a world location to a local location for a given MovementBase, optionally at the location of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a world location to a local location for a given MovementBase, optionally at the location of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocalLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldLocationToBased_Parms, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldLocationToBased_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_WorldSpaceLocation = { "WorldSpaceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldLocationToBased_Parms, WorldSpaceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_OutLocalLocation = { "OutLocalLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldLocationToBased_Parms, OutLocalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasedMovementUtils_eventTransformWorldLocationToBased_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasedMovementUtils_eventTransformWorldLocationToBased_Parms), &Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_WorldSpaceLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_OutLocalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformWorldLocationToBased", Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::BasedMovementUtils_eventTransformWorldLocationToBased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::BasedMovementUtils_eventTransformWorldLocationToBased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformWorldLocationToBased)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MovementBase);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_WorldSpaceLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocalLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBasedMovementUtils::TransformWorldLocationToBased(Z_Param_MovementBase,Z_Param_BoneName,Z_Param_WorldSpaceLocation,Z_Param_Out_OutLocalLocation);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformWorldLocationToBased *****************

// ********** Begin Class UBasedMovementUtils Function TransformWorldRotatorToBased ****************
struct Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics
{
	struct BasedMovementUtils_eventTransformWorldRotatorToBased_Parms
	{
		const UPrimitiveComponent* MovementBase;
		FName BoneName;
		FRotator WorldSpaceRotator;
		FRotator OutLocalRotator;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover/MovementBases" },
		{ "Comment", "/** Convert a world space rotator to a local rotator for a given MovementBase, optionally relative to the orientation of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Convert a world space rotator to a local rotator for a given MovementBase, optionally relative to the orientation of a bone. Returns false if MovementBase is nullptr, or if BoneName is not a valid bone. Scaling is ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceRotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocalRotator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldRotatorToBased_Parms, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldRotatorToBased_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_WorldSpaceRotator = { "WorldSpaceRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldRotatorToBased_Parms, WorldSpaceRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_OutLocalRotator = { "OutLocalRotator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasedMovementUtils_eventTransformWorldRotatorToBased_Parms, OutLocalRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BasedMovementUtils_eventTransformWorldRotatorToBased_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BasedMovementUtils_eventTransformWorldRotatorToBased_Parms), &Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_WorldSpaceRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_OutLocalRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBasedMovementUtils, nullptr, "TransformWorldRotatorToBased", Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::BasedMovementUtils_eventTransformWorldRotatorToBased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::BasedMovementUtils_eventTransformWorldRotatorToBased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasedMovementUtils::execTransformWorldRotatorToBased)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_MovementBase);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FRotator,Z_Param_WorldSpaceRotator);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutLocalRotator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBasedMovementUtils::TransformWorldRotatorToBased(Z_Param_MovementBase,Z_Param_BoneName,Z_Param_WorldSpaceRotator,Z_Param_Out_OutLocalRotator);
	P_NATIVE_END;
}
// ********** End Class UBasedMovementUtils Function TransformWorldRotatorToBased ******************

// ********** Begin Class UBasedMovementUtils ******************************************************
void UBasedMovementUtils::StaticRegisterNativesUBasedMovementUtils()
{
	UClass* Class = UBasedMovementUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMovementBaseTransform", &UBasedMovementUtils::execGetMovementBaseTransform },
		{ "IsADynamicBase", &UBasedMovementUtils::execIsADynamicBase },
		{ "IsBaseSimulatingPhysics", &UBasedMovementUtils::execIsBaseSimulatingPhysics },
		{ "TransformBasedDirectionToWorld", &UBasedMovementUtils::execTransformBasedDirectionToWorld },
		{ "TransformBasedLocationToWorld", &UBasedMovementUtils::execTransformBasedLocationToWorld },
		{ "TransformBasedRotatorToWorld", &UBasedMovementUtils::execTransformBasedRotatorToWorld },
		{ "TransformDirectionToLocal", &UBasedMovementUtils::execTransformDirectionToLocal },
		{ "TransformDirectionToWorld", &UBasedMovementUtils::execTransformDirectionToWorld },
		{ "TransformLocationToLocal", &UBasedMovementUtils::execTransformLocationToLocal },
		{ "TransformLocationToWorld", &UBasedMovementUtils::execTransformLocationToWorld },
		{ "TransformRotatorToLocal", &UBasedMovementUtils::execTransformRotatorToLocal },
		{ "TransformRotatorToWorld", &UBasedMovementUtils::execTransformRotatorToWorld },
		{ "TransformWorldDirectionToBased", &UBasedMovementUtils::execTransformWorldDirectionToBased },
		{ "TransformWorldLocationToBased", &UBasedMovementUtils::execTransformWorldLocationToBased },
		{ "TransformWorldRotatorToBased", &UBasedMovementUtils::execTransformWorldRotatorToBased },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBasedMovementUtils;
UClass* UBasedMovementUtils::GetPrivateStaticClass()
{
	using TClass = UBasedMovementUtils;
	if (!Z_Registration_Info_UClass_UBasedMovementUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BasedMovementUtils"),
			Z_Registration_Info_UClass_UBasedMovementUtils.InnerSingleton,
			StaticRegisterNativesUBasedMovementUtils,
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
	return Z_Registration_Info_UClass_UBasedMovementUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UBasedMovementUtils_NoRegister()
{
	return UBasedMovementUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBasedMovementUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MovementBaseUtils: a collection of stateless static BP-accessible functions for based movement\n */" },
		{ "IncludePath", "MoveLibrary/BasedMovementUtils.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "MovementBaseUtils: a collection of stateless static BP-accessible functions for based movement" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasedMovementUtils_GetMovementBaseTransform, "GetMovementBaseTransform" }, // 3303738765
		{ &Z_Construct_UFunction_UBasedMovementUtils_IsADynamicBase, "IsADynamicBase" }, // 1742641173
		{ &Z_Construct_UFunction_UBasedMovementUtils_IsBaseSimulatingPhysics, "IsBaseSimulatingPhysics" }, // 918896999
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformBasedDirectionToWorld, "TransformBasedDirectionToWorld" }, // 157180834
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformBasedLocationToWorld, "TransformBasedLocationToWorld" }, // 3585094249
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformBasedRotatorToWorld, "TransformBasedRotatorToWorld" }, // 1367214557
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToLocal, "TransformDirectionToLocal" }, // 3646526839
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformDirectionToWorld, "TransformDirectionToWorld" }, // 4127603499
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToLocal, "TransformLocationToLocal" }, // 126251935
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformLocationToWorld, "TransformLocationToWorld" }, // 1005112244
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToLocal, "TransformRotatorToLocal" }, // 1224749133
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformRotatorToWorld, "TransformRotatorToWorld" }, // 1105135215
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformWorldDirectionToBased, "TransformWorldDirectionToBased" }, // 1751030026
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformWorldLocationToBased, "TransformWorldLocationToBased" }, // 2217619347
		{ &Z_Construct_UFunction_UBasedMovementUtils_TransformWorldRotatorToBased, "TransformWorldRotatorToBased" }, // 3376054123
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasedMovementUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBasedMovementUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasedMovementUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasedMovementUtils_Statics::ClassParams = {
	&UBasedMovementUtils::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasedMovementUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasedMovementUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasedMovementUtils()
{
	if (!Z_Registration_Info_UClass_UBasedMovementUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasedMovementUtils.OuterSingleton, Z_Construct_UClass_UBasedMovementUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasedMovementUtils.OuterSingleton;
}
UBasedMovementUtils::UBasedMovementUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasedMovementUtils);
UBasedMovementUtils::~UBasedMovementUtils() {}
// ********** End Class UBasedMovementUtils ********************************************************

// ********** Begin ScriptStruct FMoverDynamicBasedMovementTickFunction ****************************
static_assert(std::is_polymorphic<FMoverDynamicBasedMovementTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FMoverDynamicBasedMovementTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverDynamicBasedMovementTickFunction;
class UScriptStruct* FMoverDynamicBasedMovementTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDynamicBasedMovementTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverDynamicBasedMovementTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverDynamicBasedMovementTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverDynamicBasedMovementTickFunction.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tick function used to perform based movement at dynamic times throughout the world update time, typically out-of-band with the movement simulation\n **/" },
		{ "ModuleRelativePath", "Public/MoveLibrary/BasedMovementUtils.h" },
		{ "ToolTip", "Tick function used to perform based movement at dynamic times throughout the world update time, typically out-of-band with the movement simulation" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverDynamicBasedMovementTickFunction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FTickFunction,
	&NewStructOps,
	"MoverDynamicBasedMovementTickFunction",
	nullptr,
	0,
	sizeof(FMoverDynamicBasedMovementTickFunction),
	alignof(FMoverDynamicBasedMovementTickFunction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDynamicBasedMovementTickFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverDynamicBasedMovementTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverDynamicBasedMovementTickFunction.InnerSingleton;
}
// ********** End ScriptStruct FMoverDynamicBasedMovementTickFunction ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRelativeBaseInfo::StaticStruct, Z_Construct_UScriptStruct_FRelativeBaseInfo_Statics::NewStructOps, TEXT("RelativeBaseInfo"), &Z_Registration_Info_UScriptStruct_FRelativeBaseInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRelativeBaseInfo), 3645784700U) },
		{ FMoverDynamicBasedMovementTickFunction::StaticStruct, Z_Construct_UScriptStruct_FMoverDynamicBasedMovementTickFunction_Statics::NewStructOps, TEXT("MoverDynamicBasedMovementTickFunction"), &Z_Registration_Info_UScriptStruct_FMoverDynamicBasedMovementTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverDynamicBasedMovementTickFunction), 2632595181U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasedMovementUtils, UBasedMovementUtils::StaticClass, TEXT("UBasedMovementUtils"), &Z_Registration_Info_UClass_UBasedMovementUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasedMovementUtils), 20903753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h__Script_Mover_3803812017(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_BasedMovementUtils_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
