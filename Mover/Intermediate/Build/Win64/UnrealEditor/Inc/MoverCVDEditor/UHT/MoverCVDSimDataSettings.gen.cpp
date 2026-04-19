// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoverCVDSimDataSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoverCVDSimDataSettings() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVD_API UClass* Z_Construct_UClass_UChaosVDVisualizationSettingsObjectBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneDepthPriorityGroup();
MOVERCVDEDITOR_API UClass* Z_Construct_UClass_UMoverCVDSimDataSettings();
MOVERCVDEDITOR_API UClass* Z_Construct_UClass_UMoverCVDSimDataSettings_NoRegister();
MOVERCVDEDITOR_API UEnum* Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags();
UPackage* Z_Construct_UPackage__Script_MoverCVDEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMoverCVDSimDataVisualizationFlags ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoverCVDSimDataVisualizationFlags;
static UEnum* EMoverCVDSimDataVisualizationFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoverCVDSimDataVisualizationFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoverCVDSimDataVisualizationFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags, (UObject*)Z_Construct_UPackage__Script_MoverCVDEditor(), TEXT("EMoverCVDSimDataVisualizationFlags"));
	}
	return Z_Registration_Info_UEnum_EMoverCVDSimDataVisualizationFlags.OuterSingleton;
}
template<> MOVERCVDEDITOR_API UEnum* StaticEnum<EMoverCVDSimDataVisualizationFlags>()
{
	return EMoverCVDSimDataVisualizationFlags_StaticEnum();
}
struct Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Comment", "/** Set of visualization flags options for Mover Sim Data */" },
		{ "EnableDraw.Name", "EMoverCVDSimDataVisualizationFlags::EnableDraw" },
		{ "ModuleRelativePath", "Private/MoverCVDSimDataSettings.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMoverCVDSimDataVisualizationFlags::None" },
		{ "ToolTip", "Set of visualization flags options for Mover Sim Data" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoverCVDSimDataVisualizationFlags::None", (int64)EMoverCVDSimDataVisualizationFlags::None },
		{ "EMoverCVDSimDataVisualizationFlags::EnableDraw", (int64)EMoverCVDSimDataVisualizationFlags::EnableDraw },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MoverCVDEditor,
	nullptr,
	"EMoverCVDSimDataVisualizationFlags",
	"EMoverCVDSimDataVisualizationFlags",
	Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags()
{
	if (!Z_Registration_Info_UEnum_EMoverCVDSimDataVisualizationFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoverCVDSimDataVisualizationFlags.InnerSingleton, Z_Construct_UEnum_MoverCVDEditor_EMoverCVDSimDataVisualizationFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoverCVDSimDataVisualizationFlags.InnerSingleton;
}
// ********** End Enum EMoverCVDSimDataVisualizationFlags ******************************************

// ********** Begin Class UMoverCVDSimDataSettings *************************************************
void UMoverCVDSimDataSettings::StaticRegisterNativesUMoverCVDSimDataSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoverCVDSimDataSettings;
UClass* UMoverCVDSimDataSettings::GetPrivateStaticClass()
{
	using TClass = UMoverCVDSimDataSettings;
	if (!Z_Registration_Info_UClass_UMoverCVDSimDataSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoverCVDSimDataSettings"),
			Z_Registration_Info_UClass_UMoverCVDSimDataSettings.InnerSingleton,
			StaticRegisterNativesUMoverCVDSimDataSettings,
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
	return Z_Registration_Info_UClass_UMoverCVDSimDataSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoverCVDSimDataSettings_NoRegister()
{
	return UMoverCVDSimDataSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoverCVDSimDataSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoverCVDSimDataSettings.h" },
		{ "ModuleRelativePath", "Private/MoverCVDSimDataSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugText_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** If true, any debug draw text available will be drawn */" },
		{ "ModuleRelativePath", "Private/MoverCVDSimDataSettings.h" },
		{ "ToolTip", "If true, any debug draw text available will be drawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** The depth priority used for while drawing data. Can be World or Foreground (with this one the shapes will be drawn on top of the geometry and be always visible) */" },
		{ "ModuleRelativePath", "Private/MoverCVDSimDataSettings.h" },
		{ "ToolTip", "The depth priority used for while drawing data. Can be World or Foreground (with this one the shapes will be drawn on top of the geometry and be always visible)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseThickness_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** Thickness to apply to any debug draw shape controlled by this setting. */" },
		{ "ModuleRelativePath", "Private/MoverCVDSimDataSettings.h" },
		{ "ToolTip", "Thickness to apply to any debug draw shape controlled by this setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MoverCVDEditor.EMoverCVDSimDataVisualizationFlags" },
		{ "Comment", "/** Set of flags to enable/disable visualization of debug draw data shapes */" },
		{ "ModuleRelativePath", "Private/MoverCVDSimDataSettings.h" },
		{ "ToolTip", "Set of flags to enable/disable visualization of debug draw data shapes" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowDebugText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseThickness;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DebugDrawFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoverCVDSimDataSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_bShowDebugText_SetBit(void* Obj)
{
	((UMoverCVDSimDataSettings*)Obj)->bShowDebugText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_bShowDebugText = { "bShowDebugText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoverCVDSimDataSettings), &Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_bShowDebugText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugText_MetaData), NewProp_bShowDebugText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverCVDSimDataSettings, DepthPriority), Z_Construct_UEnum_Engine_ESceneDepthPriorityGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthPriority_MetaData), NewProp_DepthPriority_MetaData) }; // 1773557634
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_BaseThickness = { "BaseThickness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverCVDSimDataSettings, BaseThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseThickness_MetaData), NewProp_BaseThickness_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_DebugDrawFlags = { "DebugDrawFlags", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoverCVDSimDataSettings, DebugDrawFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawFlags_MetaData), NewProp_DebugDrawFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_bShowDebugText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_DepthPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_BaseThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::NewProp_DebugDrawFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVDVisualizationSettingsObjectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MoverCVDEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::ClassParams = {
	&UMoverCVDSimDataSettings::StaticClass,
	"ChaosVD",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::PropPointers),
	0,
	0x000004A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoverCVDSimDataSettings()
{
	if (!Z_Registration_Info_UClass_UMoverCVDSimDataSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoverCVDSimDataSettings.OuterSingleton, Z_Construct_UClass_UMoverCVDSimDataSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoverCVDSimDataSettings.OuterSingleton;
}
UMoverCVDSimDataSettings::UMoverCVDSimDataSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoverCVDSimDataSettings);
UMoverCVDSimDataSettings::~UMoverCVDSimDataSettings() {}
// ********** End Class UMoverCVDSimDataSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h__Script_MoverCVDEditor_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoverCVDSimDataVisualizationFlags_StaticEnum, TEXT("EMoverCVDSimDataVisualizationFlags"), &Z_Registration_Info_UEnum_EMoverCVDSimDataVisualizationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 369757254U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoverCVDSimDataSettings, UMoverCVDSimDataSettings::StaticClass, TEXT("UMoverCVDSimDataSettings"), &Z_Registration_Info_UClass_UMoverCVDSimDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoverCVDSimDataSettings), 3624760333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h__Script_MoverCVDEditor_1572762245(TEXT("/Script/MoverCVDEditor"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h__Script_MoverCVDEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h__Script_MoverCVDEditor_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h__Script_MoverCVDEditor_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h__Script_MoverCVDEditor_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
