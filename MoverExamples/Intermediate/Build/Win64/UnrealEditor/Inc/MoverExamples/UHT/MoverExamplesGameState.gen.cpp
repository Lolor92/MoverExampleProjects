// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverExamplesGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverExamplesGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameState();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesGameState();
MOVEREXAMPLES_API UClass* Z_Construct_UClass_AMoverExamplesGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoverExamples();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMoverExamplesGameState **************************************************
void AMoverExamplesGameState::StaticRegisterNativesAMoverExamplesGameState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMoverExamplesGameState;
UClass* AMoverExamplesGameState::GetPrivateStaticClass()
{
	using TClass = AMoverExamplesGameState;
	if (!Z_Registration_Info_UClass_AMoverExamplesGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverExamplesGameState"),
			Z_Registration_Info_UClass_AMoverExamplesGameState.InnerSingleton,
			StaticRegisterNativesAMoverExamplesGameState,
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
	return Z_Registration_Info_UClass_AMoverExamplesGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_AMoverExamplesGameState_NoRegister()
{
	return AMoverExamplesGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMoverExamplesGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MoverExamplesGameState.h" },
		{ "ModuleRelativePath", "Public/MoverExamplesGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoverExamplesGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMoverExamplesGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoverExamplesGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoverExamplesGameState_Statics::ClassParams = {
	&AMoverExamplesGameState::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoverExamplesGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoverExamplesGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoverExamplesGameState()
{
	if (!Z_Registration_Info_UClass_AMoverExamplesGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoverExamplesGameState.OuterSingleton, Z_Construct_UClass_AMoverExamplesGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoverExamplesGameState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoverExamplesGameState);
AMoverExamplesGameState::~AMoverExamplesGameState() {}
// ********** End Class AMoverExamplesGameState ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h__Script_MoverExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoverExamplesGameState, AMoverExamplesGameState::StaticClass, TEXT("AMoverExamplesGameState"), &Z_Registration_Info_UClass_AMoverExamplesGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoverExamplesGameState), 2779319106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h__Script_MoverExamples_2617435583(TEXT("/Script/MoverExamples"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h__Script_MoverExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverExamples_Source_MoverExamples_Public_MoverExamplesGameState_h__Script_MoverExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
