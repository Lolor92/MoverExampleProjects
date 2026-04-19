// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Backends/MoverNetworkPhysicsLiaisonBase.h"

#ifdef MOVER_MoverNetworkPhysicsLiaisonBase_generated_h
#error "MoverNetworkPhysicsLiaisonBase.generated.h already included, missing '#pragma once' in MoverNetworkPhysicsLiaisonBase.h"
#endif
#define MOVER_MoverNetworkPhysicsLiaisonBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AController;
class APawn;
class UPrimitiveComponent;
enum class EComponentPhysicsStateChange : uint8;

// ********** Begin ScriptStruct FNetworkPhysicsMoverInputs ****************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsMoverInputs_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsData Super;


struct FNetworkPhysicsMoverInputs;
// ********** End ScriptStruct FNetworkPhysicsMoverInputs ******************************************

// ********** Begin ScriptStruct FNetworkPhysicsMoverState *****************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsMoverState_Statics; \
	MOVER_API static class UScriptStruct* StaticStruct(); \
	typedef FNetworkPhysicsData Super;


struct FNetworkPhysicsMoverState;
// ********** End ScriptStruct FNetworkPhysicsMoverState *******************************************

// ********** Begin Class UMoverNetworkPhysicsLiaisonComponentBase *********************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleOwningPawnControllerChanged_Server); \
	DECLARE_FUNCTION(execHandleComponentPhysicsStateChanged);


MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverNetworkPhysicsLiaisonComponentBase(); \
	friend struct Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMoverNetworkPhysicsLiaisonComponentBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UMoverNetworkPhysicsLiaisonComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UMoverNetworkPhysicsLiaisonComponentBase) \
	DECLARE_WITHIN(UMoverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMoverNetworkPhysicsLiaisonComponentBase*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_188_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMoverNetworkPhysicsLiaisonComponentBase(UMoverNetworkPhysicsLiaisonComponentBase&&) = delete; \
	UMoverNetworkPhysicsLiaisonComponentBase(const UMoverNetworkPhysicsLiaisonComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMoverNetworkPhysicsLiaisonComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverNetworkPhysicsLiaisonComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoverNetworkPhysicsLiaisonComponentBase) \
	MOVER_API virtual ~UMoverNetworkPhysicsLiaisonComponentBase();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_185_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_188_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h_188_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMoverNetworkPhysicsLiaisonComponentBase;

// ********** End Class UMoverNetworkPhysicsLiaisonComponentBase ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPhysicsLiaisonBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
