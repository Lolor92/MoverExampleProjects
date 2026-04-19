// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/PointMovementPathPattern.h"
#include "PhysicsMover/PathedMovement/PathedMovementMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePointMovementPathPattern() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase();
MOVER_API UClass* Z_Construct_UClass_UPointMovementPathPattern();
MOVER_API UClass* Z_Construct_UClass_UPointMovementPathPattern_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EPointMovementLocationBasis();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FPointMovementPathPoint();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPointMovementLocationBasis ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointMovementLocationBasis;
static UEnum* EPointMovementLocationBasis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPointMovementLocationBasis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPointMovementLocationBasis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EPointMovementLocationBasis, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EPointMovementLocationBasis"));
	}
	return Z_Registration_Info_UEnum_EPointMovementLocationBasis.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EPointMovementLocationBasis>()
{
	return EPointMovementLocationBasis_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EPointMovementLocationBasis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PointMovementPathPattern.h" },
		{ "PathOrigin.Comment", "/** The location is relative to the origin of the path */" },
		{ "PathOrigin.Name", "EPointMovementLocationBasis::PathOrigin" },
		{ "PathOrigin.ToolTip", "The location is relative to the origin of the path" },
		{ "PreviousPoint.Comment", "/** The location is relative to the previous point in the path */" },
		{ "PreviousPoint.Name", "EPointMovementLocationBasis::PreviousPoint" },
		{ "PreviousPoint.ToolTip", "The location is relative to the previous point in the path" },
		{ "World.Comment", "/** The location is relative to the world origin */" },
		{ "World.Name", "EPointMovementLocationBasis::World" },
		{ "World.ToolTip", "The location is relative to the world origin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPointMovementLocationBasis::PreviousPoint", (int64)EPointMovementLocationBasis::PreviousPoint },
		{ "EPointMovementLocationBasis::PathOrigin", (int64)EPointMovementLocationBasis::PathOrigin },
		{ "EPointMovementLocationBasis::World", (int64)EPointMovementLocationBasis::World },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EPointMovementLocationBasis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EPointMovementLocationBasis",
	"EPointMovementLocationBasis",
	Z_Construct_UEnum_Mover_EPointMovementLocationBasis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EPointMovementLocationBasis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EPointMovementLocationBasis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EPointMovementLocationBasis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EPointMovementLocationBasis()
{
	if (!Z_Registration_Info_UEnum_EPointMovementLocationBasis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointMovementLocationBasis.InnerSingleton, Z_Construct_UEnum_Mover_EPointMovementLocationBasis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPointMovementLocationBasis.InnerSingleton;
}
// ********** End Enum EPointMovementLocationBasis *************************************************

// ********** Begin ScriptStruct FPointMovementPathPoint *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPointMovementPathPoint;
class UScriptStruct* FPointMovementPathPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPointMovementPathPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPointMovementPathPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointMovementPathPoint, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("PointMovementPathPoint"));
	}
	return Z_Registration_Info_UScriptStruct_FPointMovementPathPoint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PointMovementPathPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Basis_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Basis that the location of this point is relative to */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PointMovementPathPattern.h" },
		{ "ToolTip", "Basis that the location of this point is relative to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The location to move toward, relative to the path origin (i.e. root component location by default) */" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PointMovementPathPattern.h" },
		{ "ToolTip", "The location to move toward, relative to the path origin (i.e. root component location by default)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Basis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Basis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointMovementPathPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::NewProp_Basis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::NewProp_Basis = { "Basis", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointMovementPathPoint, Basis), Z_Construct_UEnum_Mover_EPointMovementLocationBasis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Basis_MetaData), NewProp_Basis_MetaData) }; // 1227781329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointMovementPathPoint, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::NewProp_Basis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::NewProp_Basis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"PointMovementPathPoint",
	Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::PropPointers),
	sizeof(FPointMovementPathPoint),
	alignof(FPointMovementPathPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPointMovementPathPoint()
{
	if (!Z_Registration_Info_UScriptStruct_FPointMovementPathPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPointMovementPathPoint.InnerSingleton, Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPointMovementPathPoint.InnerSingleton;
}
// ********** End ScriptStruct FPointMovementPathPoint *********************************************

// ********** Begin Class UPointMovementPathPattern ************************************************
void UPointMovementPathPattern::StaticRegisterNativesUPointMovementPathPattern()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPointMovementPathPattern;
UClass* UPointMovementPathPattern::GetPrivateStaticClass()
{
	using TClass = UPointMovementPathPattern;
	if (!Z_Registration_Info_UClass_UPointMovementPathPattern.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PointMovementPathPattern"),
			Z_Registration_Info_UClass_UPointMovementPathPattern.InnerSingleton,
			StaticRegisterNativesUPointMovementPathPattern,
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
	return Z_Registration_Info_UClass_UPointMovementPathPattern.InnerSingleton;
}
UClass* Z_Construct_UClass_UPointMovementPathPattern_NoRegister()
{
	return UPointMovementPathPattern::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPointMovementPathPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Movement pattern that moves between explicitly defined points */" },
		{ "IncludePath", "PhysicsMover/PathedMovement/PointMovementPathPattern.h" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PointMovementPathPattern.h" },
		{ "ToolTip", "Movement pattern that moves between explicitly defined points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[] = {
		{ "Category", "Point Movement Pattern" },
		{ "Comment", "/** Relative point locations to move toward, in sequence from first to last */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/PointMovementPathPattern.h" },
		{ "ToolTip", "Relative point locations to move toward, in sequence from first to last" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointMovementPathPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointMovementPathPattern_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointMovementPathPoint, METADATA_PARAMS(0, nullptr) }; // 2771259009
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPointMovementPathPattern_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointMovementPathPattern, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathPoints_MetaData), NewProp_PathPoints_MetaData) }; // 2771259009
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointMovementPathPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointMovementPathPattern_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointMovementPathPattern_Statics::NewProp_PathPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointMovementPathPattern_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPointMovementPathPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPathedMovementPatternBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointMovementPathPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointMovementPathPattern_Statics::ClassParams = {
	&UPointMovementPathPattern::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPointMovementPathPattern_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPointMovementPathPattern_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointMovementPathPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointMovementPathPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPointMovementPathPattern()
{
	if (!Z_Registration_Info_UClass_UPointMovementPathPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointMovementPathPattern.OuterSingleton, Z_Construct_UClass_UPointMovementPathPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPointMovementPathPattern.OuterSingleton;
}
UPointMovementPathPattern::UPointMovementPathPattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPointMovementPathPattern);
UPointMovementPathPattern::~UPointMovementPathPattern() {}
// ********** End Class UPointMovementPathPattern **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPointMovementLocationBasis_StaticEnum, TEXT("EPointMovementLocationBasis"), &Z_Registration_Info_UEnum_EPointMovementLocationBasis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1227781329U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPointMovementPathPoint::StaticStruct, Z_Construct_UScriptStruct_FPointMovementPathPoint_Statics::NewStructOps, TEXT("PointMovementPathPoint"), &Z_Registration_Info_UScriptStruct_FPointMovementPathPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointMovementPathPoint), 2771259009U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPointMovementPathPattern, UPointMovementPathPattern::StaticClass, TEXT("UPointMovementPathPattern"), &Z_Registration_Info_UClass_UPointMovementPathPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointMovementPathPattern), 2658095535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h__Script_Mover_638215704(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h__Script_Mover_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_PointMovementPathPattern_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
