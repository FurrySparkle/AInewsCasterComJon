// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAIAPI_init() {}
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature();
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenAIAPI()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/OpenAIAPI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB2AA9068,
				0x3C24BD95,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
