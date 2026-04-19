// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterVariants/Ziplining/ZipliningMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeZipliningMode() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZipliningMode();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_UZipliningMode_NoRegister();
MOVEREXAMPLES_API UScriptStruct* Z_Construct_UScriptStruct_FZipliningState();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UZipliningMode ***********************************************************
void UZipliningMode::StaticRegisterNativesUZipliningMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UZipliningMode;
UClass* UZipliningMode::GetPrivateStaticClass()
{
	using TClass = UZipliningMode;
	if (!Z_Registration_Info_UClass_UZipliningMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ZipliningMode"),
			Z_Registration_Info_UClass_UZipliningMode.InnerSingleton,
			StaticRegisterNativesUZipliningMode,
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
	return Z_Registration_Info_UClass_UZipliningMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UZipliningMode_NoRegister()
{
	return UZipliningMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UZipliningMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ZipliningMode: movement mode that traverses an actor implementing the IZipline interface\n" },
		{ "IncludePath", "CharacterVariants/Ziplining/ZipliningMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZipliningMode.h" },
		{ "ToolTip", "ZipliningMode: movement mode that traverses an actor implementing the IZipline interface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Ziplining" },
		{ "ClampMin", "1" },
		{ "Comment", "// Maximum speed \n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZipliningMode.h" },
		{ "ToolTip", "Maximum speed" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZipliningMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZipliningMode_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UZipliningMode, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZipliningMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZipliningMode_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZipliningMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UZipliningMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZipliningMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZipliningMode_Statics::ClassParams = {
	&UZipliningMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UZipliningMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UZipliningMode_Statics::PropPointers),
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZipliningMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UZipliningMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UZipliningMode()
{
	if (!Z_Registration_Info_UClass_UZipliningMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZipliningMode.OuterSingleton, Z_Construct_UClass_UZipliningMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZipliningMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UZipliningMode);
UZipliningMode::~UZipliningMode() {}
// ********** End Class UZipliningMode *************************************************************

// ********** Begin ScriptStruct FZipliningState ***************************************************
static_assert(std::is_polymorphic<FZipliningState>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FZipliningState cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FZipliningState;
class UScriptStruct* FZipliningState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FZipliningState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FZipliningState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZipliningState, (UObject*)Z_Construct_UPackage__Script_MoverExamples(), TEXT("ZipliningState"));
	}
	return Z_Registration_Info_UScriptStruct_FZipliningState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FZipliningState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Data block containing ziplining state info, used while ZipliningMode is active\n" },
		{ "ModuleRelativePath", "Public/CharacterVariants/Ziplining/ZipliningMode.h" },
		{ "ToolTip", "Data block containing ziplining state info, used while ZipliningMode is active" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZipliningState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZipliningState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"ZipliningState",
	nullptr,
	0,
	sizeof(FZipliningState),
	alignof(FZipliningState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZipliningState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZipliningState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZipliningState()
{
	if (!Z_Registration_Info_UScriptStruct_FZipliningState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FZipliningState.InnerSingleton, Z_Construct_UScriptStruct_FZipliningState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FZipliningState.InnerSingleton;
}
// ********** End ScriptStruct FZipliningState *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h__Script_MoverExamples_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FZipliningState::StaticStruct, Z_Construct_UScriptStruct_FZipliningState_Statics::NewStructOps, TEXT("ZipliningState"), &Z_Registration_Info_UScriptStruct_FZipliningState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZipliningState), 1911590655U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZipliningMode, UZipliningMode::StaticClass, TEXT("UZipliningMode"), &Z_Registration_Info_UClass_UZipliningMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZipliningMode), 2511794690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h__Script_MoverExamples_463802551(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h__Script_MoverExamples_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h__Script_MoverExamples_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_CharacterVariants_Ziplining_ZipliningMode_h__Script_MoverExamples_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
