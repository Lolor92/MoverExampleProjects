// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/LayeredMoves/RootMotionAttributeLayeredMove.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRootMotionAttributeLayeredMove() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveBase();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLayeredMove_RootMotionAttribute **********************************
static_assert(std::is_polymorphic<FLayeredMove_RootMotionAttribute>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_RootMotionAttribute cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_RootMotionAttribute;
class UScriptStruct* FLayeredMove_RootMotionAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_RootMotionAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_RootMotionAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_RootMotionAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_RootMotionAttribute.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Root Motion Attribute Move: handles root motion from a mesh's custom attribute, ignoring scaling.\n * Currently only supports Independent ticking mode, and allows controlled movement while jumping/falling or when a SkipAnimRootMotion tag is active.\n */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/RootMotionAttributeLayeredMove.h" },
		{ "ToolTip", "Root Motion Attribute Move: handles root motion from a mesh's custom attribute, ignoring scaling.\nCurrently only supports Independent ticking mode, and allows controlled movement while jumping/falling or when a SkipAnimRootMotion tag is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainWorldRotToMovementPlane_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// If true, any root motion rotations will be projected onto the movement plane (in worldspace), relative to the \"up\" direction. Otherwise, they'll be taken as-is.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/RootMotionAttributeLayeredMove.h" },
		{ "ToolTip", "If true, any root motion rotations will be projected onto the movement plane (in worldspace), relative to the \"up\" direction. Otherwise, they'll be taken as-is." },
	};
#endif // WITH_METADATA
	static void NewProp_bConstrainWorldRotToMovementPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainWorldRotToMovementPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_RootMotionAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::NewProp_bConstrainWorldRotToMovementPlane_SetBit(void* Obj)
{
	((FLayeredMove_RootMotionAttribute*)Obj)->bConstrainWorldRotToMovementPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::NewProp_bConstrainWorldRotToMovementPlane = { "bConstrainWorldRotToMovementPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayeredMove_RootMotionAttribute), &Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::NewProp_bConstrainWorldRotToMovementPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainWorldRotToMovementPlane_MetaData), NewProp_bConstrainWorldRotToMovementPlane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::NewProp_bConstrainWorldRotToMovementPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_RootMotionAttribute",
	Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::PropPointers),
	sizeof(FLayeredMove_RootMotionAttribute),
	alignof(FLayeredMove_RootMotionAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_RootMotionAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_RootMotionAttribute.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_RootMotionAttribute.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_RootMotionAttribute ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_RootMotionAttributeLayeredMove_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayeredMove_RootMotionAttribute::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_RootMotionAttribute_Statics::NewStructOps, TEXT("LayeredMove_RootMotionAttribute"), &Z_Registration_Info_UScriptStruct_FLayeredMove_RootMotionAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_RootMotionAttribute), 1725731310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_RootMotionAttributeLayeredMove_h__Script_Mover_214945703(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_RootMotionAttributeLayeredMove_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_RootMotionAttributeLayeredMove_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
