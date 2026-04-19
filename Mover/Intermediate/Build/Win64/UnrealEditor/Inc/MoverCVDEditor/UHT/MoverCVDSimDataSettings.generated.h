// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverCVDSimDataSettings.h"

#ifdef MOVERCVDEDITOR_MoverCVDSimDataSettings_generated_h
#error "MoverCVDSimDataSettings.generated.h already included, missing '#pragma once' in MoverCVDSimDataSettings.h"
#endif
#define MOVERCVDEDITOR_MoverCVDSimDataSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoverCVDSimDataSettings *************************************************
MOVERCVDEDITOR_API UClass* Z_Construct_UClass_UMoverCVDSimDataSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverCVDSimDataSettings(); \
	friend struct Z_Construct_UClass_UMoverCVDSimDataSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVERCVDEDITOR_API UClass* Z_Construct_UClass_UMoverCVDSimDataSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverCVDSimDataSettings, UChaosVDVisualizationSettingsObjectBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverCVDEditor"), Z_Construct_UClass_UMoverCVDSimDataSettings_NoRegister) \
	DECLARE_SERIALIZER(UMoverCVDSimDataSettings)


#define FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoverCVDSimDataSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverCVDSimDataSettings(UMoverCVDSimDataSettings&&) = delete; \
	UMoverCVDSimDataSettings(const UMoverCVDSimDataSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverCVDSimDataSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverCVDSimDataSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverCVDSimDataSettings) \
	NO_API virtual ~UMoverCVDSimDataSettings();


#define FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverCVDSimDataSettings;

// ********** End Class UMoverCVDSimDataSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_MoverCVDEditor_Private_MoverCVDSimDataSettings_h

// ********** Begin Enum EMoverCVDSimDataVisualizationFlags ****************************************
#define FOREACH_ENUM_EMOVERCVDSIMDATAVISUALIZATIONFLAGS(op) \
	op(EMoverCVDSimDataVisualizationFlags::None) \
	op(EMoverCVDSimDataVisualizationFlags::EnableDraw) 

enum class EMoverCVDSimDataVisualizationFlags : uint32;
template<> struct TIsUEnumClass<EMoverCVDSimDataVisualizationFlags> { enum { Value = true }; };
template<> MOVERCVDEDITOR_API UEnum* StaticEnum<EMoverCVDSimDataVisualizationFlags>();
// ********** End Enum EMoverCVDSimDataVisualizationFlags ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
