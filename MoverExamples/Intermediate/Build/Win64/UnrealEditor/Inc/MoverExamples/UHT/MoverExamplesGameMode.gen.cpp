// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverExamplesGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverExamplesGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesGameMode();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMoverExamplesGameMode ***************************************************
void AMoverExamplesGameMode::StaticRegisterNativesAMoverExamplesGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMoverExamplesGameMode;
UClass* AMoverExamplesGameMode::GetPrivateStaticClass()
{
	using TClass = AMoverExamplesGameMode;
	if (!Z_Registration_Info_UClass_AMoverExamplesGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverExamplesGameMode"),
			Z_Registration_Info_UClass_AMoverExamplesGameMode.InnerSingleton,
			StaticRegisterNativesAMoverExamplesGameMode,
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
	return Z_Registration_Info_UClass_AMoverExamplesGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMoverExamplesGameMode_NoRegister()
{
	return AMoverExamplesGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMoverExamplesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MoverExamplesGameMode.h" },
		{ "ModuleRelativePath", "Public/MoverExamplesGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoverExamplesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMoverExamplesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoverExamplesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoverExamplesGameMode_Statics::ClassParams = {
	&AMoverExamplesGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoverExamplesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoverExamplesGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoverExamplesGameMode()
{
	if (!Z_Registration_Info_UClass_AMoverExamplesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoverExamplesGameMode.OuterSingleton, Z_Construct_UClass_AMoverExamplesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoverExamplesGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoverExamplesGameMode);
AMoverExamplesGameMode::~AMoverExamplesGameMode() {}
// ********** End Class AMoverExamplesGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h__Script_MoverExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoverExamplesGameMode, AMoverExamplesGameMode::StaticClass, TEXT("AMoverExamplesGameMode"), &Z_Registration_Info_UClass_AMoverExamplesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoverExamplesGameMode), 3936588000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h__Script_MoverExamples_2894490189(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameMode_h__Script_MoverExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
