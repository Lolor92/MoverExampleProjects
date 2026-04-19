// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverDeveloperSettings.h"

#ifdef MOVER_MoverDeveloperSettings_generated_h
#error "MoverDeveloperSettings.generated.h already included, missing '#pragma once' in MoverDeveloperSettings.h"
#endif
#define MOVER_MoverDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMoverDeveloperSettings **************************************************
MOVER_API UClass* Z_Construct_UClass_UMoverDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverDeveloperSettings(); \
	friend struct Z_Construct_UClass_UMoverDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverDeveloperSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UMoverDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverDeveloperSettings(UMoverDeveloperSettings&&) = delete; \
	UMoverDeveloperSettings(const UMoverDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverDeveloperSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverDeveloperSettings) \
	MOVER_API virtual ~UMoverDeveloperSettings();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverDeveloperSettings;

// ********** End Class UMoverDeveloperSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
