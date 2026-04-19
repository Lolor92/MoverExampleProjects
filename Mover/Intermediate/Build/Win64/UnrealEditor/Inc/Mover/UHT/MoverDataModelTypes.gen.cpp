// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverDataModelTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverDataModelTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverDataModelBlueprintLibrary();
MOVER_API UClass* Z_Construct_UClass_UMoverDataModelBlueprintLibrary_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoveInputType();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDefaultInputs();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDefaultSyncState();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMoveInputType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoveInputType;
static UEnum* EMoveInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoveInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoveInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EMoveInputType, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EMoveInputType"));
	}
	return Z_Registration_Info_UEnum_EMoveInputType.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EMoveInputType>()
{
	return EMoveInputType_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EMoveInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used to identify how to interpret a movement input vector's values\n" },
		{ "DirectionalIntent.Comment", "/** Move with intent, as a per-axis magnitude [-1,1] (E.g., \"move straight forward as fast as possible\" would be (1, 0, 0) and \"move straight left at half speed\" would be (0, -0.5, 0) regardless of frame time). Zero vector indicates intent to stop. */" },
		{ "DirectionalIntent.Name", "EMoveInputType::DirectionalIntent" },
		{ "DirectionalIntent.ToolTip", "Move with intent, as a per-axis magnitude [-1,1] (E.g., \"move straight forward as fast as possible\" would be (1, 0, 0) and \"move straight left at half speed\" would be (0, -0.5, 0) regardless of frame time). Zero vector indicates intent to stop." },
		{ "Invalid.Name", "EMoveInputType::Invalid" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "None.Comment", "/** No move input of any type */" },
		{ "None.Name", "EMoveInputType::None" },
		{ "None.ToolTip", "No move input of any type" },
		{ "ToolTip", "Used to identify how to interpret a movement input vector's values" },
		{ "Velocity.Comment", "/** Move with a given velocity (units per second) */" },
		{ "Velocity.Name", "EMoveInputType::Velocity" },
		{ "Velocity.ToolTip", "Move with a given velocity (units per second)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoveInputType::Invalid", (int64)EMoveInputType::Invalid },
		{ "EMoveInputType::DirectionalIntent", (int64)EMoveInputType::DirectionalIntent },
		{ "EMoveInputType::Velocity", (int64)EMoveInputType::Velocity },
		{ "EMoveInputType::None", (int64)EMoveInputType::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EMoveInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EMoveInputType",
	"EMoveInputType",
	Z_Construct_UEnum_Mover_EMoveInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoveInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoveInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EMoveInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EMoveInputType()
{
	if (!Z_Registration_Info_UEnum_EMoveInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoveInputType.InnerSingleton, Z_Construct_UEnum_Mover_EMoveInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoveInputType.InnerSingleton;
}
// ********** End Enum EMoveInputType **************************************************************

// ********** Begin ScriptStruct FCharacterDefaultInputs *******************************************
static_assert(std::is_polymorphic<FCharacterDefaultInputs>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FCharacterDefaultInputs cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCharacterDefaultInputs;
class UScriptStruct* FCharacterDefaultInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterDefaultInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCharacterDefaultInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterDefaultInputs, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("CharacterDefaultInputs"));
	}
	return Z_Registration_Info_UScriptStruct_FCharacterDefaultInputs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data block containing all inputs that need to be authored and consumed for the default Mover character simulation\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Data block containing all inputs that need to be authored and consumed for the default Mover character simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputType_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Representing the directional move input for this frame. Must be interpreted according to MoveInputType. Relative to MovementBase if set, world space otherwise. Will be truncated to match network serialization precision.\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Representing the directional move input for this frame. Must be interpreted according to MoveInputType. Relative to MovementBase if set, world space otherwise. Will be truncated to match network serialization precision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientationIntent_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Facing direction intent, as a normalized forward-facing direction. A zero vector indicates no intent to change facing direction. Relative to MovementBase if set, world space otherwise.\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Facing direction intent, as a normalized forward-facing direction. A zero vector indicates no intent to change facing direction. Relative to MovementBase if set, world space otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// World space orientation that the controls were based on. This is commonly a player's camera rotation.\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "World space orientation that the controls were based on. This is commonly a player's camera rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedMovementMode_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Used to force the Mover actor into a different movement mode\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Used to force the Mover actor into a different movement mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsingMovementBase_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Specifies whether we are using a movement base, which will affect how move inputs are interpreted\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Specifies whether we are using a movement base, which will affect how move inputs are interpreted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional: when moving on a base, input may be relative to this object\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Optional: when moving on a base, input may be relative to this object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBaseBoneName_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional: for movement bases that are skeletal meshes, this is the bone we're based on. Only valid if MovementBase is set.\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Optional: for movement bases that are skeletal meshes, this is the bone we're based on. Only valid if MovementBase is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumpJustPressed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumpPressed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveInputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrientationIntent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SuggestedMovementMode;
	static void NewProp_bUsingMovementBase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingMovementBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MovementBaseBoneName;
	static void NewProp_bIsJumpJustPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumpJustPressed;
	static void NewProp_bIsJumpPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumpPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterDefaultInputs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MoveInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MoveInputType = { "MoveInputType", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefaultInputs, MoveInputType), Z_Construct_UEnum_Mover_EMoveInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputType_MetaData), NewProp_MoveInputType_MetaData) }; // 3894675629
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefaultInputs, MoveInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_OrientationIntent = { "OrientationIntent", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefaultInputs, OrientationIntent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientationIntent_MetaData), NewProp_OrientationIntent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefaultInputs, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRotation_MetaData), NewProp_ControlRotation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_SuggestedMovementMode = { "SuggestedMovementMode", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefaultInputs, SuggestedMovementMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedMovementMode_MetaData), NewProp_SuggestedMovementMode_MetaData) };
void Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bUsingMovementBase_SetBit(void* Obj)
{
	((FCharacterDefaultInputs*)Obj)->bUsingMovementBase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bUsingMovementBase = { "bUsingMovementBase", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterDefaultInputs), &Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bUsingMovementBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsingMovementBase_MetaData), NewProp_bUsingMovementBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefaultInputs, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MovementBaseBoneName = { "MovementBaseBoneName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterDefaultInputs, MovementBaseBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBaseBoneName_MetaData), NewProp_MovementBaseBoneName_MetaData) };
void Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bIsJumpJustPressed_SetBit(void* Obj)
{
	((FCharacterDefaultInputs*)Obj)->bIsJumpJustPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bIsJumpJustPressed = { "bIsJumpJustPressed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterDefaultInputs), &Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bIsJumpJustPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJumpJustPressed_MetaData), NewProp_bIsJumpJustPressed_MetaData) };
void Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bIsJumpPressed_SetBit(void* Obj)
{
	((FCharacterDefaultInputs*)Obj)->bIsJumpPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bIsJumpPressed = { "bIsJumpPressed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterDefaultInputs), &Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bIsJumpPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJumpPressed_MetaData), NewProp_bIsJumpPressed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MoveInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MoveInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_OrientationIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_ControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_SuggestedMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bUsingMovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_MovementBaseBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bIsJumpJustPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewProp_bIsJumpPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"CharacterDefaultInputs",
	Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::PropPointers),
	sizeof(FCharacterDefaultInputs),
	alignof(FCharacterDefaultInputs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterDefaultInputs()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterDefaultInputs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCharacterDefaultInputs.InnerSingleton, Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCharacterDefaultInputs.InnerSingleton;
}
// ********** End ScriptStruct FCharacterDefaultInputs *********************************************

// ********** Begin ScriptStruct FMoverDefaultSyncState ********************************************
static_assert(std::is_polymorphic<FMoverDefaultSyncState>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FMoverDefaultSyncState cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverDefaultSyncState;
class UScriptStruct* FMoverDefaultSyncState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDefaultSyncState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverDefaultSyncState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverDefaultSyncState, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverDefaultSyncState"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverDefaultSyncState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data block containing basic sync state information\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Data block containing basic sync state information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Position relative to MovementBase if set, world space otherwise\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Position relative to MovementBase if set, world space otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Forward-facing rotation relative to MovementBase if set, world space otherwise.\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Forward-facing rotation relative to MovementBase if set, world space otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Linear velocity, units per second, relative to MovementBase if set, world space otherwise.\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Linear velocity, units per second, relative to MovementBase if set, world space otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionIntent_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Movement intent direction relative to MovementBase if set, world space otherwise. Magnitude of range (0-1)\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Movement intent direction relative to MovementBase if set, world space otherwise. Magnitude of range (0-1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional: when moving on a base, input may be relative to this object\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Optional: when moving on a base, input may be relative to this object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBaseBoneName_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional: for movement bases that are skeletal meshes, this is the bone we're based on. Only valid if MovementBase is set.\n" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Optional: for movement bases that are skeletal meshes, this is the bone we're based on. Only valid if MovementBase is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBasePos_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementBaseQuat_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirectionIntent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MovementBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MovementBaseBoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementBasePos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementBaseQuat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverDefaultSyncState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverDefaultSyncState, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverDefaultSyncState, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverDefaultSyncState, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MoveDirectionIntent = { "MoveDirectionIntent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverDefaultSyncState, MoveDirectionIntent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirectionIntent_MetaData), NewProp_MoveDirectionIntent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverDefaultSyncState, MovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBase_MetaData), NewProp_MovementBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MovementBaseBoneName = { "MovementBaseBoneName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverDefaultSyncState, MovementBaseBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBaseBoneName_MetaData), NewProp_MovementBaseBoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MovementBasePos = { "MovementBasePos", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverDefaultSyncState, MovementBasePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBasePos_MetaData), NewProp_MovementBasePos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MovementBaseQuat = { "MovementBaseQuat", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverDefaultSyncState, MovementBaseQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementBaseQuat_MetaData), NewProp_MovementBaseQuat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MoveDirectionIntent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MovementBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MovementBaseBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MovementBasePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewProp_MovementBaseQuat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"MoverDefaultSyncState",
	Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::PropPointers),
	sizeof(FMoverDefaultSyncState),
	alignof(FMoverDefaultSyncState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverDefaultSyncState()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverDefaultSyncState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverDefaultSyncState.InnerSingleton, Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverDefaultSyncState.InnerSingleton;
}
// ********** End ScriptStruct FMoverDefaultSyncState **********************************************

// ********** Begin Class UMoverDataModelBlueprintLibrary Function GetLocationFromSyncState ********
struct Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics
{
	struct MoverDataModelBlueprintLibrary_eventGetLocationFromSyncState_Parms
	{
		FMoverDefaultSyncState SyncState;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns the location in world space */" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Returns the location in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetLocationFromSyncState_Parms, SyncState), Z_Construct_UScriptStruct_FMoverDefaultSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 198310774
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetLocationFromSyncState_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDataModelBlueprintLibrary, nullptr, "GetLocationFromSyncState", Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::MoverDataModelBlueprintLibrary_eventGetLocationFromSyncState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::MoverDataModelBlueprintLibrary_eventGetLocationFromSyncState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDataModelBlueprintLibrary::execGetLocationFromSyncState)
{
	P_GET_STRUCT_REF(FMoverDefaultSyncState,Z_Param_Out_SyncState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMoverDataModelBlueprintLibrary::GetLocationFromSyncState(Z_Param_Out_SyncState);
	P_NATIVE_END;
}
// ********** End Class UMoverDataModelBlueprintLibrary Function GetLocationFromSyncState **********

// ********** Begin Class UMoverDataModelBlueprintLibrary Function GetMoveDirectionIntentFromInputs 
struct Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics
{
	struct MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromInputs_Parms
	{
		FCharacterDefaultInputs Inputs;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns the move direction intent, if any, in world space */" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Returns the move direction intent, if any, in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromInputs_Parms, Inputs), Z_Construct_UScriptStruct_FCharacterDefaultInputs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 760502792
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromInputs_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDataModelBlueprintLibrary, nullptr, "GetMoveDirectionIntentFromInputs", Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDataModelBlueprintLibrary::execGetMoveDirectionIntentFromInputs)
{
	P_GET_STRUCT_REF(FCharacterDefaultInputs,Z_Param_Out_Inputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMoverDataModelBlueprintLibrary::GetMoveDirectionIntentFromInputs(Z_Param_Out_Inputs);
	P_NATIVE_END;
}
// ********** End Class UMoverDataModelBlueprintLibrary Function GetMoveDirectionIntentFromInputs **

// ********** Begin Class UMoverDataModelBlueprintLibrary Function GetMoveDirectionIntentFromSyncState 
struct Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics
{
	struct MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromSyncState_Parms
	{
		FMoverDefaultSyncState SyncState;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns the move direction intent, if any, in world space */" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Returns the move direction intent, if any, in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromSyncState_Parms, SyncState), Z_Construct_UScriptStruct_FMoverDefaultSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 198310774
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromSyncState_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDataModelBlueprintLibrary, nullptr, "GetMoveDirectionIntentFromSyncState", Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromSyncState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::MoverDataModelBlueprintLibrary_eventGetMoveDirectionIntentFromSyncState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDataModelBlueprintLibrary::execGetMoveDirectionIntentFromSyncState)
{
	P_GET_STRUCT_REF(FMoverDefaultSyncState,Z_Param_Out_SyncState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMoverDataModelBlueprintLibrary::GetMoveDirectionIntentFromSyncState(Z_Param_Out_SyncState);
	P_NATIVE_END;
}
// ********** End Class UMoverDataModelBlueprintLibrary Function GetMoveDirectionIntentFromSyncState 

// ********** Begin Class UMoverDataModelBlueprintLibrary Function GetOrientationFromSyncState *****
struct Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics
{
	struct MoverDataModelBlueprintLibrary_eventGetOrientationFromSyncState_Parms
	{
		FMoverDefaultSyncState SyncState;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns the orientation in world space */" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Returns the orientation in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetOrientationFromSyncState_Parms, SyncState), Z_Construct_UScriptStruct_FMoverDefaultSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 198310774
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetOrientationFromSyncState_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDataModelBlueprintLibrary, nullptr, "GetOrientationFromSyncState", Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::MoverDataModelBlueprintLibrary_eventGetOrientationFromSyncState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::MoverDataModelBlueprintLibrary_eventGetOrientationFromSyncState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDataModelBlueprintLibrary::execGetOrientationFromSyncState)
{
	P_GET_STRUCT_REF(FMoverDefaultSyncState,Z_Param_Out_SyncState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UMoverDataModelBlueprintLibrary::GetOrientationFromSyncState(Z_Param_Out_SyncState);
	P_NATIVE_END;
}
// ********** End Class UMoverDataModelBlueprintLibrary Function GetOrientationFromSyncState *******

// ********** Begin Class UMoverDataModelBlueprintLibrary Function GetVelocityFromSyncState ********
struct Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics
{
	struct MoverDataModelBlueprintLibrary_eventGetVelocityFromSyncState_Parms
	{
		FMoverDefaultSyncState SyncState;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Returns the velocity in world space */" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Returns the velocity in world space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SyncState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::NewProp_SyncState = { "SyncState", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetVelocityFromSyncState_Parms, SyncState), Z_Construct_UScriptStruct_FMoverDefaultSyncState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncState_MetaData), NewProp_SyncState_MetaData) }; // 198310774
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventGetVelocityFromSyncState_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::NewProp_SyncState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDataModelBlueprintLibrary, nullptr, "GetVelocityFromSyncState", Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::MoverDataModelBlueprintLibrary_eventGetVelocityFromSyncState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::MoverDataModelBlueprintLibrary_eventGetVelocityFromSyncState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDataModelBlueprintLibrary::execGetVelocityFromSyncState)
{
	P_GET_STRUCT_REF(FMoverDefaultSyncState,Z_Param_Out_SyncState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMoverDataModelBlueprintLibrary::GetVelocityFromSyncState(Z_Param_Out_SyncState);
	P_NATIVE_END;
}
// ********** End Class UMoverDataModelBlueprintLibrary Function GetVelocityFromSyncState **********

// ********** Begin Class UMoverDataModelBlueprintLibrary Function SetMoveIntent *******************
struct Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics
{
	struct MoverDataModelBlueprintLibrary_eventSetMoveIntent_Parms
	{
		FCharacterDefaultInputs Inputs;
		FVector WorldDirectionIntent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Sets move inputs from worldspace intent, as a per-axis magnitude in the range [-1,1] Zero vector indicates intent to stop. */" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Sets move inputs from worldspace intent, as a per-axis magnitude in the range [-1,1] Zero vector indicates intent to stop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDirectionIntent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirectionIntent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventSetMoveIntent_Parms, Inputs), Z_Construct_UScriptStruct_FCharacterDefaultInputs, METADATA_PARAMS(0, nullptr) }; // 760502792
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::NewProp_WorldDirectionIntent = { "WorldDirectionIntent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverDataModelBlueprintLibrary_eventSetMoveIntent_Parms, WorldDirectionIntent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDirectionIntent_MetaData), NewProp_WorldDirectionIntent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::NewProp_WorldDirectionIntent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverDataModelBlueprintLibrary, nullptr, "SetMoveIntent", Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::MoverDataModelBlueprintLibrary_eventSetMoveIntent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::MoverDataModelBlueprintLibrary_eventSetMoveIntent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverDataModelBlueprintLibrary::execSetMoveIntent)
{
	P_GET_STRUCT_REF(FCharacterDefaultInputs,Z_Param_Out_Inputs);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirectionIntent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMoverDataModelBlueprintLibrary::SetMoveIntent(Z_Param_Out_Inputs,Z_Param_Out_WorldDirectionIntent);
	P_NATIVE_END;
}
// ********** End Class UMoverDataModelBlueprintLibrary Function SetMoveIntent *********************

// ********** Begin Class UMoverDataModelBlueprintLibrary ******************************************
void UMoverDataModelBlueprintLibrary::StaticRegisterNativesUMoverDataModelBlueprintLibrary()
{
	UClass* Class = UMoverDataModelBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLocationFromSyncState", &UMoverDataModelBlueprintLibrary::execGetLocationFromSyncState },
		{ "GetMoveDirectionIntentFromInputs", &UMoverDataModelBlueprintLibrary::execGetMoveDirectionIntentFromInputs },
		{ "GetMoveDirectionIntentFromSyncState", &UMoverDataModelBlueprintLibrary::execGetMoveDirectionIntentFromSyncState },
		{ "GetOrientationFromSyncState", &UMoverDataModelBlueprintLibrary::execGetOrientationFromSyncState },
		{ "GetVelocityFromSyncState", &UMoverDataModelBlueprintLibrary::execGetVelocityFromSyncState },
		{ "SetMoveIntent", &UMoverDataModelBlueprintLibrary::execSetMoveIntent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverDataModelBlueprintLibrary;
UClass* UMoverDataModelBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UMoverDataModelBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UMoverDataModelBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverDataModelBlueprintLibrary"),
			Z_Registration_Info_UClass_UMoverDataModelBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUMoverDataModelBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UMoverDataModelBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverDataModelBlueprintLibrary_NoRegister()
{
	return UMoverDataModelBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverDataModelBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint function library to make it easier to work with Mover data structs, since we can't add UFUNCTIONs to structs\n */" },
		{ "IncludePath", "MoverDataModelTypes.h" },
		{ "ModuleRelativePath", "Public/MoverDataModelTypes.h" },
		{ "ToolTip", "Blueprint function library to make it easier to work with Mover data structs, since we can't add UFUNCTIONs to structs" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetLocationFromSyncState, "GetLocationFromSyncState" }, // 4224890336
		{ &Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs, "GetMoveDirectionIntentFromInputs" }, // 1286163710
		{ &Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState, "GetMoveDirectionIntentFromSyncState" }, // 3734011445
		{ &Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState, "GetOrientationFromSyncState" }, // 3147403606
		{ &Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState, "GetVelocityFromSyncState" }, // 270128346
		{ &Z_Construct_UFunction_UMoverDataModelBlueprintLibrary_SetMoveIntent, "SetMoveIntent" }, // 120121386
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverDataModelBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverDataModelBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDataModelBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverDataModelBlueprintLibrary_Statics::ClassParams = {
	&UMoverDataModelBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverDataModelBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverDataModelBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverDataModelBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UMoverDataModelBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverDataModelBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMoverDataModelBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverDataModelBlueprintLibrary.OuterSingleton;
}
UMoverDataModelBlueprintLibrary::UMoverDataModelBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverDataModelBlueprintLibrary);
UMoverDataModelBlueprintLibrary::~UMoverDataModelBlueprintLibrary() {}
// ********** End Class UMoverDataModelBlueprintLibrary ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoveInputType_StaticEnum, TEXT("EMoveInputType"), &Z_Registration_Info_UEnum_EMoveInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3894675629U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterDefaultInputs::StaticStruct, Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics::NewStructOps, TEXT("CharacterDefaultInputs"), &Z_Registration_Info_UScriptStruct_FCharacterDefaultInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterDefaultInputs), 760502792U) },
		{ FMoverDefaultSyncState::StaticStruct, Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics::NewStructOps, TEXT("MoverDefaultSyncState"), &Z_Registration_Info_UScriptStruct_FMoverDefaultSyncState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverDefaultSyncState), 198310774U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverDataModelBlueprintLibrary, UMoverDataModelBlueprintLibrary::StaticClass, TEXT("UMoverDataModelBlueprintLibrary"), &Z_Registration_Info_UClass_UMoverDataModelBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverDataModelBlueprintLibrary), 3010259159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h__Script_Mover_1808266744(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h__Script_Mover_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
