// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComJonUE/TextParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextParser() {}
// Cross Module References
	COMJONUE_API UClass* Z_Construct_UClass_UTextParser();
	COMJONUE_API UClass* Z_Construct_UClass_UTextParser_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ComJonUE();
// End Cross Module References
	void UTextParser::StaticRegisterNativesUTextParser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextParser);
	UClass* Z_Construct_UClass_UTextParser_NoRegister()
	{
		return UTextParser::StaticClass();
	}
	struct Z_Construct_UClass_UTextParser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextParser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ComJonUE,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextParser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextParser.h" },
		{ "ModuleRelativePath", "TextParser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextParser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextParser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextParser_Statics::ClassParams = {
		&UTextParser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextParser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextParser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextParser()
	{
		if (!Z_Registration_Info_UClass_UTextParser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextParser.OuterSingleton, Z_Construct_UClass_UTextParser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextParser.OuterSingleton;
	}
	template<> COMJONUE_API UClass* StaticClass<UTextParser>()
	{
		return UTextParser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextParser);
	UTextParser::~UTextParser() {}
	struct Z_CompiledInDeferFile_FID_Users_15054_Documents_GitHub_AInewsCasterComJon_ComJonUE_Source_ComJonUE_TextParser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_15054_Documents_GitHub_AInewsCasterComJon_ComJonUE_Source_ComJonUE_TextParser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextParser, UTextParser::StaticClass, TEXT("UTextParser"), &Z_Registration_Info_UClass_UTextParser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextParser), 299885837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_15054_Documents_GitHub_AInewsCasterComJon_ComJonUE_Source_ComJonUE_TextParser_h_976701257(TEXT("/Script/ComJonUE"),
		Z_CompiledInDeferFile_FID_Users_15054_Documents_GitHub_AInewsCasterComJon_ComJonUE_Source_ComJonUE_TextParser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_15054_Documents_GitHub_AInewsCasterComJon_ComJonUE_Source_ComJonUE_TextParser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
