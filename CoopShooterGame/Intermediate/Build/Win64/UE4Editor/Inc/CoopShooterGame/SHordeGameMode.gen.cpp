// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SHordeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHordeGameMode() {}
// Cross Module References
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASHordeGameMode_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASHordeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASHordeGameMode_spawnNewBot();
// End Cross Module References
	static FName NAME_ASHordeGameMode_spawnNewBot = FName(TEXT("spawnNewBot"));
	void ASHordeGameMode::spawnNewBot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASHordeGameMode_spawnNewBot),NULL);
	}
	void ASHordeGameMode::StaticRegisterNativesASHordeGameMode()
	{
	}
	UFunction* Z_Construct_UFunction_ASHordeGameMode_spawnNewBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/SHordeGameMode.h" },
				{ "ToolTip", "hook for bp to spawn a single bot," },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASHordeGameMode, "spawnNewBot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASHordeGameMode_NoRegister()
	{
		return ASHordeGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASHordeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASHordeGameMode_spawnNewBot, "spawnNewBot" }, // 1359874654
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SHordeGameMode.h" },
				{ "ModuleRelativePath", "Public/SHordeGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeBetweenWaves_MetaData[] = {
				{ "Category", "GameMode" },
				{ "ModuleRelativePath", "Public/SHordeGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeBetweenWaves = { UE4CodeGen_Private::EPropertyClass::Float, "timeBetweenWaves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASHordeGameMode, timeBetweenWaves), METADATA_PARAMS(NewProp_timeBetweenWaves_MetaData, ARRAY_COUNT(NewProp_timeBetweenWaves_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_timeBetweenWaves,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASHordeGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASHordeGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASHordeGameMode, 2294158393);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASHordeGameMode(Z_Construct_UClass_ASHordeGameMode, &ASHordeGameMode::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ASHordeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHordeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
