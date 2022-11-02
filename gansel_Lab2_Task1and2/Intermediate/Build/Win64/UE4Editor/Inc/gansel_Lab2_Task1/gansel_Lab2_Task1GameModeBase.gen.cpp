// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gansel_Lab2_Task1/gansel_Lab2_Task1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegansel_Lab2_Task1GameModeBase() {}
// Cross Module References
	GANSEL_LAB2_TASK1_API UClass* Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_NoRegister();
	GANSEL_LAB2_TASK1_API UClass* Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_gansel_Lab2_Task1();
// End Cross Module References
	void Agansel_Lab2_Task1GameModeBase::StaticRegisterNativesAgansel_Lab2_Task1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_NoRegister()
	{
		return Agansel_Lab2_Task1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_gansel_Lab2_Task1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "gansel_Lab2_Task1GameModeBase.h" },
		{ "ModuleRelativePath", "gansel_Lab2_Task1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agansel_Lab2_Task1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_Statics::ClassParams = {
		&Agansel_Lab2_Task1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agansel_Lab2_Task1GameModeBase, 2759153685);
	template<> GANSEL_LAB2_TASK1_API UClass* StaticClass<Agansel_Lab2_Task1GameModeBase>()
	{
		return Agansel_Lab2_Task1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agansel_Lab2_Task1GameModeBase(Z_Construct_UClass_Agansel_Lab2_Task1GameModeBase, &Agansel_Lab2_Task1GameModeBase::StaticClass, TEXT("/Script/gansel_Lab2_Task1"), TEXT("Agansel_Lab2_Task1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agansel_Lab2_Task1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
