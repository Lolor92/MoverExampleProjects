// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterVariants/Ziplining/ZipliningTransitions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeZipliningTransitions() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UBaseMovementModeTransition();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZiplineEndTransition();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZiplineEndTransition_NoRegister();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZiplineStartTransition();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZiplineStartTransition_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZiplineStartTransition **************************************************
void UZiplineStartTransition::StaticRegisterNativesUZiplineStartTransition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UZiplineStartTransition;
UClass* UZiplineStartTransition::GetPrivateStaticClass()
{
	using TClass = UZiplineStartTransition;
	if (!Z_Registration_Info_UClass_UZiplineStartTransition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ZiplineStartTransition"),
			Z_Registration_Info_UClass_UZiplineStartTransition.InnerSingleton,
			StaticRegisterNativesUZiplineStartTransition,
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
	return Z_Registration_Info_UClass_UZiplineStartTransition.InnerSingleton;
}
UClass* Z_Construct_UClass_UZiplineStartTransition_NoRegister()
{
	return UZiplineStartTransition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZiplineStartTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transition that handles starting ziplining based on input. Character must be airborne to catch the\n * zipline, regardless of input.\n */" },
		{ "IncludePath", "CharacterVariants/Ziplining/ZipliningTransitions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZipliningTransitions.h" },
		{ "ToolTip", "Transition that handles starting ziplining based on input. Character must be airborne to catch the\nzipline, regardless of input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZipliningModeName_MetaData[] = {
		{ "Category", "Ziplining" },
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZipliningTransitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ZipliningModeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZiplineStartTransition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZiplineStartTransition_Statics::NewProp_ZipliningModeName = { "ZipliningModeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZiplineStartTransition, ZipliningModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZipliningModeName_MetaData), NewProp_ZipliningModeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZiplineStartTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZiplineStartTransition_Statics::NewProp_ZipliningModeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZiplineStartTransition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UZiplineStartTransition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementModeTransition,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZiplineStartTransition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZiplineStartTransition_Statics::ClassParams = {
	&UZiplineStartTransition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UZiplineStartTransition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UZiplineStartTransition_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZiplineStartTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UZiplineStartTransition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UZiplineStartTransition()
{
	if (!Z_Registration_Info_UClass_UZiplineStartTransition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZiplineStartTransition.OuterSingleton, Z_Construct_UClass_UZiplineStartTransition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZiplineStartTransition.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UZiplineStartTransition);
UZiplineStartTransition::~UZiplineStartTransition() {}
// ********** End Class UZiplineStartTransition ****************************************************

// ********** Begin Class UZiplineEndTransition ****************************************************
void UZiplineEndTransition::StaticRegisterNativesUZiplineEndTransition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UZiplineEndTransition;
UClass* UZiplineEndTransition::GetPrivateStaticClass()
{
	using TClass = UZiplineEndTransition;
	if (!Z_Registration_Info_UClass_UZiplineEndTransition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ZiplineEndTransition"),
			Z_Registration_Info_UClass_UZiplineEndTransition.InnerSingleton,
			StaticRegisterNativesUZiplineEndTransition,
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
	return Z_Registration_Info_UClass_UZiplineEndTransition.InnerSingleton;
}
UClass* Z_Construct_UClass_UZiplineEndTransition_NoRegister()
{
	return UZiplineEndTransition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZiplineEndTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transition that handles exiting ziplining based on input\n */" },
		{ "IncludePath", "CharacterVariants/Ziplining/ZipliningTransitions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZipliningTransitions.h" },
		{ "ToolTip", "Transition that handles exiting ziplining based on input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoExitToMode_MetaData[] = {
		{ "Category", "Ziplining" },
		{ "Comment", "// Mode to enter when exiting the zipline\n" },
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZipliningTransitions.h" },
		{ "ToolTip", "Mode to enter when exiting the zipline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AutoExitToMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZiplineEndTransition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UZiplineEndTransition_Statics::NewProp_AutoExitToMode = { "AutoExitToMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZiplineEndTransition, AutoExitToMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoExitToMode_MetaData), NewProp_AutoExitToMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZiplineEndTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZiplineEndTransition_Statics::NewProp_AutoExitToMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZiplineEndTransition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UZiplineEndTransition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementModeTransition,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZiplineEndTransition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZiplineEndTransition_Statics::ClassParams = {
	&UZiplineEndTransition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UZiplineEndTransition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UZiplineEndTransition_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZiplineEndTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UZiplineEndTransition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UZiplineEndTransition()
{
	if (!Z_Registration_Info_UClass_UZiplineEndTransition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZiplineEndTransition.OuterSingleton, Z_Construct_UClass_UZiplineEndTransition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZiplineEndTransition.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UZiplineEndTransition);
UZiplineEndTransition::~UZiplineEndTransition() {}
// ********** End Class UZiplineEndTransition ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningTransitions_h__Script_MoverExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZiplineStartTransition, UZiplineStartTransition::StaticClass, TEXT("UZiplineStartTransition"), &Z_Registration_Info_UClass_UZiplineStartTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZiplineStartTransition), 294994264U) },
		{ Z_Construct_UClass_UZiplineEndTransition, UZiplineEndTransition::StaticClass, TEXT("UZiplineEndTransition"), &Z_Registration_Info_UClass_UZiplineEndTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZiplineEndTransition), 2689515832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningTransitions_h__Script_MoverExamples_2684774203(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningTransitions_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningTransitions_h__Script_MoverExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
