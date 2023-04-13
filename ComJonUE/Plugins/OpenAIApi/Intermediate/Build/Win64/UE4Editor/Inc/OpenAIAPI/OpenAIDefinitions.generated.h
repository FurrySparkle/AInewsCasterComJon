// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENAIAPI_OpenAIDefinitions_generated_h
#error "OpenAIDefinitions.generated.h already included, missing '#pragma once' in OpenAIDefinitions.h"
#endif
#define OPENAIAPI_OpenAIDefinitions_generated_h

#define OpenAI_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGPT3Settings_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FGPT3Settings>();

#define OpenAI_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompletion_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FCompletion>();

#define OpenAI_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLogProbs_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FLogProbs>();

#define OpenAI_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompletionInfo_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FCompletionInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OpenAI_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h


#define FOREACH_ENUM_EOAIMAGESIZE(op) \
	op(EOAImageSize::SMALL) \
	op(EOAImageSize::MEDIUM) \
	op(EOAImageSize::LARGE) 

enum class EOAImageSize : uint8;
template<> OPENAIAPI_API UEnum* StaticEnum<EOAImageSize>();

#define FOREACH_ENUM_EOAENGINETYPE(op) \
	op(EOAEngineType::DAVINCI) \
	op(EOAEngineType::CURIE) \
	op(EOAEngineType::BABBAGE) \
	op(EOAEngineType::ADA) \
	op(EOAEngineType::TEXT_DAVINCI_002) \
	op(EOAEngineType::TEXT_CURIE_001) \
	op(EOAEngineType::TEXT_BABBAGE_001) \
	op(EOAEngineType::TEXT_ADA_001) \
	op(EOAEngineType::TEXT_DAVINCI_003) 

enum class EOAEngineType : uint8;
template<> OPENAIAPI_API UEnum* StaticEnum<EOAEngineType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
