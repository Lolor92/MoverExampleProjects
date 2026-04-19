// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverMassTranslators.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverMassTranslators() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWrapperFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_NoRegister();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassNavMoverToMassTranslator();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassNavMoverToMassTranslator_NoRegister();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_NoRegister();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassToNavMoverTranslator();
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassToNavMoverTranslator_NoRegister();
MOVERMASSINTEGRATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassCopyToNavMoverTag();
MOVERMASSINTEGRATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag();
MOVERMASSINTEGRATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag();
MOVERMASSINTEGRATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag();
MOVERMASSINTEGRATION_API UScriptStruct* Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment();
UPackage* Z_Construct_UPackage__Script_MoverMassIntegration();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNavMoverComponentWrapperFragment *********************************
static_assert(std::is_polymorphic<FNavMoverComponentWrapperFragment>() == std::is_polymorphic<FObjectWrapperFragment>(), "USTRUCT FNavMoverComponentWrapperFragment cannot be polymorphic unless super FObjectWrapperFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNavMoverComponentWrapperFragment;
class UScriptStruct* FNavMoverComponentWrapperFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNavMoverComponentWrapperFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNavMoverComponentWrapperFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment, (UObject*)Z_Construct_UPackage__Script_MoverMassIntegration(), TEXT("NavMoverComponentWrapperFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FNavMoverComponentWrapperFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverMassTranslators.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavMoverComponentWrapperFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
	Z_Construct_UScriptStruct_FObjectWrapperFragment,
	&NewStructOps,
	"NavMoverComponentWrapperFragment",
	nullptr,
	0,
	sizeof(FNavMoverComponentWrapperFragment),
	alignof(FNavMoverComponentWrapperFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FNavMoverComponentWrapperFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNavMoverComponentWrapperFragment.InnerSingleton, Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNavMoverComponentWrapperFragment.InnerSingleton;
}
// ********** End ScriptStruct FNavMoverComponentWrapperFragment ***********************************

// ********** Begin ScriptStruct FMassNavMoverCopyToMassTag ****************************************
static_assert(std::is_polymorphic<FMassNavMoverCopyToMassTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassNavMoverCopyToMassTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassNavMoverCopyToMassTag;
class UScriptStruct* FMassNavMoverCopyToMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassNavMoverCopyToMassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassNavMoverCopyToMassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag, (UObject*)Z_Construct_UPackage__Script_MoverMassIntegration(), TEXT("MassNavMoverCopyToMassTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassNavMoverCopyToMassTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverMassTranslators.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassNavMoverCopyToMassTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassNavMoverCopyToMassTag",
	nullptr,
	0,
	sizeof(FMassNavMoverCopyToMassTag),
	alignof(FMassNavMoverCopyToMassTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassNavMoverCopyToMassTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassNavMoverCopyToMassTag.InnerSingleton, Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMassNavMoverCopyToMassTag.InnerSingleton;
}
// ********** End ScriptStruct FMassNavMoverCopyToMassTag ******************************************

// ********** Begin Class UMassNavMoverToMassTranslator ********************************************
void UMassNavMoverToMassTranslator::StaticRegisterNativesUMassNavMoverToMassTranslator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMassNavMoverToMassTranslator;
UClass* UMassNavMoverToMassTranslator::GetPrivateStaticClass()
{
	using TClass = UMassNavMoverToMassTranslator;
	if (!Z_Registration_Info_UClass_UMassNavMoverToMassTranslator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MassNavMoverToMassTranslator"),
			Z_Registration_Info_UClass_UMassNavMoverToMassTranslator.InnerSingleton,
			StaticRegisterNativesUMassNavMoverToMassTranslator,
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
	return Z_Registration_Info_UClass_UMassNavMoverToMassTranslator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassNavMoverToMassTranslator_NoRegister()
{
	return UMassNavMoverToMassTranslator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassNavMoverToMassTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Translator in charge of going from Mover->Mass\n * Sets Mass fragments for keeping track of Location (feet location), Velocity and MaxSpeed\n */" },
		{ "IncludePath", "MoverMassTranslators.h" },
		{ "ModuleRelativePath", "Public/MoverMassTranslators.h" },
		{ "ToolTip", "Translator in charge of going from Mover->Mass\nSets Mass fragments for keeping track of Location (feet location), Velocity and MaxSpeed" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassNavMoverToMassTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassNavMoverToMassTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavMoverToMassTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassNavMoverToMassTranslator_Statics::ClassParams = {
	&UMassNavMoverToMassTranslator::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavMoverToMassTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassNavMoverToMassTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassNavMoverToMassTranslator()
{
	if (!Z_Registration_Info_UClass_UMassNavMoverToMassTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassNavMoverToMassTranslator.OuterSingleton, Z_Construct_UClass_UMassNavMoverToMassTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassNavMoverToMassTranslator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassNavMoverToMassTranslator);
UMassNavMoverToMassTranslator::~UMassNavMoverToMassTranslator() {}
// ********** End Class UMassNavMoverToMassTranslator **********************************************

// ********** Begin ScriptStruct FMassCopyToNavMoverTag ********************************************
static_assert(std::is_polymorphic<FMassCopyToNavMoverTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassCopyToNavMoverTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassCopyToNavMoverTag;
class UScriptStruct* FMassCopyToNavMoverTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassCopyToNavMoverTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassCopyToNavMoverTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCopyToNavMoverTag, (UObject*)Z_Construct_UPackage__Script_MoverMassIntegration(), TEXT("MassCopyToNavMoverTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassCopyToNavMoverTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMassCopyToNavMoverTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverMassTranslators.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCopyToNavMoverTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCopyToNavMoverTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassCopyToNavMoverTag",
	nullptr,
	0,
	sizeof(FMassCopyToNavMoverTag),
	alignof(FMassCopyToNavMoverTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCopyToNavMoverTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassCopyToNavMoverTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassCopyToNavMoverTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassCopyToNavMoverTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassCopyToNavMoverTag.InnerSingleton, Z_Construct_UScriptStruct_FMassCopyToNavMoverTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMassCopyToNavMoverTag.InnerSingleton;
}
// ********** End ScriptStruct FMassCopyToNavMoverTag **********************************************

// ********** Begin Class UMassToNavMoverTranslator ************************************************
void UMassToNavMoverTranslator::StaticRegisterNativesUMassToNavMoverTranslator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMassToNavMoverTranslator;
UClass* UMassToNavMoverTranslator::GetPrivateStaticClass()
{
	using TClass = UMassToNavMoverTranslator;
	if (!Z_Registration_Info_UClass_UMassToNavMoverTranslator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MassToNavMoverTranslator"),
			Z_Registration_Info_UClass_UMassToNavMoverTranslator.InnerSingleton,
			StaticRegisterNativesUMassToNavMoverTranslator,
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
	return Z_Registration_Info_UClass_UMassToNavMoverTranslator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassToNavMoverTranslator_NoRegister()
{
	return UMassToNavMoverTranslator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassToNavMoverTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Translator in charge of going from Mass->Mover\n * Uses the NavMoverWrapperFragment to get a NavMoverComponent and request movement similarly to the PathFollowingComponent\n * See @UNavMoverComponent for details of how Mover consumes the move intent\n */" },
		{ "IncludePath", "MoverMassTranslators.h" },
		{ "ModuleRelativePath", "Public/MoverMassTranslators.h" },
		{ "ToolTip", "Translator in charge of going from Mass->Mover\nUses the NavMoverWrapperFragment to get a NavMoverComponent and request movement similarly to the PathFollowingComponent\nSee @UNavMoverComponent for details of how Mover consumes the move intent" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassToNavMoverTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassToNavMoverTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassToNavMoverTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassToNavMoverTranslator_Statics::ClassParams = {
	&UMassToNavMoverTranslator::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassToNavMoverTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassToNavMoverTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassToNavMoverTranslator()
{
	if (!Z_Registration_Info_UClass_UMassToNavMoverTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassToNavMoverTranslator.OuterSingleton, Z_Construct_UClass_UMassToNavMoverTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassToNavMoverTranslator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassToNavMoverTranslator);
UMassToNavMoverTranslator::~UMassToNavMoverTranslator() {}
// ********** End Class UMassToNavMoverTranslator **************************************************

// ********** Begin ScriptStruct FMassNavMoverActorOrientationCopyToMassTag ************************
static_assert(std::is_polymorphic<FMassNavMoverActorOrientationCopyToMassTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassNavMoverActorOrientationCopyToMassTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag;
class UScriptStruct* FMassNavMoverActorOrientationCopyToMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag, (UObject*)Z_Construct_UPackage__Script_MoverMassIntegration(), TEXT("MassNavMoverActorOrientationCopyToMassTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverMassTranslators.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassNavMoverActorOrientationCopyToMassTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassNavMoverActorOrientationCopyToMassTag",
	nullptr,
	0,
	sizeof(FMassNavMoverActorOrientationCopyToMassTag),
	alignof(FMassNavMoverActorOrientationCopyToMassTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag.InnerSingleton, Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag.InnerSingleton;
}
// ********** End ScriptStruct FMassNavMoverActorOrientationCopyToMassTag **************************

// ********** Begin Class UMassNavMoverActorOrientationToMassTranslator ****************************
void UMassNavMoverActorOrientationToMassTranslator::StaticRegisterNativesUMassNavMoverActorOrientationToMassTranslator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMassNavMoverActorOrientationToMassTranslator;
UClass* UMassNavMoverActorOrientationToMassTranslator::GetPrivateStaticClass()
{
	using TClass = UMassNavMoverActorOrientationToMassTranslator;
	if (!Z_Registration_Info_UClass_UMassNavMoverActorOrientationToMassTranslator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MassNavMoverActorOrientationToMassTranslator"),
			Z_Registration_Info_UClass_UMassNavMoverActorOrientationToMassTranslator.InnerSingleton,
			StaticRegisterNativesUMassNavMoverActorOrientationToMassTranslator,
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
	return Z_Registration_Info_UClass_UMassNavMoverActorOrientationToMassTranslator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_NoRegister()
{
	return UMassNavMoverActorOrientationToMassTranslator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Translator in charge of going from Mover->Mass for orientation\n * Modifies the transform fragment based off of Mover's rotation\n */" },
		{ "IncludePath", "MoverMassTranslators.h" },
		{ "ModuleRelativePath", "Public/MoverMassTranslators.h" },
		{ "ToolTip", "Translator in charge of going from Mover->Mass for orientation\nModifies the transform fragment based off of Mover's rotation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassNavMoverActorOrientationToMassTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_Statics::ClassParams = {
	&UMassNavMoverActorOrientationToMassTranslator::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator()
{
	if (!Z_Registration_Info_UClass_UMassNavMoverActorOrientationToMassTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassNavMoverActorOrientationToMassTranslator.OuterSingleton, Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassNavMoverActorOrientationToMassTranslator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassNavMoverActorOrientationToMassTranslator);
UMassNavMoverActorOrientationToMassTranslator::~UMassNavMoverActorOrientationToMassTranslator() {}
// ********** End Class UMassNavMoverActorOrientationToMassTranslator ******************************

// ********** Begin ScriptStruct FMassOrientationCopyToNavMoverActorOrientationTag *****************
static_assert(std::is_polymorphic<FMassOrientationCopyToNavMoverActorOrientationTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassOrientationCopyToNavMoverActorOrientationTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag;
class UScriptStruct* FMassOrientationCopyToNavMoverActorOrientationTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag, (UObject*)Z_Construct_UPackage__Script_MoverMassIntegration(), TEXT("MassOrientationCopyToNavMoverActorOrientationTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoverMassTranslators.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassOrientationCopyToNavMoverActorOrientationTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassOrientationCopyToNavMoverActorOrientationTag",
	nullptr,
	0,
	sizeof(FMassOrientationCopyToNavMoverActorOrientationTag),
	alignof(FMassOrientationCopyToNavMoverActorOrientationTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag.InnerSingleton, Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag.InnerSingleton;
}
// ********** End ScriptStruct FMassOrientationCopyToNavMoverActorOrientationTag *******************

// ********** Begin Class UMassOrientationToNavMoverActorOrientationTranslator *********************
void UMassOrientationToNavMoverActorOrientationTranslator::StaticRegisterNativesUMassOrientationToNavMoverActorOrientationTranslator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMassOrientationToNavMoverActorOrientationTranslator;
UClass* UMassOrientationToNavMoverActorOrientationTranslator::GetPrivateStaticClass()
{
	using TClass = UMassOrientationToNavMoverActorOrientationTranslator;
	if (!Z_Registration_Info_UClass_UMassOrientationToNavMoverActorOrientationTranslator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MassOrientationToNavMoverActorOrientationTranslator"),
			Z_Registration_Info_UClass_UMassOrientationToNavMoverActorOrientationTranslator.InnerSingleton,
			StaticRegisterNativesUMassOrientationToNavMoverActorOrientationTranslator,
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
	return Z_Registration_Info_UClass_UMassOrientationToNavMoverActorOrientationTranslator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_NoRegister()
{
	return UMassOrientationToNavMoverActorOrientationTranslator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Translator in charge of going from Mass->Mover for orientation\n * Modifies the UpdatedComponent of the NavMoverComponent based off of the entities transform fragment rotation\n * TODO: Currently Mover doesn't like outside modification of rotation and may throw a warning. It may also cause a rollback.\n */" },
		{ "IncludePath", "MoverMassTranslators.h" },
		{ "ModuleRelativePath", "Public/MoverMassTranslators.h" },
		{ "ToolTip", "Translator in charge of going from Mass->Mover for orientation\nModifies the UpdatedComponent of the NavMoverComponent based off of the entities transform fragment rotation\nTODO: Currently Mover doesn't like outside modification of rotation and may throw a warning. It may also cause a rollback." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassOrientationToNavMoverActorOrientationTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverMassIntegration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_Statics::ClassParams = {
	&UMassOrientationToNavMoverActorOrientationTranslator::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator()
{
	if (!Z_Registration_Info_UClass_UMassOrientationToNavMoverActorOrientationTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassOrientationToNavMoverActorOrientationTranslator.OuterSingleton, Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassOrientationToNavMoverActorOrientationTranslator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassOrientationToNavMoverActorOrientationTranslator);
UMassOrientationToNavMoverActorOrientationTranslator::~UMassOrientationToNavMoverActorOrientationTranslator() {}
// ********** End Class UMassOrientationToNavMoverActorOrientationTranslator ***********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h__Script_MoverMassIntegration_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavMoverComponentWrapperFragment::StaticStruct, Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment_Statics::NewStructOps, TEXT("NavMoverComponentWrapperFragment"), &Z_Registration_Info_UScriptStruct_FNavMoverComponentWrapperFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavMoverComponentWrapperFragment), 1082249802U) },
		{ FMassNavMoverCopyToMassTag::StaticStruct, Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag_Statics::NewStructOps, TEXT("MassNavMoverCopyToMassTag"), &Z_Registration_Info_UScriptStruct_FMassNavMoverCopyToMassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassNavMoverCopyToMassTag), 480486127U) },
		{ FMassCopyToNavMoverTag::StaticStruct, Z_Construct_UScriptStruct_FMassCopyToNavMoverTag_Statics::NewStructOps, TEXT("MassCopyToNavMoverTag"), &Z_Registration_Info_UScriptStruct_FMassCopyToNavMoverTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCopyToNavMoverTag), 3494778552U) },
		{ FMassNavMoverActorOrientationCopyToMassTag::StaticStruct, Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag_Statics::NewStructOps, TEXT("MassNavMoverActorOrientationCopyToMassTag"), &Z_Registration_Info_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassNavMoverActorOrientationCopyToMassTag), 1783775277U) },
		{ FMassOrientationCopyToNavMoverActorOrientationTag::StaticStruct, Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag_Statics::NewStructOps, TEXT("MassOrientationCopyToNavMoverActorOrientationTag"), &Z_Registration_Info_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassOrientationCopyToNavMoverActorOrientationTag), 2170420097U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassNavMoverToMassTranslator, UMassNavMoverToMassTranslator::StaticClass, TEXT("UMassNavMoverToMassTranslator"), &Z_Registration_Info_UClass_UMassNavMoverToMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassNavMoverToMassTranslator), 1851337237U) },
		{ Z_Construct_UClass_UMassToNavMoverTranslator, UMassToNavMoverTranslator::StaticClass, TEXT("UMassToNavMoverTranslator"), &Z_Registration_Info_UClass_UMassToNavMoverTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassToNavMoverTranslator), 618283208U) },
		{ Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator, UMassNavMoverActorOrientationToMassTranslator::StaticClass, TEXT("UMassNavMoverActorOrientationToMassTranslator"), &Z_Registration_Info_UClass_UMassNavMoverActorOrientationToMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassNavMoverActorOrientationToMassTranslator), 4289844368U) },
		{ Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator, UMassOrientationToNavMoverActorOrientationTranslator::StaticClass, TEXT("UMassOrientationToNavMoverActorOrientationTranslator"), &Z_Registration_Info_UClass_UMassOrientationToNavMoverActorOrientationTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassOrientationToNavMoverActorOrientationTranslator), 477343633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h__Script_MoverMassIntegration_4185354125(TEXT("/Script/MoverMassIntegration"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h__Script_MoverMassIntegration_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h__Script_MoverMassIntegration_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h__Script_MoverMassIntegration_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h__Script_MoverMassIntegration_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
