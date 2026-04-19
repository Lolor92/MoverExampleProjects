// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/MoverBlackboard.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverBlackboard() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVER_API UClass* Z_Construct_UClass_UMoverBlackboard();
MOVER_API UClass* Z_Construct_UClass_UMoverBlackboard_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverBlackboard *********************************************************
void UMoverBlackboard::StaticRegisterNativesUMoverBlackboard()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverBlackboard;
UClass* UMoverBlackboard::GetPrivateStaticClass()
{
	using TClass = UMoverBlackboard;
	if (!Z_Registration_Info_UClass_UMoverBlackboard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverBlackboard"),
			Z_Registration_Info_UClass_UMoverBlackboard.InnerSingleton,
			StaticRegisterNativesUMoverBlackboard,
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
	return Z_Registration_Info_UClass_UMoverBlackboard.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverBlackboard_NoRegister()
{
	return UMoverBlackboard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverBlackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** MoverBlackboard: this is a simple generic map that can store any type, used as a way for decoupled systems to \n *  store calculations or transient state data that isn't necessary to reconstitute the movement simulation. \n *  It has support for invalidation, which could occur, for example, when a rollback is triggered.\n *  Values submitted are copy-in, copy-out. \n *  Unlike a traditional blackboard pattern, there is no support for subscribing to changes. \n * TODO: expand invalidation rules attached to BBObjs, for instance if we wanted some to invalidate upon rollback. Some might expire over time or after a number of simulation frames. Or an item could be tagged with a predicted sim frame #, and become cleared once that frame is finalized/confirmed.\n */" },
		{ "IncludePath", "MoveLibrary/MoverBlackboard.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MoverBlackboard.h" },
		{ "ToolTip", "MoverBlackboard: this is a simple generic map that can store any type, used as a way for decoupled systems to\nstore calculations or transient state data that isn't necessary to reconstitute the movement simulation.\nIt has support for invalidation, which could occur, for example, when a rollback is triggered.\nValues submitted are copy-in, copy-out.\nUnlike a traditional blackboard pattern, there is no support for subscribing to changes.\nTODO: expand invalidation rules attached to BBObjs, for instance if we wanted some to invalidate upon rollback. Some might expire over time or after a number of simulation frames. Or an item could be tagged with a predicted sim frame #, and become cleared once that frame is finalized/confirmed." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverBlackboard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverBlackboard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverBlackboard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverBlackboard_Statics::ClassParams = {
	&UMoverBlackboard::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverBlackboard_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverBlackboard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverBlackboard()
{
	if (!Z_Registration_Info_UClass_UMoverBlackboard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverBlackboard.OuterSingleton, Z_Construct_UClass_UMoverBlackboard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverBlackboard.OuterSingleton;
}
UMoverBlackboard::UMoverBlackboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverBlackboard);
UMoverBlackboard::~UMoverBlackboard() {}
// ********** End Class UMoverBlackboard ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverBlackboard, UMoverBlackboard::StaticClass, TEXT("UMoverBlackboard"), &Z_Registration_Info_UClass_UMoverBlackboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverBlackboard), 96880759U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h__Script_Mover_565839153(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MoverBlackboard_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
