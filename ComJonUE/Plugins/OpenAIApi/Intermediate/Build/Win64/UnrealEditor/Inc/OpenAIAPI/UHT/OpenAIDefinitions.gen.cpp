// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/OpenAIDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAIDefinitions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOAEngineType();
	OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOAImageSize();
	OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletion();
	OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletionInfo();
	OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGPT3Settings();
	OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FLogProbs();
	UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOAEngineType;
	static UEnum* EOAEngineType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOAEngineType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOAEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenAIAPI_EOAEngineType, Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("EOAEngineType"));
		}
		return Z_Registration_Info_UEnum_EOAEngineType.OuterSingleton;
	}
	template<> OPENAIAPI_API UEnum* StaticEnum<EOAEngineType>()
	{
		return EOAEngineType_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenAIAPI_EOAEngineType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenAIAPI_EOAEngineType_Statics::Enumerators[] = {
		{ "EOAEngineType::DAVINCI", (int64)EOAEngineType::DAVINCI },
		{ "EOAEngineType::CURIE", (int64)EOAEngineType::CURIE },
		{ "EOAEngineType::BABBAGE", (int64)EOAEngineType::BABBAGE },
		{ "EOAEngineType::ADA", (int64)EOAEngineType::ADA },
		{ "EOAEngineType::TEXT_DAVINCI_002", (int64)EOAEngineType::TEXT_DAVINCI_002 },
		{ "EOAEngineType::TEXT_CURIE_001", (int64)EOAEngineType::TEXT_CURIE_001 },
		{ "EOAEngineType::TEXT_BABBAGE_001", (int64)EOAEngineType::TEXT_BABBAGE_001 },
		{ "EOAEngineType::TEXT_ADA_001", (int64)EOAEngineType::TEXT_ADA_001 },
		{ "EOAEngineType::TEXT_DAVINCI_003", (int64)EOAEngineType::TEXT_DAVINCI_003 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenAIAPI_EOAEngineType_Statics::Enum_MetaDataParams[] = {
		{ "ADA.Name", "EOAEngineType::ADA" },
		{ "ADA.ToolTip", "Ada is usually the fastest model and can perform tasks like parsing text, address correction and certain kinds of classification tasks that don\xef\xbf\xbdt require too much nuance. Ada\xef\xbf\xbds performance can often be improved by providing more context." },
		{ "BABBAGE.Name", "EOAEngineType::BABBAGE" },
		{ "BABBAGE.ToolTip", "Babbage can perform straightforward tasks like simple classification. It\xef\xbf\xbds also quite capable when it comes to Semantic Search ranking how well documents match up with search queries." },
		{ "BlueprintType", "true" },
		{ "CURIE.Name", "EOAEngineType::CURIE" },
		{ "CURIE.ToolTip", "Curie is extremely powerful, yet very fast. While Davinci is stronger when it comes to analyzing complicated text, Curie is quite capable for many nuanced tasks like sentiment classification and summarization. Curie is also quite good at answering questions and performing Q&A and as a general service chatbot." },
		{ "DAVINCI.Name", "EOAEngineType::DAVINCI" },
		{ "DAVINCI.ToolTip", "Davinci is the most capable engine and can perform any task the other models can perform and often with less instruction." },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "TEXT_ADA_001.Name", "EOAEngineType::TEXT_ADA_001" },
		{ "TEXT_ADA_001.ToolTip", "Capable of simple tasks, using the fastest model in the GPT-3 series, and lowest cost." },
		{ "TEXT_BABBAGE_001.Name", "EOAEngineType::TEXT_BABBAGE_001" },
		{ "TEXT_BABBAGE_001.ToolTip", "Capable of straightforward tasks, very fast, and lower cost." },
		{ "TEXT_CURIE_001.Name", "EOAEngineType::TEXT_CURIE_001" },
		{ "TEXT_CURIE_001.ToolTip", "Very capable, but faster and lower cost than text-davinci-001." },
		{ "TEXT_DAVINCI_002.Name", "EOAEngineType::TEXT_DAVINCI_002" },
		{ "TEXT_DAVINCI_002.ToolTip", "Most capable model in the GPT-3 series. Can perform any task the other GPT-3 models can, often with less context." },
		{ "TEXT_DAVINCI_003.Name", "EOAEngineType::TEXT_DAVINCI_003" },
		{ "TEXT_DAVINCI_003.ToolTip", "Most capable model in the GPT-3 series. Can perform any task the other GPT-3 models can, often with less context." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenAIAPI_EOAEngineType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI,
		nullptr,
		"EOAEngineType",
		"EOAEngineType",
		Z_Construct_UEnum_OpenAIAPI_EOAEngineType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAEngineType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OpenAIAPI_EOAEngineType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAEngineType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OpenAIAPI_EOAEngineType()
	{
		if (!Z_Registration_Info_UEnum_EOAEngineType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOAEngineType.InnerSingleton, Z_Construct_UEnum_OpenAIAPI_EOAEngineType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOAEngineType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOAImageSize;
	static UEnum* EOAImageSize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOAImageSize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOAImageSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenAIAPI_EOAImageSize, Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("EOAImageSize"));
		}
		return Z_Registration_Info_UEnum_EOAImageSize.OuterSingleton;
	}
	template<> OPENAIAPI_API UEnum* StaticEnum<EOAImageSize>()
	{
		return EOAImageSize_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enumerators[] = {
		{ "EOAImageSize::SMALL", (int64)EOAImageSize::SMALL },
		{ "EOAImageSize::MEDIUM", (int64)EOAImageSize::MEDIUM },
		{ "EOAImageSize::LARGE", (int64)EOAImageSize::LARGE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LARGE.Name", "EOAImageSize::LARGE" },
		{ "LARGE.ToolTip", "Generates 1024x1024 images. This setting takes the longest amount of time to generate images." },
		{ "MEDIUM.Name", "EOAImageSize::MEDIUM" },
		{ "MEDIUM.ToolTip", "Generates 512x512 images. This setting takes a moderate amount of time to generate images." },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "SMALL.Name", "EOAImageSize::SMALL" },
		{ "SMALL.ToolTip", "Generates 256x256 images. This settings takes the least amount of time to generate images." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI,
		nullptr,
		"EOAImageSize",
		"EOAImageSize",
		Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OpenAIAPI_EOAImageSize()
	{
		if (!Z_Registration_Info_UEnum_EOAImageSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOAImageSize.InnerSingleton, Z_Construct_UEnum_OpenAIAPI_EOAImageSize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOAImageSize.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompletionInfo;
class UScriptStruct* FCompletionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompletionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompletionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompletionInfo, Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("CompletionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CompletionInfo.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FCompletionInfo>()
{
	return FCompletionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompletionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_object_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_created_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_created;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_model_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_model;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structs for GPT3\n" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "Structs for GPT3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompletionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_id_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletionInfo, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_object_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletionInfo, object), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_created_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_created = { "created", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletionInfo, created), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_created_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_model_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletionInfo, model), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_model_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_model_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompletionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_created,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewProp_model,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompletionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
		nullptr,
		&NewStructOps,
		"CompletionInfo",
		sizeof(FCompletionInfo),
		alignof(FCompletionInfo),
		Z_Construct_UScriptStruct_FCompletionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompletionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CompletionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompletionInfo.InnerSingleton, Z_Construct_UScriptStruct_FCompletionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompletionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LogProbs;
class UScriptStruct* FLogProbs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LogProbs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LogProbs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLogProbs, Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("LogProbs"));
	}
	return Z_Registration_Info_UScriptStruct_LogProbs.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FLogProbs>()
{
	return FLogProbs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLogProbs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_tokens_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tokens_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tokens;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_token_logprobs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_token_logprobs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_token_logprobs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_text_offset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_text_offset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_text_offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogProbs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLogProbs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLogProbs>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_tokens_Inner = { "tokens", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_tokens_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_tokens = { "tokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLogProbs, tokens), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_tokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_tokens_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_token_logprobs_Inner = { "token_logprobs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_token_logprobs_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_token_logprobs = { "token_logprobs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLogProbs, token_logprobs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_token_logprobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_token_logprobs_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_text_offset_Inner = { "text_offset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_text_offset_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_text_offset = { "text_offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLogProbs, text_offset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_text_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_text_offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLogProbs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_tokens_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_tokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_token_logprobs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_token_logprobs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_text_offset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogProbs_Statics::NewProp_text_offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLogProbs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
		nullptr,
		&NewStructOps,
		"LogProbs",
		sizeof(FLogProbs),
		alignof(FLogProbs),
		Z_Construct_UScriptStruct_FLogProbs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogProbs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLogProbs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogProbs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLogProbs()
	{
		if (!Z_Registration_Info_UScriptStruct_LogProbs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LogProbs.InnerSingleton, Z_Construct_UScriptStruct_FLogProbs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LogProbs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Completion;
class UScriptStruct* FCompletion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Completion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Completion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompletion, Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("Completion"));
	}
	return Z_Registration_Info_UScriptStruct_Completion.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FCompletion>()
{
	return FCompletion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompletion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_logProbs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_logProbs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_finishReason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_finishReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompletion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompletion>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_text_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "// OpenAI's response.\n" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "OpenAI's response." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletion, text), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_index_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletion, index), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_logProbs_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_logProbs = { "logProbs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletion, logProbs), Z_Construct_UScriptStruct_FLogProbs, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_logProbs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_logProbs_MetaData)) }; // 2011505641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_finishReason_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_finishReason = { "finishReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompletion, finishReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_finishReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_finishReason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompletion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_logProbs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompletion_Statics::NewProp_finishReason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompletion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
		nullptr,
		&NewStructOps,
		"Completion",
		sizeof(FCompletion),
		alignof(FCompletion),
		Z_Construct_UScriptStruct_FCompletion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompletion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompletion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompletion()
	{
		if (!Z_Registration_Info_UScriptStruct_Completion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Completion.InnerSingleton, Z_Construct_UScriptStruct_FCompletion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Completion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GPT3Settings;
class UScriptStruct* FGPT3Settings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GPT3Settings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GPT3Settings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPT3Settings, Z_Construct_UPackage__Script_OpenAIAPI(), TEXT("GPT3Settings"));
	}
	return Z_Registration_Info_UScriptStruct_GPT3Settings.OuterSingleton;
}
template<> OPENAIAPI_API UScriptStruct* StaticStruct<FGPT3Settings>()
{
	return FGPT3Settings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGPT3Settings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startSequence_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_startSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_injectStartText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_injectStartText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_injectRestartText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_injectRestartText;
		static const UECodeGen_Private::FStrPropertyParams NewProp_stopSequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopSequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_stopSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxTokens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_topP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_logprobs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_logprobs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numCompletions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_numCompletions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frequencyPenalty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frequencyPenalty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_presencePenalty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_presencePenalty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bestOf_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bestOf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPT3Settings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_startSequence_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** A sequence that is appended to the start of your prompt */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "A sequence that is appended to the start of your prompt" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_startSequence = { "startSequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, startSequence), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_startSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_startSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectStartText_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** A sequence that is appended at the beginning of your prompt */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "A sequence that is appended at the beginning of your prompt" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectStartText = { "injectStartText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, injectStartText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectStartText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectStartText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectRestartText_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** A sequence that is appended to the start of your prompt */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "A sequence that is appended to the start of your prompt" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectRestartText = { "injectRestartText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, injectRestartText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectRestartText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectRestartText_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_stopSequences_Inner = { "stopSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_stopSequences_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** Up to four sequences where the API will stop generating further tokens. The returned text will not contain the stop sequence. */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "Up to four sequences where the API will stop generating further tokens. The returned text will not contain the stop sequence." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_stopSequences = { "stopSequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, stopSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_stopSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_stopSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_maxTokens_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** The maximum number of tokens to generate. Requests can use up to 2048 tokens shared between prompt and completion. (One token is roughly 4 characters for normal English text) */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "The maximum number of tokens to generate. Requests can use up to 2048 tokens shared between prompt and completion. (One token is roughly 4 characters for normal English text)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_maxTokens = { "maxTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, maxTokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_maxTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_maxTokens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_temperature_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** What sampling temperature to use. Higher values means the model will take more risks. Try 0.9 for more creative applications, and 0 (argmax sampling) for ones with a well-defined answer. */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "What sampling temperature to use. Higher values means the model will take more risks. Try 0.9 for more creative applications, and 0 (argmax sampling) for ones with a well-defined answer." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_temperature = { "temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, temperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_topP_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** An alternative to sampling with temperature, called nucleus sampling, where the model considers the results of the tokens with top_p probability mass. So 0.1 means only the tokens comprising the top 10% probability mass are considered.  */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "An alternative to sampling with temperature, called nucleus sampling, where the model considers the results of the tokens with top_p probability mass. So 0.1 means only the tokens comprising the top 10% probability mass are considered." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_topP = { "topP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, topP), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_topP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_topP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_logprobs_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** If logProbs is greater than 0, the model returns tokens, token_logprobs, and the text_offsets for a given completion. (support for top_logprobs will be added soon)*/" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "If logProbs is greater than 0, the model returns tokens, token_logprobs, and the text_offsets for a given completion. (support for top_logprobs will be added soon)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_logprobs = { "logprobs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, logprobs), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_logprobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_logprobs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_numCompletions_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** How many completions to generate for each prompt. */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "How many completions to generate for each prompt." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_numCompletions = { "numCompletions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, numCompletions), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_numCompletions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_numCompletions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_frequencyPenalty_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** Number between 0 and 1 that penalizes new tokens based on their existing frequency in the text so far. Decreases the model's likelihood to repeat the same line verbatim. */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "Number between 0 and 1 that penalizes new tokens based on their existing frequency in the text so far. Decreases the model's likelihood to repeat the same line verbatim." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_frequencyPenalty = { "frequencyPenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, frequencyPenalty), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_frequencyPenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_frequencyPenalty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_presencePenalty_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** Number between 0 and 1 that penalizes new tokens based on whether they appear in the text so far. Increases the model's likelihood to talk about new topics. */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "Number between 0 and 1 that penalizes new tokens based on whether they appear in the text so far. Increases the model's likelihood to talk about new topics." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_presencePenalty = { "presencePenalty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, presencePenalty), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_presencePenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_presencePenalty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_bestOf_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "Comment", "/** Generates best_of completions server-side and returns the \"best\" (the one with the lowest log probability per token). */" },
		{ "ModuleRelativePath", "Public/OpenAIDefinitions.h" },
		{ "ToolTip", "Generates best_of completions server-side and returns the \"best\" (the one with the lowest log probability per token)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_bestOf = { "bestOf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGPT3Settings, bestOf), METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_bestOf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_bestOf_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPT3Settings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_startSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectStartText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_injectRestartText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_stopSequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_stopSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_maxTokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_topP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_logprobs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_numCompletions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_frequencyPenalty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_presencePenalty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewProp_bestOf,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPT3Settings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
		nullptr,
		&NewStructOps,
		"GPT3Settings",
		sizeof(FGPT3Settings),
		alignof(FGPT3Settings),
		Z_Construct_UScriptStruct_FGPT3Settings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGPT3Settings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPT3Settings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGPT3Settings()
	{
		if (!Z_Registration_Info_UScriptStruct_GPT3Settings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GPT3Settings.InnerSingleton, Z_Construct_UScriptStruct_FGPT3Settings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GPT3Settings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::EnumInfo[] = {
		{ EOAEngineType_StaticEnum, TEXT("EOAEngineType"), &Z_Registration_Info_UEnum_EOAEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2790209353U) },
		{ EOAImageSize_StaticEnum, TEXT("EOAImageSize"), &Z_Registration_Info_UEnum_EOAImageSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1842965495U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FCompletionInfo::StaticStruct, Z_Construct_UScriptStruct_FCompletionInfo_Statics::NewStructOps, TEXT("CompletionInfo"), &Z_Registration_Info_UScriptStruct_CompletionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompletionInfo), 3438674443U) },
		{ FLogProbs::StaticStruct, Z_Construct_UScriptStruct_FLogProbs_Statics::NewStructOps, TEXT("LogProbs"), &Z_Registration_Info_UScriptStruct_LogProbs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLogProbs), 2011505641U) },
		{ FCompletion::StaticStruct, Z_Construct_UScriptStruct_FCompletion_Statics::NewStructOps, TEXT("Completion"), &Z_Registration_Info_UScriptStruct_Completion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompletion), 1510917936U) },
		{ FGPT3Settings::StaticStruct, Z_Construct_UScriptStruct_FGPT3Settings_Statics::NewStructOps, TEXT("GPT3Settings"), &Z_Registration_Info_UScriptStruct_GPT3Settings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGPT3Settings), 3352667893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_3149752442(TEXT("/Script/OpenAIAPI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAIDefinitions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
