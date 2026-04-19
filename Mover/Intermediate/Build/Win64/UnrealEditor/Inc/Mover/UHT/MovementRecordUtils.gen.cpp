// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/MovementRecordUtils.h"
#include "MoveLibrary/MovementRecord.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementRecordUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOVER_API UClass* Z_Construct_UClass_UMovementRecordUtils();
MOVER_API UClass* Z_Construct_UClass_UMovementRecordUtils_NoRegister();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementRecord();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMovementRecordUtils Function K2_GetRelevantMoveDelta ********************
struct Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics
{
	struct MovementRecordUtils_eventK2_GetRelevantMoveDelta_Parms
	{
		FMovementRecord MovementRecord;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Get relevant move delta applied to the actor/record */" },
		{ "DisplayName", "Get Relevant Move Delta" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementRecordUtils.h" },
		{ "ToolTip", "Get relevant move delta applied to the actor/record" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementRecord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::NewProp_MovementRecord = { "MovementRecord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementRecordUtils_eventK2_GetRelevantMoveDelta_Parms, MovementRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRecord_MetaData), NewProp_MovementRecord_MetaData) }; // 108337433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementRecordUtils_eventK2_GetRelevantMoveDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::NewProp_MovementRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementRecordUtils, nullptr, "K2_GetRelevantMoveDelta", Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::MovementRecordUtils_eventK2_GetRelevantMoveDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::MovementRecordUtils_eventK2_GetRelevantMoveDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementRecordUtils::execK2_GetRelevantMoveDelta)
{
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_MovementRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementRecordUtils::K2_GetRelevantMoveDelta(Z_Param_Out_MovementRecord);
	P_NATIVE_END;
}
// ********** End Class UMovementRecordUtils Function K2_GetRelevantMoveDelta **********************

// ********** Begin Class UMovementRecordUtils Function K2_GetRelevantVelocity *********************
struct Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics
{
	struct MovementRecordUtils_eventK2_GetRelevantVelocity_Parms
	{
		FMovementRecord MovementRecord;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Get relevant velocity applied to the actor/record */" },
		{ "DisplayName", "Get Relevant Velocity" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementRecordUtils.h" },
		{ "ToolTip", "Get relevant velocity applied to the actor/record" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementRecord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::NewProp_MovementRecord = { "MovementRecord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementRecordUtils_eventK2_GetRelevantVelocity_Parms, MovementRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRecord_MetaData), NewProp_MovementRecord_MetaData) }; // 108337433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementRecordUtils_eventK2_GetRelevantVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::NewProp_MovementRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementRecordUtils, nullptr, "K2_GetRelevantVelocity", Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::MovementRecordUtils_eventK2_GetRelevantVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::MovementRecordUtils_eventK2_GetRelevantVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementRecordUtils::execK2_GetRelevantVelocity)
{
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_MovementRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementRecordUtils::K2_GetRelevantVelocity(Z_Param_Out_MovementRecord);
	P_NATIVE_END;
}
// ********** End Class UMovementRecordUtils Function K2_GetRelevantVelocity ***********************

// ********** Begin Class UMovementRecordUtils Function K2_GetTotalMoveDelta ***********************
struct Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics
{
	struct MovementRecordUtils_eventK2_GetTotalMoveDelta_Parms
	{
		FMovementRecord MovementRecord;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Get all the move delta applied to the actor/record */" },
		{ "DisplayName", "Get Total Move Delta" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementRecordUtils.h" },
		{ "ToolTip", "Get all the move delta applied to the actor/record" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementRecord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::NewProp_MovementRecord = { "MovementRecord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementRecordUtils_eventK2_GetTotalMoveDelta_Parms, MovementRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRecord_MetaData), NewProp_MovementRecord_MetaData) }; // 108337433
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementRecordUtils_eventK2_GetTotalMoveDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::NewProp_MovementRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementRecordUtils, nullptr, "K2_GetTotalMoveDelta", Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::MovementRecordUtils_eventK2_GetTotalMoveDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::MovementRecordUtils_eventK2_GetTotalMoveDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementRecordUtils::execK2_GetTotalMoveDelta)
{
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_MovementRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMovementRecordUtils::K2_GetTotalMoveDelta(Z_Param_Out_MovementRecord);
	P_NATIVE_END;
}
// ********** End Class UMovementRecordUtils Function K2_GetTotalMoveDelta *************************

// ********** Begin Class UMovementRecordUtils Function K2_SetDeltaSeconds *************************
struct Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics
{
	struct MovementRecordUtils_eventK2_SetDeltaSeconds_Parms
	{
		FMovementRecord OutMovementRecord;
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mover" },
		{ "Comment", "/** Sets the delta time these moves took place over */" },
		{ "DisplayName", "Set Delta Seconds" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementRecordUtils.h" },
		{ "ToolTip", "Sets the delta time these moves took place over" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMovementRecord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::NewProp_OutMovementRecord = { "OutMovementRecord", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementRecordUtils_eventK2_SetDeltaSeconds_Parms, OutMovementRecord), Z_Construct_UScriptStruct_FMovementRecord, METADATA_PARAMS(0, nullptr) }; // 108337433
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementRecordUtils_eventK2_SetDeltaSeconds_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::NewProp_OutMovementRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMovementRecordUtils, nullptr, "K2_SetDeltaSeconds", Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::MovementRecordUtils_eventK2_SetDeltaSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::MovementRecordUtils_eventK2_SetDeltaSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovementRecordUtils::execK2_SetDeltaSeconds)
{
	P_GET_STRUCT_REF(FMovementRecord,Z_Param_Out_OutMovementRecord);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovementRecordUtils::K2_SetDeltaSeconds(Z_Param_Out_OutMovementRecord,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// ********** End Class UMovementRecordUtils Function K2_SetDeltaSeconds ***************************

// ********** Begin Class UMovementRecordUtils *****************************************************
void UMovementRecordUtils::StaticRegisterNativesUMovementRecordUtils()
{
	UClass* Class = UMovementRecordUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_GetRelevantMoveDelta", &UMovementRecordUtils::execK2_GetRelevantMoveDelta },
		{ "K2_GetRelevantVelocity", &UMovementRecordUtils::execK2_GetRelevantVelocity },
		{ "K2_GetTotalMoveDelta", &UMovementRecordUtils::execK2_GetTotalMoveDelta },
		{ "K2_SetDeltaSeconds", &UMovementRecordUtils::execK2_SetDeltaSeconds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMovementRecordUtils;
UClass* UMovementRecordUtils::GetPrivateStaticClass()
{
	using TClass = UMovementRecordUtils;
	if (!Z_Registration_Info_UClass_UMovementRecordUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovementRecordUtils"),
			Z_Registration_Info_UClass_UMovementRecordUtils.InnerSingleton,
			StaticRegisterNativesUMovementRecordUtils,
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
	return Z_Registration_Info_UClass_UMovementRecordUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovementRecordUtils_NoRegister()
{
	return UMovementRecordUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovementRecordUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MovementRecordUtils: a collection of stateless static BP-accessible functions for movement record related operations\n */" },
		{ "IncludePath", "MoveLibrary/MovementRecordUtils.h" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementRecordUtils.h" },
		{ "ToolTip", "MovementRecordUtils: a collection of stateless static BP-accessible functions for movement record related operations" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantMoveDelta, "K2_GetRelevantMoveDelta" }, // 1626750971
		{ &Z_Construct_UFunction_UMovementRecordUtils_K2_GetRelevantVelocity, "K2_GetRelevantVelocity" }, // 1792500209
		{ &Z_Construct_UFunction_UMovementRecordUtils_K2_GetTotalMoveDelta, "K2_GetTotalMoveDelta" }, // 1746594506
		{ &Z_Construct_UFunction_UMovementRecordUtils_K2_SetDeltaSeconds, "K2_SetDeltaSeconds" }, // 849940325
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementRecordUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovementRecordUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementRecordUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementRecordUtils_Statics::ClassParams = {
	&UMovementRecordUtils::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementRecordUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementRecordUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementRecordUtils()
{
	if (!Z_Registration_Info_UClass_UMovementRecordUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementRecordUtils.OuterSingleton, Z_Construct_UClass_UMovementRecordUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementRecordUtils.OuterSingleton;
}
UMovementRecordUtils::UMovementRecordUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementRecordUtils);
UMovementRecordUtils::~UMovementRecordUtils() {}
// ********** End Class UMovementRecordUtils *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovementRecordUtils, UMovementRecordUtils::StaticClass, TEXT("UMovementRecordUtils"), &Z_Registration_Info_UClass_UMovementRecordUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementRecordUtils), 1089785998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h__Script_Mover_739533498(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecordUtils_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
