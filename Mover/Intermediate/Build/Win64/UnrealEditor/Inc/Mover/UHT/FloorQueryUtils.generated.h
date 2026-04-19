// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/FloorQueryUtils.h"

#ifdef MOVER_FloorQueryUtils_generated_h
#error "FloorQueryUtils.generated.h already included, missing '#pragma once' in FloorQueryUtils.h"
#endif
#define MOVER_FloorQueryUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FHitResult;

// ********** Begin ScriptStruct FFloorCheckResult *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloorCheckResult_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FFloorCheckResult;
// ********** End ScriptStruct FFloorCheckResult ***************************************************

// ********** Begin Class UFloorQueryUtils *********************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsHitSurfaceWalkable);


MOVER_API UClass* Z_Construct_UClass_UFloorQueryUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloorQueryUtils(); \
	friend struct Z_Construct_UClass_UFloorQueryUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UFloorQueryUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UFloorQueryUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UFloorQueryUtils_NoRegister) \
	DECLARE_SERIALIZER(UFloorQueryUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UFloorQueryUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFloorQueryUtils(UFloorQueryUtils&&) = delete; \
	UFloorQueryUtils(const UFloorQueryUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UFloorQueryUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloorQueryUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloorQueryUtils) \
	MOVER_API virtual ~UFloorQueryUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_108_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFloorQueryUtils;

// ********** End Class UFloorQueryUtils ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_FloorQueryUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
