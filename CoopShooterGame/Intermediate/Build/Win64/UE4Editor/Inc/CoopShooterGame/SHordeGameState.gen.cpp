// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SHordeGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHordeGameState() {}
// Cross Module References
	COOPSHOOTERGAME_API UEnum* Z_Construct_UEnum_CoopShooterGame_EWaveState();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASHordeGameState_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASHordeGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASHordeGameState_OnRep_WaveState();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASHordeGameState_waveStateChanged();
// End Cross Module References
	static UEnum* EWaveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoopShooterGame_EWaveState, Z_Construct_UPackage__Script_CoopShooterGame(), TEXT("EWaveState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWaveState(EWaveState_StaticEnum, TEXT("/Script/CoopShooterGame"), TEXT("EWaveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoopShooterGame_EWaveState_CRC() { return 658655912U; }
	UEnum* Z_Construct_UEnum_CoopShooterGame_EWaveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoopShooterGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWaveState"), 0, Get_Z_Construct_UEnum_CoopShooterGame_EWaveState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWaveState::waitingToStart", (int64)EWaveState::waitingToStart },
				{ "EWaveState::prepairingNextWave", (int64)EWaveState::prepairingNextWave },
				{ "EWaveState::waveInProgress", (int64)EWaveState::waveInProgress },
				{ "EWaveState::waitingToComplete", (int64)EWaveState::waitingToComplete },
				{ "EWaveState::waveComplete", (int64)EWaveState::waveComplete },
				{ "EWaveState::gameOver", (int64)EWaveState::gameOver },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SHordeGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoopShooterGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWaveState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWaveState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_ASHordeGameState_waveStateChanged = FName(TEXT("waveStateChanged"));
	void ASHordeGameState::waveStateChanged(EWaveState newState, EWaveState oldState)
	{
		SHordeGameState_eventwaveStateChanged_Parms Parms;
		Parms.newState=newState;
		Parms.oldState=oldState;
		ProcessEvent(FindFunctionChecked(NAME_ASHordeGameState_waveStateChanged),&Parms);
	}
	void ASHordeGameState::StaticRegisterNativesASHordeGameState()
	{
		UClass* Class = ASHordeGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_WaveState", &ASHordeGameState::execOnRep_WaveState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASHordeGameState_OnRep_WaveState()
	{
		struct SHordeGameState_eventOnRep_WaveState_Parms
		{
			EWaveState oldState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldState = { UE4CodeGen_Private::EPropertyClass::Enum, "oldState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SHordeGameState_eventOnRep_WaveState_Parms, oldState), Z_Construct_UEnum_CoopShooterGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_oldState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_oldState_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SHordeGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASHordeGameState, "OnRep_WaveState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(SHordeGameState_eventOnRep_WaveState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASHordeGameState_waveStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_oldState = { UE4CodeGen_Private::EPropertyClass::Enum, "oldState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SHordeGameState_eventwaveStateChanged_Parms, oldState), Z_Construct_UEnum_CoopShooterGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_oldState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState = { UE4CodeGen_Private::EPropertyClass::Enum, "newState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SHordeGameState_eventwaveStateChanged_Parms, newState), Z_Construct_UEnum_CoopShooterGame_EWaveState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_oldState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_oldState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newState_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Public/SHordeGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASHordeGameState, "waveStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(SHordeGameState_eventwaveStateChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASHordeGameState_NoRegister()
	{
		return ASHordeGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_ASHordeGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameStateBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASHordeGameState_OnRep_WaveState, "OnRep_WaveState" }, // 1541251750
				{ &Z_Construct_UFunction_ASHordeGameState_waveStateChanged, "waveStateChanged" }, // 1229503668
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SHordeGameState.h" },
				{ "ModuleRelativePath", "Public/SHordeGameState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waveState_MetaData[] = {
				{ "Category", "GameState" },
				{ "ModuleRelativePath", "Public/SHordeGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_waveState = { UE4CodeGen_Private::EPropertyClass::Enum, "waveState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000034, 1, "OnRep_WaveState", STRUCT_OFFSET(ASHordeGameState, waveState), Z_Construct_UEnum_CoopShooterGame_EWaveState, METADATA_PARAMS(NewProp_waveState_MetaData, ARRAY_COUNT(NewProp_waveState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_waveState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_waveState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_waveState_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASHordeGameState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASHordeGameState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(ASHordeGameState, 3482071186);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASHordeGameState(Z_Construct_UClass_ASHordeGameState, &ASHordeGameState::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ASHordeGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHordeGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
