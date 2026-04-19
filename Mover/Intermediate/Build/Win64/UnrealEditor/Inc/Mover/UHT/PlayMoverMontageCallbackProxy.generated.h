// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/PlayMoverMontageCallbackProxy.h"

#ifdef MOVER_PlayMoverMontageCallbackProxy_generated_h
#error "PlayMoverMontageCallbackProxy.generated.h already included, missing '#pragma once' in PlayMoverMontageCallbackProxy.h"
#endif
#define MOVER_PlayMoverMontageCallbackProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAnimMontage;
class UMoverComponent;
class UPlayMoverMontageCallbackProxy;

// ********** Begin Class UPlayMoverMontageCallbackProxy *******************************************
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnMoverMontageEnded); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayMoverMontage);


MOVER_API UClass* Z_Construct_UClass_UPlayMoverMontageCallbackProxy_NoRegister();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPlayMoverMontageCallbackProxy(); \
	friend struct Z_Construct_UClass_UPlayMoverMontageCallbackProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVER_API UClass* Z_Construct_UClass_UPlayMoverMontageCallbackProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayMoverMontageCallbackProxy, UPlayMontageCallbackProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), Z_Construct_UClass_UPlayMoverMontageCallbackProxy_NoRegister) \
	DECLARE_SERIALIZER(UPlayMoverMontageCallbackProxy)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UPlayMoverMontageCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMoverMontageCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UPlayMoverMontageCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMoverMontageCallbackProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayMoverMontageCallbackProxy(UPlayMoverMontageCallbackProxy&&) = delete; \
	UPlayMoverMontageCallbackProxy(const UPlayMoverMontageCallbackProxy&) = delete; \
	MOVER_API virtual ~UPlayMoverMontageCallbackProxy();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_24_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayMoverMontageCallbackProxy;

// ********** End Class UPlayMoverMontageCallbackProxy *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_PlayMoverMontageCallbackProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
