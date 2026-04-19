// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Backends/MoverPathedPhysicsLiaison.h"
#include "PhysicsMover/PathedMovement/PathedPhysicsMoverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverPathedPhysicsLiaison() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase();
MOVER_API UClass* Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent();
MOVER_API UClass* Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMoverPathedPhysicsLiaisonComponent Function HandleMovementModeChanged ***
struct Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics
{
	struct MoverPathedPhysicsLiaisonComponent_eventHandleMovementModeChanged_Parms
	{
		FName OldModeName;
		FName NewModeName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Backends/MoverPathedPhysicsLiaison.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldModeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewModeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OldModeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewModeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::NewProp_OldModeName = { "OldModeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverPathedPhysicsLiaisonComponent_eventHandleMovementModeChanged_Parms, OldModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldModeName_MetaData), NewProp_OldModeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::NewProp_NewModeName = { "NewModeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoverPathedPhysicsLiaisonComponent_eventHandleMovementModeChanged_Parms, NewModeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewModeName_MetaData), NewProp_NewModeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::NewProp_OldModeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::NewProp_NewModeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent, nullptr, "HandleMovementModeChanged", Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::MoverPathedPhysicsLiaisonComponent_eventHandleMovementModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::MoverPathedPhysicsLiaisonComponent_eventHandleMovementModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoverPathedPhysicsLiaisonComponent::execHandleMovementModeChanged)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OldModeName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewModeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMovementModeChanged(Z_Param_Out_OldModeName,Z_Param_Out_NewModeName);
	P_NATIVE_END;
}
// ********** End Class UMoverPathedPhysicsLiaisonComponent Function HandleMovementModeChanged *****

// ********** Begin Class UMoverPathedPhysicsLiaisonComponent **************************************
void UMoverPathedPhysicsLiaisonComponent::StaticRegisterNativesUMoverPathedPhysicsLiaisonComponent()
{
	UClass* Class = UMoverPathedPhysicsLiaisonComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleMovementModeChanged", &UMoverPathedPhysicsLiaisonComponent::execHandleMovementModeChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverPathedPhysicsLiaisonComponent;
UClass* UMoverPathedPhysicsLiaisonComponent::GetPrivateStaticClass()
{
	using TClass = UMoverPathedPhysicsLiaisonComponent;
	if (!Z_Registration_Info_UClass_UMoverPathedPhysicsLiaisonComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverPathedPhysicsLiaisonComponent"),
			Z_Registration_Info_UClass_UMoverPathedPhysicsLiaisonComponent.InnerSingleton,
			StaticRegisterNativesUMoverPathedPhysicsLiaisonComponent,
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
	return Z_Registration_Info_UClass_UMoverPathedPhysicsLiaisonComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_NoRegister()
{
	return UMoverPathedPhysicsLiaisonComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Liaison that works with path-following movement modes.\n * Establishes a joint constraint between the actual component to update and wherever it should be along the path.\n * This allows the platform's velocity and rotation to be affected by physics as it moves along the path, and the joint pulls it back where it should be (think spring).\n * Only compatible with UPathedPhysicsMovementModes, which are responsible for dictating how \"loose\" the joint between the platform and its ideal position is.\n */" },
		{ "IncludePath", "Backends/MoverPathedPhysicsLiaison.h" },
		{ "ModuleRelativePath", "Public/Backends/MoverPathedPhysicsLiaison.h" },
		{ "ToolTip", "Liaison that works with path-following movement modes.\nEstablishes a joint constraint between the actual component to update and wherever it should be along the path.\nThis allows the platform's velocity and rotation to be affected by physics as it moves along the path, and the joint pulls it back where it should be (think spring).\nOnly compatible with UPathedPhysicsMovementModes, which are responsible for dictating how \"loose\" the joint between the platform and its ideal position is." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoverPathedPhysicsLiaisonComponent_HandleMovementModeChanged, "HandleMovementModeChanged" }, // 961694251
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverPathedPhysicsLiaisonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_Statics::ClassParams = {
	&UMoverPathedPhysicsLiaisonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent()
{
	if (!Z_Registration_Info_UClass_UMoverPathedPhysicsLiaisonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverPathedPhysicsLiaisonComponent.OuterSingleton, Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverPathedPhysicsLiaisonComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverPathedPhysicsLiaisonComponent);
UMoverPathedPhysicsLiaisonComponent::~UMoverPathedPhysicsLiaisonComponent() {}
// ********** End Class UMoverPathedPhysicsLiaisonComponent ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverPathedPhysicsLiaisonComponent, UMoverPathedPhysicsLiaisonComponent::StaticClass, TEXT("UMoverPathedPhysicsLiaisonComponent"), &Z_Registration_Info_UClass_UMoverPathedPhysicsLiaisonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverPathedPhysicsLiaisonComponent), 3247198134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h__Script_Mover_777736947(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverPathedPhysicsLiaison_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
