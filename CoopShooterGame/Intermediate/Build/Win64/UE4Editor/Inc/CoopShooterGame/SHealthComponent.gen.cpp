// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/SHealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHealthComponent() {}
// Cross Module References
	COOPSHOOTERGAME_API UFunction* Z_Construct_UDelegateFunction_CoopShooterGame_OnHealthChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_USHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_USHealthComponent_handleTakeAnyDamage();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_USHealthComponent_OnRep_Health();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_CoopShooterGame_OnHealthChangedSignature__DelegateSignature()
	{
		struct _Script_CoopShooterGame_eventOnHealthChangedSignature_Parms
		{
			USHealthComponent* HealthComponent;
			float health;
			float healthDelta;
			const UDamageType* damageType;
			AController* instigatedBy;
			AActor* damageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "damageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_CoopShooterGame_eventOnHealthChangedSignature_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "instigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_CoopShooterGame_eventOnHealthChangedSignature_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Object, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_CoopShooterGame_eventOnHealthChangedSignature_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_damageType_MetaData, ARRAY_COUNT(NewProp_damageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "healthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_CoopShooterGame_eventOnHealthChangedSignature_Parms, healthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health = { UE4CodeGen_Private::EPropertyClass::Float, "health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_CoopShooterGame_eventOnHealthChangedSignature_Parms, health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_CoopShooterGame_eventOnHealthChangedSignature_Parms, HealthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComponent_MetaData, ARRAY_COUNT(NewProp_HealthComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_instigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_healthDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CoopShooterGame, "OnHealthChangedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_CoopShooterGame_eventOnHealthChangedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void USHealthComponent::StaticRegisterNativesUSHealthComponent()
	{
		UClass* Class = USHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "handleTakeAnyDamage", &USHealthComponent::exechandleTakeAnyDamage },
			{ "OnRep_Health", &USHealthComponent::execOnRep_Health },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USHealthComponent_handleTakeAnyDamage()
	{
		struct SHealthComponent_eventhandleTakeAnyDamage_Parms
		{
			AActor* damagedActor;
			float damage;
			const UDamageType* damageType;
			AController* instigatedBy;
			AActor* damageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "damageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SHealthComponent_eventhandleTakeAnyDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "instigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SHealthComponent_eventhandleTakeAnyDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Object, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SHealthComponent_eventhandleTakeAnyDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_damageType_MetaData, ARRAY_COUNT(NewProp_damageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage = { UE4CodeGen_Private::EPropertyClass::Float, "damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SHealthComponent_eventhandleTakeAnyDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "damagedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SHealthComponent_eventhandleTakeAnyDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_instigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damagedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USHealthComponent, "handleTakeAnyDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(SHealthComponent_eventhandleTakeAnyDamage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USHealthComponent_OnRep_Health()
	{
		struct SHealthComponent_eventOnRep_Health_Parms
		{
			float oldHealth;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_oldHealth = { UE4CodeGen_Private::EPropertyClass::Float, "oldHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SHealthComponent_eventOnRep_Health_Parms, oldHealth), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_oldHealth,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USHealthComponent, "OnRep_Health", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(SHealthComponent_eventOnRep_Health_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USHealthComponent_NoRegister()
	{
		return USHealthComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USHealthComponent_handleTakeAnyDamage, "handleTakeAnyDamage" }, // 1087477917
				{ &Z_Construct_UFunction_USHealthComponent_OnRep_Health, "OnRep_Health" }, // 2084283160
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "COOP" },
				{ "IncludePath", "Components/SHealthComponent.h" },
				{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onHealthChanged_MetaData[] = {
				{ "Category", "Events" },
				{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onHealthChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "onHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USHealthComponent, onHealthChanged), Z_Construct_UDelegateFunction_CoopShooterGame_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(NewProp_onHealthChanged_MetaData, ARRAY_COUNT(NewProp_onHealthChanged_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultHealth_MetaData[] = {
				{ "Category", "HealthComponent" },
				{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_defaultHealth = { UE4CodeGen_Private::EPropertyClass::Float, "defaultHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USHealthComponent, defaultHealth), METADATA_PARAMS(NewProp_defaultHealth_MetaData, ARRAY_COUNT(NewProp_defaultHealth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[] = {
				{ "Category", "HealthComponent" },
				{ "ModuleRelativePath", "Public/Components/SHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health = { UE4CodeGen_Private::EPropertyClass::Float, "health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100010035, 1, "OnRep_Health", STRUCT_OFFSET(USHealthComponent, health), METADATA_PARAMS(NewProp_health_MetaData, ARRAY_COUNT(NewProp_health_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_onHealthChanged,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_defaultHealth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_health,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USHealthComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USHealthComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(USHealthComponent, 431547477);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USHealthComponent(Z_Construct_UClass_USHealthComponent, &USHealthComponent::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("USHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
