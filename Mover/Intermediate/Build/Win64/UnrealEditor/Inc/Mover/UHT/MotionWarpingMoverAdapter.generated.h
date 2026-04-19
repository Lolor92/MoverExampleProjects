// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionWarpingMoverAdapter.h"

#ifdef MOVER_MotionWarpingMoverAdapter_generated_h
#error "MotionWarpingMoverAdapter.generated.h already included, missing '#pragma once' in MotionWarpingMoverAdapter.h"
#endif
#define MOVER_MotionWarpingMoverAdapter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMotionWarpingMoverAdapter ***********************************************
MOVER_API UClass* Z_Construct_UClass_UMotionWarpingMoverAdapter_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingMoverAdapter(); \
	friend struct Z_Construct_UClass_UMotionWarpingMoverAdapter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMotionWarpingMoverAdapter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionWarpingMoverAdapter, UMotionWarpingBaseAdapter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMotionWarpingMoverAdapter_NoRegister) \
	DECLARE_SERIALIZER(UMotionWarpingMoverAdapter)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMotionWarpingMoverAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionWarpingMoverAdapter(UMotionWarpingMoverAdapter&&) = delete; \
	UMotionWarpingMoverAdapter(const UMotionWarpingMoverAdapter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMotionWarpingMoverAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingMoverAdapter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingMoverAdapter) \
	MOVER_API virtual ~UMotionWarpingMoverAdapter();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionWarpingMoverAdapter;

// ********** End Class UMotionWarpingMoverAdapter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MotionWarpingMoverAdapter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
