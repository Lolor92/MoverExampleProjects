// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/ConstrainedMoveUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeConstrainedMoveUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOVER_API UClass* Z_Construct_UClass_UPlanarConstraintUtils();
MOVER_API UClass* Z_Construct_UClass_UPlanarConstraintUtils_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarConstraint();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPlanarConstraint *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlanarConstraint;
class UScriptStruct* FPlanarConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlanarConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlanarConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarConstraint, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("PlanarConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_FPlanarConstraint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlanarConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Encapsulates info about constraining movement to a plane, such as in a side-scroller */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "Encapsulates info about constraining movement to a plane, such as in a side-scroller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainToPlane_MetaData[] = {
		{ "Category", "PlanarMovement" },
		{ "Comment", "/** If true, movement will be constrained to a plane. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "If true, movement will be constrained to a plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraintNormal_MetaData[] = {
		{ "Category", "PlanarMovement" },
		{ "Comment", "/**\n\x09 * The normal or axis of the plane that constrains movement, if bConstrainToPlane is enabled.\n\x09 * If for example you wanted to constrain movement to the X-Z plane (so that Y cannot change), the normal would be set to X=0 Y=1 Z=0.\n\x09 * It is normalized once the component is registered with the game world.\n\x09 */" },
		{ "editcondition", "bConstrainToPlane" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "The normal or axis of the plane that constrains movement, if bConstrainToPlane is enabled.\nIf for example you wanted to constrain movement to the X-Z plane (so that Y cannot change), the normal would be set to X=0 Y=1 Z=0.\nIt is normalized once the component is registered with the game world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraintOrigin_MetaData[] = {
		{ "Category", "PlanarMovement" },
		{ "Comment", "/** The origin of the plane that constrains movement, if plane constraint is enabled. */" },
		{ "editcondition", "bConstrainToPlane" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "The origin of the plane that constrains movement, if plane constraint is enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_bConstrainToPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainToPlane;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneConstraintNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneConstraintOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlanarConstraint_Statics::NewProp_bConstrainToPlane_SetBit(void* Obj)
{
	((FPlanarConstraint*)Obj)->bConstrainToPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlanarConstraint_Statics::NewProp_bConstrainToPlane = { "bConstrainToPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlanarConstraint), &Z_Construct_UScriptStruct_FPlanarConstraint_Statics::NewProp_bConstrainToPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainToPlane_MetaData), NewProp_bConstrainToPlane_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarConstraint_Statics::NewProp_PlaneConstraintNormal = { "PlaneConstraintNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlanarConstraint, PlaneConstraintNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneConstraintNormal_MetaData), NewProp_PlaneConstraintNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarConstraint_Statics::NewProp_PlaneConstraintOrigin = { "PlaneConstraintOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlanarConstraint, PlaneConstraintOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneConstraintOrigin_MetaData), NewProp_PlaneConstraintOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarConstraint_Statics::NewProp_bConstrainToPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarConstraint_Statics::NewProp_PlaneConstraintNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarConstraint_Statics::NewProp_PlaneConstraintOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"PlanarConstraint",
	Z_Construct_UScriptStruct_FPlanarConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarConstraint_Statics::PropPointers),
	sizeof(FPlanarConstraint),
	alignof(FPlanarConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlanarConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlanarConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_FPlanarConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlanarConstraint.InnerSingleton, Z_Construct_UScriptStruct_FPlanarConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlanarConstraint.InnerSingleton;
}
// ********** End ScriptStruct FPlanarConstraint ***************************************************

// ********** Begin Class UPlanarConstraintUtils Function ConstrainDirectionToPlane ****************
struct Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics
{
	struct PlanarConstraintUtils_eventConstrainDirectionToPlane_Parms
	{
		FPlanarConstraint Constraint;
		FVector Direction;
		bool bMaintainMagnitude;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover|PlanarConstraint" },
		{ "Comment", "/** Constrains a direction to be on the plane, if enabled */" },
		{ "CPP_Default_bMaintainMagnitude", "false" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "Constrains a direction to be on the plane, if enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static void NewProp_bMaintainMagnitude_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainMagnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventConstrainDirectionToPlane_Parms, Constraint), Z_Construct_UScriptStruct_FPlanarConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraint_MetaData), NewProp_Constraint_MetaData) }; // 2928932149
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventConstrainDirectionToPlane_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_bMaintainMagnitude_SetBit(void* Obj)
{
	((PlanarConstraintUtils_eventConstrainDirectionToPlane_Parms*)Obj)->bMaintainMagnitude = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_bMaintainMagnitude = { "bMaintainMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlanarConstraintUtils_eventConstrainDirectionToPlane_Parms), &Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_bMaintainMagnitude_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventConstrainDirectionToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_Constraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_bMaintainMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlanarConstraintUtils, nullptr, "ConstrainDirectionToPlane", Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::PlanarConstraintUtils_eventConstrainDirectionToPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::PlanarConstraintUtils_eventConstrainDirectionToPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlanarConstraintUtils::execConstrainDirectionToPlane)
{
	P_GET_STRUCT_REF(FPlanarConstraint,Z_Param_Out_Constraint);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_UBOOL(Z_Param_bMaintainMagnitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPlanarConstraintUtils::ConstrainDirectionToPlane(Z_Param_Out_Constraint,Z_Param_Direction,Z_Param_bMaintainMagnitude);
	P_NATIVE_END;
}
// ********** End Class UPlanarConstraintUtils Function ConstrainDirectionToPlane ******************

// ********** Begin Class UPlanarConstraintUtils Function ConstrainLocationToPlane *****************
struct Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics
{
	struct PlanarConstraintUtils_eventConstrainLocationToPlane_Parms
	{
		FPlanarConstraint Constraint;
		FVector Location;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover|PlanarConstraint" },
		{ "Comment", "/** Constrains a location to be on the plane, if enabled */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "Constrains a location to be on the plane, if enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventConstrainLocationToPlane_Parms, Constraint), Z_Construct_UScriptStruct_FPlanarConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraint_MetaData), NewProp_Constraint_MetaData) }; // 2928932149
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventConstrainLocationToPlane_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventConstrainLocationToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::NewProp_Constraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlanarConstraintUtils, nullptr, "ConstrainLocationToPlane", Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::PlanarConstraintUtils_eventConstrainLocationToPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::PlanarConstraintUtils_eventConstrainLocationToPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlanarConstraintUtils::execConstrainLocationToPlane)
{
	P_GET_STRUCT_REF(FPlanarConstraint,Z_Param_Out_Constraint);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPlanarConstraintUtils::ConstrainLocationToPlane(Z_Param_Out_Constraint,Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class UPlanarConstraintUtils Function ConstrainLocationToPlane *******************

// ********** Begin Class UPlanarConstraintUtils Function ConstrainNormalToPlane *******************
struct Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics
{
	struct PlanarConstraintUtils_eventConstrainNormalToPlane_Parms
	{
		FPlanarConstraint Constraint;
		FVector Normal;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover|PlanarConstraint" },
		{ "Comment", "/** Constrains a normal to be on the plane, if enabled. Result will be re-normalized. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "Constrains a normal to be on the plane, if enabled. Result will be re-normalized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventConstrainNormalToPlane_Parms, Constraint), Z_Construct_UScriptStruct_FPlanarConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraint_MetaData), NewProp_Constraint_MetaData) }; // 2928932149
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventConstrainNormalToPlane_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventConstrainNormalToPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::NewProp_Constraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlanarConstraintUtils, nullptr, "ConstrainNormalToPlane", Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::PlanarConstraintUtils_eventConstrainNormalToPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::PlanarConstraintUtils_eventConstrainNormalToPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlanarConstraintUtils::execConstrainNormalToPlane)
{
	P_GET_STRUCT_REF(FPlanarConstraint,Z_Param_Out_Constraint);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UPlanarConstraintUtils::ConstrainNormalToPlane(Z_Param_Out_Constraint,Z_Param_Normal);
	P_NATIVE_END;
}
// ********** End Class UPlanarConstraintUtils Function ConstrainNormalToPlane *********************

// ********** Begin Class UPlanarConstraintUtils Function SetPlanarConstraintEnabled ***************
struct Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics
{
	struct PlanarConstraintUtils_eventSetPlanarConstraintEnabled_Parms
	{
		FPlanarConstraint Constraint;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover|PlanarConstraint" },
		{ "Comment", "/** Sets whether or not the constraint is enabled */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "Sets whether or not the constraint is enabled" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraint;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventSetPlanarConstraintEnabled_Parms, Constraint), Z_Construct_UScriptStruct_FPlanarConstraint, METADATA_PARAMS(0, nullptr) }; // 2928932149
void Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((PlanarConstraintUtils_eventSetPlanarConstraintEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlanarConstraintUtils_eventSetPlanarConstraintEnabled_Parms), &Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::NewProp_Constraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlanarConstraintUtils, nullptr, "SetPlanarConstraintEnabled", Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::PlanarConstraintUtils_eventSetPlanarConstraintEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::PlanarConstraintUtils_eventSetPlanarConstraintEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlanarConstraintUtils::execSetPlanarConstraintEnabled)
{
	P_GET_STRUCT_REF(FPlanarConstraint,Z_Param_Out_Constraint);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlanarConstraintUtils::SetPlanarConstraintEnabled(Z_Param_Out_Constraint,Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UPlanarConstraintUtils Function SetPlanarConstraintEnabled *****************

// ********** Begin Class UPlanarConstraintUtils Function SetPlanarConstraintNormal ****************
struct Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics
{
	struct PlanarConstraintUtils_eventSetPlanarConstraintNormal_Parms
	{
		FPlanarConstraint Constraint;
		FVector PlaneNormal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover|PlanarConstraint" },
		{ "Comment", "/**\n\x09 * Sets the normal of the plane that constrains movement, enforced if the plane constraint is enabled.\n\x09 *\n\x09 * @param PlaneNormal\x09The normal of the plane. If non-zero in length, it will be normalized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "Sets the normal of the plane that constrains movement, enforced if the plane constraint is enabled.\n\n@param PlaneNormal   The normal of the plane. If non-zero in length, it will be normalized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventSetPlanarConstraintNormal_Parms, Constraint), Z_Construct_UScriptStruct_FPlanarConstraint, METADATA_PARAMS(0, nullptr) }; // 2928932149
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventSetPlanarConstraintNormal_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::NewProp_Constraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::NewProp_PlaneNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlanarConstraintUtils, nullptr, "SetPlanarConstraintNormal", Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::PlanarConstraintUtils_eventSetPlanarConstraintNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::PlanarConstraintUtils_eventSetPlanarConstraintNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlanarConstraintUtils::execSetPlanarConstraintNormal)
{
	P_GET_STRUCT_REF(FPlanarConstraint,Z_Param_Out_Constraint);
	P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlanarConstraintUtils::SetPlanarConstraintNormal(Z_Param_Out_Constraint,Z_Param_PlaneNormal);
	P_NATIVE_END;
}
// ********** End Class UPlanarConstraintUtils Function SetPlanarConstraintNormal ******************

// ********** Begin Class UPlanarConstraintUtils Function SetPlaneConstraintOrigin *****************
struct Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics
{
	struct PlanarConstraintUtils_eventSetPlaneConstraintOrigin_Parms
	{
		FPlanarConstraint Constraint;
		FVector PlaneOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover|PlanarConstraint" },
		{ "Comment", "/** Sets the origin of the plane that constrains movement, enforced if the plane constraint is enabled. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "Sets the origin of the plane that constrains movement, enforced if the plane constraint is enabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventSetPlaneConstraintOrigin_Parms, Constraint), Z_Construct_UScriptStruct_FPlanarConstraint, METADATA_PARAMS(0, nullptr) }; // 2928932149
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::NewProp_PlaneOrigin = { "PlaneOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlanarConstraintUtils_eventSetPlaneConstraintOrigin_Parms, PlaneOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::NewProp_Constraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::NewProp_PlaneOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlanarConstraintUtils, nullptr, "SetPlaneConstraintOrigin", Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::PlanarConstraintUtils_eventSetPlaneConstraintOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::PlanarConstraintUtils_eventSetPlaneConstraintOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlanarConstraintUtils::execSetPlaneConstraintOrigin)
{
	P_GET_STRUCT_REF(FPlanarConstraint,Z_Param_Out_Constraint);
	P_GET_STRUCT(FVector,Z_Param_PlaneOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPlanarConstraintUtils::SetPlaneConstraintOrigin(Z_Param_Out_Constraint,Z_Param_PlaneOrigin);
	P_NATIVE_END;
}
// ********** End Class UPlanarConstraintUtils Function SetPlaneConstraintOrigin *******************

// ********** Begin Class UPlanarConstraintUtils ***************************************************
void UPlanarConstraintUtils::StaticRegisterNativesUPlanarConstraintUtils()
{
	UClass* Class = UPlanarConstraintUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConstrainDirectionToPlane", &UPlanarConstraintUtils::execConstrainDirectionToPlane },
		{ "ConstrainLocationToPlane", &UPlanarConstraintUtils::execConstrainLocationToPlane },
		{ "ConstrainNormalToPlane", &UPlanarConstraintUtils::execConstrainNormalToPlane },
		{ "SetPlanarConstraintEnabled", &UPlanarConstraintUtils::execSetPlanarConstraintEnabled },
		{ "SetPlanarConstraintNormal", &UPlanarConstraintUtils::execSetPlanarConstraintNormal },
		{ "SetPlaneConstraintOrigin", &UPlanarConstraintUtils::execSetPlaneConstraintOrigin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlanarConstraintUtils;
UClass* UPlanarConstraintUtils::GetPrivateStaticClass()
{
	using TClass = UPlanarConstraintUtils;
	if (!Z_Registration_Info_UClass_UPlanarConstraintUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlanarConstraintUtils"),
			Z_Registration_Info_UClass_UPlanarConstraintUtils.InnerSingleton,
			StaticRegisterNativesUPlanarConstraintUtils,
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
	return Z_Registration_Info_UClass_UPlanarConstraintUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlanarConstraintUtils_NoRegister()
{
	return UPlanarConstraintUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlanarConstraintUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * PlanarConstraintUtils: a collection of stateless static BP-accessible functions for working with planar constraints\n */" },
		{ "IncludePath", "MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/ConstrainedMoveUtils.h" },
		{ "ToolTip", "PlanarConstraintUtils: a collection of stateless static BP-accessible functions for working with planar constraints" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainDirectionToPlane, "ConstrainDirectionToPlane" }, // 2814243082
		{ &Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainLocationToPlane, "ConstrainLocationToPlane" }, // 1231853851
		{ &Z_Construct_UFunction_UPlanarConstraintUtils_ConstrainNormalToPlane, "ConstrainNormalToPlane" }, // 3989863440
		{ &Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintEnabled, "SetPlanarConstraintEnabled" }, // 1438815680
		{ &Z_Construct_UFunction_UPlanarConstraintUtils_SetPlanarConstraintNormal, "SetPlanarConstraintNormal" }, // 3102572836
		{ &Z_Construct_UFunction_UPlanarConstraintUtils_SetPlaneConstraintOrigin, "SetPlaneConstraintOrigin" }, // 4169143331
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanarConstraintUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlanarConstraintUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarConstraintUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanarConstraintUtils_Statics::ClassParams = {
	&UPlanarConstraintUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanarConstraintUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanarConstraintUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlanarConstraintUtils()
{
	if (!Z_Registration_Info_UClass_UPlanarConstraintUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanarConstraintUtils.OuterSingleton, Z_Construct_UClass_UPlanarConstraintUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlanarConstraintUtils.OuterSingleton;
}
UPlanarConstraintUtils::UPlanarConstraintUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanarConstraintUtils);
UPlanarConstraintUtils::~UPlanarConstraintUtils() {}
// ********** End Class UPlanarConstraintUtils *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlanarConstraint::StaticStruct, Z_Construct_UScriptStruct_FPlanarConstraint_Statics::NewStructOps, TEXT("PlanarConstraint"), &Z_Registration_Info_UScriptStruct_FPlanarConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlanarConstraint), 2928932149U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlanarConstraintUtils, UPlanarConstraintUtils::StaticClass, TEXT("UPlanarConstraintUtils"), &Z_Registration_Info_UClass_UPlanarConstraintUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanarConstraintUtils), 640694035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h__Script_Mover_3320792306(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
