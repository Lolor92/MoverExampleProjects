// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverMassTranslators.h"

#ifdef MOVERMASSINTEGRATION_MoverMassTranslators_generated_h
#error "MoverMassTranslators.generated.h already included, missing '#pragma once' in MoverMassTranslators.h"
#endif
#define MOVERMASSINTEGRATION_MoverMassTranslators_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNavMoverComponentWrapperFragment *********************************
#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavMoverComponentWrapperFragment_Statics; \
	MOVERMASSINTEGRATION_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectWrapperFragment Super;


struct FNavMoverComponentWrapperFragment;
// ********** End ScriptStruct FNavMoverComponentWrapperFragment ***********************************

// ********** Begin ScriptStruct FMassNavMoverCopyToMassTag ****************************************
#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassNavMoverCopyToMassTag_Statics; \
	MOVERMASSINTEGRATION_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassNavMoverCopyToMassTag;
// ********** End ScriptStruct FMassNavMoverCopyToMassTag ******************************************

// ********** Begin Class UMassNavMoverToMassTranslator ********************************************
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassNavMoverToMassTranslator_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassNavMoverToMassTranslator(); \
	friend struct Z_Construct_UClass_UMassNavMoverToMassTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassNavMoverToMassTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassNavMoverToMassTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverMassIntegration"), Z_Construct_UClass_UMassNavMoverToMassTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassNavMoverToMassTranslator)


#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassNavMoverToMassTranslator(UMassNavMoverToMassTranslator&&) = delete; \
	UMassNavMoverToMassTranslator(const UMassNavMoverToMassTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVERMASSINTEGRATION_API, UMassNavMoverToMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassNavMoverToMassTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassNavMoverToMassTranslator) \
	MOVERMASSINTEGRATION_API virtual ~UMassNavMoverToMassTranslator();


#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassNavMoverToMassTranslator;

// ********** End Class UMassNavMoverToMassTranslator **********************************************

// ********** Begin ScriptStruct FMassCopyToNavMoverTag ********************************************
#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassCopyToNavMoverTag_Statics; \
	MOVERMASSINTEGRATION_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassCopyToNavMoverTag;
// ********** End ScriptStruct FMassCopyToNavMoverTag **********************************************

// ********** Begin Class UMassToNavMoverTranslator ************************************************
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassToNavMoverTranslator_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassToNavMoverTranslator(); \
	friend struct Z_Construct_UClass_UMassToNavMoverTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassToNavMoverTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassToNavMoverTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverMassIntegration"), Z_Construct_UClass_UMassToNavMoverTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassToNavMoverTranslator)


#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassToNavMoverTranslator(UMassToNavMoverTranslator&&) = delete; \
	UMassToNavMoverTranslator(const UMassToNavMoverTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVERMASSINTEGRATION_API, UMassToNavMoverTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassToNavMoverTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassToNavMoverTranslator) \
	MOVERMASSINTEGRATION_API virtual ~UMassToNavMoverTranslator();


#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_57_PROLOG
#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassToNavMoverTranslator;

// ********** End Class UMassToNavMoverTranslator **************************************************

// ********** Begin ScriptStruct FMassNavMoverActorOrientationCopyToMassTag ************************
#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassNavMoverActorOrientationCopyToMassTag_Statics; \
	MOVERMASSINTEGRATION_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassNavMoverActorOrientationCopyToMassTag;
// ********** End ScriptStruct FMassNavMoverActorOrientationCopyToMassTag **************************

// ********** Begin Class UMassNavMoverActorOrientationToMassTranslator ****************************
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassNavMoverActorOrientationToMassTranslator(); \
	friend struct Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassNavMoverActorOrientationToMassTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverMassIntegration"), Z_Construct_UClass_UMassNavMoverActorOrientationToMassTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassNavMoverActorOrientationToMassTranslator)


#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_85_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassNavMoverActorOrientationToMassTranslator(UMassNavMoverActorOrientationToMassTranslator&&) = delete; \
	UMassNavMoverActorOrientationToMassTranslator(const UMassNavMoverActorOrientationToMassTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVERMASSINTEGRATION_API, UMassNavMoverActorOrientationToMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassNavMoverActorOrientationToMassTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassNavMoverActorOrientationToMassTranslator) \
	MOVERMASSINTEGRATION_API virtual ~UMassNavMoverActorOrientationToMassTranslator();


#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_82_PROLOG
#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassNavMoverActorOrientationToMassTranslator;

// ********** End Class UMassNavMoverActorOrientationToMassTranslator ******************************

// ********** Begin ScriptStruct FMassOrientationCopyToNavMoverActorOrientationTag *****************
#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassOrientationCopyToNavMoverActorOrientationTag_Statics; \
	MOVERMASSINTEGRATION_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassOrientationCopyToNavMoverActorOrientationTag;
// ********** End ScriptStruct FMassOrientationCopyToNavMoverActorOrientationTag *******************

// ********** Begin Class UMassOrientationToNavMoverActorOrientationTranslator *********************
MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_NoRegister();

#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassOrientationToNavMoverActorOrientationTranslator(); \
	friend struct Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVERMASSINTEGRATION_API UClass* Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassOrientationToNavMoverActorOrientationTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoverMassIntegration"), Z_Construct_UClass_UMassOrientationToNavMoverActorOrientationTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassOrientationToNavMoverActorOrientationTranslator)


#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_111_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassOrientationToNavMoverActorOrientationTranslator(UMassOrientationToNavMoverActorOrientationTranslator&&) = delete; \
	UMassOrientationToNavMoverActorOrientationTranslator(const UMassOrientationToNavMoverActorOrientationTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVERMASSINTEGRATION_API, UMassOrientationToNavMoverActorOrientationTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassOrientationToNavMoverActorOrientationTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassOrientationToNavMoverActorOrientationTranslator) \
	MOVERMASSINTEGRATION_API virtual ~UMassOrientationToNavMoverActorOrientationTranslator();


#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_108_PROLOG
#define FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassOrientationToNavMoverActorOrientationTranslator;

// ********** End Class UMassOrientationToNavMoverActorOrientationTranslator ***********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MoverIntegrations_Source_MoverMassIntegration_Public_MoverMassTranslators_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
