// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gansel_Lab2_Task3to5/TP_Flying/TP_FlyingGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_FlyingGameMode() {}
// Cross Module References
	GANSEL_LAB2_TASK3TO5_API UClass* Z_Construct_UClass_ATP_FlyingGameMode_NoRegister();
	GANSEL_LAB2_TASK3TO5_API UClass* Z_Construct_UClass_ATP_FlyingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_gansel_Lab2_Task3to5();
// End Cross Module References
	void ATP_FlyingGameMode::StaticRegisterNativesATP_FlyingGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATP_FlyingGameMode_NoRegister()
	{
		return ATP_FlyingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATP_FlyingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_FlyingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_gansel_Lab2_Task3to5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_FlyingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP_Flying/TP_FlyingGameMode.h" },
		{ "ModuleRelativePath", "TP_Flying/TP_FlyingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_FlyingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_FlyingGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_FlyingGameMode_Statics::ClassParams = {
		&ATP_FlyingGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATP_FlyingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_FlyingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_FlyingGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_FlyingGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_FlyingGameMode, 2579543268);
	template<> GANSEL_LAB2_TASK3TO5_API UClass* StaticClass<ATP_FlyingGameMode>()
	{
		return ATP_FlyingGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_FlyingGameMode(Z_Construct_UClass_ATP_FlyingGameMode, &ATP_FlyingGameMode::StaticClass, TEXT("/Script/gansel_Lab2_Task3to5"), TEXT("ATP_FlyingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_FlyingGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
