// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/PathedMovementPatternBase.h"
#include "PhysicsMover/PathedMovement/PathedMovementMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePathedMovementPatternBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase();
MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EPatternAxisMaskFlags();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPatternAxisMaskFlags *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatternAxisMaskFlags;
static UEnum* EPatternAxisMaskFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPatternAxisMaskFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPatternAxisMaskFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EPatternAxisMaskFlags, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EPatternAxisMaskFlags"));
	}
	return Z_Registration_Info_UEnum_EPatternAxisMaskFlags.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EPatternAxisMaskFlags>()
{
	return EPatternAxisMaskFlags_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EPatternAxisMaskFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "EPatternAxisMaskFlags::All" },
		{ "Bitflags", "" },
		{ "Comment", "//@todo DanH: What's the Flags specifier for? Does that do everything now or do I still need the Bitflags meta?\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPatternAxisMaskFlags::None" },
		{ "ToolTip", "@todo DanH: What's the Flags specifier for? Does that do everything now or do I still need the Bitflags meta?" },
		{ "X.DisplayName", "X / Roll" },
		{ "X.Name", "EPatternAxisMaskFlags::X" },
		{ "Y.DisplayName", "Y / Pitch" },
		{ "Y.Name", "EPatternAxisMaskFlags::Y" },
		{ "Z.DisplayName", "Z / Yaw)" },
		{ "Z.Name", "EPatternAxisMaskFlags::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPatternAxisMaskFlags::None", (int64)EPatternAxisMaskFlags::None },
		{ "EPatternAxisMaskFlags::X", (int64)EPatternAxisMaskFlags::X },
		{ "EPatternAxisMaskFlags::Y", (int64)EPatternAxisMaskFlags::Y },
		{ "EPatternAxisMaskFlags::Z", (int64)EPatternAxisMaskFlags::Z },
		{ "EPatternAxisMaskFlags::All", (int64)EPatternAxisMaskFlags::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EPatternAxisMaskFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EPatternAxisMaskFlags",
	"EPatternAxisMaskFlags",
	Z_Construct_UEnum_Mover_EPatternAxisMaskFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EPatternAxisMaskFlags_Statics::Enumerators),
	EEnumFlags::Flags,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EPatternAxisMaskFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EPatternAxisMaskFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EPatternAxisMaskFlags()
{
	if (!Z_Registration_Info_UEnum_EPatternAxisMaskFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatternAxisMaskFlags.InnerSingleton, Z_Construct_UEnum_Mover_EPatternAxisMaskFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPatternAxisMaskFlags.InnerSingleton;
}
// ********** End Enum EPatternAxisMaskFlags *******************************************************

// ********** Begin Class UPathedMovementPatternBase ***********************************************
void UPathedMovementPatternBase::StaticRegisterNativesUPathedMovementPatternBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPathedMovementPatternBase;
UClass* UPathedMovementPatternBase::GetPrivateStaticClass()
{
	using TClass = UPathedMovementPatternBase;
	if (!Z_Registration_Info_UClass_UPathedMovementPatternBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PathedMovementPatternBase"),
			Z_Registration_Info_UClass_UPathedMovementPatternBase.InnerSingleton,
			StaticRegisterNativesUPathedMovementPatternBase,
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
	return Z_Registration_Info_UClass_UPathedMovementPatternBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UPathedMovementPatternBase_NoRegister()
{
	return UPathedMovementPatternBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPathedMovementPatternBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMasks_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Mover.EPatternAxisMaskFlags" },
		{ "Category", "Path Pattern" },
		{ "Comment", "/** Along which axes is this pattern disallowed from modifying the translation/location of the updated component? */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "Along which axes is this pattern disallowed from modifying the translation/location of the updated component?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMasks_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Mover.EPatternAxisMaskFlags" },
		{ "Category", "Path Pattern" },
		{ "Comment", "/** Along which axes is this pattern disallowed from modifying the rotation of the updated component? */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "Along which axes is this pattern disallowed from modifying the rotation of the updated component?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMasks_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Mover.EPatternAxisMaskFlags" },
		{ "Category", "Path Pattern" },
		{ "Comment", "/** Along which axes is this pattern disallowed from modifying the scale of the updated component? */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "Along which axes is this pattern disallowed from modifying the scale of the updated component?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartAfterPreviousPattern_MetaData[] = {
		{ "Category", "Path Pattern" },
		{ "Comment", "/**\n\x09 * If true, this pattern will not begin to take effect until the previous pattern has completed.\n\x09 * Note: If true and the previous pattern's EndAtPathProgress is 1, this pattern will never start.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "If true, this pattern will not begin to take effect until the previous pattern has completed.\nNote: If true and the previous pattern's EndAtPathProgress is 1, this pattern will never start." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAtPathProgress_MetaData[] = {
		{ "Category", "Path Pattern" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The overall path progress when this pattern should begin, where 0 is the start of the path and 1 is the end. Must be less than EndAtProgress. */" },
		{ "EditCondition", "!bStartAfterPreviousPattern" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "The overall path progress when this pattern should begin, where 0 is the start of the path and 1 is the end. Must be less than EndAtProgress." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAtPathProgress_MetaData[] = {
		{ "Category", "Path Pattern" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The overall path progress when this pattern should complete, where 0 is the start of the path and 1 is the end. Must be greater than StartAtProgress. */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "The overall path progress when this pattern should complete, where 0 is the start of the path and 1 is the end. Must be greater than StartAtProgress." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoopsPerPath_MetaData[] = {
		{ "Category", "Path Pattern" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The number of loops to complete within the active span of this pattern (i.e. between StartAtProgress and EndAtProgress)\n\x09 * on a single run along the full aggregate path. Setting to 0 effectively disables this pattern.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "The number of loops to complete within the active span of this pattern (i.e. between StartAtProgress and EndAtProgress)\non a single run along the full aggregate path. Setting to 0 effectively disables this pattern." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerLoopBehavior_MetaData[] = {
		{ "Category", "Path Pattern" },
		{ "Comment", "/** Playback behavior per loop of this pattern */" },
		{ "InvalidEnumValues", "Looping,PingPong" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "Playback behavior per loop of this pattern" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientComponentToPath_MetaData[] = {
		{ "Category", "Path Pattern" },
		{ "Comment", "/** \n\x09 * If true, the component will be rotated to face in the direction of this pattern's motion.\n\x09 * To have the component face in the direction of the aggregate path, enable this on all movement patterns.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "If true, the component will be rotated to face in the direction of this pattern's motion.\nTo have the component face in the direction of the aggregate path, enable this on all movement patterns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Easing_MetaData[] = {
		{ "Category", "Path Pattern" },
		{ "Comment", "/** The kind of easing to apply when traveling along the path */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "The kind of easing to apply when traveling along the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEasingCurve_MetaData[] = {
		{ "Category", "Path Pattern" },
		{ "Comment", "/** If using a custom ease, this is the curve that will be used. If blank, will fall back to standard linear interpolation. */" },
		{ "EditCondition", "Easing==EAlphaBlendOption::Custom" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "If using a custom ease, this is the curve that will be used. If blank, will fall back to standard linear interpolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawPattern_MetaData[] = {
		{ "Category", "Path Pattern|Debug" },
		{ "Comment", "/** True to draw debug lines for this specific pattern in editor views */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "True to draw debug lines for this specific pattern in editor views" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternDebugDrawColor_MetaData[] = {
		{ "Category", "Path Pattern|Debug" },
		{ "Comment", "/** The color used for debug draws of this pattern */" },
		{ "EditCondition", "bDrawDebug" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementPatternBase.h" },
		{ "ToolTip", "The color used for debug draws of this pattern" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMasks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMasks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleMasks;
	static void NewProp_bStartAfterPreviousPattern_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAfterPreviousPattern;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAtPathProgress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAtPathProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoopsPerPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PerLoopBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PerLoopBehavior;
	static void NewProp_bOrientComponentToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientComponentToPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Easing_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Easing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomEasingCurve;
	static void NewProp_bDebugDrawPattern_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawPattern;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatternDebugDrawColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathedMovementPatternBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_TranslationMasks = { "TranslationMasks", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, TranslationMasks), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationMasks_MetaData), NewProp_TranslationMasks_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_RotationMasks = { "RotationMasks", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, RotationMasks), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMasks_MetaData), NewProp_RotationMasks_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_ScaleMasks = { "ScaleMasks", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, ScaleMasks), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMasks_MetaData), NewProp_ScaleMasks_MetaData) };
void Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bStartAfterPreviousPattern_SetBit(void* Obj)
{
	((UPathedMovementPatternBase*)Obj)->bStartAfterPreviousPattern = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bStartAfterPreviousPattern = { "bStartAfterPreviousPattern", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathedMovementPatternBase), &Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bStartAfterPreviousPattern_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartAfterPreviousPattern_MetaData), NewProp_bStartAfterPreviousPattern_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_StartAtPathProgress = { "StartAtPathProgress", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, StartAtPathProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAtPathProgress_MetaData), NewProp_StartAtPathProgress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_EndAtPathProgress = { "EndAtPathProgress", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, EndAtPathProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAtPathProgress_MetaData), NewProp_EndAtPathProgress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_NumLoopsPerPath = { "NumLoopsPerPath", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, NumLoopsPerPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoopsPerPath_MetaData), NewProp_NumLoopsPerPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_PerLoopBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_PerLoopBehavior = { "PerLoopBehavior", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, PerLoopBehavior), Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerLoopBehavior_MetaData), NewProp_PerLoopBehavior_MetaData) }; // 1344396160
void Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bOrientComponentToPath_SetBit(void* Obj)
{
	((UPathedMovementPatternBase*)Obj)->bOrientComponentToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bOrientComponentToPath = { "bOrientComponentToPath", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathedMovementPatternBase), &Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bOrientComponentToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientComponentToPath_MetaData), NewProp_bOrientComponentToPath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_Easing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_Easing = { "Easing", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, Easing), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Easing_MetaData), NewProp_Easing_MetaData) }; // 2330456755
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_CustomEasingCurve = { "CustomEasingCurve", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, CustomEasingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEasingCurve_MetaData), NewProp_CustomEasingCurve_MetaData) };
void Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bDebugDrawPattern_SetBit(void* Obj)
{
	((UPathedMovementPatternBase*)Obj)->bDebugDrawPattern = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bDebugDrawPattern = { "bDebugDrawPattern", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathedMovementPatternBase), &Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bDebugDrawPattern_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawPattern_MetaData), NewProp_bDebugDrawPattern_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_PatternDebugDrawColor = { "PatternDebugDrawColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedMovementPatternBase, PatternDebugDrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternDebugDrawColor_MetaData), NewProp_PatternDebugDrawColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathedMovementPatternBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_TranslationMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_RotationMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_ScaleMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bStartAfterPreviousPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_StartAtPathProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_EndAtPathProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_NumLoopsPerPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_PerLoopBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_PerLoopBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bOrientComponentToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_Easing_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_Easing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_CustomEasingCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_bDebugDrawPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedMovementPatternBase_Statics::NewProp_PatternDebugDrawColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedMovementPatternBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPathedMovementPatternBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedMovementPatternBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathedMovementPatternBase_Statics::ClassParams = {
	&UPathedMovementPatternBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPathedMovementPatternBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPathedMovementPatternBase_Statics::PropPointers),
	0,
	0x002010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedMovementPatternBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathedMovementPatternBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPathedMovementPatternBase()
{
	if (!Z_Registration_Info_UClass_UPathedMovementPatternBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathedMovementPatternBase.OuterSingleton, Z_Construct_UClass_UPathedMovementPatternBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathedMovementPatternBase.OuterSingleton;
}
UPathedMovementPatternBase::UPathedMovementPatternBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPathedMovementPatternBase);
UPathedMovementPatternBase::~UPathedMovementPatternBase() {}
// ********** End Class UPathedMovementPatternBase *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPatternAxisMaskFlags_StaticEnum, TEXT("EPatternAxisMaskFlags"), &Z_Registration_Info_UEnum_EPatternAxisMaskFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3053587635U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathedMovementPatternBase, UPathedMovementPatternBase::StaticClass, TEXT("UPathedMovementPatternBase"), &Z_Registration_Info_UClass_UPathedMovementPatternBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathedMovementPatternBase), 2776849573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h__Script_Mover_2891150770(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementPatternBase_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
