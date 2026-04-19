// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Modes/AsyncWalkingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncWalkingMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UAsyncWalkingMode();
MOVER_API UClass* Z_Construct_UClass_UAsyncWalkingMode_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncWalkingMode Function GetTurnGenerator ******************************
struct Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics
{
	struct AsyncWalkingMode_eventGetTurnGenerator_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Returns the active turn generator. Note: you will need to cast the return value to the generator you expect to get, it can also be none\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncWalkingMode.h" },
		{ "ToolTip", "Returns the active turn generator. Note: you will need to cast the return value to the generator you expect to get, it can also be none" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncWalkingMode_eventGetTurnGenerator_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncWalkingMode, nullptr, "GetTurnGenerator", Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::AsyncWalkingMode_eventGetTurnGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::AsyncWalkingMode_eventGetTurnGenerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncWalkingMode::execGetTurnGenerator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetTurnGenerator();
	P_NATIVE_END;
}
// ********** End Class UAsyncWalkingMode Function GetTurnGenerator ********************************

// ********** Begin Class UAsyncWalkingMode Function SetTurnGeneratorClass *************************
struct Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics
{
	struct AsyncWalkingMode_eventSetTurnGeneratorClass_Parms
	{
		TSubclassOf<UObject> TurnGeneratorClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Sets the active turn generator to use the class provided. Note: To set it back to the default implementation pass in none\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncWalkingMode.h" },
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::NewProp_TurnGeneratorClass = { "TurnGeneratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncWalkingMode_eventSetTurnGeneratorClass_Parms, TurnGeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnGeneratorClass_MetaData), NewProp_TurnGeneratorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::NewProp_TurnGeneratorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncWalkingMode, nullptr, "SetTurnGeneratorClass", Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::AsyncWalkingMode_eventSetTurnGeneratorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::AsyncWalkingMode_eventSetTurnGeneratorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncWalkingMode::execSetTurnGeneratorClass)
{
	P_GET_OBJECT(UClass,Z_Param_TurnGeneratorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTurnGeneratorClass(Z_Param_TurnGeneratorClass);
	P_NATIVE_END;
}
// ********** End Class UAsyncWalkingMode Function SetTurnGeneratorClass ***************************

// ********** Begin Class UAsyncWalkingMode ********************************************************
void UAsyncWalkingMode::StaticRegisterNativesUAsyncWalkingMode()
{
	UClass* Class = UAsyncWalkingMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTurnGenerator", &UAsyncWalkingMode::execGetTurnGenerator },
		{ "SetTurnGeneratorClass", &UAsyncWalkingMode::execSetTurnGeneratorClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncWalkingMode;
UClass* UAsyncWalkingMode::GetPrivateStaticClass()
{
	using TClass = UAsyncWalkingMode;
	if (!Z_Registration_Info_UClass_UAsyncWalkingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncWalkingMode"),
			Z_Registration_Info_UClass_UAsyncWalkingMode.InnerSingleton,
			StaticRegisterNativesUAsyncWalkingMode,
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
	return Z_Registration_Info_UClass_UAsyncWalkingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncWalkingMode_NoRegister()
{
	return UAsyncWalkingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncWalkingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * AsyncWalkingMode: a default movement mode for traversing surfaces and movement bases (walking, running, sneaking, etc.)\n * This mode simulates movement without actually modifying any scene component(s).\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "DefaultMovementSet/Modes/AsyncWalkingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncWalkingMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AsyncWalkingMode: a default movement mode for traversing surfaces and movement bases (walking, running, sneaking, etc.)\nThis mode simulates movement without actually modifying any scene component(s)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorCheckPolicy_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Choice of behavior for floor checks while not moving.  */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncWalkingMode.h" },
		{ "ToolTip", "Choice of behavior for floor checks while not moving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnGenerator_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Optional modular object for generating rotation towards desired orientation. If not specified, linear interpolation will be used. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncWalkingMode.h" },
		{ "ObjectMustImplement", "/Script/Mover.TurnGeneratorInterface" },
		{ "ToolTip", "Optional modular object for generating rotation towards desired orientation. If not specified, linear interpolation will be used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FloorCheckPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FloorCheckPolicy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnGenerator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncWalkingMode_GetTurnGenerator, "GetTurnGenerator" }, // 1221933356
		{ &Z_Construct_UFunction_UAsyncWalkingMode_SetTurnGeneratorClass, "SetTurnGeneratorClass" }, // 1877909345
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncWalkingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAsyncWalkingMode_Statics::NewProp_FloorCheckPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAsyncWalkingMode_Statics::NewProp_FloorCheckPolicy = { "FloorCheckPolicy", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncWalkingMode, FloorCheckPolicy), Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorCheckPolicy_MetaData), NewProp_FloorCheckPolicy_MetaData) }; // 3650589235
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncWalkingMode_Statics::NewProp_TurnGenerator = { "TurnGenerator", nullptr, (EPropertyFlags)0x0126080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncWalkingMode, TurnGenerator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnGenerator_MetaData), NewProp_TurnGenerator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncWalkingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncWalkingMode_Statics::NewProp_FloorCheckPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncWalkingMode_Statics::NewProp_FloorCheckPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncWalkingMode_Statics::NewProp_TurnGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncWalkingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncWalkingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncWalkingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncWalkingMode_Statics::ClassParams = {
	&UAsyncWalkingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncWalkingMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncWalkingMode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncWalkingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncWalkingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncWalkingMode()
{
	if (!Z_Registration_Info_UClass_UAsyncWalkingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncWalkingMode.OuterSingleton, Z_Construct_UClass_UAsyncWalkingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncWalkingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncWalkingMode);
UAsyncWalkingMode::~UAsyncWalkingMode() {}
// ********** End Class UAsyncWalkingMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncWalkingMode, UAsyncWalkingMode::StaticClass, TEXT("UAsyncWalkingMode"), &Z_Registration_Info_UClass_UAsyncWalkingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncWalkingMode), 2073367640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h__Script_Mover_3632029115(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncWalkingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
