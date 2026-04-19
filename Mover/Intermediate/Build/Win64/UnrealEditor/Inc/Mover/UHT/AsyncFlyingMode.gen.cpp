// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Modes/AsyncFlyingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncFlyingMode() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UAsyncFlyingMode();
MOVER_API UClass* Z_Construct_UClass_UAsyncFlyingMode_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncFlyingMode *********************************************************
void UAsyncFlyingMode::StaticRegisterNativesUAsyncFlyingMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncFlyingMode;
UClass* UAsyncFlyingMode::GetPrivateStaticClass()
{
	using TClass = UAsyncFlyingMode;
	if (!Z_Registration_Info_UClass_UAsyncFlyingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncFlyingMode"),
			Z_Registration_Info_UClass_UAsyncFlyingMode.InnerSingleton,
			StaticRegisterNativesUAsyncFlyingMode,
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
	return Z_Registration_Info_UClass_UAsyncFlyingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncFlyingMode_NoRegister()
{
	return UAsyncFlyingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncFlyingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * AsyncFlyingMode: a default movement mode for moving through the air freely, but still interacting with blocking geometry. The\n * moving actor will remain upright vs the movement plane.\n * This mode is threadsafe, and simulates movement without actually modifying any scene component(s).\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "DefaultMovementSet/Modes/AsyncFlyingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFlyingMode.h" },
		{ "ToolTip", "AsyncFlyingMode: a default movement mode for moving through the air freely, but still interacting with blocking geometry. The\nmoving actor will remain upright vs the movement plane.\nThis mode is threadsafe, and simulates movement without actually modifying any scene component(s)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespectDistanceOverWalkableSurfaces_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * If true, the actor will 'float' above any walkable surfaces to maintain the same height as ground-based modes.\n\x09 * This can prevent pops when transitioning to ground-based movement, at the cost of performing floor checks while flying.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/AsyncFlyingMode.h" },
		{ "ToolTip", "If true, the actor will 'float' above any walkable surfaces to maintain the same height as ground-based modes.\nThis can prevent pops when transitioning to ground-based movement, at the cost of performing floor checks while flying." },
	};
#endif // WITH_METADATA
	static void NewProp_bRespectDistanceOverWalkableSurfaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectDistanceOverWalkableSurfaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncFlyingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAsyncFlyingMode_Statics::NewProp_bRespectDistanceOverWalkableSurfaces_SetBit(void* Obj)
{
	((UAsyncFlyingMode*)Obj)->bRespectDistanceOverWalkableSurfaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncFlyingMode_Statics::NewProp_bRespectDistanceOverWalkableSurfaces = { "bRespectDistanceOverWalkableSurfaces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncFlyingMode), &Z_Construct_UClass_UAsyncFlyingMode_Statics::NewProp_bRespectDistanceOverWalkableSurfaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespectDistanceOverWalkableSurfaces_MetaData), NewProp_bRespectDistanceOverWalkableSurfaces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncFlyingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncFlyingMode_Statics::NewProp_bRespectDistanceOverWalkableSurfaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFlyingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncFlyingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFlyingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncFlyingMode_Statics::ClassParams = {
	&UAsyncFlyingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAsyncFlyingMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFlyingMode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncFlyingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncFlyingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncFlyingMode()
{
	if (!Z_Registration_Info_UClass_UAsyncFlyingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncFlyingMode.OuterSingleton, Z_Construct_UClass_UAsyncFlyingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncFlyingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncFlyingMode);
UAsyncFlyingMode::~UAsyncFlyingMode() {}
// ********** End Class UAsyncFlyingMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncFlyingMode, UAsyncFlyingMode::StaticClass, TEXT("UAsyncFlyingMode"), &Z_Registration_Info_UClass_UAsyncFlyingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncFlyingMode), 1821663695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h__Script_Mover_1248027575(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_AsyncFlyingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
