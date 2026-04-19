// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/MovementMixer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementMixer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVER_API UClass* Z_Construct_UClass_UMovementMixer();
MOVER_API UClass* Z_Construct_UClass_UMovementMixer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMovementMixer ***********************************************************
void UMovementMixer::StaticRegisterNativesUMovementMixer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMovementMixer;
UClass* UMovementMixer::GetPrivateStaticClass()
{
	using TClass = UMovementMixer;
	if (!Z_Registration_Info_UClass_UMovementMixer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovementMixer"),
			Z_Registration_Info_UClass_UMovementMixer.InnerSingleton,
			StaticRegisterNativesUMovementMixer,
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
	return Z_Registration_Info_UClass_UMovementMixer.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovementMixer_NoRegister()
{
	return UMovementMixer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovementMixer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class in charge of Mixing various moves when evaluating/combining moves. The mixer used can be set on the MoverComponent itself.\n */" },
		{ "IncludePath", "MoveLibrary/MovementMixer.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementMixer.h" },
		{ "ToolTip", "Class in charge of Mixing various moves when evaluating/combining moves. The mixer used can be set on the MoverComponent itself." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementMixer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovementMixer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementMixer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementMixer_Statics::ClassParams = {
	&UMovementMixer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementMixer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementMixer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementMixer()
{
	if (!Z_Registration_Info_UClass_UMovementMixer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementMixer.OuterSingleton, Z_Construct_UClass_UMovementMixer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementMixer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementMixer);
UMovementMixer::~UMovementMixer() {}
// ********** End Class UMovementMixer *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovementMixer, UMovementMixer::StaticClass, TEXT("UMovementMixer"), &Z_Registration_Info_UClass_UMovementMixer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementMixer), 2397420332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h__Script_Mover_2496647479(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementMixer_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
