// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPowerupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerupActor() {}
// Cross Module References
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASPowerupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onActivated();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onExpired();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onPowerupStateChanged();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onPowerupTicked();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASPowerupActor_onTickPowerup();
// End Cross Module References
	static FName NAME_ASPowerupActor_onActivated = FName(TEXT("onActivated"));
	void ASPowerupActor::onActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_onActivated),NULL);
	}
	static FName NAME_ASPowerupActor_onExpired = FName(TEXT("onExpired"));
	void ASPowerupActor::onExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_onExpired),NULL);
	}
	static FName NAME_ASPowerupActor_onPowerupStateChanged = FName(TEXT("onPowerupStateChanged"));
	void ASPowerupActor::onPowerupStateChanged(bool bNewIsActive)
	{
		SPowerupActor_eventonPowerupStateChanged_Parms Parms;
		Parms.bNewIsActive=bNewIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_onPowerupStateChanged),&Parms);
	}
	static FName NAME_ASPowerupActor_onPowerupTicked = FName(TEXT("onPowerupTicked"));
	void ASPowerupActor::onPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupActor_onPowerupTicked),NULL);
	}
	void ASPowerupActor::StaticRegisterNativesASPowerupActor()
	{
		UClass* Class = ASPowerupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_PowerupActive", &ASPowerupActor::execOnRep_PowerupActive },
			{ "onTickPowerup", &ASPowerupActor::execonTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_onActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "onActivated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_onExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "onExpired", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_onPowerupStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewIsActive_SetBit = [](void* Obj){ ((SPowerupActor_eventonPowerupStateChanged_Parms*)Obj)->bNewIsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewIsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SPowerupActor_eventonPowerupStateChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewIsActive_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewIsActive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "onPowerupStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(SPowerupActor_eventonPowerupStateChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_onPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "onPowerupTicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "OnRep_PowerupActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerupActor_onTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupActor, "onTickPowerup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPowerupActor_NoRegister()
	{
		return ASPowerupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPowerupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASPowerupActor_onActivated, "onActivated" }, // 2408744842
				{ &Z_Construct_UFunction_ASPowerupActor_onExpired, "onExpired" }, // 511613073
				{ &Z_Construct_UFunction_ASPowerupActor_onPowerupStateChanged, "onPowerupStateChanged" }, // 1674298527
				{ &Z_Construct_UFunction_ASPowerupActor_onPowerupTicked, "onPowerupTicked" }, // 4114985869
				{ &Z_Construct_UFunction_ASPowerupActor_OnRep_PowerupActive, "OnRep_PowerupActive" }, // 2990180014
				{ &Z_Construct_UFunction_ASPowerupActor_onTickPowerup, "onTickPowerup" }, // 1557781205
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SPowerupActor.h" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPowerupActive_MetaData[] = {
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
			};
#endif
			auto NewProp_bIsPowerupActive_SetBit = [](void* Obj){ ((ASPowerupActor*)Obj)->bIsPowerupActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPowerupActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPowerupActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000020, 1, "OnRep_PowerupActive", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASPowerupActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsPowerupActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsPowerupActive_MetaData, ARRAY_COUNT(NewProp_bIsPowerupActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalNumberOfTicks_MetaData[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
				{ "ToolTip", "total times we apply the power up effect." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalNumberOfTicks = { UE4CodeGen_Private::EPropertyClass::Int, "totalNumberOfTicks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASPowerupActor, totalNumberOfTicks), METADATA_PARAMS(NewProp_totalNumberOfTicks_MetaData, ARRAY_COUNT(NewProp_totalNumberOfTicks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_powerupInterval_MetaData[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerupActor.h" },
				{ "ToolTip", "time between powerup ticks" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_powerupInterval = { UE4CodeGen_Private::EPropertyClass::Float, "powerupInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASPowerupActor, powerupInterval), METADATA_PARAMS(NewProp_powerupInterval_MetaData, ARRAY_COUNT(NewProp_powerupInterval_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsPowerupActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_totalNumberOfTicks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_powerupInterval,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASPowerupActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASPowerupActor::StaticClass,
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
	IMPLEMENT_CLASS(ASPowerupActor, 3899365066);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerupActor(Z_Construct_UClass_ASPowerupActor, &ASPowerupActor::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ASPowerupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
