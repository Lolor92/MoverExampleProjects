// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverSimulation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverSimulation() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVER_API UClass* Z_Construct_UClass_UMoverBlackboard_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverSimulation();
MOVER_API UClass* Z_Construct_UClass_UMoverSimulation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverSimulation Function GetBlackboard **********************************
struct Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics
{
	struct MoverSimulation_eventGetBlackboard_Parms
	{
		const UMoverBlackboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverSimulation_eventGetBlackboard_Parms, ReturnValue), Z_Construct_UClass_UMoverBlackboard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverSimulation, nullptr, "GetBlackboard", Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::MoverSimulation_eventGetBlackboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::MoverSimulation_eventGetBlackboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverSimulation_GetBlackboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverSimulation::execGetBlackboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UMoverBlackboard**)Z_Param__Result=P_THIS->GetBlackboard();
	P_NATIVE_END;
}
// ********** End Class UMoverSimulation Function GetBlackboard ************************************

// ********** Begin Class UMoverSimulation Function GetBlackboard_Mutable **************************
struct Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics
{
	struct MoverSimulation_eventGetBlackboard_Mutable_Parms
	{
		UMoverBlackboard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/MoverSimulation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverSimulation_eventGetBlackboard_Mutable_Parms, ReturnValue), Z_Construct_UClass_UMoverBlackboard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverSimulation, nullptr, "GetBlackboard_Mutable", Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::MoverSimulation_eventGetBlackboard_Mutable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::MoverSimulation_eventGetBlackboard_Mutable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverSimulation::execGetBlackboard_Mutable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMoverBlackboard**)Z_Param__Result=P_THIS->GetBlackboard_Mutable();
	P_NATIVE_END;
}
// ********** End Class UMoverSimulation Function GetBlackboard_Mutable ****************************

// ********** Begin Class UMoverSimulation *********************************************************
void UMoverSimulation::StaticRegisterNativesUMoverSimulation()
{
	UClass* Class = UMoverSimulation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBlackboard", &UMoverSimulation::execGetBlackboard },
		{ "GetBlackboard_Mutable", &UMoverSimulation::execGetBlackboard_Mutable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverSimulation;
UClass* UMoverSimulation::GetPrivateStaticClass()
{
	using TClass = UMoverSimulation;
	if (!Z_Registration_Info_UClass_UMoverSimulation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverSimulation"),
			Z_Registration_Info_UClass_UMoverSimulation.InnerSingleton,
			StaticRegisterNativesUMoverSimulation,
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
	return Z_Registration_Info_UClass_UMoverSimulation.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverSimulation_NoRegister()
{
	return UMoverSimulation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* WIP Base class for a Mover simulation.\n* The simulation is intended to be the thing that updates the Mover\n* state and should be safe to run on an async thread\n*/" },
		{ "IncludePath", "MoverSimulation.h" },
		{ "ModuleRelativePath", "Public/MoverSimulation.h" },
		{ "ToolTip", "WIP Base class for a Mover simulation.\nThe simulation is intended to be the thing that updates the Mover\nstate and should be safe to run on an async thread" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blackboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoverSimulation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blackboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverSimulation_GetBlackboard, "GetBlackboard" }, // 3342151230
		{ &Z_Construct_UFunction_UMoverSimulation_GetBlackboard_Mutable, "GetBlackboard_Mutable" }, // 1178970371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverSimulation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoverSimulation_Statics::NewProp_Blackboard = { "Blackboard", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverSimulation, Blackboard), Z_Construct_UClass_UMoverBlackboard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blackboard_MetaData), NewProp_Blackboard_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoverSimulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverSimulation_Statics::NewProp_Blackboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverSimulation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoverSimulation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverSimulation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverSimulation_Statics::ClassParams = {
	&UMoverSimulation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoverSimulation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoverSimulation_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverSimulation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverSimulation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverSimulation()
{
	if (!Z_Registration_Info_UClass_UMoverSimulation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverSimulation.OuterSingleton, Z_Construct_UClass_UMoverSimulation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverSimulation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverSimulation);
UMoverSimulation::~UMoverSimulation() {}
// ********** End Class UMoverSimulation ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverSimulation, UMoverSimulation::StaticClass, TEXT("UMoverSimulation"), &Z_Registration_Info_UClass_UMoverSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverSimulation), 639974244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h__Script_Mover_1710795238(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulation_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
