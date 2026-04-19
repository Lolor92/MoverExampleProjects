// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Modes/NavWalkingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNavWalkingMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UClass* Z_Construct_UClass_UNavMoverComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UNavWalkingMode();
MOVER_API UClass* Z_Construct_UClass_UNavWalkingMode_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EOffNavMeshBehavior();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOffNavMeshBehavior *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffNavMeshBehavior;
static UEnum* EOffNavMeshBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOffNavMeshBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOffNavMeshBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EOffNavMeshBehavior, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EOffNavMeshBehavior"));
	}
	return Z_Registration_Info_UEnum_EOffNavMeshBehavior.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EOffNavMeshBehavior>()
{
	return EOffNavMeshBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EOffNavMeshBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Options for what to do when we find ourselves off the nav mesh */" },
		{ "DoNotMove.Comment", "/** We do not move. Movement will continue once instructed to move over nav mesh again. */" },
		{ "DoNotMove.DisplayName", "Do Not Move or Rotate" },
		{ "DoNotMove.Name", "EOffNavMeshBehavior::DoNotMove" },
		{ "DoNotMove.ToolTip", "We do not move. Movement will continue once instructed to move over nav mesh again." },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "MoveWithoutNavMesh.Comment", "/** We proceed to move as directed, but height may diverge from the floor until we return to a valid nav mesh. */" },
		{ "MoveWithoutNavMesh.DisplayName", "Move Without Nav Mesh" },
		{ "MoveWithoutNavMesh.Name", "EOffNavMeshBehavior::MoveWithoutNavMesh" },
		{ "MoveWithoutNavMesh.ToolTip", "We proceed to move as directed, but height may diverge from the floor until we return to a valid nav mesh." },
		{ "RotateOnly.Comment", "/** We do not move, but will allow rotation in place. Movement will continue once instructed to move over nav mesh again. */" },
		{ "RotateOnly.DisplayName", "Rotate Only" },
		{ "RotateOnly.Name", "EOffNavMeshBehavior::RotateOnly" },
		{ "RotateOnly.ToolTip", "We do not move, but will allow rotation in place. Movement will continue once instructed to move over nav mesh again." },
		{ "SwitchToWalking.Comment", "/** We change to normal walking mode and re-attempt the move. Typically this is more expensive than nav walking, and we'll later need to switch back to nav walking. */" },
		{ "SwitchToWalking.DisplayName", "Switch to Walking Mode" },
		{ "SwitchToWalking.Name", "EOffNavMeshBehavior::SwitchToWalking" },
		{ "SwitchToWalking.ToolTip", "We change to normal walking mode and re-attempt the move. Typically this is more expensive than nav walking, and we'll later need to switch back to nav walking." },
		{ "ToolTip", "Options for what to do when we find ourselves off the nav mesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOffNavMeshBehavior::SwitchToWalking", (int64)EOffNavMeshBehavior::SwitchToWalking },
		{ "EOffNavMeshBehavior::MoveWithoutNavMesh", (int64)EOffNavMeshBehavior::MoveWithoutNavMesh },
		{ "EOffNavMeshBehavior::DoNotMove", (int64)EOffNavMeshBehavior::DoNotMove },
		{ "EOffNavMeshBehavior::RotateOnly", (int64)EOffNavMeshBehavior::RotateOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EOffNavMeshBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EOffNavMeshBehavior",
	"EOffNavMeshBehavior",
	Z_Construct_UEnum_Mover_EOffNavMeshBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EOffNavMeshBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EOffNavMeshBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EOffNavMeshBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EOffNavMeshBehavior()
{
	if (!Z_Registration_Info_UEnum_EOffNavMeshBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffNavMeshBehavior.InnerSingleton, Z_Construct_UEnum_Mover_EOffNavMeshBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOffNavMeshBehavior.InnerSingleton;
}
// ********** End Enum EOffNavMeshBehavior *********************************************************

// ********** Begin Class UNavWalkingMode Function GetTurnGenerator ********************************
struct Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics
{
	struct NavWalkingMode_eventGetTurnGenerator_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Returns the active turn generator. Note: you will need to cast the return value to the generator you expect to get, it can also be none\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "Returns the active turn generator. Note: you will need to cast the return value to the generator you expect to get, it can also be none" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavWalkingMode_eventGetTurnGenerator_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNavWalkingMode, nullptr, "GetTurnGenerator", Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::NavWalkingMode_eventGetTurnGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::NavWalkingMode_eventGetTurnGenerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavWalkingMode::execGetTurnGenerator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetTurnGenerator();
	P_NATIVE_END;
}
// ********** End Class UNavWalkingMode Function GetTurnGenerator **********************************

// ********** Begin Class UNavWalkingMode Function SetTurnGeneratorClass ***************************
struct Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics
{
	struct NavWalkingMode_eventSetTurnGeneratorClass_Parms
	{
		TSubclassOf<UObject> TurnGeneratorClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Sets the active turn generator to use the class provided. Note: To set it back to the default implementation pass in none\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::NewProp_TurnGeneratorClass = { "TurnGeneratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavWalkingMode_eventSetTurnGeneratorClass_Parms, TurnGeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnGeneratorClass_MetaData), NewProp_TurnGeneratorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::NewProp_TurnGeneratorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNavWalkingMode, nullptr, "SetTurnGeneratorClass", Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::NavWalkingMode_eventSetTurnGeneratorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::NavWalkingMode_eventSetTurnGeneratorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavWalkingMode::execSetTurnGeneratorClass)
{
	P_GET_OBJECT(UClass,Z_Param_TurnGeneratorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTurnGeneratorClass(Z_Param_TurnGeneratorClass);
	P_NATIVE_END;
}
// ********** End Class UNavWalkingMode Function SetTurnGeneratorClass *****************************

// ********** Begin Class UNavWalkingMode **********************************************************
void UNavWalkingMode::StaticRegisterNativesUNavWalkingMode()
{
	UClass* Class = UNavWalkingMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTurnGenerator", &UNavWalkingMode::execGetTurnGenerator },
		{ "SetTurnGeneratorClass", &UNavWalkingMode::execSetTurnGeneratorClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNavWalkingMode;
UClass* UNavWalkingMode::GetPrivateStaticClass()
{
	using TClass = UNavWalkingMode;
	if (!Z_Registration_Info_UClass_UNavWalkingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NavWalkingMode"),
			Z_Registration_Info_UClass_UNavWalkingMode.InnerSingleton,
			StaticRegisterNativesUNavWalkingMode,
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
	return Z_Registration_Info_UClass_UNavWalkingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UNavWalkingMode_NoRegister()
{
	return UNavWalkingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNavWalkingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * NavWalkingMode: a default movement mode for traversing surfaces and movement bases by using an active navmesh when moving the actor rather than collision checks.\n * Note: This movement mode requires a NavMoverComponent be on the actor to function properly. This mode also contains some randomization to avoid navmesh look ups\n *\x09happening at the same time (which is fine for AI characters running on the server) but may cause issues if used on autonomous proxies.\n */" },
		{ "IncludePath", "DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "NavWalkingMode: a default movement mode for traversing surfaces and movement bases by using an active navmesh when moving the actor rather than collision checks.\nNote: This movement mode requires a NavMoverComponent be on the actor to function properly. This mode also contains some randomization to avoid navmesh look ups\n    happening at the same time (which is fine for AI characters running on the server) but may cause issues if used on autonomous proxies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSweepWhileNavWalking_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/**\n\x09 * Whether or not the actor should sweep for collision geometry while walking.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "Whether or not the actor should sweep for collision geometry while walking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectNavMeshWalking_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** Whether to raycast to underlying geometry to better conform navmesh-walking actors */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "Whether to raycast to underlying geometry to better conform navmesh-walking actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionHeightScaleUp_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Scale of the total capsule height to use for projection from navmesh to underlying geometry in the upward direction.\n\x09 * In other words, start the trace at [CapsuleHeight * NavMeshProjectionHeightScaleUp] above nav mesh.\n\x09 */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "Scale of the total capsule height to use for projection from navmesh to underlying geometry in the upward direction.\nIn other words, start the trace at [CapsuleHeight * NavMeshProjectionHeightScaleUp] above nav mesh." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionHeightScaleDown_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Scale of the total capsule height to use for projection from navmesh to underlying geometry in the downward direction.\n\x09 * In other words, trace down to [CapsuleHeight * NavMeshProjectionHeightScaleDown] below nav mesh.\n\x09 */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "Scale of the total capsule height to use for projection from navmesh to underlying geometry in the downward direction.\nIn other words, trace down to [CapsuleHeight * NavMeshProjectionHeightScaleDown] below nav mesh." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionInterval_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** How often we should raycast to project from navmesh to underlying geometry */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "How often we should raycast to project from navmesh to underlying geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionInterpSpeed_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed at which to interpolate agent navmesh offset between traces. 0: Instant (no interp) > 0: Interp speed\") */" },
		{ "editcondition", "bProjectNavMeshWalking" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "Speed at which to interpolate agent navmesh offset between traces. 0: Instant (no interp) > 0: Interp speed\")" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorOffNavMesh_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** What should we do if we stray off the nav mesh? */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "What should we do if we stray off the nav mesh?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSlideAlongNavMeshEdge_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** If attempting to stray off the nav mesh, should we attempt to slide along the edge instead? See @BehaviorOffNavMesh for cases where a sliding move can't be determined. */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "If attempting to stray off the nav mesh, should we attempt to slide along the edge instead? See @BehaviorOffNavMesh for cases where a sliding move can't be determined." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMoverComponent_MetaData[] = {
		{ "Category", "Nav Movement" },
		{ "Comment", "/** Associated Movement component that will actually move the actor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "Associated Movement component that will actually move the actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectNavMeshOnBothWorldChannels_MetaData[] = {
		{ "Category", "NavMesh Movement" },
		{ "Comment", "/** Use both WorldStatic and WorldDynamic channels for NavWalking geometry conforming */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
		{ "ToolTip", "Use both WorldStatic and WorldDynamic channels for NavWalking geometry conforming" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnGenerator_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Optional modular object for generating rotation towards desired orientation. If not specified, linear interpolation will be used. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/NavWalkingMode.h" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavMoverComponent;
	static void NewProp_bProjectNavMeshOnBothWorldChannels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectNavMeshOnBothWorldChannels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnGenerator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavWalkingMode_GetTurnGenerator, "GetTurnGenerator" }, // 2543571368
		{ &Z_Construct_UFunction_UNavWalkingMode_SetTurnGeneratorClass, "SetTurnGeneratorClass" }, // 2913468704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavWalkingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bSweepWhileNavWalking_SetBit(void* Obj)
{
	((UNavWalkingMode*)Obj)->bSweepWhileNavWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bSweepWhileNavWalking = { "bSweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavWalkingMode), &Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bSweepWhileNavWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSweepWhileNavWalking_MetaData), NewProp_bSweepWhileNavWalking_MetaData) };
void Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bProjectNavMeshWalking_SetBit(void* Obj)
{
	((UNavWalkingMode*)Obj)->bProjectNavMeshWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bProjectNavMeshWalking = { "bProjectNavMeshWalking", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavWalkingMode), &Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bProjectNavMeshWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectNavMeshWalking_MetaData), NewProp_bProjectNavMeshWalking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionHeightScaleUp = { "NavMeshProjectionHeightScaleUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavWalkingMode, NavMeshProjectionHeightScaleUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionHeightScaleUp_MetaData), NewProp_NavMeshProjectionHeightScaleUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionHeightScaleDown = { "NavMeshProjectionHeightScaleDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavWalkingMode, NavMeshProjectionHeightScaleDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionHeightScaleDown_MetaData), NewProp_NavMeshProjectionHeightScaleDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionInterval = { "NavMeshProjectionInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavWalkingMode, NavMeshProjectionInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionInterval_MetaData), NewProp_NavMeshProjectionInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionInterpSpeed = { "NavMeshProjectionInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavWalkingMode, NavMeshProjectionInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionInterpSpeed_MetaData), NewProp_NavMeshProjectionInterpSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_BehaviorOffNavMesh_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_BehaviorOffNavMesh = { "BehaviorOffNavMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavWalkingMode, BehaviorOffNavMesh), Z_Construct_UEnum_Mover_EOffNavMeshBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorOffNavMesh_MetaData), NewProp_BehaviorOffNavMesh_MetaData) }; // 2369421324
void Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bSlideAlongNavMeshEdge_SetBit(void* Obj)
{
	((UNavWalkingMode*)Obj)->bSlideAlongNavMeshEdge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bSlideAlongNavMeshEdge = { "bSlideAlongNavMeshEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNavWalkingMode), &Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bSlideAlongNavMeshEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSlideAlongNavMeshEdge_MetaData), NewProp_bSlideAlongNavMeshEdge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionTimer = { "NavMeshProjectionTimer", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavWalkingMode, NavMeshProjectionTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshProjectionTimer_MetaData), NewProp_NavMeshProjectionTimer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMoverComponent = { "NavMoverComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavWalkingMode, NavMoverComponent), Z_Construct_UClass_UNavMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMoverComponent_MetaData), NewProp_NavMoverComponent_MetaData) };
void Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bProjectNavMeshOnBothWorldChannels_SetBit(void* Obj)
{
	((UNavWalkingMode*)Obj)->bProjectNavMeshOnBothWorldChannels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bProjectNavMeshOnBothWorldChannels = { "bProjectNavMeshOnBothWorldChannels", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavWalkingMode), &Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bProjectNavMeshOnBothWorldChannels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectNavMeshOnBothWorldChannels_MetaData), NewProp_bProjectNavMeshOnBothWorldChannels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_TurnGenerator = { "TurnGenerator", nullptr, (EPropertyFlags)0x0126080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavWalkingMode, TurnGenerator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnGenerator_MetaData), NewProp_TurnGenerator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavWalkingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bSweepWhileNavWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bProjectNavMeshWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionHeightScaleUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionHeightScaleDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_BehaviorOffNavMesh_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_BehaviorOffNavMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bSlideAlongNavMeshEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMeshProjectionTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_NavMoverComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_bProjectNavMeshOnBothWorldChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavWalkingMode_Statics::NewProp_TurnGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavWalkingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavWalkingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavWalkingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavWalkingMode_Statics::ClassParams = {
	&UNavWalkingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavWalkingMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavWalkingMode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavWalkingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavWalkingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavWalkingMode()
{
	if (!Z_Registration_Info_UClass_UNavWalkingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavWalkingMode.OuterSingleton, Z_Construct_UClass_UNavWalkingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavWalkingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavWalkingMode);
UNavWalkingMode::~UNavWalkingMode() {}
// ********** End Class UNavWalkingMode ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOffNavMeshBehavior_StaticEnum, TEXT("EOffNavMeshBehavior"), &Z_Registration_Info_UEnum_EOffNavMeshBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2369421324U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavWalkingMode, UNavWalkingMode::StaticClass, TEXT("UNavWalkingMode"), &Z_Registration_Info_UClass_UNavWalkingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavWalkingMode), 463971150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h__Script_Mover_1645321721(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_NavWalkingMode_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
