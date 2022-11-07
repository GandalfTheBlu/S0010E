// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gansel_Lab2_Task5/gansel_Lab2_Task5GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegansel_Lab2_Task5GameModeBase() {}
// Cross Module References
	GANSEL_LAB2_TASK5_API UClass* Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_NoRegister();
	GANSEL_LAB2_TASK5_API UClass* Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_gansel_Lab2_Task5();
// End Cross Module References
	void Agansel_Lab2_Task5GameModeBase::StaticRegisterNativesAgansel_Lab2_Task5GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_NoRegister()
	{
		return Agansel_Lab2_Task5GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_gansel_Lab2_Task5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "gansel_Lab2_Task5GameModeBase.h" },
		{ "ModuleRelativePath", "gansel_Lab2_Task5GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agansel_Lab2_Task5GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_Statics::ClassParams = {
		&Agansel_Lab2_Task5GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agansel_Lab2_Task5GameModeBase, 3825252101);
	template<> GANSEL_LAB2_TASK5_API UClass* StaticClass<Agansel_Lab2_Task5GameModeBase>()
	{
		return Agansel_Lab2_Task5GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agansel_Lab2_Task5GameModeBase(Z_Construct_UClass_Agansel_Lab2_Task5GameModeBase, &Agansel_Lab2_Task5GameModeBase::StaticClass, TEXT("/Script/gansel_Lab2_Task5"), TEXT("Agansel_Lab2_Task5GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agansel_Lab2_Task5GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
