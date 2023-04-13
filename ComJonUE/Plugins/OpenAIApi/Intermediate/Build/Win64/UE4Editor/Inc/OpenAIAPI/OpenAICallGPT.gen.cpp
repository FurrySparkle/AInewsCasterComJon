// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/OpenAICallGPT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAICallGPT() {}
// Cross Module References
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
	OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletion();
	OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FCompletionInfo();
	OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallGPT_NoRegister();
	OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallGPT();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOAEngineType();
	OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FGPT3Settings();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics
	{
		struct _Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms
		{
			TArray<FCompletion> completions;
			FString errorMessage;
			FCompletionInfo completionInfo;
			bool Success;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_completions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_completions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_completions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_completionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_completionInfo;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions_Inner = { "completions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCompletion, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions = { "completions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms, completions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completionInfo = { "completionInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms, completionInfo), Z_Construct_UScriptStruct_FCompletionInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completionInfo_MetaData)) };
	void Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms), &Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_completionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAICallGPT.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI, nullptr, "OnGptResponseRecievedPin__DelegateSignature", nullptr, nullptr, sizeof(_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms), Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOpenAICallGPT::execOpenAICallGPT3)
	{
		P_GET_ENUM(EOAEngineType,Z_Param_engine);
		P_GET_PROPERTY(FStrProperty,Z_Param_prompt);
		P_GET_STRUCT(FGPT3Settings,Z_Param_settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenAICallGPT**)Z_Param__Result=UOpenAICallGPT::OpenAICallGPT3(EOAEngineType(Z_Param_engine),Z_Param_prompt,Z_Param_settings);
		P_NATIVE_END;
	}
	void UOpenAICallGPT::StaticRegisterNativesUOpenAICallGPT()
	{
		UClass* Class = UOpenAICallGPT::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenAICallGPT3", &UOpenAICallGPT::execOpenAICallGPT3 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics
	{
		struct OpenAICallGPT_eventOpenAICallGPT3_Parms
		{
			EOAEngineType engine;
			FString prompt;
			FGPT3Settings settings;
			UOpenAICallGPT* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_engine_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_engine;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_prompt;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_engine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_engine = { "engine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallGPT_eventOpenAICallGPT3_Parms, engine), Z_Construct_UEnum_OpenAIAPI_EOAEngineType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_prompt = { "prompt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallGPT_eventOpenAICallGPT3_Parms, prompt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallGPT_eventOpenAICallGPT3_Parms, settings), Z_Construct_UScriptStruct_FGPT3Settings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallGPT_eventOpenAICallGPT3_Parms, ReturnValue), Z_Construct_UClass_UOpenAICallGPT_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_engine_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_engine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_prompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallGPT.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenAICallGPT, nullptr, "OpenAICallGPT3", nullptr, nullptr, sizeof(OpenAICallGPT_eventOpenAICallGPT3_Parms), Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenAICallGPT_NoRegister()
	{
		return UOpenAICallGPT::StaticClass();
	}
	struct Z_Construct_UClass_UOpenAICallGPT_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Finished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenAICallGPT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenAICallGPT_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenAICallGPT_OpenAICallGPT3, "OpenAICallGPT3" }, // 2548878637
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenAICallGPT_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OpenAICallGPT.h" },
		{ "ModuleRelativePath", "Public/OpenAICallGPT.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenAICallGPT_Statics::NewProp_Finished_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallGPT.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenAICallGPT_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenAICallGPT, Finished), Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOpenAICallGPT_Statics::NewProp_Finished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallGPT_Statics::NewProp_Finished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenAICallGPT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenAICallGPT_Statics::NewProp_Finished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenAICallGPT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenAICallGPT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenAICallGPT_Statics::ClassParams = {
		&UOpenAICallGPT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenAICallGPT_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallGPT_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenAICallGPT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallGPT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenAICallGPT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenAICallGPT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenAICallGPT, 1017826843);
	template<> OPENAIAPI_API UClass* StaticClass<UOpenAICallGPT>()
	{
		return UOpenAICallGPT::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenAICallGPT(Z_Construct_UClass_UOpenAICallGPT, &UOpenAICallGPT::StaticClass, TEXT("/Script/OpenAIAPI"), TEXT("UOpenAICallGPT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenAICallGPT);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
