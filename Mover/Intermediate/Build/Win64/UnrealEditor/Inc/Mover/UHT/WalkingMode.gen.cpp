// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Modes/WalkingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWalkingMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UClass* Z_Construct_UClass_UWalkingMode();
MOVER_API UClass* Z_Construct_UClass_UWalkingMode_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EStaticFloorCheckPolicy ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStaticFloorCheckPolicy;
static UEnum* EStaticFloorCheckPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStaticFloorCheckPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStaticFloorCheckPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EStaticFloorCheckPolicy"));
	}
	return Z_Registration_Info_UEnum_EStaticFloorCheckPolicy.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EStaticFloorCheckPolicy>()
{
	return EStaticFloorCheckPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "// Always perform floor checks, even when not moving. You may want this if static bases may disappear from underneath.\n" },
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EStaticFloorCheckPolicy::Always" },
		{ "Always.ToolTip", "Always perform floor checks, even when not moving. You may want this if static bases may disappear from underneath." },
		{ "BlueprintType", "true" },
		{ "Comment", "// Behavior policy for performing floor checks in walking mode when no movement is occurring. \n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/WalkingMode.h" },
		{ "OnDynamicBaseOnly.Comment", "// Only perform floor checks when not moving IF we're on a dynamic movement base\n" },
		{ "OnDynamicBaseOnly.DisplayName", "OnDynamicBaseOnly" },
		{ "OnDynamicBaseOnly.Name", "EStaticFloorCheckPolicy::OnDynamicBaseOnly" },
		{ "OnDynamicBaseOnly.ToolTip", "Only perform floor checks when not moving IF we're on a dynamic movement base" },
		{ "ToolTip", "Behavior policy for performing floor checks in walking mode when no movement is occurring." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStaticFloorCheckPolicy::Always", (int64)EStaticFloorCheckPolicy::Always },
		{ "EStaticFloorCheckPolicy::OnDynamicBaseOnly", (int64)EStaticFloorCheckPolicy::OnDynamicBaseOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EStaticFloorCheckPolicy",
	"EStaticFloorCheckPolicy",
	Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy()
{
	if (!Z_Registration_Info_UEnum_EStaticFloorCheckPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStaticFloorCheckPolicy.InnerSingleton, Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStaticFloorCheckPolicy.InnerSingleton;
}
// ********** End Enum EStaticFloorCheckPolicy *****************************************************

// ********** Begin Class UWalkingMode Function GetTurnGenerator ***********************************
struct Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics
{
	struct WalkingMode_eventGetTurnGenerator_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Returns the active turn generator. Note: you will need to cast the return value to the generator you expect to get, it can also be none\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/WalkingMode.h" },
		{ "ToolTip", "Returns the active turn generator. Note: you will need to cast the return value to the generator you expect to get, it can also be none" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WalkingMode_eventGetTurnGenerator_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWalkingMode, nullptr, "GetTurnGenerator", Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::WalkingMode_eventGetTurnGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::WalkingMode_eventGetTurnGenerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWalkingMode_GetTurnGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalkingMode_GetTurnGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWalkingMode::execGetTurnGenerator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetTurnGenerator();
	P_NATIVE_END;
}
// ********** End Class UWalkingMode Function GetTurnGenerator *************************************

// ********** Begin Class UWalkingMode Function SetTurnGeneratorClass ******************************
struct Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics
{
	struct WalkingMode_eventSetTurnGeneratorClass_Parms
	{
		TSubclassOf<UObject> TurnGeneratorClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Sets the active turn generator to use the class provided. Note: To set it back to the default implementation pass in none\n" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/WalkingMode.h" },
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::NewProp_TurnGeneratorClass = { "TurnGeneratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WalkingMode_eventSetTurnGeneratorClass_Parms, TurnGeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnGeneratorClass_MetaData), NewProp_TurnGeneratorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::NewProp_TurnGeneratorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWalkingMode, nullptr, "SetTurnGeneratorClass", Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::WalkingMode_eventSetTurnGeneratorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::WalkingMode_eventSetTurnGeneratorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWalkingMode::execSetTurnGeneratorClass)
{
	P_GET_OBJECT(UClass,Z_Param_TurnGeneratorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTurnGeneratorClass(Z_Param_TurnGeneratorClass);
	P_NATIVE_END;
}
// ********** End Class UWalkingMode Function SetTurnGeneratorClass ********************************

// ********** Begin Class UWalkingMode *************************************************************
void UWalkingMode::StaticRegisterNativesUWalkingMode()
{
	UClass* Class = UWalkingMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTurnGenerator", &UWalkingMode::execGetTurnGenerator },
		{ "SetTurnGeneratorClass", &UWalkingMode::execSetTurnGeneratorClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWalkingMode;
UClass* UWalkingMode::GetPrivateStaticClass()
{
	using TClass = UWalkingMode;
	if (!Z_Registration_Info_UClass_UWalkingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WalkingMode"),
			Z_Registration_Info_UClass_UWalkingMode.InnerSingleton,
			StaticRegisterNativesUWalkingMode,
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
	return Z_Registration_Info_UClass_UWalkingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UWalkingMode_NoRegister()
{
	return UWalkingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWalkingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * WalkingMode: a default movement mode for traversing surfaces and movement bases (walking, running, sneaking, etc.)\n */" },
		{ "IncludePath", "DefaultMovementSet/Modes/WalkingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/WalkingMode.h" },
		{ "ToolTip", "WalkingMode: a default movement mode for traversing surfaces and movement bases (walking, running, sneaking, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorCheckPolicy_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Choice of behavior for floor checks while not moving.  */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/WalkingMode.h" },
		{ "ToolTip", "Choice of behavior for floor checks while not moving." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnGenerator_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Optional modular object for generating rotation towards desired orientation. If not specified, linear interpolation will be used. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/WalkingMode.h" },
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
		{ &Z_Construct_UFunction_UWalkingMode_GetTurnGenerator, "GetTurnGenerator" }, // 1422356136
		{ &Z_Construct_UFunction_UWalkingMode_SetTurnGeneratorClass, "SetTurnGeneratorClass" }, // 1882426770
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalkingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWalkingMode_Statics::NewProp_FloorCheckPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWalkingMode_Statics::NewProp_FloorCheckPolicy = { "FloorCheckPolicy", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkingMode, FloorCheckPolicy), Z_Construct_UEnum_Mover_EStaticFloorCheckPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorCheckPolicy_MetaData), NewProp_FloorCheckPolicy_MetaData) }; // 3650589235
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWalkingMode_Statics::NewProp_TurnGenerator = { "TurnGenerator", nullptr, (EPropertyFlags)0x0126080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkingMode, TurnGenerator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnGenerator_MetaData), NewProp_TurnGenerator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWalkingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalkingMode_Statics::NewProp_FloorCheckPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalkingMode_Statics::NewProp_FloorCheckPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalkingMode_Statics::NewProp_TurnGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWalkingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWalkingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWalkingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWalkingMode_Statics::ClassParams = {
	&UWalkingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWalkingMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWalkingMode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWalkingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UWalkingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWalkingMode()
{
	if (!Z_Registration_Info_UClass_UWalkingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWalkingMode.OuterSingleton, Z_Construct_UClass_UWalkingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWalkingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWalkingMode);
UWalkingMode::~UWalkingMode() {}
// ********** End Class UWalkingMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStaticFloorCheckPolicy_StaticEnum, TEXT("EStaticFloorCheckPolicy"), &Z_Registration_Info_UEnum_EStaticFloorCheckPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3650589235U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWalkingMode, UWalkingMode::StaticClass, TEXT("UWalkingMode"), &Z_Registration_Info_UClass_UWalkingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWalkingMode), 2533661679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h__Script_Mover_3199211360(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_WalkingMode_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
