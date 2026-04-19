// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterVariants/AbilityInputs.h"
#include "MoverTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAbilityInputs() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataCollection();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UMoverExampleAbilityInputsLibrary();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_NoRegister();
MOVEREXAMPLES_API UScriptStruct* Z_Construct_UScriptStruct_FMoverExampleAbilityInputs();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMoverExampleAbilityInputs ****************************************
static_assert(std::is_polymorphic<FMoverExampleAbilityInputs>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FMoverExampleAbilityInputs cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverExampleAbilityInputs;
class UScriptStruct* FMoverExampleAbilityInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverExampleAbilityInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverExampleAbilityInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverExampleAbilityInputs, (UObject*)Z_Construct_UPackage__Script_MoverExamples(), TEXT("MoverExampleAbilityInputs"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverExampleAbilityInputs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data block containing extended ability inputs used by MoverExamples characters\n" },
		{ "ModuleRelativePath", "Public/CharacterVariants/AbilityInputs.h" },
		{ "ToolTip", "Data block containing extended ability inputs used by MoverExamples characters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDashJustPressed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/CharacterVariants/AbilityInputs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAimPressed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/CharacterVariants/AbilityInputs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVaultJustPressed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/CharacterVariants/AbilityInputs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToStartZiplining_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/CharacterVariants/AbilityInputs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToBeCrouched_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/CharacterVariants/AbilityInputs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsDashJustPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDashJustPressed;
	static void NewProp_bIsAimPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAimPressed;
	static void NewProp_bIsVaultJustPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVaultJustPressed;
	static void NewProp_bWantsToStartZiplining_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToStartZiplining;
	static void NewProp_bWantsToBeCrouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToBeCrouched;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverExampleAbilityInputs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsDashJustPressed_SetBit(void* Obj)
{
	((FMoverExampleAbilityInputs*)Obj)->bIsDashJustPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsDashJustPressed = { "bIsDashJustPressed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoverExampleAbilityInputs), &Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsDashJustPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDashJustPressed_MetaData), NewProp_bIsDashJustPressed_MetaData) };
void Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsAimPressed_SetBit(void* Obj)
{
	((FMoverExampleAbilityInputs*)Obj)->bIsAimPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsAimPressed = { "bIsAimPressed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoverExampleAbilityInputs), &Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsAimPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAimPressed_MetaData), NewProp_bIsAimPressed_MetaData) };
void Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsVaultJustPressed_SetBit(void* Obj)
{
	((FMoverExampleAbilityInputs*)Obj)->bIsVaultJustPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsVaultJustPressed = { "bIsVaultJustPressed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoverExampleAbilityInputs), &Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsVaultJustPressed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVaultJustPressed_MetaData), NewProp_bIsVaultJustPressed_MetaData) };
void Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bWantsToStartZiplining_SetBit(void* Obj)
{
	((FMoverExampleAbilityInputs*)Obj)->bWantsToStartZiplining = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bWantsToStartZiplining = { "bWantsToStartZiplining", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoverExampleAbilityInputs), &Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bWantsToStartZiplining_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToStartZiplining_MetaData), NewProp_bWantsToStartZiplining_MetaData) };
void Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bWantsToBeCrouched_SetBit(void* Obj)
{
	((FMoverExampleAbilityInputs*)Obj)->bWantsToBeCrouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bWantsToBeCrouched = { "bWantsToBeCrouched", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoverExampleAbilityInputs), &Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bWantsToBeCrouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToBeCrouched_MetaData), NewProp_bWantsToBeCrouched_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsDashJustPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsAimPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bIsVaultJustPressed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bWantsToStartZiplining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewProp_bWantsToBeCrouched,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"MoverExampleAbilityInputs",
	Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::PropPointers),
	sizeof(FMoverExampleAbilityInputs),
	alignof(FMoverExampleAbilityInputs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverExampleAbilityInputs()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverExampleAbilityInputs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverExampleAbilityInputs.InnerSingleton, Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverExampleAbilityInputs.InnerSingleton;
}
// ********** End ScriptStruct FMoverExampleAbilityInputs ******************************************

// ********** Begin Class UMoverExampleAbilityInputsLibrary Function GetMoverExampleAbilityInputs **
struct Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics
{
	struct MoverExampleAbilityInputsLibrary_eventGetMoverExampleAbilityInputs_Parms
	{
		FMoverDataCollection FromCollection;
		FMoverExampleAbilityInputs ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover|Input" },
		{ "ModuleRelativePath", "Public/CharacterVariants/AbilityInputs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::NewProp_FromCollection = { "FromCollection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverExampleAbilityInputsLibrary_eventGetMoverExampleAbilityInputs_Parms, FromCollection), Z_Construct_UScriptStruct_FMoverDataCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromCollection_MetaData), NewProp_FromCollection_MetaData) }; // 2206586376
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverExampleAbilityInputsLibrary_eventGetMoverExampleAbilityInputs_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoverExampleAbilityInputs, METADATA_PARAMS(0, nullptr) }; // 2187286533
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::NewProp_FromCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverExampleAbilityInputsLibrary, nullptr, "GetMoverExampleAbilityInputs", Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::MoverExampleAbilityInputsLibrary_eventGetMoverExampleAbilityInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::MoverExampleAbilityInputsLibrary_eventGetMoverExampleAbilityInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverExampleAbilityInputsLibrary::execGetMoverExampleAbilityInputs)
{
	P_GET_STRUCT_REF(FMoverDataCollection,Z_Param_Out_FromCollection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMoverExampleAbilityInputs*)Z_Param__Result=UMoverExampleAbilityInputsLibrary::GetMoverExampleAbilityInputs(Z_Param_Out_FromCollection);
	P_NATIVE_END;
}
// ********** End Class UMoverExampleAbilityInputsLibrary Function GetMoverExampleAbilityInputs ****

// ********** Begin Class UMoverExampleAbilityInputsLibrary ****************************************
void UMoverExampleAbilityInputsLibrary::StaticRegisterNativesUMoverExampleAbilityInputsLibrary()
{
	UClass* Class = UMoverExampleAbilityInputsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMoverExampleAbilityInputs", &UMoverExampleAbilityInputsLibrary::execGetMoverExampleAbilityInputs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverExampleAbilityInputsLibrary;
UClass* UMoverExampleAbilityInputsLibrary::GetPrivateStaticClass()
{
	using TClass = UMoverExampleAbilityInputsLibrary;
	if (!Z_Registration_Info_UClass_UMoverExampleAbilityInputsLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverExampleAbilityInputsLibrary"),
			Z_Registration_Info_UClass_UMoverExampleAbilityInputsLibrary.InnerSingleton,
			StaticRegisterNativesUMoverExampleAbilityInputsLibrary,
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
	return Z_Registration_Info_UClass_UMoverExampleAbilityInputsLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_NoRegister()
{
	return UMoverExampleAbilityInputsLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterVariants/AbilityInputs.h" },
		{ "ModuleRelativePath", "Public/CharacterVariants/AbilityInputs.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverExampleAbilityInputsLibrary_GetMoverExampleAbilityInputs, "GetMoverExampleAbilityInputs" }, // 2626783296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverExampleAbilityInputsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_Statics::ClassParams = {
	&UMoverExampleAbilityInputsLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverExampleAbilityInputsLibrary()
{
	if (!Z_Registration_Info_UClass_UMoverExampleAbilityInputsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverExampleAbilityInputsLibrary.OuterSingleton, Z_Construct_UClass_UMoverExampleAbilityInputsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverExampleAbilityInputsLibrary.OuterSingleton;
}
UMoverExampleAbilityInputsLibrary::UMoverExampleAbilityInputsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverExampleAbilityInputsLibrary);
UMoverExampleAbilityInputsLibrary::~UMoverExampleAbilityInputsLibrary() {}
// ********** End Class UMoverExampleAbilityInputsLibrary ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h__Script_MoverExamples_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMoverExampleAbilityInputs::StaticStruct, Z_Construct_UScriptStruct_FMoverExampleAbilityInputs_Statics::NewStructOps, TEXT("MoverExampleAbilityInputs"), &Z_Registration_Info_UScriptStruct_FMoverExampleAbilityInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverExampleAbilityInputs), 2187286533U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverExampleAbilityInputsLibrary, UMoverExampleAbilityInputsLibrary::StaticClass, TEXT("UMoverExampleAbilityInputsLibrary"), &Z_Registration_Info_UClass_UMoverExampleAbilityInputsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverExampleAbilityInputsLibrary), 4271898885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h__Script_MoverExamples_3979918722(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h__Script_MoverExamples_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h__Script_MoverExamples_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_AbilityInputs_h__Script_MoverExamples_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
