// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBasicLayeredMoves() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_JumpTo();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_MoveTo();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FLayeredMoveBase();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELayeredMove_ConstantVelocitySettingsFlags ********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELayeredMove_ConstantVelocitySettingsFlags;
static UEnum* ELayeredMove_ConstantVelocitySettingsFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELayeredMove_ConstantVelocitySettingsFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELayeredMove_ConstantVelocitySettingsFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("ELayeredMove_ConstantVelocitySettingsFlags"));
	}
	return Z_Registration_Info_UEnum_ELayeredMove_ConstantVelocitySettingsFlags.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<ELayeredMove_ConstantVelocitySettingsFlags>()
{
	return ELayeredMove_ConstantVelocitySettingsFlags_StaticEnum();
}
struct Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "NoFlags.Name", "ELayeredMove_ConstantVelocitySettingsFlags::NoFlags" },
		{ "VelocityAlwaysRelative.Comment", "// Velocity direction is always relative to the target actor, even if its orientation changes. This flag is incompatible with other Velocity**** flags\n" },
		{ "VelocityAlwaysRelative.Name", "ELayeredMove_ConstantVelocitySettingsFlags::VelocityAlwaysRelative" },
		{ "VelocityAlwaysRelative.ToolTip", "Velocity direction is always relative to the target actor, even if its orientation changes. This flag is incompatible with other Velocity**** flags" },
		{ "VelocityStartRelative.Comment", "// Velocity direction is determined when this move starts, relative to the target actor. This flag is incompatible with other Velocity**** flags\n" },
		{ "VelocityStartRelative.Name", "ELayeredMove_ConstantVelocitySettingsFlags::VelocityStartRelative" },
		{ "VelocityStartRelative.ToolTip", "Velocity direction is determined when this move starts, relative to the target actor. This flag is incompatible with other Velocity**** flags" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELayeredMove_ConstantVelocitySettingsFlags::NoFlags", (int64)ELayeredMove_ConstantVelocitySettingsFlags::NoFlags },
		{ "ELayeredMove_ConstantVelocitySettingsFlags::VelocityStartRelative", (int64)ELayeredMove_ConstantVelocitySettingsFlags::VelocityStartRelative },
		{ "ELayeredMove_ConstantVelocitySettingsFlags::VelocityAlwaysRelative", (int64)ELayeredMove_ConstantVelocitySettingsFlags::VelocityAlwaysRelative },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"ELayeredMove_ConstantVelocitySettingsFlags",
	"ELayeredMove_ConstantVelocitySettingsFlags",
	Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags()
{
	if (!Z_Registration_Info_UEnum_ELayeredMove_ConstantVelocitySettingsFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELayeredMove_ConstantVelocitySettingsFlags.InnerSingleton, Z_Construct_UEnum_Mover_ELayeredMove_ConstantVelocitySettingsFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELayeredMove_ConstantVelocitySettingsFlags.InnerSingleton;
}
// ********** End Enum ELayeredMove_ConstantVelocitySettingsFlags **********************************

// ********** Begin ScriptStruct FLayeredMove_LinearVelocity ***************************************
static_assert(std::is_polymorphic<FLayeredMove_LinearVelocity>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_LinearVelocity cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_LinearVelocity;
class UScriptStruct* FLayeredMove_LinearVelocity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_LinearVelocity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_LinearVelocity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_LinearVelocity"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_LinearVelocity.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Linear Velocity: A method of inducing a straight-line velocity on an actor over time  */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Linear Velocity: A method of inducing a straight-line velocity on an actor over time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Units per second, could be worldspace vs relative depending on Flags\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Units per second, could be worldspace vs relative depending on Flags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeOverTime_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional curve float for controlling the magnitude of the velocity applied to the actor over the duration of the move\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Optional curve float for controlling the magnitude of the velocity applied to the actor over the duration of the move" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsFlags_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// @see ELayeredMove_ConstantVelocitySettingsFlags\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "@see ELayeredMove_ConstantVelocitySettingsFlags" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MagnitudeOverTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SettingsFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_LinearVelocity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_LinearVelocity, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::NewProp_MagnitudeOverTime = { "MagnitudeOverTime", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_LinearVelocity, MagnitudeOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnitudeOverTime_MetaData), NewProp_MagnitudeOverTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::NewProp_SettingsFlags = { "SettingsFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_LinearVelocity, SettingsFlags), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsFlags_MetaData), NewProp_SettingsFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::NewProp_MagnitudeOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::NewProp_SettingsFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_LinearVelocity",
	Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::PropPointers),
	sizeof(FLayeredMove_LinearVelocity),
	alignof(FLayeredMove_LinearVelocity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_LinearVelocity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_LinearVelocity.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_LinearVelocity.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_LinearVelocity *****************************************

// ********** Begin ScriptStruct FLayeredMove_JumpImpulseOverDuration ******************************
static_assert(std::is_polymorphic<FLayeredMove_JumpImpulseOverDuration>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_JumpImpulseOverDuration cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_JumpImpulseOverDuration;
class UScriptStruct* FLayeredMove_JumpImpulseOverDuration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_JumpImpulseOverDuration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_JumpImpulseOverDuration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_JumpImpulseOverDuration"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_JumpImpulseOverDuration.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Jump Impulse Over Duration: introduces an instantaneous upwards change in velocity over a duration(ms).\n  * This overrides the existing 'up' component of the actor's current velocity\n  * Note: For a one time Jump Impulse consider using a FJumpImpulseEffect Instant Effect\n  */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Jump Impulse Over Duration: introduces an instantaneous upwards change in velocity over a duration(ms).\nThis overrides the existing 'up' component of the actor's current velocity\nNote: For a one time Jump Impulse consider using a FJumpImpulseEffect Instant Effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpwardsSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Units per second, in whatever direction the target actor considers 'up'\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Units per second, in whatever direction the target actor considers 'up'" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpwardsSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_JumpImpulseOverDuration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::NewProp_UpwardsSpeed = { "UpwardsSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_JumpImpulseOverDuration, UpwardsSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpwardsSpeed_MetaData), NewProp_UpwardsSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::NewProp_UpwardsSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_JumpImpulseOverDuration",
	Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::PropPointers),
	sizeof(FLayeredMove_JumpImpulseOverDuration),
	alignof(FLayeredMove_JumpImpulseOverDuration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_JumpImpulseOverDuration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_JumpImpulseOverDuration.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_JumpImpulseOverDuration.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_JumpImpulseOverDuration ********************************

// ********** Begin ScriptStruct FLayeredMove_JumpTo ***********************************************
static_assert(std::is_polymorphic<FLayeredMove_JumpTo>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_JumpTo cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_JumpTo;
class UScriptStruct* FLayeredMove_JumpTo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_JumpTo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_JumpTo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_JumpTo, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_JumpTo"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_JumpTo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** JumpTo: Moves this actor in a more jump-like manner - specifying height and distance of jump rather than just upwards speed\n  * Note: this layered move is only intended for Mover actors using Z as it's up direction\n  */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "JumpTo: Moves this actor in a more jump-like manner - specifying height and distance of jump rather than just upwards speed\nNote: this layered move is only intended for Mover actors using Z as it's up direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpDistance_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Distance this jump impulse is supposed to reach\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Distance this jump impulse is supposed to reach" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Height this jump impulse is supposed to reach\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Height this jump impulse is supposed to reach" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseActorRotation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// If true this jump will use the actor's rotation for jump direction instead of the Jump Rotation property.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "If true this jump will use the actor's rotation for jump direction instead of the Jump Rotation property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpRotation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Direction to jump in. Only used if bUseActorRotation is false\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Direction to jump in. Only used if bUseActorRotation is false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional CurveVector used to offset the actor from the path\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Optional CurveVector used to offset the actor from the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional CurveFloat to modify jump impulse over the duration of the impulse\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Optional CurveFloat to modify jump impulse over the duration of the impulse" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
	static void NewProp_bUseActorRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActorRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JumpRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_JumpTo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_JumpDistance = { "JumpDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_JumpTo, JumpDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpDistance_MetaData), NewProp_JumpDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_JumpTo, JumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpHeight_MetaData), NewProp_JumpHeight_MetaData) };
void Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_bUseActorRotation_SetBit(void* Obj)
{
	((FLayeredMove_JumpTo*)Obj)->bUseActorRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_bUseActorRotation = { "bUseActorRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayeredMove_JumpTo), &Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_bUseActorRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseActorRotation_MetaData), NewProp_bUseActorRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_JumpRotation = { "JumpRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_JumpTo, JumpRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpRotation_MetaData), NewProp_JumpRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_JumpTo, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOffsetCurve_MetaData), NewProp_PathOffsetCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_JumpTo, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeMappingCurve_MetaData), NewProp_TimeMappingCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_JumpDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_JumpHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_bUseActorRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_JumpRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_PathOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewProp_TimeMappingCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_JumpTo",
	Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::PropPointers),
	sizeof(FLayeredMove_JumpTo),
	alignof(FLayeredMove_JumpTo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_JumpTo()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_JumpTo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_JumpTo.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_JumpTo.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_JumpTo *************************************************

// ********** Begin ScriptStruct FLayeredMove_MoveTo ***********************************************
static_assert(std::is_polymorphic<FLayeredMove_MoveTo>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_MoveTo cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_MoveTo;
class UScriptStruct* FLayeredMove_MoveTo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_MoveTo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_MoveTo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_MoveTo, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_MoveTo"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_MoveTo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** MoveTo: Move Actor from the starting location to the target location over a duration of time.*/" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "MoveTo: Move Actor from the starting location to the target location over a duration of time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Location to Start the MoveTo move from\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Location to Start the MoveTo move from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Location to move towards\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Location to move towards" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpeedToExpected_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// if true, will restrict speed to where the actor is expected to be (in regard to start, end and duration)\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "if true, will restrict speed to where the actor is expected to be (in regard to start, end and duration)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional CurveVector used to offset the actor from the path\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Optional CurveVector used to offset the actor from the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional CurveFloat to apply to how fast the actor moves as they get closer to the target location\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Optional CurveFloat to apply to how fast the actor moves as they get closer to the target location" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_MoveTo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_MoveTo, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_MoveTo, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
void Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
{
	((FLayeredMove_MoveTo*)Obj)->bRestrictSpeedToExpected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayeredMove_MoveTo), &Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictSpeedToExpected_MetaData), NewProp_bRestrictSpeedToExpected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_MoveTo, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOffsetCurve_MetaData), NewProp_PathOffsetCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_MoveTo, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeMappingCurve_MetaData), NewProp_TimeMappingCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_bRestrictSpeedToExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_PathOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewProp_TimeMappingCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_MoveTo",
	Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::PropPointers),
	sizeof(FLayeredMove_MoveTo),
	alignof(FLayeredMove_MoveTo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_MoveTo()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_MoveTo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_MoveTo.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_MoveTo.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_MoveTo *************************************************

// ********** Begin ScriptStruct FLayeredMove_MoveToDynamic ****************************************
static_assert(std::is_polymorphic<FLayeredMove_MoveToDynamic>() == std::is_polymorphic<FLayeredMove_MoveTo>(), "USTRUCT FLayeredMove_MoveToDynamic cannot be polymorphic unless super FLayeredMove_MoveTo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_MoveToDynamic;
class UScriptStruct* FLayeredMove_MoveToDynamic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_MoveToDynamic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_MoveToDynamic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_MoveToDynamic"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_MoveToDynamic.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** MoveToDynamic: Move Actor from the starting location to the target location over a duration of time with a moving target location\n *  You can either update TargetLocation manually to update the location this actor is moving towards or set an actor for this actor to move towards.\n */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "MoveToDynamic: Move Actor from the starting location to the target location over a duration of time with a moving target location\nYou can either update TargetLocation manually to update the location this actor is moving towards or set an actor for this actor to move towards." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationActor_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional actor to move to. Note: this overrides the TargetLocation Property\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Optional actor to move to. Note: this overrides the TargetLocation Property" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_MoveToDynamic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::NewProp_LocationActor = { "LocationActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_MoveToDynamic, LocationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationActor_MetaData), NewProp_LocationActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::NewProp_LocationActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMove_MoveTo,
	&NewStructOps,
	"LayeredMove_MoveToDynamic",
	Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::PropPointers),
	sizeof(FLayeredMove_MoveToDynamic),
	alignof(FLayeredMove_MoveToDynamic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_MoveToDynamic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_MoveToDynamic.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_MoveToDynamic.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_MoveToDynamic ******************************************

// ********** Begin ScriptStruct FLayeredMove_RadialImpulse ****************************************
static_assert(std::is_polymorphic<FLayeredMove_RadialImpulse>() == std::is_polymorphic<FLayeredMoveBase>(), "USTRUCT FLayeredMove_RadialImpulse cannot be polymorphic unless super FLayeredMoveBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeredMove_RadialImpulse;
class UScriptStruct* FLayeredMove_RadialImpulse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_RadialImpulse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLayeredMove_RadialImpulse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("LayeredMove_RadialImpulse"));
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_RadialImpulse.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** RadialImpulse applies a velocity pulling or pushing away from a given world location to the target actor */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "RadialImpulse applies a velocity pulling or pushing away from a given world location to the target actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Location to pull or push actor from\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Location to pull or push actor from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationActor_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional Actor to pull or push this actor from. Note: this overrides the Location Property\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Optional Actor to pull or push this actor from. Note: this overrides the Location Property" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Radius from the location to apply radial velocity\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Radius from the location to apply radial velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Magnitude of velocity applied to actors in range\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Magnitude of velocity applied to actors in range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPush_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// If true the velocity applied will push actor away from location, otherwise this layered move wil pull the actor towards it\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "If true the velocity applied will push actor away from location, otherwise this layered move wil pull the actor towards it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoVerticalVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Whether to apply vertical velocity (based off mover components up direction) to the actor affected by this layered move\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Whether to apply vertical velocity (based off mover components up direction) to the actor affected by this layered move" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFalloff_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional Curvefloat to dictate falloff of velocity as you get further from the velocity location\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Optional Curvefloat to dictate falloff of velocity as you get further from the velocity location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeOverTime_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Optional Curvefloat to dictate magnitude of velocity applied over time\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Optional Curvefloat to dictate magnitude of velocity applied over time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedWorldDirection_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// If true velocity added to the actor will be in the direction of FixedWorldDirection, otherwise it will be calculated from the position of the actor and velocity location.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "If true velocity added to the actor will be in the direction of FixedWorldDirection, otherwise it will be calculated from the position of the actor and velocity location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedWorldDirection_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Direction to apply velocity from the radial impulse in. This is only taken into account if UseFixedWorldDirection is true.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/LayeredMoves/BasicLayeredMoves.h" },
		{ "ToolTip", "Direction to apply velocity from the radial impulse in. This is only taken into account if UseFixedWorldDirection is true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static void NewProp_bIsPush_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPush;
	static void NewProp_bNoVerticalVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoVerticalVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceFalloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MagnitudeOverTime;
	static void NewProp_bUseFixedWorldDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedWorldDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedWorldDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeredMove_RadialImpulse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_RadialImpulse, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_LocationActor = { "LocationActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_RadialImpulse, LocationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationActor_MetaData), NewProp_LocationActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_RadialImpulse, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_RadialImpulse, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
void Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bIsPush_SetBit(void* Obj)
{
	((FLayeredMove_RadialImpulse*)Obj)->bIsPush = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bIsPush = { "bIsPush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayeredMove_RadialImpulse), &Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bIsPush_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPush_MetaData), NewProp_bIsPush_MetaData) };
void Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bNoVerticalVelocity_SetBit(void* Obj)
{
	((FLayeredMove_RadialImpulse*)Obj)->bNoVerticalVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bNoVerticalVelocity = { "bNoVerticalVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayeredMove_RadialImpulse), &Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bNoVerticalVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoVerticalVelocity_MetaData), NewProp_bNoVerticalVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_DistanceFalloff = { "DistanceFalloff", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_RadialImpulse, DistanceFalloff), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFalloff_MetaData), NewProp_DistanceFalloff_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_MagnitudeOverTime = { "MagnitudeOverTime", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_RadialImpulse, MagnitudeOverTime), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagnitudeOverTime_MetaData), NewProp_MagnitudeOverTime_MetaData) };
void Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bUseFixedWorldDirection_SetBit(void* Obj)
{
	((FLayeredMove_RadialImpulse*)Obj)->bUseFixedWorldDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bUseFixedWorldDirection = { "bUseFixedWorldDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayeredMove_RadialImpulse), &Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bUseFixedWorldDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedWorldDirection_MetaData), NewProp_bUseFixedWorldDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_FixedWorldDirection = { "FixedWorldDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeredMove_RadialImpulse, FixedWorldDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedWorldDirection_MetaData), NewProp_FixedWorldDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_LocationActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bIsPush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bNoVerticalVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_DistanceFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_MagnitudeOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_bUseFixedWorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewProp_FixedWorldDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FLayeredMoveBase,
	&NewStructOps,
	"LayeredMove_RadialImpulse",
	Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::PropPointers),
	sizeof(FLayeredMove_RadialImpulse),
	alignof(FLayeredMove_RadialImpulse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse()
{
	if (!Z_Registration_Info_UScriptStruct_FLayeredMove_RadialImpulse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeredMove_RadialImpulse.InnerSingleton, Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLayeredMove_RadialImpulse.InnerSingleton;
}
// ********** End ScriptStruct FLayeredMove_RadialImpulse ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELayeredMove_ConstantVelocitySettingsFlags_StaticEnum, TEXT("ELayeredMove_ConstantVelocitySettingsFlags"), &Z_Registration_Info_UEnum_ELayeredMove_ConstantVelocitySettingsFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2272519545U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayeredMove_LinearVelocity::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_LinearVelocity_Statics::NewStructOps, TEXT("LayeredMove_LinearVelocity"), &Z_Registration_Info_UScriptStruct_FLayeredMove_LinearVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_LinearVelocity), 1977357939U) },
		{ FLayeredMove_JumpImpulseOverDuration::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_JumpImpulseOverDuration_Statics::NewStructOps, TEXT("LayeredMove_JumpImpulseOverDuration"), &Z_Registration_Info_UScriptStruct_FLayeredMove_JumpImpulseOverDuration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_JumpImpulseOverDuration), 932361009U) },
		{ FLayeredMove_JumpTo::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_JumpTo_Statics::NewStructOps, TEXT("LayeredMove_JumpTo"), &Z_Registration_Info_UScriptStruct_FLayeredMove_JumpTo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_JumpTo), 447843838U) },
		{ FLayeredMove_MoveTo::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_MoveTo_Statics::NewStructOps, TEXT("LayeredMove_MoveTo"), &Z_Registration_Info_UScriptStruct_FLayeredMove_MoveTo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_MoveTo), 3419234086U) },
		{ FLayeredMove_MoveToDynamic::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_MoveToDynamic_Statics::NewStructOps, TEXT("LayeredMove_MoveToDynamic"), &Z_Registration_Info_UScriptStruct_FLayeredMove_MoveToDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_MoveToDynamic), 2538063449U) },
		{ FLayeredMove_RadialImpulse::StaticStruct, Z_Construct_UScriptStruct_FLayeredMove_RadialImpulse_Statics::NewStructOps, TEXT("LayeredMove_RadialImpulse"), &Z_Registration_Info_UScriptStruct_FLayeredMove_RadialImpulse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeredMove_RadialImpulse), 59685946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h__Script_Mover_27707304(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h__Script_Mover_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_LayeredMoves_BasicLayeredMoves_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
