// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverTypes.h"

#ifdef MOVER_MoverTypes_generated_h
#error "MoverTypes.generated.h already included, missing '#pragma once' in MoverTypes.h"
#endif
#define MOVER_MoverTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMoverDataCollection;

// ********** Begin ScriptStruct FMoverOnImpactParams **********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverOnImpactParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverOnImpactParams;
// ********** End ScriptStruct FMoverOnImpactParams ************************************************

// ********** Begin ScriptStruct FMoverTimeStep ****************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverTimeStep_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverTimeStep;
// ********** End ScriptStruct FMoverTimeStep ******************************************************

// ********** Begin ScriptStruct FMoverDataStructBase **********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDataStructBase_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverDataStructBase;
// ********** End ScriptStruct FMoverDataStructBase ************************************************

// ********** Begin ScriptStruct FMoverDataCollection **********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDataCollection_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverDataCollection;
// ********** End ScriptStruct FMoverDataCollection ************************************************

// ********** Begin ScriptStruct FMoverDataPersistence *********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_345_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverDataPersistence_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverDataPersistence;
// ********** End ScriptStruct FMoverDataPersistence ***********************************************

// ********** Begin Class UMoverDataCollectionLibrary **********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_369_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearDataFromCollection);


MOVER_API UClass* Z_Construct_UClass_UMoverDataCollectionLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_369_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverDataCollectionLibrary(); \
	friend struct Z_Construct_UClass_UMoverDataCollectionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverDataCollectionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverDataCollectionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverDataCollectionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMoverDataCollectionLibrary)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_369_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMoverDataCollectionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverDataCollectionLibrary(UMoverDataCollectionLibrary&&) = delete; \
	UMoverDataCollectionLibrary(const UMoverDataCollectionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverDataCollectionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverDataCollectionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverDataCollectionLibrary) \
	MOVER_API virtual ~UMoverDataCollectionLibrary();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_366_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_369_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_369_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_369_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h_369_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverDataCollectionLibrary;

// ********** End Class UMoverDataCollectionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverTypes_h

// ********** Begin Enum EMoverTickPhase ***********************************************************
#define FOREACH_ENUM_EMOVERTICKPHASE(op) \
	op(EMoverTickPhase::Invalid) \
	op(EMoverTickPhase::ProduceInput) \
	op(EMoverTickPhase::SimulateMovement) \
	op(EMoverTickPhase::ApplyState) 

enum class EMoverTickPhase : uint8;
template<> struct TIsUEnumClass<EMoverTickPhase> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EMoverTickPhase>();
// ********** End Enum EMoverTickPhase *************************************************************

// ********** Begin Enum EMoverTickDependencyOrder *************************************************
#define FOREACH_ENUM_EMOVERTICKDEPENDENCYORDER(op) \
	op(EMoverTickDependencyOrder::Before) \
	op(EMoverTickDependencyOrder::After) 

enum class EMoverTickDependencyOrder : uint8;
template<> struct TIsUEnumClass<EMoverTickDependencyOrder> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EMoverTickDependencyOrder>();
// ********** End Enum EMoverTickDependencyOrder ***************************************************

// ********** Begin Enum EMoverSmoothingMode *******************************************************
#define FOREACH_ENUM_EMOVERSMOOTHINGMODE(op) \
	op(EMoverSmoothingMode::None) \
	op(EMoverSmoothingMode::VisualComponentOffset) 

enum class EMoverSmoothingMode : uint8;
template<> struct TIsUEnumClass<EMoverSmoothingMode> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EMoverSmoothingMode>();
// ********** End Enum EMoverSmoothingMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
