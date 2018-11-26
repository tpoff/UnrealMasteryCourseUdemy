// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/STrackerBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTrackerBot() {}
// Cross Module References
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASTrackerBot_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASTrackerBot();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASTrackerBot::StaticRegisterNativesASTrackerBot()
	{
		UClass* Class = ASTrackerBot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakeDamage", &ASTrackerBot::execHandleTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage()
	{
		struct STrackerBot_eventHandleTakeDamage_Parms
		{
			USHealthComponent* OwningHealthComponent;
			float health;
			float healthDelta;
			const UDamageType* damageType;
			AController* instigatedBy;
			AActor* damageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "damageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "instigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Object, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_damageType_MetaData, ARRAY_COUNT(NewProp_damageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "healthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, healthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health = { UE4CodeGen_Private::EPropertyClass::Float, "health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OwningHealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(STrackerBot_eventHandleTakeDamage_Parms, OwningHealthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_OwningHealthComponent_MetaData, ARRAY_COUNT(NewProp_OwningHealthComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_instigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_healthDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningHealthComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTrackerBot, "HandleTakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(STrackerBot_eventHandleTakeDamage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASTrackerBot_NoRegister()
	{
		return ASTrackerBot::StaticClass();
	}
	UClass* Z_Construct_UClass_ASTrackerBot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASTrackerBot_HandleTakeDamage, "HandleTakeDamage" }, // 3348690878
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "STrackerBot.h" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionDamage_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionDamage = { UE4CodeGen_Private::EPropertyClass::Float, "explosionDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, explosionDamage), METADATA_PARAMS(NewProp_explosionDamage_MetaData, ARRAY_COUNT(NewProp_explosionDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionRadius_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "explosionRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, explosionRadius), METADATA_PARAMS(NewProp_explosionRadius_MetaData, ARRAY_COUNT(NewProp_explosionRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionEffect_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explosionEffect = { UE4CodeGen_Private::EPropertyClass::Object, "explosionEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, explosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_explosionEffect_MetaData, ARRAY_COUNT(NewProp_explosionEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			auto NewProp_bUseVelocityChange_SetBit = [](void* Obj){ ((ASTrackerBot*)Obj)->bUseVelocityChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVelocityChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASTrackerBot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseVelocityChange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseVelocityChange_MetaData, ARRAY_COUNT(NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_requiredDistanceToTarget_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_requiredDistanceToTarget = { UE4CodeGen_Private::EPropertyClass::Float, "requiredDistanceToTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, requiredDistanceToTarget), METADATA_PARAMS(NewProp_requiredDistanceToTarget_MetaData, ARRAY_COUNT(NewProp_requiredDistanceToTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementForce_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementForce = { UE4CodeGen_Private::EPropertyClass::Float, "movementForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, movementForce), METADATA_PARAMS(NewProp_movementForce_MetaData, ARRAY_COUNT(NewProp_movementForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphereComponent = { UE4CodeGen_Private::EPropertyClass::Object, "sphereComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000090009, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, sphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_sphereComponent_MetaData, ARRAY_COUNT(NewProp_sphereComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "healthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, healthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_healthComponent_MetaData, ARRAY_COUNT(NewProp_healthComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "meshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, meshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_meshComponent_MetaData, ARRAY_COUNT(NewProp_meshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explosionDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explosionRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explosionEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseVelocityChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_requiredDistanceToTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_movementForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sphereComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_healthComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_meshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASTrackerBot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASTrackerBot::StaticClass,
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
	IMPLEMENT_CLASS(ASTrackerBot, 478801642);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTrackerBot(Z_Construct_UClass_ASTrackerBot, &ASTrackerBot::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ASTrackerBot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTrackerBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
