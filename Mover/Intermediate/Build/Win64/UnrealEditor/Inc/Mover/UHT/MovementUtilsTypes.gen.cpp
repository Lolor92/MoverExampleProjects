// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/MovementUtilsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementUtilsTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoveMixMode();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovingComponentSet();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FProposedMove();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMoveMixMode **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoveMixMode;
static UEnum* EMoveMixMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoveMixMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoveMixMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EMoveMixMode, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EMoveMixMode"));
	}
	return Z_Registration_Info_UEnum_EMoveMixMode.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EMoveMixMode>()
{
	return EMoveMixMode_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EMoveMixMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdditiveVelocity.Comment", "/** Velocity (linear and angular) is intended to be added with other sources */" },
		{ "AdditiveVelocity.Name", "EMoveMixMode::AdditiveVelocity" },
		{ "AdditiveVelocity.ToolTip", "Velocity (linear and angular) is intended to be added with other sources" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
		{ "OverrideAll.Comment", "/** All move parameters should override others */" },
		{ "OverrideAll.Name", "EMoveMixMode::OverrideAll" },
		{ "OverrideAll.ToolTip", "All move parameters should override others" },
		{ "OverrideAllExceptVerticalVelocity.Comment", "/** All move parameters should override others except linear velocity along the up/down axis. Commonly used for falling. */" },
		{ "OverrideAllExceptVerticalVelocity.Name", "EMoveMixMode::OverrideAllExceptVerticalVelocity" },
		{ "OverrideAllExceptVerticalVelocity.ToolTip", "All move parameters should override others except linear velocity along the up/down axis. Commonly used for falling." },
		{ "OverrideVelocity.Comment", "/** Velocity (linear and angular) should override others */" },
		{ "OverrideVelocity.Name", "EMoveMixMode::OverrideVelocity" },
		{ "OverrideVelocity.ToolTip", "Velocity (linear and angular) should override others" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoveMixMode::AdditiveVelocity", (int64)EMoveMixMode::AdditiveVelocity },
		{ "EMoveMixMode::OverrideVelocity", (int64)EMoveMixMode::OverrideVelocity },
		{ "EMoveMixMode::OverrideAll", (int64)EMoveMixMode::OverrideAll },
		{ "EMoveMixMode::OverrideAllExceptVerticalVelocity", (int64)EMoveMixMode::OverrideAllExceptVerticalVelocity },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EMoveMixMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EMoveMixMode",
	"EMoveMixMode",
	Z_Construct_UEnum_Mover_EMoveMixMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoveMixMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoveMixMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EMoveMixMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EMoveMixMode()
{
	if (!Z_Registration_Info_UEnum_EMoveMixMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoveMixMode.InnerSingleton, Z_Construct_UEnum_Mover_EMoveMixMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoveMixMode.InnerSingleton;
}
// ********** End Enum EMoveMixMode ****************************************************************

// ********** Begin ScriptStruct FProposedMove *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProposedMove;
class UScriptStruct* FProposedMove::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProposedMove.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProposedMove.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProposedMove, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("ProposedMove"));
	}
	return Z_Registration_Info_UScriptStruct_FProposedMove.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FProposedMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Encapsulates info about an intended move that hasn't happened yet */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
		{ "ToolTip", "Encapsulates info about an intended move that hasn't happened yet" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Indicates that we should switch to a particular movement mode before the next simulation step is performed.\n\x09 * Note: If this is set from a layered move the preferred mode will only be set at the beginning of the layered move, not continuously.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
		{ "ToolTip", "Indicates that we should switch to a particular movement mode before the next simulation step is performed.\nNote: If this is set from a layered move the preferred mode will only be set at the beginning of the layered move, not continuously." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionIntent_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Directional, per-axis magnitude [-1, 1] in world space (length of 1 indicates max speed intent). Only valid if bHasDirIntent is set.\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
		{ "ToolTip", "Directional, per-axis magnitude [-1, 1] in world space (length of 1 indicates max speed intent). Only valid if bHasDirIntent is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Units per second, world space, possibly mapped onto walking surface\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
		{ "ToolTip", "Units per second, world space, possibly mapped onto walking surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Degrees per second, local space\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
		{ "ToolTip", "Degrees per second, local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasDirIntent_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Signals whether there was any directional intent specified\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
		{ "ToolTip", "Signals whether there was any directional intent specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MixMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Determines how this move should resolve with other moves\n" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
		{ "ToolTip", "Determines how this move should resolve with other moves" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreferredMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionIntent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static void NewProp_bHasDirIntent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDirIntent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MixMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MixMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProposedMove>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_PreferredMode = { "PreferredMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProposedMove, PreferredMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredMode_MetaData), NewProp_PreferredMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_DirectionIntent = { "DirectionIntent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProposedMove, DirectionIntent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionIntent_MetaData), NewProp_DirectionIntent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProposedMove, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProposedMove, AngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
void Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_bHasDirIntent_SetBit(void* Obj)
{
	((FProposedMove*)Obj)->bHasDirIntent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_bHasDirIntent = { "bHasDirIntent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FProposedMove), &Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_bHasDirIntent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasDirIntent_MetaData), NewProp_bHasDirIntent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_MixMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_MixMode = { "MixMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProposedMove, MixMode), Z_Construct_UEnum_Mover_EMoveMixMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MixMode_MetaData), NewProp_MixMode_MetaData) }; // 2082817065
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProposedMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_PreferredMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_DirectionIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_bHasDirIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_MixMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProposedMove_Statics::NewProp_MixMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProposedMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProposedMove_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"ProposedMove",
	Z_Construct_UScriptStruct_FProposedMove_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProposedMove_Statics::PropPointers),
	sizeof(FProposedMove),
	alignof(FProposedMove),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProposedMove_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProposedMove_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProposedMove()
{
	if (!Z_Registration_Info_UScriptStruct_FProposedMove.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProposedMove.InnerSingleton, Z_Construct_UScriptStruct_FProposedMove_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FProposedMove.InnerSingleton;
}
// ********** End ScriptStruct FProposedMove *******************************************************

// ********** Begin ScriptStruct FMovingComponentSet ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovingComponentSet;
class UScriptStruct* FMovingComponentSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovingComponentSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovingComponentSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovingComponentSet, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MovingComponentSet"));
	}
	return Z_Registration_Info_UScriptStruct_FMovingComponentSet.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovingComponentSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Encapsulates components involved in movement. Used by many library functions. \n * Only a scene component is required for movement, but this is typically a primitive\n * component so we provide a pre-cast ptr for convenience.\n */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
		{ "ToolTip", "Encapsulates components involved in movement. Used by many library functions.\nOnly a scene component is required for movement, but this is typically a primitive\ncomponent so we provide a pre-cast ptr for convenience." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedComponent_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedPrimitive_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoverComponent_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UpdatedComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UpdatedPrimitive;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MoverComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovingComponentSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovingComponentSet_Statics::NewProp_UpdatedComponent = { "UpdatedComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovingComponentSet, UpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedComponent_MetaData), NewProp_UpdatedComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovingComponentSet_Statics::NewProp_UpdatedPrimitive = { "UpdatedPrimitive", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovingComponentSet, UpdatedPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedPrimitive_MetaData), NewProp_UpdatedPrimitive_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovingComponentSet_Statics::NewProp_MoverComponent = { "MoverComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovingComponentSet, MoverComponent), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoverComponent_MetaData), NewProp_MoverComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovingComponentSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovingComponentSet_Statics::NewProp_UpdatedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovingComponentSet_Statics::NewProp_UpdatedPrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovingComponentSet_Statics::NewProp_MoverComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovingComponentSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovingComponentSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MovingComponentSet",
	Z_Construct_UScriptStruct_FMovingComponentSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovingComponentSet_Statics::PropPointers),
	sizeof(FMovingComponentSet),
	alignof(FMovingComponentSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovingComponentSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovingComponentSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovingComponentSet()
{
	if (!Z_Registration_Info_UScriptStruct_FMovingComponentSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovingComponentSet.InnerSingleton, Z_Construct_UScriptStruct_FMovingComponentSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovingComponentSet.InnerSingleton;
}
// ********** End ScriptStruct FMovingComponentSet *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtilsTypes_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoveMixMode_StaticEnum, TEXT("EMoveMixMode"), &Z_Registration_Info_UEnum_EMoveMixMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2082817065U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProposedMove::StaticStruct, Z_Construct_UScriptStruct_FProposedMove_Statics::NewStructOps, TEXT("ProposedMove"), &Z_Registration_Info_UScriptStruct_FProposedMove, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProposedMove), 545505266U) },
		{ FMovingComponentSet::StaticStruct, Z_Construct_UScriptStruct_FMovingComponentSet_Statics::NewStructOps, TEXT("MovingComponentSet"), &Z_Registration_Info_UScriptStruct_FMovingComponentSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovingComponentSet), 1058841493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtilsTypes_h__Script_Mover_2457462117(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtilsTypes_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtilsTypes_h__Script_Mover_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtilsTypes_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementUtilsTypes_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
