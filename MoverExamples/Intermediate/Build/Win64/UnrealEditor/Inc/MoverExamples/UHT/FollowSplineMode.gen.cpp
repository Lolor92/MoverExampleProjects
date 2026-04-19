// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementBases/FollowSplineMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFollowSplineMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpToBehaviourType();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UFollowSplineMode();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UFollowSplineMode_NoRegister();
MOVEREXAMPLES_API UEnum* Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType();
MOVEREXAMPLES_API UEnum* Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit();
MOVEREXAMPLES_API UScriptStruct* Z_Construct_UScriptStruct_FFollowSplineState();
MOVEREXAMPLES_API UScriptStruct* Z_Construct_UScriptStruct_FSplineOffsetRangeInput();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESplineOffsetUnit *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineOffsetUnit;
static UEnum* ESplineOffsetUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESplineOffsetUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESplineOffsetUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit, (UObject*)Z_Construct_UPackage__Script_MoverExamples(), TEXT("ESplineOffsetUnit"));
	}
	return Z_Registration_Info_UEnum_ESplineOffsetUnit.OuterSingleton;
}
template<> MOVEREXAMPLES_API UEnum* StaticEnum<ESplineOffsetUnit>()
{
	return ESplineOffsetUnit_StaticEnum();
}
struct Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DistanceAbsolute.DisplayName", "Distance Absolute" },
		{ "DistanceAbsolute.Name", "ESplineOffsetUnit::DistanceAbsolute" },
		{ "DurationAbsoluteSeconds.DisplayName", "Duration Absolute(sec)" },
		{ "DurationAbsoluteSeconds.Name", "ESplineOffsetUnit::DurationAbsoluteSeconds" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "Percentage.DisplayName", "Percentage" },
		{ "Percentage.Name", "ESplineOffsetUnit::Percentage" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESplineOffsetUnit::Percentage", (int64)ESplineOffsetUnit::Percentage },
		{ "ESplineOffsetUnit::DurationAbsoluteSeconds", (int64)ESplineOffsetUnit::DurationAbsoluteSeconds },
		{ "ESplineOffsetUnit::DistanceAbsolute", (int64)ESplineOffsetUnit::DistanceAbsolute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoverExamples,
	nullptr,
	"ESplineOffsetUnit",
	"ESplineOffsetUnit",
	Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit()
{
	if (!Z_Registration_Info_UEnum_ESplineOffsetUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineOffsetUnit.InnerSingleton, Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESplineOffsetUnit.InnerSingleton;
}
// ********** End Enum ESplineOffsetUnit ***********************************************************

// ********** Begin Enum EFollowSplineRotationType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFollowSplineRotationType;
static UEnum* EFollowSplineRotationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFollowSplineRotationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFollowSplineRotationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType, (UObject*)Z_Construct_UPackage__Script_MoverExamples(), TEXT("EFollowSplineRotationType"));
	}
	return Z_Registration_Info_UEnum_EFollowSplineRotationType.OuterSingleton;
}
template<> MOVEREXAMPLES_API UEnum* StaticEnum<EFollowSplineRotationType>()
{
	return EFollowSplineRotationType_StaticEnum();
}
struct Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FollowSplineTangent.DisplayName", "Follow Spline Tangent" },
		{ "FollowSplineTangent.Name", "EFollowSplineRotationType::FollowSplineTangent" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "NoRotation.DisplayName", "No Rotation" },
		{ "NoRotation.Name", "EFollowSplineRotationType::NoRotation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFollowSplineRotationType::FollowSplineTangent", (int64)EFollowSplineRotationType::FollowSplineTangent },
		{ "EFollowSplineRotationType::NoRotation", (int64)EFollowSplineRotationType::NoRotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoverExamples,
	nullptr,
	"EFollowSplineRotationType",
	"EFollowSplineRotationType",
	Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType()
{
	if (!Z_Registration_Info_UEnum_EFollowSplineRotationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFollowSplineRotationType.InnerSingleton, Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFollowSplineRotationType.InnerSingleton;
}
// ********** End Enum EFollowSplineRotationType ***************************************************

// ********** Begin ScriptStruct FSplineOffsetRangeInput *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSplineOffsetRangeInput;
class UScriptStruct* FSplineOffsetRangeInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSplineOffsetRangeInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSplineOffsetRangeInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineOffsetRangeInput, (UObject*)Z_Construct_UPackage__Script_MoverExamples(), TEXT("SplineOffsetRangeInput"));
	}
	return Z_Registration_Info_UScriptStruct_FSplineOffsetRangeInput.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents an input for Range based follow behavior\n */" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Represents an input for Range based follow behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetUnit_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineOffsetRangeInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineOffsetRangeInput, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::NewProp_OffsetUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::NewProp_OffsetUnit = { "OffsetUnit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSplineOffsetRangeInput, OffsetUnit), Z_Construct_UEnum_MoverExamples_ESplineOffsetUnit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetUnit_MetaData), NewProp_OffsetUnit_MetaData) }; // 3198340161
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::NewProp_OffsetUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::NewProp_OffsetUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
	nullptr,
	&NewStructOps,
	"SplineOffsetRangeInput",
	Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::PropPointers),
	sizeof(FSplineOffsetRangeInput),
	alignof(FSplineOffsetRangeInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSplineOffsetRangeInput()
{
	if (!Z_Registration_Info_UScriptStruct_FSplineOffsetRangeInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSplineOffsetRangeInput.InnerSingleton, Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSplineOffsetRangeInput.InnerSingleton;
}
// ********** End ScriptStruct FSplineOffsetRangeInput *********************************************

// ********** Begin Class UFollowSplineMode Function SetControlSpline ******************************
struct Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics
{
	struct FollowSplineMode_eventSetControlSpline_Parms
	{
		const AActor* SplineProviderActor;
		FSplineOffsetRangeInput Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover|Spline" },
		{ "CPP_Default_Offset", "()" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineProviderActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineProviderActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::NewProp_SplineProviderActor = { "SplineProviderActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowSplineMode_eventSetControlSpline_Parms, SplineProviderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineProviderActor_MetaData), NewProp_SplineProviderActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FollowSplineMode_eventSetControlSpline_Parms, Offset), Z_Construct_UScriptStruct_FSplineOffsetRangeInput, METADATA_PARAMS(0, nullptr) }; // 2257208249
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::NewProp_SplineProviderActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFollowSplineMode, nullptr, "SetControlSpline", Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::FollowSplineMode_eventSetControlSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::FollowSplineMode_eventSetControlSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFollowSplineMode_SetControlSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFollowSplineMode_SetControlSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFollowSplineMode::execSetControlSpline)
{
	P_GET_OBJECT(AActor,Z_Param_SplineProviderActor);
	P_GET_STRUCT(FSplineOffsetRangeInput,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlSpline(Z_Param_SplineProviderActor,Z_Param_Offset);
	P_NATIVE_END;
}
// ********** End Class UFollowSplineMode Function SetControlSpline ********************************

// ********** Begin Class UFollowSplineMode ********************************************************
void UFollowSplineMode::StaticRegisterNativesUFollowSplineMode()
{
	UClass* Class = UFollowSplineMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetControlSpline", &UFollowSplineMode::execSetControlSpline },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFollowSplineMode;
UClass* UFollowSplineMode::GetPrivateStaticClass()
{
	using TClass = UFollowSplineMode;
	if (!Z_Registration_Info_UClass_UFollowSplineMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FollowSplineMode"),
			Z_Registration_Info_UClass_UFollowSplineMode.InnerSingleton,
			StaticRegisterNativesUFollowSplineMode,
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
	return Z_Registration_Info_UClass_UFollowSplineMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UFollowSplineMode_NoRegister()
{
	return UFollowSplineMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFollowSplineMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FollowSplineMode: This mode performs movement of the associated actor, along a spline.\n * Default settings will provide a follow from start to end of the Spline. However, the start and end offsets could \n * make the actor trace intermediate paths along the spline.\n */" },
		{ "IncludePath", "MovementBases/FollowSplineMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "FollowSplineMode: This mode performs movement of the associated actor, along a spline.\nDefault settings will provide a follow from start to end of the Spline. However, the start and end offsets could\nmake the actor trace intermediate paths along the spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourType_MetaData[] = {
		{ "Category", "Pathing" },
		{ "Comment", "// Follow Mode for Path Following\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Follow Mode for Path Following" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[] = {
		{ "Category", "Pathing" },
		{ "Comment", "// Rotation Mode for Path Following\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Rotation Mode for Path Following" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientMoverToMovement_MetaData[] = {
		{ "Category", "Pathing" },
		{ "Comment", "// Should Mover face in the direction of movement at all times\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Should Mover face in the direction of movement at all times" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstantFollowVelocity_MetaData[] = {
		{ "Category", "Pathing" },
		{ "Comment", "// Should Mover follow spline with constant velocity\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Should Mover follow spline with constant velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartReveresed_MetaData[] = {
		{ "Category", "Pathing" },
		{ "Comment", "// Should the mover start following from the End\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Should the mover start following from the End" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Category", "Pathing|Offsets" },
		{ "Comment", "// Optional starting offset to define ranged follow\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Optional starting offset to define ranged follow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
		{ "Category", "Pathing|Offsets" },
		{ "Comment", "// Optional end offset to define ranged follow\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Optional end offset to define ranged follow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDurationSecondsOverride_MetaData[] = {
		{ "Category", "Pathing|Offsets" },
		{ "Comment", "// If greater than zero, the follow motion would map the spline time to this duration.\n" },
		{ "ForceUnits", "sec" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "If greater than zero, the follow motion would map the spline time to this duration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationCurve_MetaData[] = {
		{ "Category", "Pathing|Interpolation" },
		{ "Comment", "// Optional Interpolation curve to dictate the speed and position for follow\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Optional Interpolation curve to dictate the speed and position for follow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlSpline_MetaData[] = {
		{ "Category", "Pathing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BehaviourType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BehaviourType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
	static void NewProp_bOrientMoverToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientMoverToMovement;
	static void NewProp_bConstantFollowVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantFollowVelocity;
	static void NewProp_StartReveresed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartReveresed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomDurationSecondsOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterpolationCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFollowSplineMode_SetControlSpline, "SetControlSpline" }, // 154028385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFollowSplineMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_BehaviourType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_BehaviourType = { "BehaviourType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowSplineMode, BehaviourType), Z_Construct_UEnum_Engine_EInterpToBehaviourType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourType_MetaData), NewProp_BehaviourType_MetaData) }; // 2855876887
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowSplineMode, RotationType), Z_Construct_UEnum_MoverExamples_EFollowSplineRotationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationType_MetaData), NewProp_RotationType_MetaData) }; // 3818806371
void Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_bOrientMoverToMovement_SetBit(void* Obj)
{
	((UFollowSplineMode*)Obj)->bOrientMoverToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_bOrientMoverToMovement = { "bOrientMoverToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFollowSplineMode), &Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_bOrientMoverToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientMoverToMovement_MetaData), NewProp_bOrientMoverToMovement_MetaData) };
void Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_bConstantFollowVelocity_SetBit(void* Obj)
{
	((UFollowSplineMode*)Obj)->bConstantFollowVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_bConstantFollowVelocity = { "bConstantFollowVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFollowSplineMode), &Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_bConstantFollowVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstantFollowVelocity_MetaData), NewProp_bConstantFollowVelocity_MetaData) };
void Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_StartReveresed_SetBit(void* Obj)
{
	((UFollowSplineMode*)Obj)->StartReveresed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_StartReveresed = { "StartReveresed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFollowSplineMode), &Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_StartReveresed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartReveresed_MetaData), NewProp_StartReveresed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowSplineMode, StartOffset), Z_Construct_UScriptStruct_FSplineOffsetRangeInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) }; // 2257208249
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowSplineMode, EndOffset), Z_Construct_UScriptStruct_FSplineOffsetRangeInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffset_MetaData), NewProp_EndOffset_MetaData) }; // 2257208249
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_CustomDurationSecondsOverride = { "CustomDurationSecondsOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowSplineMode, CustomDurationSecondsOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDurationSecondsOverride_MetaData), NewProp_CustomDurationSecondsOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_InterpolationCurve = { "InterpolationCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowSplineMode, InterpolationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationCurve_MetaData), NewProp_InterpolationCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_ControlSpline = { "ControlSpline", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFollowSplineMode, ControlSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlSpline_MetaData), NewProp_ControlSpline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFollowSplineMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_BehaviourType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_BehaviourType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_RotationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_RotationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_bOrientMoverToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_bConstantFollowVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_StartReveresed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_EndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_CustomDurationSecondsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_InterpolationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFollowSplineMode_Statics::NewProp_ControlSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowSplineMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFollowSplineMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowSplineMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFollowSplineMode_Statics::ClassParams = {
	&UFollowSplineMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFollowSplineMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFollowSplineMode_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFollowSplineMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFollowSplineMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFollowSplineMode()
{
	if (!Z_Registration_Info_UClass_UFollowSplineMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFollowSplineMode.OuterSingleton, Z_Construct_UClass_UFollowSplineMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFollowSplineMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFollowSplineMode);
UFollowSplineMode::~UFollowSplineMode() {}
// ********** End Class UFollowSplineMode **********************************************************

// ********** Begin ScriptStruct FFollowSplineState ************************************************
static_assert(std::is_polymorphic<FFollowSplineState>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FFollowSplineState cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFollowSplineState;
class UScriptStruct* FFollowSplineState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFollowSplineState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFollowSplineState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFollowSplineState, (UObject*)Z_Construct_UPackage__Script_MoverExamples(), TEXT("FollowSplineState"));
	}
	return Z_Registration_Info_UScriptStruct_FFollowSplineState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFollowSplineState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Data block containing path-following state info\n" },
		{ "ModuleRelativePath", "Public/MovementBases/FollowSplineMode.h" },
		{ "ToolTip", "Data block containing path-following state info" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFollowSplineState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFollowSplineState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"FollowSplineState",
	nullptr,
	0,
	sizeof(FFollowSplineState),
	alignof(FFollowSplineState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFollowSplineState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFollowSplineState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFollowSplineState()
{
	if (!Z_Registration_Info_UScriptStruct_FFollowSplineState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFollowSplineState.InnerSingleton, Z_Construct_UScriptStruct_FFollowSplineState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFollowSplineState.InnerSingleton;
}
// ********** End ScriptStruct FFollowSplineState **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h__Script_MoverExamples_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESplineOffsetUnit_StaticEnum, TEXT("ESplineOffsetUnit"), &Z_Registration_Info_UEnum_ESplineOffsetUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3198340161U) },
		{ EFollowSplineRotationType_StaticEnum, TEXT("EFollowSplineRotationType"), &Z_Registration_Info_UEnum_EFollowSplineRotationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3818806371U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSplineOffsetRangeInput::StaticStruct, Z_Construct_UScriptStruct_FSplineOffsetRangeInput_Statics::NewStructOps, TEXT("SplineOffsetRangeInput"), &Z_Registration_Info_UScriptStruct_FSplineOffsetRangeInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineOffsetRangeInput), 2257208249U) },
		{ FFollowSplineState::StaticStruct, Z_Construct_UScriptStruct_FFollowSplineState_Statics::NewStructOps, TEXT("FollowSplineState"), &Z_Registration_Info_UScriptStruct_FFollowSplineState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFollowSplineState), 1930860505U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFollowSplineMode, UFollowSplineMode::StaticClass, TEXT("UFollowSplineMode"), &Z_Registration_Info_UClass_UFollowSplineMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFollowSplineMode), 163686026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h__Script_MoverExamples_1511691740(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h__Script_MoverExamples_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h__Script_MoverExamples_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h__Script_MoverExamples_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h__Script_MoverExamples_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MovementBases_FollowSplineMode_h__Script_MoverExamples_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
