// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Modes/AsyncFallingMode.h"
#include "MoveLibrary/BasedMovementUtils.h"
#include "MoveLibrary/FloorQueryUtils.h"
#include "MoverComponent.h"
#include "MoverSimulationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncFallingMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UClass* Z_Construct_UClass_UAsyncFallingMode();
MOVER_API UClass* Z_Construct_UClass_UAsyncFallingMode_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UFunction* Z_Construct_UDelegateFunction_Mover_Mover_OnLanded__DelegateSignature();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FFloorCheckResult();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverTickEndData();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FRelativeBaseInfo();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncFallingMode Function ProcessLanded *********************************
struct Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics
{
	struct AsyncFallingMode_eventProcessLanded_Parms
	{
		FFloorCheckResult FloorResult;
		FVector Velocity;
		FRelativeBaseInfo BaseInfo;
		FMoverTickEndData TickEndData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * Is called at the end of the tick in falling mode. Handles checking any landings that should occur and switching to specific modes\n\x09 * (i.e. landing on a walkable surface would switch to the walking movement mode) \n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "Is called at the end of the tick in falling mode. Handles checking any landings that should occur and switching to specific modes\n(i.e. landing on a walkable surface would switch to the walking movement mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickEndData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::NewProp_FloorResult = { "FloorResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFallingMode_eventProcessLanded_Parms, FloorResult), Z_Construct_UScriptStruct_FFloorCheckResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorResult_MetaData), NewProp_FloorResult_MetaData) }; // 375218055
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFallingMode_eventProcessLanded_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::NewProp_BaseInfo = { "BaseInfo", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFallingMode_eventProcessLanded_Parms, BaseInfo), Z_Construct_UScriptStruct_FRelativeBaseInfo, METADATA_PARAMS(0, nullptr) }; // 3645784700
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::NewProp_TickEndData = { "TickEndData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncFallingMode_eventProcessLanded_Parms, TickEndData), Z_Construct_UScriptStruct_FMoverTickEndData, METADATA_PARAMS(0, nullptr) }; // 2932995429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::NewProp_FloorResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::NewProp_BaseInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::NewProp_TickEndData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncFallingMode, nullptr, "ProcessLanded", Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::AsyncFallingMode_eventProcessLanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::AsyncFallingMode_eventProcessLanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncFallingMode::execProcessLanded)
{
	P_GET_STRUCT_REF(FFloorCheckResult,Z_Param_Out_FloorResult);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
	P_GET_STRUCT_REF(FRelativeBaseInfo,Z_Param_Out_BaseInfo);
	P_GET_STRUCT_REF(FMoverTickEndData,Z_Param_Out_TickEndData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessLanded(Z_Param_Out_FloorResult,Z_Param_Out_Velocity,Z_Param_Out_BaseInfo,Z_Param_Out_TickEndData);
	P_NATIVE_END;
}
// ********** End Class UAsyncFallingMode Function ProcessLanded ***********************************

// ********** Begin Class UAsyncFallingMode ********************************************************
void UAsyncFallingMode::StaticRegisterNativesUAsyncFallingMode()
{
	UClass* Class = UAsyncFallingMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProcessLanded", &UAsyncFallingMode::execProcessLanded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncFallingMode;
UClass* UAsyncFallingMode::GetPrivateStaticClass()
{
	using TClass = UAsyncFallingMode;
	if (!Z_Registration_Info_UClass_UAsyncFallingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncFallingMode"),
			Z_Registration_Info_UClass_UAsyncFallingMode.InnerSingleton,
			StaticRegisterNativesUAsyncFallingMode,
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
	return Z_Registration_Info_UClass_UAsyncFallingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncFallingMode_NoRegister()
{
	return UAsyncFallingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncFallingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * AsyncFallingMode: a default movement mode for moving through the air and jumping, typically influenced by gravity and air control\n * This mode simulates movement without actually modifying any scene component(s).\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AsyncFallingMode: a default movement mode for moving through the air and jumping, typically influenced by gravity and air control\nThis mode simulates movement without actually modifying any scene component(s)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLanded_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Broadcast when this actor lands on a valid surface.\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "Broadcast when this actor lands on a valid surface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCancelVerticalSpeedOnLanding_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * If true, actor will land and lose all speed in the vertical direction upon landing. If false, actor's vertical speed will be redirected based on the surface normal it hit.\n\x09 * Note: Actor's horizontal speed will not be affected if true. If false, horizontal speed may be increased on landing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "If true, actor will land and lose all speed in the vertical direction upon landing. If false, actor's vertical speed will be redirected based on the surface normal it hit.\nNote: Actor's horizontal speed will not be affected if true. If false, horizontal speed may be increased on landing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControlPercentage_MetaData[] = {
		{ "Category", "Mover" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * When falling, amount of movement control available to the actor.\n\x09 * 0 = no control, 1 = full control\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "When falling, amount of movement control available to the actor.\n0 = no control, 1 = full control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallingDeceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n \x09 * Deceleration to apply to air movement when falling slower than terminal velocity.\n \x09 * Note: This is NOT applied to vertical velocity, only movement plane velocity\n \x09 */" },
		{ "ForceUnits", "cm/s^2" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "Deceleration to apply to air movement when falling slower than terminal velocity.\nNote: This is NOT applied to vertical velocity, only movement plane velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverTerminalSpeedFallingDeceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n     * Deceleration to apply to air movement when falling faster than terminal velocity\n\x09 * Note: This is NOT applied to vertical velocity, only movement plane velocity\n     */" },
		{ "ForceUnits", "cm/s^2" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "Deceleration to apply to air movement when falling faster than terminal velocity\nNote: This is NOT applied to vertical velocity, only movement plane velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalMovementPlaneSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * If the actor's movement plane velocity is greater than this speed falling will start applying OverTerminalSpeedFallingDeceleration instead of FallingDeceleration\n\x09 * The expected behavior is to set OverTerminalSpeedFallingDeceleration higher than FallingDeceleration so the actor will slow down faster\n\x09 * when going over TerminalMovementPlaneSpeed.\n\x09 */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "If the actor's movement plane velocity is greater than this speed falling will start applying OverTerminalSpeedFallingDeceleration instead of FallingDeceleration\nThe expected behavior is to set OverTerminalSpeedFallingDeceleration higher than FallingDeceleration so the actor will slow down faster\nwhen going over TerminalMovementPlaneSpeed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClampTerminalVerticalSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** When exceeding maximum vertical speed, should it be enforced via a hard clamp? If false, VerticalFallingDeceleration will be used for a smoother transition to the terminal speed limit. */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "When exceeding maximum vertical speed, should it be enforced via a hard clamp? If false, VerticalFallingDeceleration will be used for a smoother transition to the terminal speed limit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalFallingDeceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Deceleration to apply to vertical velocity when it's greater than TerminalVerticalSpeed. Only used if bShouldClampTerminalVerticalSpeed is false. */" },
		{ "EditCondition", "!bShouldClampTerminalVerticalSpeed" },
		{ "ForceUnits", "cm/s^2" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "Deceleration to apply to vertical velocity when it's greater than TerminalVerticalSpeed. Only used if bShouldClampTerminalVerticalSpeed is false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalVerticalSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * If the actors vertical velocity is greater than this speed VerticalFallingDeceleration will be applied to vertical velocity\n\x09 */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFallingMode.h" },
		{ "ToolTip", "If the actors vertical velocity is greater than this speed VerticalFallingDeceleration will be applied to vertical velocity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLanded;
	static void NewProp_bCancelVerticalSpeedOnLanding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelVerticalSpeedOnLanding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControlPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallingDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverTerminalSpeedFallingDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TerminalMovementPlaneSpeed;
	static void NewProp_bShouldClampTerminalVerticalSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClampTerminalVerticalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalFallingDeceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TerminalVerticalSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncFallingMode_ProcessLanded, "ProcessLanded" }, // 2639217336
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncFallingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_OnLanded = { "OnLanded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncFallingMode, OnLanded), Z_Construct_UDelegateFunction_Mover_Mover_OnLanded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLanded_MetaData), NewProp_OnLanded_MetaData) }; // 6121570
void Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_bCancelVerticalSpeedOnLanding_SetBit(void* Obj)
{
	((UAsyncFallingMode*)Obj)->bCancelVerticalSpeedOnLanding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_bCancelVerticalSpeedOnLanding = { "bCancelVerticalSpeedOnLanding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncFallingMode), &Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_bCancelVerticalSpeedOnLanding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCancelVerticalSpeedOnLanding_MetaData), NewProp_bCancelVerticalSpeedOnLanding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_AirControlPercentage = { "AirControlPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncFallingMode, AirControlPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControlPercentage_MetaData), NewProp_AirControlPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_FallingDeceleration = { "FallingDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncFallingMode, FallingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallingDeceleration_MetaData), NewProp_FallingDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_OverTerminalSpeedFallingDeceleration = { "OverTerminalSpeedFallingDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncFallingMode, OverTerminalSpeedFallingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverTerminalSpeedFallingDeceleration_MetaData), NewProp_OverTerminalSpeedFallingDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_TerminalMovementPlaneSpeed = { "TerminalMovementPlaneSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncFallingMode, TerminalMovementPlaneSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalMovementPlaneSpeed_MetaData), NewProp_TerminalMovementPlaneSpeed_MetaData) };
void Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_bShouldClampTerminalVerticalSpeed_SetBit(void* Obj)
{
	((UAsyncFallingMode*)Obj)->bShouldClampTerminalVerticalSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_bShouldClampTerminalVerticalSpeed = { "bShouldClampTerminalVerticalSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncFallingMode), &Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_bShouldClampTerminalVerticalSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldClampTerminalVerticalSpeed_MetaData), NewProp_bShouldClampTerminalVerticalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_VerticalFallingDeceleration = { "VerticalFallingDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncFallingMode, VerticalFallingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalFallingDeceleration_MetaData), NewProp_VerticalFallingDeceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_TerminalVerticalSpeed = { "TerminalVerticalSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncFallingMode, TerminalVerticalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalVerticalSpeed_MetaData), NewProp_TerminalVerticalSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncFallingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_OnLanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_bCancelVerticalSpeedOnLanding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_AirControlPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_FallingDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_OverTerminalSpeedFallingDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_TerminalMovementPlaneSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_bShouldClampTerminalVerticalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_VerticalFallingDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFallingMode_Statics::NewProp_TerminalVerticalSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFallingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncFallingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFallingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncFallingMode_Statics::ClassParams = {
	&UAsyncFallingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncFallingMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFallingMode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFallingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncFallingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncFallingMode()
{
	if (!Z_Registration_Info_UClass_UAsyncFallingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncFallingMode.OuterSingleton, Z_Construct_UClass_UAsyncFallingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncFallingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncFallingMode);
UAsyncFallingMode::~UAsyncFallingMode() {}
// ********** End Class UAsyncFallingMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncFallingMode, UAsyncFallingMode::StaticClass, TEXT("UAsyncFallingMode"), &Z_Registration_Info_UClass_UAsyncFallingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncFallingMode), 2959827002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h__Script_Mover_2027793194(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFallingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
