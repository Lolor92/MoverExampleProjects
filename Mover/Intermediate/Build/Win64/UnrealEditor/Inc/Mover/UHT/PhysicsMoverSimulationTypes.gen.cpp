// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsMover/PhysicsMoverSimulationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhysicsMoverSimulationTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMovementModeInterface();
MOVER_API UClass* Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister();
MOVER_API UEnum* Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementSettingsInputs();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverAIInputs();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverDataStructBase();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMoverLaunchInputs();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPhysicsCharacterMovementModeInterface *******************************
void UPhysicsCharacterMovementModeInterface::StaticRegisterNativesUPhysicsCharacterMovementModeInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPhysicsCharacterMovementModeInterface;
UClass* UPhysicsCharacterMovementModeInterface::GetPrivateStaticClass()
{
	using TClass = UPhysicsCharacterMovementModeInterface;
	if (!Z_Registration_Info_UClass_UPhysicsCharacterMovementModeInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhysicsCharacterMovementModeInterface"),
			Z_Registration_Info_UClass_UPhysicsCharacterMovementModeInterface.InnerSingleton,
			StaticRegisterNativesUPhysicsCharacterMovementModeInterface,
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
	return Z_Registration_Info_UClass_UPhysicsCharacterMovementModeInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_NoRegister()
{
	return UPhysicsCharacterMovementModeInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPhysicsCharacterMovementModeInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_Statics::ClassParams = {
	&UPhysicsCharacterMovementModeInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsCharacterMovementModeInterface()
{
	if (!Z_Registration_Info_UClass_UPhysicsCharacterMovementModeInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsCharacterMovementModeInterface.OuterSingleton, Z_Construct_UClass_UPhysicsCharacterMovementModeInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsCharacterMovementModeInterface.OuterSingleton;
}
UPhysicsCharacterMovementModeInterface::UPhysicsCharacterMovementModeInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsCharacterMovementModeInterface);
// ********** End Interface UPhysicsCharacterMovementModeInterface *********************************

// ********** Begin ScriptStruct FMovementSettingsInputs *******************************************
static_assert(std::is_polymorphic<FMovementSettingsInputs>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FMovementSettingsInputs cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementSettingsInputs;
class UScriptStruct* FMovementSettingsInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementSettingsInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementSettingsInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementSettingsInputs, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MovementSettingsInputs"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementSettingsInputs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data block containing movement settings inputs that are networked from client to server.\n// This is useful if settings changes need to be predicted on the client and synced on the server.\n// Also supports rewind/resimulation of settings changes.\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
		{ "ToolTip", "Data block containing movement settings inputs that are networked from client to server.\nThis is useful if settings changes need to be predicted on the client and synced on the server.\nAlso supports rewind/resimulation of settings changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Maximum speed in cm/s\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
		{ "ToolTip", "Maximum speed in cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Maximum acceleration in cm/s^2\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
		{ "ToolTip", "Maximum acceleration in cm/s^2" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementSettingsInputs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsInputs, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementSettingsInputs, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::NewProp_Acceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"MovementSettingsInputs",
	Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::PropPointers),
	sizeof(FMovementSettingsInputs),
	alignof(FMovementSettingsInputs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementSettingsInputs()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementSettingsInputs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementSettingsInputs.InnerSingleton, Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovementSettingsInputs.InnerSingleton;
}
// ********** End ScriptStruct FMovementSettingsInputs *********************************************

// ********** Begin ScriptStruct FMoverAIInputs ****************************************************
static_assert(std::is_polymorphic<FMoverAIInputs>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FMoverAIInputs cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverAIInputs;
class UScriptStruct* FMoverAIInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverAIInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverAIInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverAIInputs, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverAIInputs"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverAIInputs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverAIInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data block containing ROV Velocity that is networked from server to clients.\n// Also supports rewind/resimulation of the data.\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
		{ "ToolTip", "Data block containing ROV Velocity that is networked from server to clients.\nAlso supports rewind/resimulation of the data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RVOVelocityDelta_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// ROV Velocity calculated on the Server\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
		{ "ToolTip", "ROV Velocity calculated on the Server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RVOVelocityDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverAIInputs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverAIInputs_Statics::NewProp_RVOVelocityDelta = { "RVOVelocityDelta", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverAIInputs, RVOVelocityDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RVOVelocityDelta_MetaData), NewProp_RVOVelocityDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverAIInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverAIInputs_Statics::NewProp_RVOVelocityDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverAIInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverAIInputs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"MoverAIInputs",
	Z_Construct_UScriptStruct_FMoverAIInputs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverAIInputs_Statics::PropPointers),
	sizeof(FMoverAIInputs),
	alignof(FMoverAIInputs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverAIInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverAIInputs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverAIInputs()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverAIInputs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverAIInputs.InnerSingleton, Z_Construct_UScriptStruct_FMoverAIInputs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverAIInputs.InnerSingleton;
}
// ********** End ScriptStruct FMoverAIInputs ******************************************************

// ********** Begin Enum EMoverLaunchVelocityMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoverLaunchVelocityMode;
static UEnum* EMoverLaunchVelocityMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoverLaunchVelocityMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoverLaunchVelocityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("EMoverLaunchVelocityMode"));
	}
	return Z_Registration_Info_UEnum_EMoverLaunchVelocityMode.OuterSingleton;
}
template<> MOVER_API UEnum* StaticEnum<EMoverLaunchVelocityMode>()
{
	return EMoverLaunchVelocityMode_StaticEnum();
}
struct Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Additive.Name", "EMoverLaunchVelocityMode::Additive" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
		{ "Override.Name", "EMoverLaunchVelocityMode::Override" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoverLaunchVelocityMode::Additive", (int64)EMoverLaunchVelocityMode::Additive },
		{ "EMoverLaunchVelocityMode::Override", (int64)EMoverLaunchVelocityMode::Override },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	"EMoverLaunchVelocityMode",
	"EMoverLaunchVelocityMode",
	Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode()
{
	if (!Z_Registration_Info_UEnum_EMoverLaunchVelocityMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoverLaunchVelocityMode.InnerSingleton, Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoverLaunchVelocityMode.InnerSingleton;
}
// ********** End Enum EMoverLaunchVelocityMode ****************************************************

// ********** Begin ScriptStruct FMoverLaunchInputs ************************************************
static_assert(std::is_polymorphic<FMoverLaunchInputs>() == std::is_polymorphic<FMoverDataStructBase>(), "USTRUCT FMoverLaunchInputs cannot be polymorphic unless super FMoverDataStructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMoverLaunchInputs;
class UScriptStruct* FMoverLaunchInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverLaunchInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMoverLaunchInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoverLaunchInputs, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MoverLaunchInputs"));
	}
	return Z_Registration_Info_UScriptStruct_FMoverLaunchInputs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchVelocity_MetaData[] = {
		{ "Category", "Mover" },
		{ "Comment", "// Launch velocity in cm/s\n" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
		{ "ToolTip", "Launch velocity in cm/s" },
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Public/PhysicsMover/PhysicsMoverSimulationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoverLaunchInputs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverLaunchInputs, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchVelocity_MetaData), NewProp_LaunchVelocity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoverLaunchInputs, Mode), Z_Construct_UEnum_Mover_EMoverLaunchVelocityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3896146283
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::NewProp_LaunchVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	Z_Construct_UScriptStruct_FMoverDataStructBase,
	&NewStructOps,
	"MoverLaunchInputs",
	Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::PropPointers),
	sizeof(FMoverLaunchInputs),
	alignof(FMoverLaunchInputs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoverLaunchInputs()
{
	if (!Z_Registration_Info_UScriptStruct_FMoverLaunchInputs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMoverLaunchInputs.InnerSingleton, Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMoverLaunchInputs.InnerSingleton;
}
// ********** End ScriptStruct FMoverLaunchInputs **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h__Script_Mover_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoverLaunchVelocityMode_StaticEnum, TEXT("EMoverLaunchVelocityMode"), &Z_Registration_Info_UEnum_EMoverLaunchVelocityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3896146283U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovementSettingsInputs::StaticStruct, Z_Construct_UScriptStruct_FMovementSettingsInputs_Statics::NewStructOps, TEXT("MovementSettingsInputs"), &Z_Registration_Info_UScriptStruct_FMovementSettingsInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementSettingsInputs), 707583392U) },
		{ FMoverAIInputs::StaticStruct, Z_Construct_UScriptStruct_FMoverAIInputs_Statics::NewStructOps, TEXT("MoverAIInputs"), &Z_Registration_Info_UScriptStruct_FMoverAIInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverAIInputs), 828414280U) },
		{ FMoverLaunchInputs::StaticStruct, Z_Construct_UScriptStruct_FMoverLaunchInputs_Statics::NewStructOps, TEXT("MoverLaunchInputs"), &Z_Registration_Info_UScriptStruct_FMoverLaunchInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoverLaunchInputs), 4262557742U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsCharacterMovementModeInterface, UPhysicsCharacterMovementModeInterface::StaticClass, TEXT("UPhysicsCharacterMovementModeInterface"), &Z_Registration_Info_UClass_UPhysicsCharacterMovementModeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsCharacterMovementModeInterface), 3027680338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h__Script_Mover_847964742(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h__Script_Mover_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h__Script_Mover_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h__Script_Mover_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverSimulationTypes_h__Script_Mover_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
