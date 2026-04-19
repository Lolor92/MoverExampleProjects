// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveLibrary/MovementRecord.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovementRecord() {}

// ********** Begin Cross Module References ********************************************************
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementRecord();
MOVER_API UScriptStruct* Z_Construct_UScriptStruct_FMovementSubstep();
UPackage* Z_Construct_UPackage__Script_Mover();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMovementSubstep **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementSubstep;
class UScriptStruct* FMovementSubstep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementSubstep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementSubstep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementSubstep, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MovementSubstep"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementSubstep.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovementSubstep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A part of movement accounting, representing a single piece of a move operation, such as a slide, floor adjustment, etc. */" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementRecord.h" },
		{ "ToolTip", "A part of movement accounting, representing a single piece of a move operation, such as a slide, floor adjustment, etc." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementSubstep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementSubstep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MovementSubstep",
	nullptr,
	0,
	sizeof(FMovementSubstep),
	alignof(FMovementSubstep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementSubstep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementSubstep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementSubstep()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementSubstep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementSubstep.InnerSingleton, Z_Construct_UScriptStruct_FMovementSubstep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovementSubstep.InnerSingleton;
}
// ********** End ScriptStruct FMovementSubstep ****************************************************

// ********** Begin ScriptStruct FMovementRecord ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMovementRecord;
class UScriptStruct* FMovementRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMovementRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementRecord, (UObject*)Z_Construct_UPackage__Script_Mover(), TEXT("MovementRecord"));
	}
	return Z_Registration_Info_UScriptStruct_FMovementRecord.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMovementRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Accounting record of a move as it is processed.\n* Moves are composed of substeps, and these can be marked to indicate how they influence the final collapsed move.\n* Relevancy means the substep (or part thereof) is contributing to the reflected movement state. Example: a character moves forward across a slightly\n* irregular sidewalk, and then is adjusted downward to keep it sticking closely to the sidewalk. The forward move is a relevant substep, while the vertical heigh adjustment is not.\n*/" },
		{ "ModuleRelativePath", "Public/MoveLibrary/MovementRecord.h" },
		{ "ToolTip", "Accounting record of a move as it is processed.\nMoves are composed of substeps, and these can be marked to indicate how they influence the final collapsed move.\nRelevancy means the substep (or part thereof) is contributing to the reflected movement state. Example: a character moves forward across a slightly\nirregular sidewalk, and then is adjusted downward to keep it sticking closely to the sidewalk. The forward move is a relevant substep, while the vertical heigh adjustment is not." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Mover,
	nullptr,
	&NewStructOps,
	"MovementRecord",
	nullptr,
	0,
	sizeof(FMovementRecord),
	alignof(FMovementRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementRecord()
{
	if (!Z_Registration_Info_UScriptStruct_FMovementRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMovementRecord.InnerSingleton, Z_Construct_UScriptStruct_FMovementRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMovementRecord.InnerSingleton;
}
// ********** End ScriptStruct FMovementRecord *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecord_h__Script_Mover_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovementSubstep::StaticStruct, Z_Construct_UScriptStruct_FMovementSubstep_Statics::NewStructOps, TEXT("MovementSubstep"), &Z_Registration_Info_UScriptStruct_FMovementSubstep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementSubstep), 2302084509U) },
		{ FMovementRecord::StaticStruct, Z_Construct_UScriptStruct_FMovementRecord_Statics::NewStructOps, TEXT("MovementRecord"), &Z_Registration_Info_UScriptStruct_FMovementRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementRecord), 108337433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecord_h__Script_Mover_709981864(TEXT("/Script/Mover"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecord_h__Script_Mover_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_MovementRecord_h__Script_Mover_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
