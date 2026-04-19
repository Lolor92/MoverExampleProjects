// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverSimulationTypes.h"

#ifdef MOVER_MoverSimulationTypes_generated_h
#error "MoverSimulationTypes.generated.h already included, missing '#pragma once' in MoverSimulationTypes.h"
#endif
#define MOVER_MoverSimulationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMoverInputCmdContext;

// ********** Begin ScriptStruct FMovementModeTickEndState *****************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMovementModeTickEndState;
// ********** End ScriptStruct FMovementModeTickEndState *******************************************

// ********** Begin ScriptStruct FMoverInputCmdContext *********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverInputCmdContext;
// ********** End ScriptStruct FMoverInputCmdContext ***********************************************

// ********** Begin ScriptStruct FMoverSyncState ***************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverSyncState_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverSyncState;
// ********** End ScriptStruct FMoverSyncState *****************************************************

// ********** Begin ScriptStruct FMoverAuxStateContext *********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_220_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverAuxStateContext;
// ********** End ScriptStruct FMoverAuxStateContext ***********************************************

// ********** Begin ScriptStruct FMoverTickStartData ***********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverTickStartData_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverTickStartData;
// ********** End ScriptStruct FMoverTickStartData *************************************************

// ********** Begin ScriptStruct FMoverTickEndData *************************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_282_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverTickEndData_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverTickEndData;
// ********** End ScriptStruct FMoverTickEndData ***************************************************

// ********** Begin ScriptStruct FSimulationTickParams *********************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_307_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimulationTickParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FSimulationTickParams;
// ********** End ScriptStruct FSimulationTickParams ***********************************************

// ********** Begin Interface UMoverInputProducerInterface *****************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ProduceInput_Implementation(int32 SimTimeMs, FMoverInputCmdContext& InputCmdResult) {}; \
	DECLARE_FUNCTION(execProduceInput);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_CALLBACK_WRAPPERS
MOVER_API UClass* Z_Construct_UClass_UMoverInputProducerInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMoverInputProducerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverInputProducerInterface(UMoverInputProducerInterface&&) = delete; \
	UMoverInputProducerInterface(const UMoverInputProducerInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverInputProducerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverInputProducerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverInputProducerInterface) \
	virtual ~UMoverInputProducerInterface() = default;


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMoverInputProducerInterface(); \
	friend struct Z_Construct_UClass_UMoverInputProducerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverInputProducerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverInputProducerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverInputProducerInterface_NoRegister) \
	DECLARE_SERIALIZER(UMoverInputProducerInterface)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMoverInputProducerInterface() {} \
public: \
	typedef UMoverInputProducerInterface UClassType; \
	typedef IMoverInputProducerInterface ThisClass; \
	static void Execute_ProduceInput(UObject* O, int32 SimTimeMs, FMoverInputCmdContext& InputCmdResult); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_331_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_342_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_334_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverInputProducerInterface;

// ********** End Interface UMoverInputProducerInterface *******************************************

// ********** Begin ScriptStruct FMoverPredictTrajectoryParams *************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_358_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverPredictTrajectoryParams_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverPredictTrajectoryParams;
// ********** End ScriptStruct FMoverPredictTrajectoryParams ***************************************

// ********** Begin ScriptStruct FMoverSimulationEventData *****************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_397_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverSimulationEventData_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct();


struct FMoverSimulationEventData;
// ********** End ScriptStruct FMoverSimulationEventData *******************************************

// ********** Begin ScriptStruct FMovementModeChangedEventData *************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_426_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementModeChangedEventData_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FMoverSimulationEventData Super;


struct FMovementModeChangedEventData;
// ********** End ScriptStruct FMovementModeChangedEventData ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
