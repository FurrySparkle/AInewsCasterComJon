// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAICallGPT.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOpenAICallGPT;
enum class EOAEngineType : uint8;
struct FCompletion;
struct FCompletionInfo;
struct FGPT3Settings;
#ifdef OPENAIAPI_OpenAICallGPT_generated_h
#error "OpenAICallGPT.generated.h already included, missing '#pragma once' in OpenAICallGPT.h"
#endif
#define OPENAIAPI_OpenAICallGPT_generated_h

#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_11_DELEGATE \
struct _Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms \
{ \
	TArray<FCompletion> completions; \
	FString errorMessage; \
	FCompletionInfo completionInfo; \
	bool Success; \
}; \
static inline void FOnGptResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnGptResponseRecievedPin, TArray<FCompletion> const& completions, const FString& errorMessage, FCompletionInfo const& completionInfo, bool Success) \
{ \
	_Script_OpenAIAPI_eventOnGptResponseRecievedPin_Parms Parms; \
	Parms.completions=completions; \
	Parms.errorMessage=errorMessage; \
	Parms.completionInfo=completionInfo; \
	Parms.Success=Success ? true : false; \
	OnGptResponseRecievedPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_SPARSE_DATA
#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenAICallGPT3);


#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenAICallGPT3);


#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_ACCESSORS
#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenAICallGPT(); \
	friend struct Z_Construct_UClass_UOpenAICallGPT_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallGPT, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallGPT)


#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOpenAICallGPT(); \
	friend struct Z_Construct_UClass_UOpenAICallGPT_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallGPT, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallGPT)


#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenAICallGPT(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenAICallGPT) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallGPT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallGPT); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallGPT(UOpenAICallGPT&&); \
	NO_API UOpenAICallGPT(const UOpenAICallGPT&); \
public:


#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallGPT(UOpenAICallGPT&&); \
	NO_API UOpenAICallGPT(const UOpenAICallGPT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallGPT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallGPT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenAICallGPT)


#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_16_PROLOG
#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_SPARSE_DATA \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_RPC_WRAPPERS \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_ACCESSORS \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_INCLASS \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_SPARSE_DATA \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_ACCESSORS \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_INCLASS_NO_PURE_DECLS \
	FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENAIAPI_API UClass* StaticClass<class UOpenAICallGPT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OpenAI_511_Plugins_OpenAIApi_Source_OpenAIAPI_Public_OpenAICallGPT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
