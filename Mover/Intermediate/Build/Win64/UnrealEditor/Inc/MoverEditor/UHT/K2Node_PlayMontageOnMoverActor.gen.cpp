// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_PlayMontageOnMoverActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeK2Node_PlayMontageOnMoverActor() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
MOVEREDITOR_API UClass* Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor();
MOVEREDITOR_API UClass* Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MoverEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_PlayMontageOnMoverActor ******************************************
void UK2Node_PlayMontageOnMoverActor::StaticRegisterNativesUK2Node_PlayMontageOnMoverActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_PlayMontageOnMoverActor;
UClass* UK2Node_PlayMontageOnMoverActor::GetPrivateStaticClass()
{
	using TClass = UK2Node_PlayMontageOnMoverActor;
	if (!Z_Registration_Info_UClass_UK2Node_PlayMontageOnMoverActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("K2Node_PlayMontageOnMoverActor"),
			Z_Registration_Info_UClass_UK2Node_PlayMontageOnMoverActor.InnerSingleton,
			StaticRegisterNativesUK2Node_PlayMontageOnMoverActor,
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
	return Z_Registration_Info_UClass_UK2Node_PlayMontageOnMoverActor.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_NoRegister()
{
	return UK2Node_PlayMontageOnMoverActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// PlayMontageOnMoverActor: used for playing montages on Mover-based actors. Handles the montage's root motion separately from the animation pose.\n" },
		{ "IncludePath", "K2Node_PlayMontageOnMoverActor.h" },
		{ "ModuleRelativePath", "Public/K2Node_PlayMontageOnMoverActor.h" },
		{ "ToolTip", "PlayMontageOnMoverActor: used for playing montages on Mover-based actors. Handles the montage's root motion separately from the animation pose." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_PlayMontageOnMoverActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_Statics::ClassParams = {
	&UK2Node_PlayMontageOnMoverActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor()
{
	if (!Z_Registration_Info_UClass_UK2Node_PlayMontageOnMoverActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_PlayMontageOnMoverActor.OuterSingleton, Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_PlayMontageOnMoverActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_PlayMontageOnMoverActor);
UK2Node_PlayMontageOnMoverActor::~UK2Node_PlayMontageOnMoverActor() {}
// ********** End Class UK2Node_PlayMontageOnMoverActor ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h__Script_MoverEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_PlayMontageOnMoverActor, UK2Node_PlayMontageOnMoverActor::StaticClass, TEXT("UK2Node_PlayMontageOnMoverActor"), &Z_Registration_Info_UClass_UK2Node_PlayMontageOnMoverActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_PlayMontageOnMoverActor), 4149632832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h__Script_MoverEditor_2922984233(TEXT("/Script/MoverEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h__Script_MoverEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverEditor_Public_K2Node_PlayMontageOnMoverActor_h__Script_MoverEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
