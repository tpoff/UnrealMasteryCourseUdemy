// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerState() {}
// Cross Module References
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASPlayerState_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASPlayerState_addScore();
// End Cross Module References
	void ASPlayerState::StaticRegisterNativesASPlayerState()
	{
		UClass* Class = ASPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addScore", &ASPlayerState::execaddScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASPlayerState_addScore()
	{
		struct SPlayerState_eventaddScore_Parms
		{
			float scoreDelta;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scoreDelta = { UE4CodeGen_Private::EPropertyClass::Float, "scoreDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SPlayerState_eventaddScore_Parms, scoreDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_scoreDelta,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "playerState" },
				{ "ModuleRelativePath", "Public/SPlayerState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerState, "addScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SPlayerState_eventaddScore_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPlayerState_NoRegister()
	{
		return ASPlayerState::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerState,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASPlayerState_addScore, "addScore" }, // 3382193377
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SPlayerState.h" },
				{ "ModuleRelativePath", "Public/SPlayerState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASPlayerState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASPlayerState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ASPlayerState, 2009813168);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPlayerState(Z_Construct_UClass_ASPlayerState, &ASPlayerState::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ASPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
