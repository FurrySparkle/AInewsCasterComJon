// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/OpenAICallDALLE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAICallDALLE() {}
// Cross Module References
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
	OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallDALLE_NoRegister();
	OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallDALLE();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	OPENAIAPI_API UEnum* Z_Construct_UEnum_OpenAIAPI_EOAImageSize();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics
	{
		struct _Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms
		{
			TArray<FString> generatedImageUrls;
			FString errorMessage;
			bool Success;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_generatedImageUrls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_generatedImageUrls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_generatedImageUrls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls_Inner = { "generatedImageUrls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls = { "generatedImageUrls", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms, generatedImageUrls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	void Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms), &Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_generatedImageUrls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAICallDALLE.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI, nullptr, "OnDalleResponseRecievedPin__DelegateSignature", nullptr, nullptr, sizeof(_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms), Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOpenAICallDALLE::execOpenAICallDALLE)
	{
		P_GET_ENUM(EOAImageSize,Z_Param_imageSize);
		P_GET_PROPERTY(FStrProperty,Z_Param_prompt);
		P_GET_PROPERTY(FIntProperty,Z_Param_numImages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenAICallDALLE**)Z_Param__Result=UOpenAICallDALLE::OpenAICallDALLE(EOAImageSize(Z_Param_imageSize),Z_Param_prompt,Z_Param_numImages);
		P_NATIVE_END;
	}
	void UOpenAICallDALLE::StaticRegisterNativesUOpenAICallDALLE()
	{
		UClass* Class = UOpenAICallDALLE::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenAICallDALLE", &UOpenAICallDALLE::execOpenAICallDALLE },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics
	{
		struct OpenAICallDALLE_eventOpenAICallDALLE_Parms
		{
			EOAImageSize imageSize;
			FString prompt;
			int32 numImages;
			UOpenAICallDALLE* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_imageSize_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_imageSize;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_prompt;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numImages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_imageSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_imageSize = { "imageSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallDALLE_eventOpenAICallDALLE_Parms, imageSize), Z_Construct_UEnum_OpenAIAPI_EOAImageSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_prompt = { "prompt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallDALLE_eventOpenAICallDALLE_Parms, prompt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_numImages = { "numImages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallDALLE_eventOpenAICallDALLE_Parms, numImages), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallDALLE_eventOpenAICallDALLE_Parms, ReturnValue), Z_Construct_UClass_UOpenAICallDALLE_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_imageSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_imageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_prompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_numImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallDALLE.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenAICallDALLE, nullptr, "OpenAICallDALLE", nullptr, nullptr, sizeof(OpenAICallDALLE_eventOpenAICallDALLE_Parms), Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenAICallDALLE_NoRegister()
	{
		return UOpenAICallDALLE::StaticClass();
	}
	struct Z_Construct_UClass_UOpenAICallDALLE_Statics
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
	UObject* (*const Z_Construct_UClass_UOpenAICallDALLE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenAICallDALLE_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenAICallDALLE_OpenAICallDALLE, "OpenAICallDALLE" }, // 3701984186
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenAICallDALLE_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OpenAICallDALLE.h" },
		{ "ModuleRelativePath", "Public/OpenAICallDALLE.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenAICallDALLE_Statics::NewProp_Finished_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallDALLE.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenAICallDALLE_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenAICallDALLE, Finished), Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOpenAICallDALLE_Statics::NewProp_Finished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallDALLE_Statics::NewProp_Finished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenAICallDALLE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenAICallDALLE_Statics::NewProp_Finished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenAICallDALLE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenAICallDALLE>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenAICallDALLE_Statics::ClassParams = {
		&UOpenAICallDALLE::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenAICallDALLE_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallDALLE_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenAICallDALLE_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallDALLE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenAICallDALLE()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenAICallDALLE_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenAICallDALLE, 2074734102);
	template<> OPENAIAPI_API UClass* StaticClass<UOpenAICallDALLE>()
	{
		return UOpenAICallDALLE::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenAICallDALLE(Z_Construct_UClass_UOpenAICallDALLE, &UOpenAICallDALLE::StaticClass, TEXT("/Script/OpenAIAPI"), TEXT("UOpenAICallDALLE"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenAICallDALLE);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
