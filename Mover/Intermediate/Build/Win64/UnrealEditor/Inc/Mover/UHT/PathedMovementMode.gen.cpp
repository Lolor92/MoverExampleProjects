// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/PathedMovementMode.h"
#include "PhysicsEngine/ConstraintInstance.h"
#include "PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePathedMovementMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsMovementMode();
MOVER_API UClass* Z_Construct_UClass_UPathedPhysicsMovementMode_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPathedPhysicsMovementMode Function BP_FindPattern ***********************
struct Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics
{
	struct PathedPhysicsMovementMode_eventBP_FindPattern_Parms
	{
		TSubclassOf<UPathedMovementPatternBase> PatternType;
		UPathedMovementPatternBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMovementMode" },
		{ "Comment", "/** Finds the first path pattern on this mode of the given type, if there is one */" },
		{ "DeterminesOutputType", "PatternType" },
		{ "DisplayName", "Find Pattern" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "Finds the first path pattern on this mode of the given type, if there is one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PatternType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::NewProp_PatternType = { "PatternType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathedPhysicsMovementMode_eventBP_FindPattern_Parms, PatternType), Z_Construct_UClass_UClass, Z_Construct_UClass_UPathedMovementPatternBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathedPhysicsMovementMode_eventBP_FindPattern_Parms, ReturnValue), Z_Construct_UClass_UPathedMovementPatternBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::NewProp_PatternType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMovementMode, nullptr, "BP_FindPattern", Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::PathedPhysicsMovementMode_eventBP_FindPattern_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::PathedPhysicsMovementMode_eventBP_FindPattern_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMovementMode::execBP_FindPattern)
{
	P_GET_OBJECT(UClass,Z_Param_PatternType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPathedMovementPatternBase**)Z_Param__Result=P_THIS->BP_FindPattern(Z_Param_PatternType);
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMovementMode Function BP_FindPattern *************************

// ********** Begin Class UPathedPhysicsMovementMode Function SetPathDuration_BeginPlayOnly ********
struct Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics
{
	struct PathedPhysicsMovementMode_eventSetPathDuration_BeginPlayOnly_Parms
	{
		float NewDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMovementMode" },
		{ "Comment", "/**\n\x09 * Set the time it takes to travel one way along this path from start to end.\n\x09 * Only valid to call in BeginPlay or the Construction Script, ignored otherwise.\n\x09 * Once play has begun, the path duration can be modified indirectly via SetMovementTimeDilation on the owning PathedMoverComponent\n\x09 */" },
		{ "DisplayName", "Set Path Duration (BeginPlay only)" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "Set the time it takes to travel one way along this path from start to end.\nOnly valid to call in BeginPlay or the Construction Script, ignored otherwise.\nOnce play has begun, the path duration can be modified indirectly via SetMovementTimeDilation on the owning PathedMoverComponent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathedPhysicsMovementMode_eventSetPathDuration_BeginPlayOnly_Parms, NewDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::NewProp_NewDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMovementMode, nullptr, "SetPathDuration_BeginPlayOnly", Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::PathedPhysicsMovementMode_eventSetPathDuration_BeginPlayOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::PathedPhysicsMovementMode_eventSetPathDuration_BeginPlayOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMovementMode::execSetPathDuration_BeginPlayOnly)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPathDuration_BeginPlayOnly(Z_Param_NewDuration);
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMovementMode Function SetPathDuration_BeginPlayOnly **********

// ********** Begin Class UPathedPhysicsMovementMode Function SetUseJointConstraint ****************
struct Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics
{
	struct PathedPhysicsMovementMode_eventSetUseJointConstraint_Parms
	{
		bool bUseJoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PathedMovementMode" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseJoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseJoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::NewProp_bUseJoint_SetBit(void* Obj)
{
	((PathedPhysicsMovementMode_eventSetUseJointConstraint_Parms*)Obj)->bUseJoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::NewProp_bUseJoint = { "bUseJoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathedPhysicsMovementMode_eventSetUseJointConstraint_Parms), &Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::NewProp_bUseJoint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::NewProp_bUseJoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathedPhysicsMovementMode, nullptr, "SetUseJointConstraint", Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::PathedPhysicsMovementMode_eventSetUseJointConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::PathedPhysicsMovementMode_eventSetUseJointConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathedPhysicsMovementMode::execSetUseJointConstraint)
{
	P_GET_UBOOL(Z_Param_bUseJoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseJointConstraint(Z_Param_bUseJoint);
	P_NATIVE_END;
}
// ********** End Class UPathedPhysicsMovementMode Function SetUseJointConstraint ******************

// ********** Begin Class UPathedPhysicsMovementMode ***********************************************
void UPathedPhysicsMovementMode::StaticRegisterNativesUPathedPhysicsMovementMode()
{
	UClass* Class = UPathedPhysicsMovementMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_FindPattern", &UPathedPhysicsMovementMode::execBP_FindPattern },
		{ "SetPathDuration_BeginPlayOnly", &UPathedPhysicsMovementMode::execSetPathDuration_BeginPlayOnly },
		{ "SetUseJointConstraint", &UPathedPhysicsMovementMode::execSetUseJointConstraint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPathedPhysicsMovementMode;
UClass* UPathedPhysicsMovementMode::GetPrivateStaticClass()
{
	using TClass = UPathedPhysicsMovementMode;
	if (!Z_Registration_Info_UClass_UPathedPhysicsMovementMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PathedPhysicsMovementMode"),
			Z_Registration_Info_UClass_UPathedPhysicsMovementMode.InnerSingleton,
			StaticRegisterNativesUPathedPhysicsMovementMode,
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
	return Z_Registration_Info_UClass_UPathedPhysicsMovementMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UPathedPhysicsMovementMode_NoRegister()
{
	return UPathedPhysicsMovementMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPathedPhysicsMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for any movement mode that proceeds along a defined path within a specified amount of time\n * Only functional when used in concert with a PathedPhysicsMoverComponent and MoverPathedPhysicsLiaisonComponent\n */" },
		{ "IncludePath", "PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "Base for any movement mode that proceeds along a defined path within a specified amount of time\nOnly functional when used in concert with a PathedPhysicsMoverComponent and MoverPathedPhysicsLiaisonComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseJointConstraint_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Pathed Movement Mode" },
		{ "Comment", "/**\n\x09 * True to have the updated component be able to respond to physics inputs by being \"pulled\" along the path using a joint constraint\n\x09 * configured using JointConstraintProperties below.\n\x09 * \n\x09 * If false, no joint will be used, and the affected component will be moved kinematically (i.e. independent of other physics effects and treated as though it has\n\x09 * infinite mass in the physics sim) and never deviate from the path.\n\x09 *\n\x09 * Note that the movement is calculated on the physics thread either way, so it will correctly interact with other bodies in the sim.\n\x09 *\n\x09 * Ex: Platform moving along a path in a straight line. If this is enabled, the platform could wobble, dip, shake, stall, etc. in response to physics forces/impulses\n\x09 *\x09\x09(depending on the joint and physics properties of the platform). If this is disabled, the platform will rigidly move along the path and ignore all physics.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "True to have the updated component be able to respond to physics inputs by being \"pulled\" along the path using a joint constraint\nconfigured using JointConstraintProperties below.\n\nIf false, no joint will be used, and the affected component will be moved kinematically (i.e. independent of other physics effects and treated as though it has\ninfinite mass in the physics sim) and never deviate from the path.\n\nNote that the movement is calculated on the physics thread either way, so it will correctly interact with other bodies in the sim.\n\nEx: Platform moving along a path in a straight line. If this is enabled, the platform could wobble, dip, shake, stall, etc. in response to physics forces/impulses\n             (depending on the joint and physics properties of the platform). If this is disabled, the platform will rigidly move along the path and ignore all physics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointConstraintProperties_MetaData[] = {
		{ "Category", "Pathed Movement Mode" },
		{ "Comment", "/**\n\x09 * Configuration of the joint constraint that (if enabled) pulls the updated component along the path\n\x09 * The default settings are for a very stiff joint that allows just a little bit of \"play\"\n\x09 */" },
		{ "EditCondition", "bUseJointConstraint" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "Configuration of the joint constraint that (if enabled) pulls the updated component along the path\nThe default settings are for a very stiff joint that allows just a little bit of \"play\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackBehaviorOverride_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Pathed Movement Mode" },
		{ "Comment", "/** Optional playback behavior override for this mode specifically */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "Optional playback behavior override for this mode specifically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneWayTripDuration_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Pathed Movement Mode" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Total duration in seconds of a one-way trip from start to end. */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "Total duration in seconds of a one-way trip from start to end." },
		{ "UIMin", "0" },
		{ "Units", "Seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathPatterns_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Pathed Movement Mode" },
		{ "Comment", "/**\n\x09 * The set of patterns to follow that combine to form the path the component will follow\n\x09 *\n\x09 * NOTE: Order can matter here!! The patterns are evaluated each physics frame in order starting from the front.\n\x09 *\x09\x09 Each successive pattern is aware of the aggregate results from the previous patterns.\n\x09 *\x09\x09 In most cases, this doesn't matter, as the pattern calculates the target transform against the static path origin point.\n\x09 *\x09\x09 However, some patterns necessarily determine their target based on the calculated target to that point\n\x09 *\x09\x09 For example, the LookAtRotationPattern calculates the look-at rotation target based on the target location\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "The set of patterns to follow that combine to form the path the component will follow\n\nNOTE: Order can matter here!! The patterns are evaluated each physics frame in order starting from the front.\n              Each successive pattern is aware of the aggregate results from the previous patterns.\n              In most cases, this doesn't matter, as the pattern calculates the target transform against the static path origin point.\n              However, some patterns necessarily determine their target based on the calculated target to that point\n              For example, the LookAtRotationPattern calculates the look-at rotation target based on the target location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathPatterns_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Pathed Movement Mode" },
		{ "Comment", "/**\n\x09 * The set of patterns to follow that combine to form the path the component will follow\n\x09 *\n\x09 * NOTE: Order can matter here!! The patterns are evaluated each physics frame in order starting from the front.\n\x09 *\x09\x09 Each successive pattern is aware of the aggregate results from the previous patterns.\n\x09 *\x09\x09 In most cases, this doesn't matter, as the pattern calculates the target transform against the static path origin point.\n\x09 *\x09\x09 However, some patterns necessarily determine their target based on the calculated target to that point\n\x09 *\x09\x09 For example, the LookAtRotationPattern calculates the look-at rotation target based on the target location\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "The set of patterns to follow that combine to form the path the component will follow\n\nNOTE: Order can matter here!! The patterns are evaluated each physics frame in order starting from the front.\n              Each successive pattern is aware of the aggregate results from the previous patterns.\n              In most cases, this doesn't matter, as the pattern calculates the target transform against the static path origin point.\n              However, some patterns necessarily determine their target based on the calculated target to that point\n              For example, the LookAtRotationPattern calculates the look-at rotation target based on the target location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Easing_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Pathed Movement Mode" },
		{ "Comment", "/** The kind of easing to apply when traveling along the path */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "The kind of easing to apply when traveling along the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEasingCurve_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Pathed Movement Mode" },
		{ "Comment", "/** If using a custom ease, this is the curve that will be used. If blank, will fall back to standard linear interpolation. */" },
		{ "EditCondition", "Easing==EAlphaBlendOption::Custom" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "If using a custom ease, this is the curve that will be used. If blank, will fall back to standard linear interpolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawAggregatePath_MetaData[] = {
		{ "Category", "Pathed Movement Mode|Debug" },
		{ "Comment", "/** True to draw debug lines for the aggregate path resulting from all the patterns in the path (i.e. the path that will actually be followed in game) */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "True to draw debug lines for the aggregate path resulting from all the patterns in the path (i.e. the path that will actually be followed in game)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPatternDebugDrawing_MetaData[] = {
		{ "Category", "Pathed Movement Mode|Debug" },
		{ "Comment", "/** True to allow individual patterns to draw debug representations. Can be toggled individually on each pattern as well, this is a master switch for convenience. */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "True to allow individual patterns to draw debug representations. Can be toggled individually on each pattern as well, this is a master switch for convenience." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathDebugDrawColor_MetaData[] = {
		{ "Category", "Pathed Movement Mode|Debug" },
		{ "Comment", "/** The color used when drawing the aggregate path */" },
		{ "EditCondition", "bDebugDrawAggregatePath" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PathedMovementMode.h" },
		{ "ToolTip", "The color used when drawing the aggregate path" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseJointConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseJointConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointConstraintProperties;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackBehaviorOverride_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackBehaviorOverride_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_PlaybackBehaviorOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OneWayTripDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathPatterns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPatterns;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Easing_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Easing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomEasingCurve;
	static void NewProp_bDebugDrawAggregatePath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawAggregatePath;
	static void NewProp_bAllowPatternDebugDrawing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPatternDebugDrawing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathDebugDrawColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathedPhysicsMovementMode_BP_FindPattern, "BP_FindPattern" }, // 3189352563
		{ &Z_Construct_UFunction_UPathedPhysicsMovementMode_SetPathDuration_BeginPlayOnly, "SetPathDuration_BeginPlayOnly" }, // 3567457844
		{ &Z_Construct_UFunction_UPathedPhysicsMovementMode_SetUseJointConstraint, "SetUseJointConstraint" }, // 3482419596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathedPhysicsMovementMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bUseJointConstraint_SetBit(void* Obj)
{
	((UPathedPhysicsMovementMode*)Obj)->bUseJointConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bUseJointConstraint = { "bUseJointConstraint", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathedPhysicsMovementMode), &Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bUseJointConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseJointConstraint_MetaData), NewProp_bUseJointConstraint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_JointConstraintProperties = { "JointConstraintProperties", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMovementMode, JointConstraintProperties), Z_Construct_UScriptStruct_FConstraintProfileProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointConstraintProperties_MetaData), NewProp_JointConstraintProperties_MetaData) }; // 3695400301
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PlaybackBehaviorOverride_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PlaybackBehaviorOverride_Inner = { "PlaybackBehaviorOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Mover_EPathedPhysicsPlaybackBehavior, METADATA_PARAMS(0, nullptr) }; // 1344396160
const UECodeGen_Private::FGenericPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PlaybackBehaviorOverride = { "PlaybackBehaviorOverride", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Optional, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMovementMode, PlaybackBehaviorOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackBehaviorOverride_MetaData), NewProp_PlaybackBehaviorOverride_MetaData) }; // 1344396160
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_OneWayTripDuration = { "OneWayTripDuration", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMovementMode, OneWayTripDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneWayTripDuration_MetaData), NewProp_OneWayTripDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PathPatterns_Inner = { "PathPatterns", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPathedMovementPatternBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathPatterns_Inner_MetaData), NewProp_PathPatterns_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PathPatterns = { "PathPatterns", nullptr, (EPropertyFlags)0x014400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMovementMode, PathPatterns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathPatterns_MetaData), NewProp_PathPatterns_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_Easing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_Easing = { "Easing", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMovementMode, Easing), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Easing_MetaData), NewProp_Easing_MetaData) }; // 2330456755
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_CustomEasingCurve = { "CustomEasingCurve", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMovementMode, CustomEasingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEasingCurve_MetaData), NewProp_CustomEasingCurve_MetaData) };
void Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bDebugDrawAggregatePath_SetBit(void* Obj)
{
	((UPathedPhysicsMovementMode*)Obj)->bDebugDrawAggregatePath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bDebugDrawAggregatePath = { "bDebugDrawAggregatePath", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathedPhysicsMovementMode), &Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bDebugDrawAggregatePath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawAggregatePath_MetaData), NewProp_bDebugDrawAggregatePath_MetaData) };
void Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bAllowPatternDebugDrawing_SetBit(void* Obj)
{
	((UPathedPhysicsMovementMode*)Obj)->bAllowPatternDebugDrawing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bAllowPatternDebugDrawing = { "bAllowPatternDebugDrawing", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPathedPhysicsMovementMode), &Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bAllowPatternDebugDrawing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPatternDebugDrawing_MetaData), NewProp_bAllowPatternDebugDrawing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PathDebugDrawColor = { "PathDebugDrawColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathedPhysicsMovementMode, PathDebugDrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathDebugDrawColor_MetaData), NewProp_PathDebugDrawColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bUseJointConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_JointConstraintProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PlaybackBehaviorOverride_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PlaybackBehaviorOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PlaybackBehaviorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_OneWayTripDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PathPatterns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PathPatterns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_Easing_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_Easing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_CustomEasingCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bDebugDrawAggregatePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_bAllowPatternDebugDrawing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::NewProp_PathDebugDrawColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::ClassParams = {
	&UPathedPhysicsMovementMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPathedPhysicsMovementMode()
{
	if (!Z_Registration_Info_UClass_UPathedPhysicsMovementMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathedPhysicsMovementMode.OuterSingleton, Z_Construct_UClass_UPathedPhysicsMovementMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathedPhysicsMovementMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPathedPhysicsMovementMode);
UPathedPhysicsMovementMode::~UPathedPhysicsMovementMode() {}
// ********** End Class UPathedPhysicsMovementMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathedPhysicsMovementMode, UPathedPhysicsMovementMode::StaticClass, TEXT("UPathedPhysicsMovementMode"), &Z_Registration_Info_UClass_UPathedPhysicsMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathedPhysicsMovementMode), 1939792984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h__Script_Mover_2967370746(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PathedMovementMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
