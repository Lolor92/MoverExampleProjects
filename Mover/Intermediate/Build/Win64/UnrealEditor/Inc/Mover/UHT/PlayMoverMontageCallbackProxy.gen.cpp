// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/PlayMoverMontageCallbackProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayMoverMontageCallbackProxy() {}

// ********** Begin Cross Module References ********************************************************
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UPlayMontageCallbackProxy();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMoverComponent_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPlayMoverMontageCallbackProxy();
MOVER_API UClass* Z_Construct_UClass_UPlayMoverMontageCallbackProxy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayMoverMontageCallbackProxy Function CreateProxyObjectForPlayMoverMontage 
struct Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics
{
	struct PlayMoverMontageCallbackProxy_eventCreateProxyObjectForPlayMoverMontage_Parms
	{
		UMoverComponent* InMoverComponent;
		UAnimMontage* MontageToPlay;
		float PlayRate;
		float StartingPosition;
		FName StartingSection;
		UPlayMoverMontageCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Called to perform the query internally\n" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_StartingPosition", "0.000000" },
		{ "CPP_Default_StartingSection", "None" },
		{ "ModuleRelativePath", "Public/MoveLibrary/PlayMoverMontageCallbackProxy.h" },
		{ "ToolTip", "Called to perform the query internally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMoverComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoverComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingPosition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartingSection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_InMoverComponent = { "InMoverComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayMoverMontageCallbackProxy_eventCreateProxyObjectForPlayMoverMontage_Parms, InMoverComponent), Z_Construct_UClass_UMoverComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMoverComponent_MetaData), NewProp_InMoverComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayMoverMontageCallbackProxy_eventCreateProxyObjectForPlayMoverMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayMoverMontageCallbackProxy_eventCreateProxyObjectForPlayMoverMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_StartingPosition = { "StartingPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayMoverMontageCallbackProxy_eventCreateProxyObjectForPlayMoverMontage_Parms, StartingPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_StartingSection = { "StartingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayMoverMontageCallbackProxy_eventCreateProxyObjectForPlayMoverMontage_Parms, StartingSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayMoverMontageCallbackProxy_eventCreateProxyObjectForPlayMoverMontage_Parms, ReturnValue), Z_Construct_UClass_UPlayMoverMontageCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_InMoverComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_StartingPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_StartingSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayMoverMontageCallbackProxy, nullptr, "CreateProxyObjectForPlayMoverMontage", Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::PlayMoverMontageCallbackProxy_eventCreateProxyObjectForPlayMoverMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::PlayMoverMontageCallbackProxy_eventCreateProxyObjectForPlayMoverMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayMoverMontageCallbackProxy::execCreateProxyObjectForPlayMoverMontage)
{
	P_GET_OBJECT(UMoverComponent,Z_Param_InMoverComponent);
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartingPosition);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartingSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayMoverMontageCallbackProxy**)Z_Param__Result=UPlayMoverMontageCallbackProxy::CreateProxyObjectForPlayMoverMontage(Z_Param_InMoverComponent,Z_Param_MontageToPlay,Z_Param_PlayRate,Z_Param_StartingPosition,Z_Param_StartingSection);
	P_NATIVE_END;
}
// ********** End Class UPlayMoverMontageCallbackProxy Function CreateProxyObjectForPlayMoverMontage 

// ********** Begin Class UPlayMoverMontageCallbackProxy Function OnMoverMontageEnded **************
struct Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics
{
	struct PlayMoverMontageCallbackProxy_eventOnMoverMontageEnded_Parms
	{
		FName IgnoredNotifyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveLibrary/PlayMoverMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoredNotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::NewProp_IgnoredNotifyName = { "IgnoredNotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayMoverMontageCallbackProxy_eventOnMoverMontageEnded_Parms, IgnoredNotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::NewProp_IgnoredNotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayMoverMontageCallbackProxy, nullptr, "OnMoverMontageEnded", Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::PlayMoverMontageCallbackProxy_eventOnMoverMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::PlayMoverMontageCallbackProxy_eventOnMoverMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayMoverMontageCallbackProxy::execOnMoverMontageEnded)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_IgnoredNotifyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoverMontageEnded(Z_Param_IgnoredNotifyName);
	P_NATIVE_END;
}
// ********** End Class UPlayMoverMontageCallbackProxy Function OnMoverMontageEnded ****************

// ********** Begin Class UPlayMoverMontageCallbackProxy *******************************************
void UPlayMoverMontageCallbackProxy::StaticRegisterNativesUPlayMoverMontageCallbackProxy()
{
	UClass* Class = UPlayMoverMontageCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForPlayMoverMontage", &UPlayMoverMontageCallbackProxy::execCreateProxyObjectForPlayMoverMontage },
		{ "OnMoverMontageEnded", &UPlayMoverMontageCallbackProxy::execOnMoverMontageEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayMoverMontageCallbackProxy;
UClass* UPlayMoverMontageCallbackProxy::GetPrivateStaticClass()
{
	using TClass = UPlayMoverMontageCallbackProxy;
	if (!Z_Registration_Info_UClass_UPlayMoverMontageCallbackProxy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayMoverMontageCallbackProxy"),
			Z_Registration_Info_UClass_UPlayMoverMontageCallbackProxy.InnerSingleton,
			StaticRegisterNativesUPlayMoverMontageCallbackProxy,
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
	return Z_Registration_Info_UClass_UPlayMoverMontageCallbackProxy.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayMoverMontageCallbackProxy_NoRegister()
{
	return UPlayMoverMontageCallbackProxy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayMoverMontageCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Runtime object used as a proxy to an async blueprint task node that runs animation montages on Mover actors. This leverages \n// parent UPlayMontageCallbackProxy to perform animation, while adding an accompanying layered move to handle any root motion \n// from the montage.\n" },
		{ "IncludePath", "MoveLibrary/PlayMoverMontageCallbackProxy.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/PlayMoverMontageCallbackProxy.h" },
		{ "ToolTip", "Runtime object used as a proxy to an async blueprint task node that runs animation montages on Mover actors. This leverages\nparent UPlayMontageCallbackProxy to perform animation, while adding an accompanying layered move to handle any root motion\nfrom the montage." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage, "CreateProxyObjectForPlayMoverMontage" }, // 3516165629
		{ &Z_Construct_UFunction_UPlayMoverMontageCallbackProxy_OnMoverMontageEnded, "OnMoverMontageEnded" }, // 3326295543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayMoverMontageCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayMoverMontageCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlayMontageCallbackProxy,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMoverMontageCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayMoverMontageCallbackProxy_Statics::ClassParams = {
	&UPlayMoverMontageCallbackProxy::StaticClass,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayMoverMontageCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayMoverMontageCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayMoverMontageCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UPlayMoverMontageCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayMoverMontageCallbackProxy.OuterSingleton, Z_Construct_UClass_UPlayMoverMontageCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayMoverMontageCallbackProxy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayMoverMontageCallbackProxy);
UPlayMoverMontageCallbackProxy::~UPlayMoverMontageCallbackProxy() {}
// ********** End Class UPlayMoverMontageCallbackProxy *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayMoverMontageCallbackProxy, UPlayMoverMontageCallbackProxy::StaticClass, TEXT("UPlayMoverMontageCallbackProxy"), &Z_Registration_Info_UClass_UPlayMoverMontageCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayMoverMontageCallbackProxy), 1952423904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h__Script_Mover_1511740299(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
