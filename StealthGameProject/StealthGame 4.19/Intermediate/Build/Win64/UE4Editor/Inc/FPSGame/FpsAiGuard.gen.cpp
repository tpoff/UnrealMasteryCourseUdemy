// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FpsAiGuard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFpsAiGuard() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFpsAiGuard_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFpsAiGuard();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	void AFpsAiGuard::StaticRegisterNativesAFpsAiGuard()
	{
	}
	UClass* Z_Construct_UClass_AFpsAiGuard_NoRegister()
	{
		return AFpsAiGuard::StaticClass();
	}
	UClass* Z_Construct_UClass_AFpsAiGuard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "FpsAiGuard.h" },
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawnSensingComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawnSensingComponent = { UE4CodeGen_Private::EPropertyClass::Object, "pawnSensingComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFpsAiGuard, pawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(NewProp_pawnSensingComponent_MetaData, ARRAY_COUNT(NewProp_pawnSensingComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pawnSensingComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFpsAiGuard>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFpsAiGuard::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AFpsAiGuard, 4136253024);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFpsAiGuard(Z_Construct_UClass_AFpsAiGuard, &AFpsAiGuard::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFpsAiGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFpsAiGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
