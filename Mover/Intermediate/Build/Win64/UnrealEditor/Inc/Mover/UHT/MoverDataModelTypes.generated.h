// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverDataModelTypes.h"

#ifdef MOVER_MoverDataModelTypes_generated_h
#error "MoverDataModelTypes.generated.h already included, missing '#pragma once' in MoverDataModelTypes.h"
#endif
#define MOVER_MoverDataModelTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FCharacterDefaultInputs;
struct FMoverDefaultSyncState;

// ********** Begin ScriptStruct FCharacterDefaultInputs *******************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterDefaultInputs_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FCharacterDefaultInputs;
// ********** End ScriptStruct FCharacterDefaultInputs *********************************************

// ********** Begin ScriptStruct FMoverDefaultSyncState ********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDefaultSyncState_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverDataStructBase Super;


struct FMoverDefaultSyncState;
// ********** End ScriptStruct FMoverDefaultSyncState **********************************************

// ********** Begin Class UMoverDataModelBlueprintLibrary ******************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_257_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOrientationFromSyncState); \
	DECLARE_FUNCTION(execGetVelocityFromSyncState); \
	DECLARE_FUNCTION(execGetMoveDirectionIntentFromSyncState); \
	DECLARE_FUNCTION(execGetLocationFromSyncState); \
	DECLARE_FUNCTION(execGetMoveDirectionIntentFromInputs); \
	DECLARE_FUNCTION(execSetMoveIntent);


MOVER_API UClass* Z_Construct_UClass_UMoverDataModelBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_257_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverDataModelBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMoverDataModelBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverDataModelBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverDataModelBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverDataModelBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMoverDataModelBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_257_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMoverDataModelBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverDataModelBlueprintLibrary(UMoverDataModelBlueprintLibrary&&) = delete; \
	UMoverDataModelBlueprintLibrary(const UMoverDataModelBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverDataModelBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverDataModelBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverDataModelBlueprintLibrary) \
	MOVER_API virtual ~UMoverDataModelBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_254_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_257_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_257_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_257_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h_257_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverDataModelBlueprintLibrary;

// ********** End Class UMoverDataModelBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDataModelTypes_h

// ********** Begin Enum EMoveInputType ************************************************************
#define FOREACH_ENUM_EMOVEINPUTTYPE(op) \
	op(EMoveInputType::Invalid) \
	op(EMoveInputType::DirectionalIntent) \
	op(EMoveInputType::Velocity) \
	op(EMoveInputType::None) 

enum class EMoveInputType : uint8;
template<> struct TIsUEnumClass<EMoveInputType> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EMoveInputType>();
// ********** End Enum EMoveInputType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
