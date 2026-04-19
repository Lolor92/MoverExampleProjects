// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/PathedMovementTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePathedMovementTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMutablePathedMovementProperties();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FPathedPhysicsMovementState();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPathedPhysicsPlaybackBehavior ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathedPhysicsPlaybackBehavior;
static UEnum* EPathedPhysicsPlaybackBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathedPhysicsPlaybackBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathedPhysicsPlaybackBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EPathedPhysicsPlaybackBehavior"));
	}
	return Z_Registration_Info_UEnum_EPathedPhysicsPlaybackBehavior.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EPathedPhysicsPlaybackBehavior>()
{
	return EPathedPhysicsPlaybackBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Looping.Comment", "/** Progresses from 0 -> 1, then resetting to 0, repeating infinitely */" },
		{ "Looping.Name", "EPathedPhysicsPlaybackBehavior::Looping" },
		{ "Looping.ToolTip", "Progresses from 0 -> 1, then resetting to 0, repeating infinitely" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
		{ "OneShot.Comment", "/** Progresses from 0 -> 1 and then stops */" },
		{ "OneShot.Name", "EPathedPhysicsPlaybackBehavior::OneShot" },
		{ "OneShot.ToolTip", "Progresses from 0 -> 1 and then stops" },
		{ "PingPong.Comment", "/** Progresses from 0 -> 1 -> 0 -> 1 (and so on) infinitely */" },
		{ "PingPong.Name", "EPathedPhysicsPlaybackBehavior::PingPong" },
		{ "PingPong.ToolTip", "Progresses from 0 -> 1 -> 0 -> 1 (and so on) infinitely" },
		{ "ThereAndBack.Comment", "/** Progresses from 0 -> 1 -> 0 and then stops (basically a one-shot ping-pong) */" },
		{ "ThereAndBack.Name", "EPathedPhysicsPlaybackBehavior::ThereAndBack" },
		{ "ThereAndBack.ToolTip", "Progresses from 0 -> 1 -> 0 and then stops (basically a one-shot ping-pong)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPathedPhysicsPlaybackBehavior::OneShot", (int64)EPathedPhysicsPlaybackBehavior::OneShot },
		{ "EPathedPhysicsPlaybackBehavior::ThereAndBack", (int64)EPathedPhysicsPlaybackBehavior::ThereAndBack },
		{ "EPathedPhysicsPlaybackBehavior::Looping", (int64)EPathedPhysicsPlaybackBehavior::Looping },
		{ "EPathedPhysicsPlaybackBehavior::PingPong", (int64)EPathedPhysicsPlaybackBehavior::PingPong },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EPathedPhysicsPlaybackBehavior",
	"EPathedPhysicsPlaybackBehavior",
	Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior()
{
	if (!Z_Registration_Info_UEnum_EPathedPhysicsPlaybackBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathedPhysicsPlaybackBehavior.InnerSingleton, Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathedPhysicsPlaybackBehavior.InnerSingleton;
}
// ********** End Enum EPathedPhysicsPlaybackBehavior **********************************************

// ********** Begin ScriptStruct FMutablePathedMovementProperties **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMutablePathedMovementProperties;
class UScriptStruct* FMutablePathedMovementProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMutablePathedMovementProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMutablePathedMovementProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutablePathedMovementProperties, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MutablePathedMovementProperties"));
	}
	return Z_Registration_Info_UScriptStruct_FMutablePathedMovementProperties.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties that can change during game-time and affect path movement calculations.\n * Split into its own struct because both the input and sync state structs want to hold onto these. \n */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
		{ "ToolTip", "Properties that can change during game-time and affect path movement calculations.\nSplit into its own struct because both the input and sync state structs want to hold onto these." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementStartFrame_MetaData[] = {
		{ "Comment", "/**\n\x09 * The server frame of the simulation when movement should/did actually begin\n\x09 * Tracked this way so that we can set a future frame as the actual movement start frame to account for network latency, allowing clients and server to start at the same time irl.\n\x09 * A value < 0 indicates that no movement is happening along the path.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
		{ "ToolTip", "The server frame of the simulation when movement should/did actually begin\nTracked this way so that we can set a future frame as the actual movement start frame to account for network latency, allowing clients and server to start at the same time irl.\nA value < 0 indicates that no movement is happening along the path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInReverse_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJointEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementStartFrame;
	static void NewProp_bIsInReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInReverse;
	static void NewProp_bIsJointEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJointEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackBehavior;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutablePathedMovementProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_MovementStartFrame = { "MovementStartFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutablePathedMovementProperties, MovementStartFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementStartFrame_MetaData), NewProp_MovementStartFrame_MetaData) };
void Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_bIsInReverse_SetBit(void* Obj)
{
	((FMutablePathedMovementProperties*)Obj)->bIsInReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_bIsInReverse = { "bIsInReverse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutablePathedMovementProperties), &Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_bIsInReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInReverse_MetaData), NewProp_bIsInReverse_MetaData) };
void Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_bIsJointEnabled_SetBit(void* Obj)
{
	((FMutablePathedMovementProperties*)Obj)->bIsJointEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_bIsJointEnabled = { "bIsJointEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMutablePathedMovementProperties), &Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_bIsJointEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJointEnabled_MetaData), NewProp_bIsJointEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_PlaybackBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_PlaybackBehavior = { "PlaybackBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutablePathedMovementProperties, PlaybackBehavior), Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackBehavior_MetaData), NewProp_PlaybackBehavior_MetaData) }; // 1344396160
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_PathOrigin = { "PathOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMutablePathedMovementProperties, PathOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOrigin_MetaData), NewProp_PathOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_MovementStartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_bIsInReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_bIsJointEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_PlaybackBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_PlaybackBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewProp_PathOrigin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MutablePathedMovementProperties",
	Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::PropPointers),
	sizeof(FMutablePathedMovementProperties),
	alignof(FMutablePathedMovementProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMutablePathedMovementProperties()
{
	if (!Z_Registration_Info_UScriptStruct_FMutablePathedMovementProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMutablePathedMovementProperties.InnerSingleton, Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMutablePathedMovementProperties.InnerSingleton;
}
// ********** End ScriptStruct FMutablePathedMovementProperties ************************************

// ********** Begin ScriptStruct FPathedPhysicsMovementInputs **************************************
static_assert(std::is_polymorphic<FPathedPhysicsMovementInputs>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FPathedPhysicsMovementInputs cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementInputs;
class UScriptStruct* FPathedPhysicsMovementInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("PathedPhysicsMovementInputs"));
	}
	return Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementInputs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Frame inputs for all pathed movement\n * Any property that can change during game time must be delivered in this way, only immutable properties can be safely\n * referenced directly on the object they come from (usually the movement mode)\n */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
		{ "ToolTip", "Frame inputs for all pathed movement\nAny property that can change during game time must be delivered in this way, only immutable properties can be safely\nreferenced directly on the object they come from (usually the movement mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Props_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Props;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathedPhysicsMovementInputs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::NewProp_Props = { "Props", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathedPhysicsMovementInputs, Props), Z_Construct_UScriptStruct_FMutablePathedMovementProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Props_MetaData), NewProp_Props_MetaData) }; // 3904195968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::NewProp_Props,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"PathedPhysicsMovementInputs",
	Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::PropPointers),
	sizeof(FPathedPhysicsMovementInputs),
	alignof(FPathedPhysicsMovementInputs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs()
{
	if (!Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementInputs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementInputs.InnerSingleton, Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementInputs.InnerSingleton;
}
// ********** End ScriptStruct FPathedPhysicsMovementInputs ****************************************

// ********** Begin ScriptStruct FPathedPhysicsMovementState ***************************************
static_assert(std::is_polymorphic<FPathedPhysicsMovementState>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FPathedPhysicsMovementState cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementState;
class UScriptStruct* FPathedPhysicsMovementState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathedPhysicsMovementState, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("PathedPhysicsMovementState"));
	}
	return Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** State about the pathed movement that persists from frame to frame */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
		{ "ToolTip", "State about the pathed movement that persists from frame to frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastStopPlaybackTime_MetaData[] = {
		{ "Comment", "/** The (bounded) playback time along the path where we were the last time movement stopped for any reason */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
		{ "ToolTip", "The (bounded) playback time along the path where we were the last time movement stopped for any reason" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutableProps_MetaData[] = {
		{ "Comment", "/** The most recent mutable properties received from the input */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementTypes.h" },
		{ "ToolTip", "The most recent mutable properties received from the input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastStopPlaybackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MutableProps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathedPhysicsMovementState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::NewProp_LastStopPlaybackTime = { "LastStopPlaybackTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathedPhysicsMovementState, LastStopPlaybackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastStopPlaybackTime_MetaData), NewProp_LastStopPlaybackTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathedPhysicsMovementState, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProgress_MetaData), NewProp_CurrentProgress_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::NewProp_MutableProps = { "MutableProps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathedPhysicsMovementState, MutableProps), Z_Construct_UScriptStruct_FMutablePathedMovementProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutableProps_MetaData), NewProp_MutableProps_MetaData) }; // 3904195968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::NewProp_LastStopPlaybackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::NewProp_MutableProps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"PathedPhysicsMovementState",
	Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::PropPointers),
	sizeof(FPathedPhysicsMovementState),
	alignof(FPathedPhysicsMovementState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPathedPhysicsMovementState()
{
	if (!Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementState.InnerSingleton, Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementState.InnerSingleton;
}
// ********** End ScriptStruct FPathedPhysicsMovementState *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPathedPhysicsPlaybackBehavior_StaticEnum, TEXT("EPathedPhysicsPlaybackBehavior"), &Z_Registration_Info_UEnum_EPathedPhysicsPlaybackBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1344396160U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMutablePathedMovementProperties::StaticStruct, Z_Construct_UScriptStruct_FMutablePathedMovementProperties_Statics::NewStructOps, TEXT("MutablePathedMovementProperties"), &Z_Registration_Info_UScriptStruct_FMutablePathedMovementProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutablePathedMovementProperties), 3904195968U) },
		{ FPathedPhysicsMovementInputs::StaticStruct, Z_Construct_UScriptStruct_FPathedPhysicsMovementInputs_Statics::NewStructOps, TEXT("PathedPhysicsMovementInputs"), &Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathedPhysicsMovementInputs), 1237987222U) },
		{ FPathedPhysicsMovementState::StaticStruct, Z_Construct_UScriptStruct_FPathedPhysicsMovementState_Statics::NewStructOps, TEXT("PathedPhysicsMovementState"), &Z_Registration_Info_UScriptStruct_FPathedPhysicsMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathedPhysicsMovementState), 3666152293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h__Script_Mover_3589608502(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h__Script_Mover_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementTypes_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
