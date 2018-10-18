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
	FPSGAME_API UEnum* Z_Construct_UEnum_FPSGame_EAIState();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UClass* Z_Construct_UClass_AFpsAiGuard_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFpsAiGuard();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsAiGuard_getRandomWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsAiGuard_goToRandomWaypoint();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsAiGuard_onNoiseHeard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsAiGuard_OnPawnSeen();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsAiGuard_onStateChanged();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsAiGuard_resetOrientation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	static UEnum* EAIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSGame_EAIState, Z_Construct_UPackage__Script_FPSGame(), TEXT("EAIState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIState(EAIState_StaticEnum, TEXT("/Script/FPSGame"), TEXT("EAIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSGame_EAIState_CRC() { return 4044772101U; }
	UEnum* Z_Construct_UEnum_FPSGame_EAIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIState"), 0, Get_Z_Construct_UEnum_FPSGame_EAIState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIState::Idle", (int64)EAIState::Idle },
				{ "EAIState::Suspicious", (int64)EAIState::Suspicious },
				{ "EAIState::Alerted", (int64)EAIState::Alerted },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAIState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAIState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AFpsAiGuard_onStateChanged = FName(TEXT("onStateChanged"));
	void AFpsAiGuard::onStateChanged(EAIState newState)
	{
		FpsAiGuard_eventonStateChanged_Parms Parms;
		Parms.newState=newState;
		ProcessEvent(FindFunctionChecked(NAME_AFpsAiGuard_onStateChanged),&Parms);
	}
	void AFpsAiGuard::StaticRegisterNativesAFpsAiGuard()
	{
		UClass* Class = AFpsAiGuard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getRandomWaypoint", &AFpsAiGuard::execgetRandomWaypoint },
			{ "goToRandomWaypoint", &AFpsAiGuard::execgoToRandomWaypoint },
			{ "onNoiseHeard", &AFpsAiGuard::execonNoiseHeard },
			{ "OnPawnSeen", &AFpsAiGuard::execOnPawnSeen },
			{ "resetOrientation", &AFpsAiGuard::execresetOrientation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AFpsAiGuard_getRandomWaypoint()
	{
		struct FpsAiGuard_eventgetRandomWaypoint_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FpsAiGuard_eventgetRandomWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFpsAiGuard, "getRandomWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FpsAiGuard_eventgetRandomWaypoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFpsAiGuard_goToRandomWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFpsAiGuard, "goToRandomWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
	UFunction* Z_Construct_UFunction_AFpsAiGuard_onStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState = { UE4CodeGen_Private::EPropertyClass::Enum, "newState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FpsAiGuard_eventonStateChanged_Parms, newState), Z_Construct_UEnum_FPSGame_EAIState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newState_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFpsAiGuard, "onStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FpsAiGuard_eventonStateChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFpsAiGuard_resetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFpsAiGuard, "resetOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
				{ &Z_Construct_UFunction_AFpsAiGuard_getRandomWaypoint, "getRandomWaypoint" }, // 3841541683
				{ &Z_Construct_UFunction_AFpsAiGuard_goToRandomWaypoint, "goToRandomWaypoint" }, // 2696787226
				{ &Z_Construct_UFunction_AFpsAiGuard_onNoiseHeard, "onNoiseHeard" }, // 58523187
				{ &Z_Construct_UFunction_AFpsAiGuard_OnPawnSeen, "OnPawnSeen" }, // 3397268528
				{ &Z_Construct_UFunction_AFpsAiGuard_onStateChanged, "onStateChanged" }, // 863820121
				{ &Z_Construct_UFunction_AFpsAiGuard_resetOrientation, "resetOrientation" }, // 1299631656
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "FpsAiGuard.h" },
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentWaypoint_MetaData[] = {
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentWaypoint = { UE4CodeGen_Private::EPropertyClass::Object, "currentWaypoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFpsAiGuard, currentWaypoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_currentWaypoint_MetaData, ARRAY_COUNT(NewProp_currentWaypoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waypoints_MetaData[] = {
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_waypoints = { UE4CodeGen_Private::EPropertyClass::Array, "waypoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFpsAiGuard, waypoints), METADATA_PARAMS(NewProp_waypoints_MetaData, ARRAY_COUNT(NewProp_waypoints_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_waypoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "waypoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrolling_MetaData[] = {
				{ "Category", "Patrol" },
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			auto NewProp_patrolling_SetBit = [](void* Obj){ ((AFpsAiGuard*)Obj)->patrolling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_patrolling = { UE4CodeGen_Private::EPropertyClass::Bool, "patrolling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFpsAiGuard), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_patrolling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_patrolling_MetaData, ARRAY_COUNT(NewProp_patrolling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawnSensingComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/FpsAiGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawnSensingComponent = { UE4CodeGen_Private::EPropertyClass::Object, "pawnSensingComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFpsAiGuard, pawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(NewProp_pawnSensingComponent_MetaData, ARRAY_COUNT(NewProp_pawnSensingComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_currentWaypoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_waypoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_waypoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patrolling,
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
	IMPLEMENT_CLASS(AFpsAiGuard, 1877220713);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFpsAiGuard(Z_Construct_UClass_AFpsAiGuard, &AFpsAiGuard::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFpsAiGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFpsAiGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
