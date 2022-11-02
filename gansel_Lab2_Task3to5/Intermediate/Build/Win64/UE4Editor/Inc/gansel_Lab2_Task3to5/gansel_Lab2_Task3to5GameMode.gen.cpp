// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gansel_Lab2_Task3to5/gansel_Lab2_Task3to5GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegansel_Lab2_Task3to5GameMode() {}
// Cross Module References
	GANSEL_LAB2_TASK3TO5_API UClass* Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_NoRegister();
	GANSEL_LAB2_TASK3TO5_API UClass* Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_gansel_Lab2_Task3to5();
// End Cross Module References
	void Agansel_Lab2_Task3to5GameMode::StaticRegisterNativesAgansel_Lab2_Task3to5GameMode()
	{
	}
	UClass* Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_NoRegister()
	{
		return Agansel_Lab2_Task3to5GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_gansel_Lab2_Task3to5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "gansel_Lab2_Task3to5GameMode.h" },
		{ "ModuleRelativePath", "gansel_Lab2_Task3to5GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agansel_Lab2_Task3to5GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_Statics::ClassParams = {
		&Agansel_Lab2_Task3to5GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agansel_Lab2_Task3to5GameMode, 250653233);
	template<> GANSEL_LAB2_TASK3TO5_API UClass* StaticClass<Agansel_Lab2_Task3to5GameMode>()
	{
		return Agansel_Lab2_Task3to5GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agansel_Lab2_Task3to5GameMode(Z_Construct_UClass_Agansel_Lab2_Task3to5GameMode, &Agansel_Lab2_Task3to5GameMode::StaticClass, TEXT("/Script/gansel_Lab2_Task3to5"), TEXT("Agansel_Lab2_Task3to5GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agansel_Lab2_Task3to5GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
