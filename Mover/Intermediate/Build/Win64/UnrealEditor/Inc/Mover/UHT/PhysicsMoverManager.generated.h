// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsMover/PhysicsMoverManager.h"

#ifdef MOVER_PhysicsMoverManager_generated_h
#error "PhysicsMoverManager.generated.h already included, missing '#pragma once' in PhysicsMoverManager.h"
#endif
#define MOVER_PhysicsMoverManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPhysicsMoverManager *****************************************************
MOVER_API UClass* Z_Construct_UClass_UPhysicsMoverManager_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsMoverManager(); \
	friend struct Z_Construct_UClass_UPhysicsMoverManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPhysicsMoverManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsMoverManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPhysicsMoverManager_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsMoverManager)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPhysicsMoverManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsMoverManager(UPhysicsMoverManager&&) = delete; \
	UPhysicsMoverManager(const UPhysicsMoverManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPhysicsMoverManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsMoverManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsMoverManager) \
	MOVER_API virtual ~UPhysicsMoverManager();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsMoverManager;

// ********** End Class UPhysicsMoverManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_PhysicsMover_PhysicsMoverManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
