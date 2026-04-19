// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/Settings/StanceSettings.h"

#ifdef MOVER_StanceSettings_generated_h
#error "StanceSettings.generated.h already included, missing '#pragma once' in StanceSettings.h"
#endif
#define MOVER_StanceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStanceSettings **********************************************************
MOVER_API UClass* Z_Construct_UClass_UStanceSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStanceSettings(); \
	friend struct Z_Construct_UClass_UStanceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UStanceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStanceSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UStanceSettings_NoRegister) \
	DECLARE_SERIALIZER(UStanceSettings) \
	virtual UObject* _getUObject() const override { return const_cast<UStanceSettings*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UStanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStanceSettings(UStanceSettings&&) = delete; \
	UStanceSettings(const UStanceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UStanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStanceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStanceSettings) \
	MOVER_API virtual ~UStanceSettings();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStanceSettings;

// ********** End Class UStanceSettings ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_Settings_StanceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
