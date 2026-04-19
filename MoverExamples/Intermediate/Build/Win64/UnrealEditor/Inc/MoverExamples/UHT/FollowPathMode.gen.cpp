// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementBases/FollowPathMode.h"
#include "Components/InterpToMovementComponent.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFollowPathMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpToBehaviourType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpControlPoint();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UFollowPathMode();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UFollowPathMode_NoRegister();
MOVEREXAMPLES_API UEnum* Z_Construct_UEnum_MoverExamples_EFollowPathRotationType();
MOVEREXAMPLES_API UScriptStruct* Z_Construct_UScriptStruct_FFollowPathState();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFollowPathRotationType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFollowPathRotationType;
static UEnum* EFollowPathRotationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFollowPathRotationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFollowPathRotationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoverExamples_EFollowPathRotationType, (UObject*)Z_Construct_UPackage__Script_MoverExamples(), TEXT("EFollowPathRotationType"));
	}
	return Z_Registration_Info_UEnum_EFollowPathRotationType.OuterSingleton;
}
template<> MOVEREXAMPLES_API UEnum* StaticEnum<EFollowPathRotationType>()
{
	return EFollowPathRotationType_StaticEnum();
}
struct Z_Construct_UEnum_MoverExamples_EFollowPathRotationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlignWithPath.Comment", "/** Orient moving actor to the path */" },
		{ "AlignWithPath.Name", "EFollowPathRotationType::AlignWithPath" },
		{ "AlignWithPath.ToolTip", "Orient moving actor to the path" },
		{ "AlignWithPathTangents.Comment", "/** Orient moving actor by intepolating between path tangents */" },
		{ "AlignWithPathTangents.Name", "EFollowPathRotationType::AlignWithPathTangents" },
		{ "AlignWithPathTangents.ToolTip", "Orient moving actor by intepolating between path tangents" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Controls how rotation is handled during pathing\n */" },
		{ "Fixed.Comment", "/** Maintain original actor orientation */" },
		{ "Fixed.Name", "EFollowPathRotationType::Fixed" },
		{ "Fixed.ToolTip", "Maintain original actor orientation" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowPathMode.h" },
		{ "ToolTip", "Controls how rotation is handled during pathing" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFollowPathRotationType::Fixed", (int64)EFollowPathRotationType::Fixed },
		{ "EFollowPathRotationType::AlignWithPathTangents", (int64)EFollowPathRotationType::AlignWithPathTangents },
		{ "EFollowPathRotationType::AlignWithPath", (int64)EFollowPathRotationType::AlignWithPath },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoverExamples_EFollowPathRotationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoverExamples,
	nullptr,
	"EFollowPathRotationType",
	"EFollowPathRotationType",
	Z_Construct_UEnum_MoverExamples_EFollowPathRotationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoverExamples_EFollowPathRotationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoverExamples_EFollowPathRotationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoverExamples_EFollowPathRotationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoverExamples_EFollowPathRotationType()
{
	if (!Z_Registration_Info_UEnum_EFollowPathRotationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFollowPathRotationType.InnerSingleton, Z_Construct_UEnum_MoverExamples_EFollowPathRotationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFollowPathRotationType.InnerSingleton;
}
// ********** End Enum EFollowPathRotationType *****************************************************

// ********** Begin Class UFollowPathMode **********************************************************
void UFollowPathMode::StaticRegisterNativesUFollowPathMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFollowPathMode;
UClass* UFollowPathMode::GetPrivateStaticClass()
{
	using TClass = UFollowPathMode;
	if (!Z_Registration_Info_UClass_UFollowPathMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FollowPathMode"),
			Z_Registration_Info_UClass_UFollowPathMode.InnerSingleton,
			StaticRegisterNativesUFollowPathMode,
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
	return Z_Registration_Info_UClass_UFollowPathMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UFollowPathMode_NoRegister()
{
	return UFollowPathMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFollowPathMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FollowPathMode: This mode performs simple movement of the associated actor, attempting to interpolate\n * through a series of locations. There are variety of settings that affect behavior, such as speed and looping.\n */" },
		{ "IncludePath", "MovementBases/FollowPathMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowPathMode.h" },
		{ "ToolTip", "FollowPathMode: This mode performs simple movement of the associated actor, attempting to interpolate\nthrough a series of locations. There are variety of settings that affect behavior, such as speed and looping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "Category", "Pathing" },
		{ "Comment", "// List of ordered path locations to visit\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowPathMode.h" },
		{ "ToolTip", "List of ordered path locations to visit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourType_MetaData[] = {
		{ "Category", "Pathing" },
		{ "Comment", "// Method of path-following\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowPathMode.h" },
		{ "ToolTip", "Method of path-following" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[] = {
		{ "Category", "Pathing" },
		{ "Comment", "// Method of rotating the actor during path-following\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowPathMode.h" },
		{ "ToolTip", "Method of rotating the actor during path-following" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Pathing" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "// Time (in seconds) required to move from the first point to the last (or vice versa)\n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowPathMode.h" },
		{ "ToolTip", "Time (in seconds) required to move from the first point to the last (or vice versa)" },
		{ "UIMin", "0.100000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BehaviourType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BehaviourType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFollowPathMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFollowPathMode_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInterpControlPoint, METADATA_PARAMS(0, nullptr) }; // 742371169
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFollowPathMode_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowPathMode, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) }; // 742371169
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFollowPathMode_Statics::NewProp_BehaviourType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFollowPathMode_Statics::NewProp_BehaviourType = { "BehaviourType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowPathMode, BehaviourType), Z_Construct_UEnum_Engine_EInterpToBehaviourType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourType_MetaData), NewProp_BehaviourType_MetaData) }; // 2855876887
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFollowPathMode_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFollowPathMode_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowPathMode, RotationType), Z_Construct_UEnum_MoverExamples_EFollowPathRotationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationType_MetaData), NewProp_RotationType_MetaData) }; // 2021563759
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFollowPathMode_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowPathMode, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFollowPathMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowPathMode_Statics::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowPathMode_Statics::NewProp_ControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowPathMode_Statics::NewProp_BehaviourType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowPathMode_Statics::NewProp_BehaviourType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowPathMode_Statics::NewProp_RotationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowPathMode_Statics::NewProp_RotationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowPathMode_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowPathMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFollowPathMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowPathMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFollowPathMode_Statics::ClassParams = {
	&UFollowPathMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFollowPathMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFollowPathMode_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowPathMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFollowPathMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFollowPathMode()
{
	if (!Z_Registration_Info_UClass_UFollowPathMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFollowPathMode.OuterSingleton, Z_Construct_UClass_UFollowPathMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFollowPathMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFollowPathMode);
UFollowPathMode::~UFollowPathMode() {}
// ********** End Class UFollowPathMode ************************************************************

// ********** Begin ScriptStruct FFollowPathState **************************************************
static_assert(std::is_polymorphic<FFollowPathState>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FFollowPathState cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFollowPathState;
class UScriptStruct* FFollowPathState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFollowPathState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFollowPathState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFollowPathState, (UObject*)Z_Construct_UPackage__Script_MoverExamples(), TEXT("FollowPathState"));
	}
	return Z_Registration_Info_UScriptStruct_FFollowPathState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFollowPathState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Data block containing path-following state info\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowPathMode.h" },
		{ "ToolTip", "Data block containing path-following state info" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFollowPathState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFollowPathState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"FollowPathState",
	nullptr,
	0,
	sizeof(FFollowPathState),
	alignof(FFollowPathState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFollowPathState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFollowPathState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFollowPathState()
{
	if (!Z_Registration_Info_UScriptStruct_FFollowPathState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFollowPathState.InnerSingleton, Z_Construct_UScriptStruct_FFollowPathState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFollowPathState.InnerSingleton;
}
// ********** End ScriptStruct FFollowPathState ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h__Script_MoverExamples_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFollowPathRotationType_StaticEnum, TEXT("EFollowPathRotationType"), &Z_Registration_Info_UEnum_EFollowPathRotationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2021563759U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFollowPathState::StaticStruct, Z_Construct_UScriptStruct_FFollowPathState_Statics::NewStructOps, TEXT("FollowPathState"), &Z_Registration_Info_UScriptStruct_FFollowPathState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFollowPathState), 3458630280U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFollowPathMode, UFollowPathMode::StaticClass, TEXT("UFollowPathMode"), &Z_Registration_Info_UClass_UFollowPathMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFollowPathMode), 1224691820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h__Script_MoverExamples_2423634539(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h__Script_MoverExamples_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h__Script_MoverExamples_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h__Script_MoverExamples_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h__Script_MoverExamples_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowPathMode_h__Script_MoverExamples_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
