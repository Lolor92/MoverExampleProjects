// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterVariants/Ziplining/ZiplineInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeZiplineInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZipline();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZipline_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UZipline Function GetEndComponent ************************************
struct Zipline_eventGetEndComponent_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Zipline_eventGetEndComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
USceneComponent* IZipline::GetEndComponent()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEndComponent instead.");
	Zipline_eventGetEndComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UZipline_GetEndComponent = FName(TEXT("GetEndComponent"));
USceneComponent* IZipline::Execute_GetEndComponent(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UZipline::StaticClass()));
	Zipline_eventGetEndComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UZipline_GetEndComponent);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IZipline*)(O->GetNativeInterfaceAddress(UZipline::StaticClass())))
	{
		Parms.ReturnValue = I->GetEndComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UZipline_GetEndComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zipline" },
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZiplineInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZipline_GetEndComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zipline_eventGetEndComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZipline_GetEndComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZipline_GetEndComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZipline_GetEndComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZipline_GetEndComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZipline, nullptr, "GetEndComponent", Z_Construct_UFunction_UZipline_GetEndComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZipline_GetEndComponent_Statics::PropPointers), sizeof(Zipline_eventGetEndComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZipline_GetEndComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZipline_GetEndComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Zipline_eventGetEndComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZipline_GetEndComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZipline_GetEndComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IZipline::execGetEndComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetEndComponent_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UZipline Function GetEndComponent **************************************

// ********** Begin Interface UZipline Function GetStartComponent **********************************
struct Zipline_eventGetStartComponent_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	Zipline_eventGetStartComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
USceneComponent* IZipline::GetStartComponent()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetStartComponent instead.");
	Zipline_eventGetStartComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UZipline_GetStartComponent = FName(TEXT("GetStartComponent"));
USceneComponent* IZipline::Execute_GetStartComponent(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UZipline::StaticClass()));
	Zipline_eventGetStartComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UZipline_GetStartComponent);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IZipline*)(O->GetNativeInterfaceAddress(UZipline::StaticClass())))
	{
		Parms.ReturnValue = I->GetStartComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UZipline_GetStartComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zipline" },
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZiplineInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZipline_GetStartComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zipline_eventGetStartComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZipline_GetStartComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZipline_GetStartComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZipline_GetStartComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZipline_GetStartComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UZipline, nullptr, "GetStartComponent", Z_Construct_UFunction_UZipline_GetStartComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZipline_GetStartComponent_Statics::PropPointers), sizeof(Zipline_eventGetStartComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZipline_GetStartComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZipline_GetStartComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Zipline_eventGetStartComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZipline_GetStartComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZipline_GetStartComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IZipline::execGetStartComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetStartComponent_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UZipline Function GetStartComponent ************************************

// ********** Begin Interface UZipline *************************************************************
void UZipline::StaticRegisterNativesUZipline()
{
	UClass* Class = UZipline::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEndComponent", &IZipline::execGetEndComponent },
		{ "GetStartComponent", &IZipline::execGetStartComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UZipline;
UClass* UZipline::GetPrivateStaticClass()
{
	using TClass = UZipline;
	if (!Z_Registration_Info_UClass_UZipline.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Zipline"),
			Z_Registration_Info_UClass_UZipline.InnerSingleton,
			StaticRegisterNativesUZipline,
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
	return Z_Registration_Info_UClass_UZipline.InnerSingleton;
}
UClass* Z_Construct_UClass_UZipline_NoRegister()
{
	return UZipline::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZipline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZiplineInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZipline_GetEndComponent, "GetEndComponent" }, // 3791166647
		{ &Z_Construct_UFunction_UZipline_GetStartComponent, "GetStartComponent" }, // 2152816567
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IZipline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UZipline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZipline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZipline_Statics::ClassParams = {
	&UZipline::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZipline_Statics::Class_MetaDataParams), Z_Construct_UClass_UZipline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UZipline()
{
	if (!Z_Registration_Info_UClass_UZipline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZipline.OuterSingleton, Z_Construct_UClass_UZipline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZipline.OuterSingleton;
}
UZipline::UZipline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UZipline);
// ********** End Interface UZipline ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h__Script_MoverExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZipline, UZipline::StaticClass, TEXT("UZipline"), &Z_Registration_Info_UClass_UZipline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZipline), 3065055930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h__Script_MoverExamples_90120399(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZiplineInterface_h__Script_MoverExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
