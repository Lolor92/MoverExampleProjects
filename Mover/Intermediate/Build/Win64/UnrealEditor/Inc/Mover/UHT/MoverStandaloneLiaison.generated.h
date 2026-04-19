// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Backends/MoverStandaloneLiaison.h"

#ifdef MOVER_MoverStandaloneLiaison_generated_h
#error "MoverStandaloneLiaison.generated.h already included, missing '#pragma once' in MoverStandaloneLiaison.h"
#endif
#define MOVER_MoverStandaloneLiaison_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AController;
class APawn;
class UActorComponent;
enum class EMoverTickDependencyOrder : uint8;
enum class EMoverTickPhase : uint8;

// ********** Begin ScriptStruct FMoverStandaloneProduceInputTickFunction **************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverStandaloneProduceInputTickFunction_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FMoverStandaloneProduceInputTickFunction;
// ********** End ScriptStruct FMoverStandaloneProduceInputTickFunction ****************************

// ********** Begin ScriptStruct FMoverStandaloneSimulateMovementTickFunction **********************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverStandaloneSimulateMovementTickFunction_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FMoverStandaloneSimulateMovementTickFunction;
// ********** End ScriptStruct FMoverStandaloneSimulateMovementTickFunction ************************

// ********** Begin ScriptStruct FMoverStandaloneApplyStateTickFunction ****************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverStandaloneApplyStateTickFunction_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FMoverStandaloneApplyStateTickFunction;
// ********** End ScriptStruct FMoverStandaloneApplyStateTickFunction ******************************

// ********** Begin Class UMoverStandaloneLiaisonComponent *****************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnControllerChanged); \
	DECLARE_FUNCTION(execGetUseAsyncMovementSimulationTick); \
	DECLARE_FUNCTION(execSetUseAsyncMovementSimulationTick); \
	DECLARE_FUNCTION(execGetEnableProduceInput); \
	DECLARE_FUNCTION(execSetEnableProduceInput); \
	DECLARE_FUNCTION(execGetUseAsyncProduceInput); \
	DECLARE_FUNCTION(execSetUseAsyncProduceInput); \
	DECLARE_FUNCTION(execAddTickDependency);


MOVER_API UClass* Z_Construct_UClass_UMoverStandaloneLiaisonComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverStandaloneLiaisonComponent(); \
	friend struct Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverStandaloneLiaisonComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverStandaloneLiaisonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverStandaloneLiaisonComponent_NoRegister) \
	DECLARE_SERIALIZER(UMoverStandaloneLiaisonComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMoverStandaloneLiaisonComponent*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_100_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverStandaloneLiaisonComponent(UMoverStandaloneLiaisonComponent&&) = delete; \
	UMoverStandaloneLiaisonComponent(const UMoverStandaloneLiaisonComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverStandaloneLiaisonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverStandaloneLiaisonComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverStandaloneLiaisonComponent) \
	MOVER_API virtual ~UMoverStandaloneLiaisonComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_97_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_100_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverStandaloneLiaisonComponent;

// ********** End Class UMoverStandaloneLiaisonComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
