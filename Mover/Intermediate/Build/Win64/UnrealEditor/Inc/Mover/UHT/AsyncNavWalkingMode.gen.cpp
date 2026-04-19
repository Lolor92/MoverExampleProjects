// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Modes/AsyncNavWalkingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncNavWalkingMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UAsyncNavWalkingMode();
MOVER_API UClass* Z_Construct_UClass_UAsyncNavWalkingMode_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EOffNavMeshBehavior();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncNavWalkingMode Function GetTurnGenerator ***************************
struct Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics
{
	struct AsyncNavWalkingMode_eventGetTurnGenerator_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Returns the active turn generator. Note: you will need to cast the return value to the generator you expect to get, it can also be none\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "Returns the active turn generator. Note: you will need to cast the return value to the generator you expect to get, it can also be none" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNavWalkingMode_eventGetTurnGenerator_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncNavWalkingMode, nullptr, "GetTurnGenerator", Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::AsyncNavWalkingMode_eventGetTurnGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::AsyncNavWalkingMode_eventGetTurnGenerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncNavWalkingMode::execGetTurnGenerator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetTurnGenerator();
	P_NATIVE_END;
}
// ********** End Class UAsyncNavWalkingMode Function GetTurnGenerator *****************************

// ********** Begin Class UAsyncNavWalkingMode Function SetTurnGeneratorClass **********************
struct Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics
{
	struct AsyncNavWalkingMode_eventSetTurnGeneratorClass_Parms
	{
		TSubclassOf<UObject> TurnGeneratorClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Sets the active turn generator to use the class provided. Note: To set it back to the default implementation pass in none\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "Sets the active turn generator to use the class provided. Note: To set it back to the default implementation pass in none" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnGeneratorClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "MustImplement", "/Script/Mover.TurnGeneratorInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TurnGeneratorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::NewProp_TurnGeneratorClass = { "TurnGeneratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncNavWalkingMode_eventSetTurnGeneratorClass_Parms, TurnGeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnGeneratorClass_MetaData), NewProp_TurnGeneratorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::NewProp_TurnGeneratorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncNavWalkingMode, nullptr, "SetTurnGeneratorClass", Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::AsyncNavWalkingMode_eventSetTurnGeneratorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::AsyncNavWalkingMode_eventSetTurnGeneratorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncNavWalkingMode::execSetTurnGeneratorClass)
{
	P_GET_OBJECT(UClass,Z_Param_TurnGeneratorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTurnGeneratorClass(Z_Param_TurnGeneratorClass);
	P_NATIVE_END;
}
// ********** End Class UAsyncNavWalkingMode Function SetTurnGeneratorClass ************************

// ********** Begin Class UAsyncNavWalkingMode *****************************************************
void UAsyncNavWalkingMode::StaticRegisterNativesUAsyncNavWalkingMode()
{
	UClass* Class = UAsyncNavWalkingMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTurnGenerator", &UAsyncNavWalkingMode::execGetTurnGenerator },
		{ "SetTurnGeneratorClass", &UAsyncNavWalkingMode::execSetTurnGeneratorClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncNavWalkingMode;
UClass* UAsyncNavWalkingMode::GetPrivateStaticClass()
{
	using TClass = UAsyncNavWalkingMode;
	if (!Z_Registration_Info_UClass_UAsyncNavWalkingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncNavWalkingMode"),
			Z_Registration_Info_UClass_UAsyncNavWalkingMode.InnerSingleton,
			StaticRegisterNativesUAsyncNavWalkingMode,
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
	return Z_Registration_Info_UClass_UAsyncNavWalkingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncNavWalkingMode_NoRegister()
{
	return UAsyncNavWalkingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncNavWalkingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * AsyncNavWalkingMode: a default movement mode for traversing surfaces and movement bases by using an active navmesh when moving the actor rather than collision checks.\n * Note: This movement mode requires a NavMoverComponent be on the actor to function properly. This mode also contains some randomization to avoid navmesh look ups\n *\x09happening at the same time (which is fine for AI characters running on the server) but may cause issues if used on autonomous proxies.\n * This mode simulates movement without actually modifying any scene component(s).\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "AsyncNavWalkingMode: a default movement mode for traversing surfaces and movement bases by using an active navmesh when moving the actor rather than collision checks.\nNote: This movement mode requires a NavMoverComponent be on the actor to function properly. This mode also contains some randomization to avoid navmesh look ups\n    happening at the same time (which is fine for AI characters running on the server) but may cause issues if used on autonomous proxies.\nThis mode simulates movement without actually modifying any scene component(s)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSweepWhileNavWalking_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/**\n\x09 * Whether or not the actor should sweep for collision geometry while walking.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "Whether or not the actor should sweep for collision geometry while walking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectNavMeshWalking_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** Whether to raycast to underlying geometry to better conform navmesh-walking actors */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "Whether to raycast to underlying geometry to better conform navmesh-walking actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionHeightScaleUp_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Scale of the total capsule height to use for projection from navmesh to underlying geometry in the upward direction.\n\x09 * In other words, start the trace at [CapsuleHeight * NavMeshProjectionHeightScaleUp] above nav mesh.\n\x09 */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "Scale of the total capsule height to use for projection from navmesh to underlying geometry in the upward direction.\nIn other words, start the trace at [CapsuleHeight * NavMeshProjectionHeightScaleUp] above nav mesh." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionHeightScaleDown_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Scale of the total capsule height to use for projection from navmesh to underlying geometry in the downward direction.\n\x09 * In other words, trace down to [CapsuleHeight * NavMeshProjectionHeightScaleDown] below nav mesh.\n\x09 */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "Scale of the total capsule height to use for projection from navmesh to underlying geometry in the downward direction.\nIn other words, trace down to [CapsuleHeight * NavMeshProjectionHeightScaleDown] below nav mesh." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionInterval_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** How often we should raycast to project from navmesh to underlying geometry */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "How often we should raycast to project from navmesh to underlying geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionInterpSpeed_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed at which to interpolate agent navmesh offset between traces. 0: Instant (no interp) > 0: Interp speed\") */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "Speed at which to interpolate agent navmesh offset between traces. 0: Instant (no interp) > 0: Interp speed\")" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorOffNavMesh_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** What should we do if we stray off the nav mesh? */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "What should we do if we stray off the nav mesh?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSlideAlongNavMeshEdge_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** If attempting to stray off the nav mesh, should we slide along the edge instead? See @BehaviorOffNavMesh for cases where a sliding move can't be determined. */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "If attempting to stray off the nav mesh, should we slide along the edge instead? See @BehaviorOffNavMesh for cases where a sliding move can't be determined." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectNavMeshOnBothWorldChannels_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** Use both WorldStatic and WorldDynamic channels for NavWalking geometry conforming */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ToolTip", "Use both WorldStatic and WorldDynamic channels for NavWalking geometry conforming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnGenerator_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Optional modular object for generating rotation towards desired orientation. If not specified, linear interpolation will be used. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncNavWalkingMode.h" },
		{ "ObjectMustImplement", "/Script/Mover.TurnGeneratorInterface" },
		{ "ToolTip", "Optional modular object for generating rotation towards desired orientation. If not specified, linear interpolation will be used." },
	};
#endif // WITH_METADATA
	static void NewProp_bSweepWhileNavWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweepWhileNavWalking;
	static void NewProp_bProjectNavMeshWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectNavMeshWalking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionHeightScaleUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionHeightScaleDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionInterpSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BehaviorOffNavMesh_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BehaviorOffNavMesh;
	static void NewProp_bSlideAlongNavMeshEdge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlideAlongNavMeshEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionTimer;
	static void NewProp_bProjectNavMeshOnBothWorldChannels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectNavMeshOnBothWorldChannels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnGenerator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncNavWalkingMode_GetTurnGenerator, "GetTurnGenerator" }, // 3554113645
		{ &Z_Construct_UFunction_UAsyncNavWalkingMode_SetTurnGeneratorClass, "SetTurnGeneratorClass" }, // 3851355490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncNavWalkingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bSweepWhileNavWalking_SetBit(void* Obj)
{
	((UAsyncNavWalkingMode*)Obj)->bSweepWhileNavWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bSweepWhileNavWalking = { "bSweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncNavWalkingMode), &Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bSweepWhileNavWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSweepWhileNavWalking_MetaData), NewProp_bSweepWhileNavWalking_MetaData) };
void Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bProjectNavMeshWalking_SetBit(void* Obj)
{
	((UAsyncNavWalkingMode*)Obj)->bProjectNavMeshWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bProjectNavMeshWalking = { "bProjectNavMeshWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncNavWalkingMode), &Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bProjectNavMeshWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectNavMeshWalking_MetaData), NewProp_bProjectNavMeshWalking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionHeightScaleUp = { "NavMeshProjectionHeightScaleUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNavWalkingMode, NavMeshProjectionHeightScaleUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionHeightScaleUp_MetaData), NewProp_NavMeshProjectionHeightScaleUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionHeightScaleDown = { "NavMeshProjectionHeightScaleDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNavWalkingMode, NavMeshProjectionHeightScaleDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionHeightScaleDown_MetaData), NewProp_NavMeshProjectionHeightScaleDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionInterval = { "NavMeshProjectionInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNavWalkingMode, NavMeshProjectionInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionInterval_MetaData), NewProp_NavMeshProjectionInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionInterpSpeed = { "NavMeshProjectionInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNavWalkingMode, NavMeshProjectionInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionInterpSpeed_MetaData), NewProp_NavMeshProjectionInterpSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_BehaviorOffNavMesh_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_BehaviorOffNavMesh = { "BehaviorOffNavMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNavWalkingMode, BehaviorOffNavMesh), Z_Construct_UEnum_Mover_EOffNavMeshBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorOffNavMesh_MetaData), NewProp_BehaviorOffNavMesh_MetaData) }; // 2369421324
void Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bSlideAlongNavMeshEdge_SetBit(void* Obj)
{
	((UAsyncNavWalkingMode*)Obj)->bSlideAlongNavMeshEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bSlideAlongNavMeshEdge = { "bSlideAlongNavMeshEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncNavWalkingMode), &Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bSlideAlongNavMeshEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSlideAlongNavMeshEdge_MetaData), NewProp_bSlideAlongNavMeshEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionTimer = { "NavMeshProjectionTimer", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNavWalkingMode, NavMeshProjectionTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionTimer_MetaData), NewProp_NavMeshProjectionTimer_MetaData) };
void Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bProjectNavMeshOnBothWorldChannels_SetBit(void* Obj)
{
	((UAsyncNavWalkingMode*)Obj)->bProjectNavMeshOnBothWorldChannels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bProjectNavMeshOnBothWorldChannels = { "bProjectNavMeshOnBothWorldChannels", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAsyncNavWalkingMode), &Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bProjectNavMeshOnBothWorldChannels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectNavMeshOnBothWorldChannels_MetaData), NewProp_bProjectNavMeshOnBothWorldChannels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_TurnGenerator = { "TurnGenerator", nullptr, (EPropertyFlags)0x0126080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncNavWalkingMode, TurnGenerator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnGenerator_MetaData), NewProp_TurnGenerator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncNavWalkingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bSweepWhileNavWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bProjectNavMeshWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionHeightScaleUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionHeightScaleDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_BehaviorOffNavMesh_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_BehaviorOffNavMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bSlideAlongNavMeshEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_NavMeshProjectionTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_bProjectNavMeshOnBothWorldChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNavWalkingMode_Statics::NewProp_TurnGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNavWalkingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncNavWalkingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNavWalkingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncNavWalkingMode_Statics::ClassParams = {
	&UAsyncNavWalkingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncNavWalkingMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNavWalkingMode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNavWalkingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncNavWalkingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncNavWalkingMode()
{
	if (!Z_Registration_Info_UClass_UAsyncNavWalkingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncNavWalkingMode.OuterSingleton, Z_Construct_UClass_UAsyncNavWalkingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncNavWalkingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncNavWalkingMode);
UAsyncNavWalkingMode::~UAsyncNavWalkingMode() {}
// ********** End Class UAsyncNavWalkingMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncNavWalkingMode, UAsyncNavWalkingMode::StaticClass, TEXT("UAsyncNavWalkingMode"), &Z_Registration_Info_UClass_UAsyncNavWalkingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncNavWalkingMode), 3007516260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h__Script_Mover_2944168684(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncNavWalkingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
