// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarpingMoverAdapter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMotionWarpingMoverAdapter() {}

// ********** Begin Cross Module References ********************************************************
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingBaseAdapter();
MOVER_API UClass* Z_Construct_UClass_UMotionWarpingMoverAdapter();
MOVER_API UClass* Z_Construct_UClass_UMotionWarpingMoverAdapter_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMotionWarpingMoverAdapter ***********************************************
void UMotionWarpingMoverAdapter::StaticRegisterNativesUMotionWarpingMoverAdapter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMotionWarpingMoverAdapter;
UClass* UMotionWarpingMoverAdapter::GetPrivateStaticClass()
{
	using TClass = UMotionWarpingMoverAdapter;
	if (!Z_Registration_Info_UClass_UMotionWarpingMoverAdapter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MotionWarpingMoverAdapter"),
			Z_Registration_Info_UClass_UMotionWarpingMoverAdapter.InnerSingleton,
			StaticRegisterNativesUMotionWarpingMoverAdapter,
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
	return Z_Registration_Info_UClass_UMotionWarpingMoverAdapter.InnerSingleton;
}
UClass* Z_Construct_UClass_UMotionWarpingMoverAdapter_NoRegister()
{
	return UMotionWarpingMoverAdapter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Adapter for MoverComponent actors to participate in motion warping\n" },
		{ "IncludePath", "MotionWarpingMoverAdapter.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingMoverAdapter.h" },
		{ "ToolTip", "Adapter for MoverComponent actors to participate in motion warping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMoverComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionWarpingMoverAdapter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMoverComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingMoverAdapter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::NewProp_TargetMoverComp = { "TargetMoverComp", nullptr, (EPropertyFlags)0x0144000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionWarpingMoverAdapter, TargetMoverComp), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMoverComp_MetaData), NewProp_TargetMoverComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::NewProp_TargetMoverComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMotionWarpingBaseAdapter,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::ClassParams = {
	&UMotionWarpingMoverAdapter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMotionWarpingMoverAdapter()
{
	if (!Z_Registration_Info_UClass_UMotionWarpingMoverAdapter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingMoverAdapter.OuterSingleton, Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMotionWarpingMoverAdapter.OuterSingleton;
}
UMotionWarpingMoverAdapter::UMotionWarpingMoverAdapter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionWarpingMoverAdapter);
UMotionWarpingMoverAdapter::~UMotionWarpingMoverAdapter() {}
// ********** End Class UMotionWarpingMoverAdapter *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMotionWarpingMoverAdapter, UMotionWarpingMoverAdapter::StaticClass, TEXT("UMotionWarpingMoverAdapter"), &Z_Registration_Info_UClass_UMotionWarpingMoverAdapter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingMoverAdapter), 2918935273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h__Script_Mover_3606106988(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
