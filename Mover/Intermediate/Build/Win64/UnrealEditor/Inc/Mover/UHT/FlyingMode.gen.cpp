// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultMovementSet/Modes/FlyingMode.h"
#include "MoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFlyingMode() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode();
MOVER_API UClass* Z_Construct_UClass_UFlyingMode();
MOVER_API UClass* Z_Construct_UClass_UFlyingMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFlyingMode **************************************************************
void UFlyingMode::StaticRegisterNativesUFlyingMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFlyingMode;
UClass* UFlyingMode::GetPrivateStaticClass()
{
	using TClass = UFlyingMode;
	if (!Z_Registration_Info_UClass_UFlyingMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FlyingMode"),
			Z_Registration_Info_UClass_UFlyingMode.InnerSingleton,
			StaticRegisterNativesUFlyingMode,
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
	return Z_Registration_Info_UClass_UFlyingMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UFlyingMode_NoRegister()
{
	return UFlyingMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFlyingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FlyingMode: a default movement mode for moving through the air freely, but still interacting with blocking geometry. The\n * moving actor will remain upright vs the movement plane.\n */" },
		{ "IncludePath", "DefaultMovementSet/Modes/FlyingMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/FlyingMode.h" },
		{ "ToolTip", "FlyingMode: a default movement mode for moving through the air freely, but still interacting with blocking geometry. The\nmoving actor will remain upright vs the movement plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespectDistanceOverWalkableSurfaces_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "/**\n\x09 * If true, the actor will 'float' above any walkable surfaces to maintain the same height as ground-based modes. \n\x09 * This can prevent pops when transitioning to ground-based movement, at the cost of performing floor checks while flying.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DefaultMovementSet/Modes/FlyingMode.h" },
		{ "ToolTip", "If true, the actor will 'float' above any walkable surfaces to maintain the same height as ground-based modes.\nThis can prevent pops when transitioning to ground-based movement, at the cost of performing floor checks while flying." },
	};
#endif // WITH_METADATA
	static void NewProp_bRespectDistanceOverWalkableSurfaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectDistanceOverWalkableSurfaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlyingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UFlyingMode_Statics::NewProp_bRespectDistanceOverWalkableSurfaces_SetBit(void* Obj)
{
	((UFlyingMode*)Obj)->bRespectDistanceOverWalkableSurfaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlyingMode_Statics::NewProp_bRespectDistanceOverWalkableSurfaces = { "bRespectDistanceOverWalkableSurfaces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlyingMode), &Z_Construct_UClass_UFlyingMode_Statics::NewProp_bRespectDistanceOverWalkableSurfaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespectDistanceOverWalkableSurfaces_MetaData), NewProp_bRespectDistanceOverWalkableSurfaces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlyingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingMode_Statics::NewProp_bRespectDistanceOverWalkableSurfaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlyingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMovementMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlyingMode_Statics::ClassParams = {
	&UFlyingMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlyingMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingMode_Statics::PropPointers),
	0,
	0x00A810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlyingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlyingMode()
{
	if (!Z_Registration_Info_UClass_UFlyingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlyingMode.OuterSingleton, Z_Construct_UClass_UFlyingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlyingMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlyingMode);
UFlyingMode::~UFlyingMode() {}
// ********** End Class UFlyingMode ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlyingMode, UFlyingMode::StaticClass, TEXT("UFlyingMode"), &Z_Registration_Info_UClass_UFlyingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlyingMode), 3383799055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h__Script_Mover_3355788771(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Modes_FlyingMode_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
