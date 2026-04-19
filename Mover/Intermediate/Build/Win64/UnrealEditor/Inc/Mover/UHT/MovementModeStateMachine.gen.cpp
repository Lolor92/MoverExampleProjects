// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovementModeStateMachine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementModeStateMachine() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOVER_API UClass* Z_Construct_UClass_UBaseMovementMode_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UImmediateMovementModeTransition_NoRegister();
MOVER_API UClass* Z_Construct_UClass_UMovementModeStateMachine();
MOVER_API UClass* Z_Construct_UClass_UMovementModeStateMachine_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMovementModeStateMachine ************************************************
void UMovementModeStateMachine::StaticRegisterNativesUMovementModeStateMachine()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMovementModeStateMachine;
UClass* UMovementModeStateMachine::GetPrivateStaticClass()
{
	using TClass = UMovementModeStateMachine;
	if (!Z_Registration_Info_UClass_UMovementModeStateMachine.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovementModeStateMachine"),
			Z_Registration_Info_UClass_UMovementModeStateMachine.InnerSingleton,
			StaticRegisterNativesUMovementModeStateMachine,
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
	return Z_Registration_Info_UClass_UMovementModeStateMachine.InnerSingleton;
}
UClass* Z_Construct_UClass_UMovementModeStateMachine_NoRegister()
{
	return UMovementModeStateMachine::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMovementModeStateMachine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * - Any movement modes registered are co-owned by the state machine\n * - There is always an active mode, falling back to a do-nothing 'null' mode\n * - Queuing a mode that is already active will cause it to exit and re-enter\n * - Modes only switch during simulation tick\n */" },
		{ "IncludePath", "MovementModeStateMachine.h" },
		{ "ModuleRelativePath", "Public/MovementModeStateMachine.h" },
		{ "ToolTip", "- Any movement modes registered are co-owned by the state machine\n- There is always an active mode, falling back to a do-nothing 'null' mode\n- Queuing a mode that is already active will cause it to exit and re-enter\n- Modes only switch during simulation tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementModeStateMachine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueuedModeTransition_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovementModeStateMachine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Modes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Modes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueuedModeTransition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementModeStateMachine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementModeStateMachine_Statics::NewProp_Modes_ValueProp = { "Modes", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBaseMovementMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovementModeStateMachine_Statics::NewProp_Modes_Key_KeyProp = { "Modes_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovementModeStateMachine_Statics::NewProp_Modes = { "Modes", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementModeStateMachine, Modes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modes_MetaData), NewProp_Modes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovementModeStateMachine_Statics::NewProp_QueuedModeTransition = { "QueuedModeTransition", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementModeStateMachine, QueuedModeTransition), Z_Construct_UClass_UImmediateMovementModeTransition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueuedModeTransition_MetaData), NewProp_QueuedModeTransition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovementModeStateMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementModeStateMachine_Statics::NewProp_Modes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementModeStateMachine_Statics::NewProp_Modes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementModeStateMachine_Statics::NewProp_Modes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementModeStateMachine_Statics::NewProp_QueuedModeTransition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementModeStateMachine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovementModeStateMachine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementModeStateMachine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementModeStateMachine_Statics::ClassParams = {
	&UMovementModeStateMachine::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovementModeStateMachine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovementModeStateMachine_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementModeStateMachine_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementModeStateMachine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementModeStateMachine()
{
	if (!Z_Registration_Info_UClass_UMovementModeStateMachine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementModeStateMachine.OuterSingleton, Z_Construct_UClass_UMovementModeStateMachine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementModeStateMachine.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementModeStateMachine);
UMovementModeStateMachine::~UMovementModeStateMachine() {}
// ********** End Class UMovementModeStateMachine **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h__Script_Mover_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovementModeStateMachine, UMovementModeStateMachine::StaticClass, TEXT("UMovementModeStateMachine"), &Z_Registration_Info_UClass_UMovementModeStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementModeStateMachine), 3391164614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h__Script_Mover_3929296646(TEXT("/Script/Mover"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h__Script_Mover_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementModeStateMachine_h__Script_Mover_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
