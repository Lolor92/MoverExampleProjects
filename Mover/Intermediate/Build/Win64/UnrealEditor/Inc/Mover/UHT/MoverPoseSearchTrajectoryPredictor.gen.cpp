// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverPoseSearchTrajectoryPredictor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverPoseSearchTrajectoryPredictor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverTrajectoryPredictor();
MOVER_API UClass* Z_Construct_UClass_UMoverTrajectoryPredictor_NoRegister();
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverTrajectoryPredictor Function Setup *********************************
struct Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics
{
	struct MoverTrajectoryPredictor_eventSetup_Parms
	{
		UMoverComponent* InMoverComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation|PoseSearch|Experimental" },
		{ "ModuleRelativePath", "Public/MoverPoseSearchTrajectoryPredictor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMoverComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoverComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::NewProp_InMoverComponent = { "InMoverComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverTrajectoryPredictor_eventSetup_Parms, InMoverComponent), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMoverComponent_MetaData), NewProp_InMoverComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::NewProp_InMoverComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverTrajectoryPredictor, nullptr, "Setup", Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::MoverTrajectoryPredictor_eventSetup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::MoverTrajectoryPredictor_eventSetup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverTrajectoryPredictor::execSetup)
{
	P_GET_OBJECT(UMoverComponent,Z_Param_InMoverComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Setup(Z_Param_InMoverComponent);
	P_NATIVE_END;
}
// ********** End Class UMoverTrajectoryPredictor Function Setup ***********************************

// ********** Begin Class UMoverTrajectoryPredictor ************************************************
void UMoverTrajectoryPredictor::StaticRegisterNativesUMoverTrajectoryPredictor()
{
	UClass* Class = UMoverTrajectoryPredictor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Setup", &UMoverTrajectoryPredictor::execSetup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverTrajectoryPredictor;
UClass* UMoverTrajectoryPredictor::GetPrivateStaticClass()
{
	using TClass = UMoverTrajectoryPredictor;
	if (!Z_Registration_Info_UClass_UMoverTrajectoryPredictor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverTrajectoryPredictor"),
			Z_Registration_Info_UClass_UMoverTrajectoryPredictor.InnerSingleton,
			StaticRegisterNativesUMoverTrajectoryPredictor,
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
	return Z_Registration_Info_UClass_UMoverTrajectoryPredictor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverTrajectoryPredictor_NoRegister()
{
	return UMoverTrajectoryPredictor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverTrajectoryPredictor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Trajectory predictor that can query from a Mover-driven actor, for use with Pose Search\n */" },
		{ "IncludePath", "MoverPoseSearchTrajectoryPredictor.h" },
		{ "ModuleRelativePath", "Public/MoverPoseSearchTrajectoryPredictor.h" },
		{ "ToolTip", "Trajectory predictor that can query from a Mover-driven actor, for use with Pose Search" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverTrajectoryPredictor_Setup, "Setup" }, // 2542150643
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverTrajectoryPredictor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverTrajectoryPredictor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverTrajectoryPredictor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMoverTrajectoryPredictor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister, (int32)VTABLE_OFFSET(UMoverTrajectoryPredictor, IPoseSearchTrajectoryPredictorInterface), false },  // 3901753516
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverTrajectoryPredictor_Statics::ClassParams = {
	&UMoverTrajectoryPredictor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverTrajectoryPredictor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverTrajectoryPredictor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverTrajectoryPredictor()
{
	if (!Z_Registration_Info_UClass_UMoverTrajectoryPredictor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverTrajectoryPredictor.OuterSingleton, Z_Construct_UClass_UMoverTrajectoryPredictor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverTrajectoryPredictor.OuterSingleton;
}
UMoverTrajectoryPredictor::UMoverTrajectoryPredictor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverTrajectoryPredictor);
UMoverTrajectoryPredictor::~UMoverTrajectoryPredictor() {}
// ********** End Class UMoverTrajectoryPredictor **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverTrajectoryPredictor, UMoverTrajectoryPredictor::StaticClass, TEXT("UMoverTrajectoryPredictor"), &Z_Registration_Info_UClass_UMoverTrajectoryPredictor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverTrajectoryPredictor), 2720892455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h__Script_Mover_4000053902(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverPoseSearchTrajectoryPredictor_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
