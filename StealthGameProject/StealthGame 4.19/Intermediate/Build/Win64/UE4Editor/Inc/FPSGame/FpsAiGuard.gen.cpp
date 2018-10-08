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
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsAiGuard_onNoiseHeard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsAiGuard_OnPawnSeen();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	void AFpsAiGuard::StaticRegisterNativesAFpsAiGuard()
	{
		UClass* Class = AFpsAiGuard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onNoiseHeard", &AFpsAiGuard::execonNoiseHeard },
			{ "OnPawnSeen", &AFpsAiGuard::execOnPawnSeen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AFpsAiGuard_onNoiseHeard()
	{
		struct FpsAiGuard_eventonNoiseHeard_Parms
		{
			APawn* instigatorPawn;
			FVector location;
			float volume;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume = { UE4CodeGen_Private::EPropertyClass::Float, "volume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FpsAiGuard_eventonNoiseHeard_Parms, volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FpsAiGuard_eventonNoiseHeard_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_location_MetaData, ARRAY_COUNT(NewProp_location_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatorPawn = { UE4CodeGen_Private::EPropertyClass::Object, "instigatorPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FpsAiGuard_eventonNoiseHeard_Parms, instigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_volume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_instigatorPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFpsAiGuard, "onNoiseHeard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C80401, sizeof(FpsAiGuard_eventonNoiseHeard_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFpsAiGuard_OnPawnSeen()
	{
		struct FpsAiGuard_eventOnPawnSeen_Parms
		{
			APawn* seenPawn;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_seenPawn = { UE4CodeGen_Private::EPropertyClass::Object, "seenPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FpsAiGuard_eventOnPawnSeen_Parms, seenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_seenPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFpsAiGuard, "OnPawnSeen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FpsAiGuard_eventOnPawnSeen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AFpsAiGuard_onNoiseHeard, "onNoiseHeard" }, // 58523187
				{ &Z_Construct_UFunction_AFpsAiGuard_OnPawnSeen, "OnPawnSeen" }, // 3397268528
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
	IMPLEMENT_CLASS(AFpsAiGuard, 1230597933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFpsAiGuard(Z_Construct_UClass_AFpsAiGuard, &AFpsAiGuard::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFpsAiGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFpsAiGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
