// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "test_project/test_projectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetest_projectGameModeBase() {}
// Cross Module References
	TEST_PROJECT_API UClass* Z_Construct_UClass_Atest_projectGameModeBase_NoRegister();
	TEST_PROJECT_API UClass* Z_Construct_UClass_Atest_projectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_test_project();
// End Cross Module References
	void Atest_projectGameModeBase::StaticRegisterNativesAtest_projectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Atest_projectGameModeBase_NoRegister()
	{
		return Atest_projectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Atest_projectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atest_projectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_test_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atest_projectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "test_projectGameModeBase.h" },
		{ "ModuleRelativePath", "test_projectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atest_projectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atest_projectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Atest_projectGameModeBase_Statics::ClassParams = {
		&Atest_projectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Atest_projectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atest_projectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atest_projectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Atest_projectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Atest_projectGameModeBase, 159903008);
	template<> TEST_PROJECT_API UClass* StaticClass<Atest_projectGameModeBase>()
	{
		return Atest_projectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Atest_projectGameModeBase(Z_Construct_UClass_Atest_projectGameModeBase, &Atest_projectGameModeBase::StaticClass, TEXT("/Script/test_project"), TEXT("Atest_projectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atest_projectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
