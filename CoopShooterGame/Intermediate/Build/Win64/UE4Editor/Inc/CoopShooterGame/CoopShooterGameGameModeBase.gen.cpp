// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CoopShooterGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopShooterGameGameModeBase() {}
// Cross Module References
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ACoopShooterGameGameModeBase_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ACoopShooterGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
// End Cross Module References
	void ACoopShooterGameGameModeBase::StaticRegisterNativesACoopShooterGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACoopShooterGameGameModeBase_NoRegister()
	{
		return ACoopShooterGameGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ACoopShooterGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "CoopShooterGameGameModeBase.h" },
				{ "ModuleRelativePath", "CoopShooterGameGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACoopShooterGameGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACoopShooterGameGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACoopShooterGameGameModeBase, 2409051628);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACoopShooterGameGameModeBase(Z_Construct_UClass_ACoopShooterGameGameModeBase, &ACoopShooterGameGameModeBase::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ACoopShooterGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoopShooterGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
