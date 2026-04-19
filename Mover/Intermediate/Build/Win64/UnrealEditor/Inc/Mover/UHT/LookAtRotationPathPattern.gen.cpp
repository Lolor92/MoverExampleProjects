// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PathedMovement/LookAtRotationPathPattern.h"
#include "PhysicsMover/PathedMovement/PathedMovementMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLookAtRotationPathPattern() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UClass* Z_Construct_UClass_ULookAtRotationPattern();
MOVER_API UClass* Z_Construct_UClass_ULookAtRotationPattern_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UPathedMovementPatternBase();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULookAtRotationPattern Function SetLookAtLocation ************************
struct Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics
{
	struct LookAtRotationPattern_eventSetLookAtLocation_Parms
	{
		FVector LookAt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LookAtPattern" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/LookAtRotationPathPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::NewProp_LookAt = { "LookAt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LookAtRotationPattern_eventSetLookAtLocation_Parms, LookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAt_MetaData), NewProp_LookAt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::NewProp_LookAt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULookAtRotationPattern, nullptr, "SetLookAtLocation", Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::LookAtRotationPattern_eventSetLookAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::LookAtRotationPattern_eventSetLookAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULookAtRotationPattern::execSetLookAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LookAt);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLookAtLocation(Z_Param_Out_LookAt);
	P_NATIVE_END;
}
// ********** End Class ULookAtRotationPattern Function SetLookAtLocation **************************

// ********** Begin Class ULookAtRotationPattern Function SetRelativeLookAtLocation ****************
struct Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics
{
	struct LookAtRotationPattern_eventSetRelativeLookAtLocation_Parms
	{
		FVector RelativeLookAt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LookAtPattern" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/LookAtRotationPathPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLookAt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLookAt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::NewProp_RelativeLookAt = { "RelativeLookAt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LookAtRotationPattern_eventSetRelativeLookAtLocation_Parms, RelativeLookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeLookAt_MetaData), NewProp_RelativeLookAt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::NewProp_RelativeLookAt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULookAtRotationPattern, nullptr, "SetRelativeLookAtLocation", Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::LookAtRotationPattern_eventSetRelativeLookAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::LookAtRotationPattern_eventSetRelativeLookAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULookAtRotationPattern::execSetRelativeLookAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RelativeLookAt);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRelativeLookAtLocation(Z_Param_Out_RelativeLookAt);
	P_NATIVE_END;
}
// ********** End Class ULookAtRotationPattern Function SetRelativeLookAtLocation ******************

// ********** Begin Class ULookAtRotationPattern ***************************************************
void ULookAtRotationPattern::StaticRegisterNativesULookAtRotationPattern()
{
	UClass* Class = ULookAtRotationPattern::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetLookAtLocation", &ULookAtRotationPattern::execSetLookAtLocation },
		{ "SetRelativeLookAtLocation", &ULookAtRotationPattern::execSetRelativeLookAtLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULookAtRotationPattern;
UClass* ULookAtRotationPattern::GetPrivateStaticClass()
{
	using TClass = ULookAtRotationPattern;
	if (!Z_Registration_Info_UClass_ULookAtRotationPattern.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LookAtRotationPattern"),
			Z_Registration_Info_UClass_ULookAtRotationPattern.InnerSingleton,
			StaticRegisterNativesULookAtRotationPattern,
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
	return Z_Registration_Info_UClass_ULookAtRotationPattern.InnerSingleton;
}
UClass* Z_Construct_UClass_ULookAtRotationPattern_NoRegister()
{
	return ULookAtRotationPattern::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULookAtRotationPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Stare at a single fixed point at all times (pairs nicely with ellipse if you want to always look at the center) */" },
		{ "IncludePath", "PhysicsMover/PathedMovement/LookAtRotationPathPattern.h" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/LookAtRotationPathPattern.h" },
		{ "ToolTip", "Stare at a single fixed point at all times (pairs nicely with ellipse if you want to always look at the center)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLookAtLocation_MetaData[] = {
		{ "Category", "LookAtPattern" },
		{ "Comment", "/** The location relative to the path origin to always look at while moving along the path */" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PathedMovement/LookAtRotationPathPattern.h" },
		{ "ToolTip", "The location relative to the path origin to always look at while moving along the path" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLookAtLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULookAtRotationPattern_SetLookAtLocation, "SetLookAtLocation" }, // 2641838282
		{ &Z_Construct_UFunction_ULookAtRotationPattern_SetRelativeLookAtLocation, "SetRelativeLookAtLocation" }, // 1287138419
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAtRotationPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULookAtRotationPattern_Statics::NewProp_RelativeLookAtLocation = { "RelativeLookAtLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookAtRotationPattern, RelativeLookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeLookAtLocation_MetaData), NewProp_RelativeLookAtLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULookAtRotationPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtRotationPattern_Statics::NewProp_RelativeLookAtLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtRotationPattern_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULookAtRotationPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPathedMovementPatternBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtRotationPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULookAtRotationPattern_Statics::ClassParams = {
	&ULookAtRotationPattern::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULookAtRotationPattern_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtRotationPattern_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtRotationPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_ULookAtRotationPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULookAtRotationPattern()
{
	if (!Z_Registration_Info_UClass_ULookAtRotationPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULookAtRotationPattern.OuterSingleton, Z_Construct_UClass_ULookAtRotationPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULookAtRotationPattern.OuterSingleton;
}
ULookAtRotationPattern::ULookAtRotationPattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtRotationPattern);
ULookAtRotationPattern::~ULookAtRotationPattern() {}
// ********** End Class ULookAtRotationPattern *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULookAtRotationPattern, ULookAtRotationPattern::StaticClass, TEXT("ULookAtRotationPattern"), &Z_Registration_Info_UClass_ULookAtRotationPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULookAtRotationPattern), 1859409202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h__Script_Mover_2245560689(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PathedMovement_LookAtRotationPathPattern_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
