// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/ConstrainedMoveUtils.h"

#ifdef MOVER_ConstrainedMoveUtils_generated_h
#error "ConstrainedMoveUtils.generated.h already included, missing '#pragma once' in ConstrainedMoveUtils.h"
#endif
#define MOVER_ConstrainedMoveUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FPlanarConstraint;

// ********** Begin ScriptStruct FPlanarConstraint *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlanarConstraint_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FPlanarConstraint;
// ********** End ScriptStruct FPlanarConstraint ***************************************************

// ********** Begin Class UPlanarConstraintUtils ***************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConstrainNormalToPlane); \
	DECLARE_FUNCTION(execConstrainLocationToPlane); \
	DECLARE_FUNCTION(execConstrainDirectionToPlane); \
	DECLARE_FUNCTION(execSetPlaneConstraintOrigin); \
	DECLARE_FUNCTION(execSetPlanarConstraintNormal); \
	DECLARE_FUNCTION(execSetPlanarConstraintEnabled);


MOVER_API UClass* Z_Construct_UClass_UPlanarConstraintUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlanarConstraintUtils(); \
	friend struct Z_Construct_UClass_UPlanarConstraintUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPlanarConstraintUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlanarConstraintUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPlanarConstraintUtils_NoRegister) \
	DECLARE_SERIALIZER(UPlanarConstraintUtils)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPlanarConstraintUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlanarConstraintUtils(UPlanarConstraintUtils&&) = delete; \
	UPlanarConstraintUtils(const UPlanarConstraintUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPlanarConstraintUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlanarConstraintUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlanarConstraintUtils) \
	MOVER_API virtual ~UPlanarConstraintUtils();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_41_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlanarConstraintUtils;

// ********** End Class UPlanarConstraintUtils *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ConstrainedMoveUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
