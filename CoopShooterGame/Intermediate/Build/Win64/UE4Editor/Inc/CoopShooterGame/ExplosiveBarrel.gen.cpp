// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ExplosiveBarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosiveBarrel() {}
// Cross Module References
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_AExplosiveBarrel_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_AExplosiveBarrel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_AExplosiveBarrel_onHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AExplosiveBarrel::StaticRegisterNativesAExplosiveBarrel()
	{
		UClass* Class = AExplosiveBarrel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onHealthChanged", &AExplosiveBarrel::execonHealthChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AExplosiveBarrel_onHealthChanged()
	{
		struct ExplosiveBarrel_eventonHealthChanged_Parms
		{
			USHealthComponent* OwningHealthComponent;
			float health;
			float healthDelta;
			const UDamageType* fromDamageType;
			AController* instigatedBy;
			AActor* damageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "damageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExplosiveBarrel_eventonHealthChanged_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "instigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExplosiveBarrel_eventonHealthChanged_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fromDamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fromDamageType = { UE4CodeGen_Private::EPropertyClass::Object, "fromDamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ExplosiveBarrel_eventonHealthChanged_Parms, fromDamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_fromDamageType_MetaData, ARRAY_COUNT(NewProp_fromDamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "healthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExplosiveBarrel_eventonHealthChanged_Parms, healthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health = { UE4CodeGen_Private::EPropertyClass::Float, "health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExplosiveBarrel_eventonHealthChanged_Parms, health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OwningHealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ExplosiveBarrel_eventonHealthChanged_Parms, OwningHealthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_OwningHealthComponent_MetaData, ARRAY_COUNT(NewProp_OwningHealthComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_instigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fromDamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_healthDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningHealthComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AExplosiveBarrel, "onHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(ExplosiveBarrel_eventonHealthChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExplosiveBarrel_NoRegister()
	{
		return AExplosiveBarrel::StaticClass();
	}
	UClass* Z_Construct_UClass_AExplosiveBarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AExplosiveBarrel_onHealthChanged, "onHealthChanged" }, // 131250082
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ExplosiveBarrel.h" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Class, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010015, 1, nullptr, STRUCT_OFFSET(AExplosiveBarrel, damageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_damageType_MetaData, ARRAY_COUNT(NewProp_damageType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDied_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
			};
#endif
			auto NewProp_bDied_SetBit = [](void* Obj){ ((AExplosiveBarrel*)Obj)->bDied = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDied = { UE4CodeGen_Private::EPropertyClass::Bool, "bDied", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AExplosiveBarrel), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDied_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDied_MetaData, ARRAY_COUNT(NewProp_bDied_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radialForceComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radialForceComponent = { UE4CodeGen_Private::EPropertyClass::Object, "radialForceComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AExplosiveBarrel, radialForceComponent), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(NewProp_radialForceComponent_MetaData, ARRAY_COUNT(NewProp_radialForceComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionImpulse_MetaData[] = {
				{ "Category", "Barrel" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "explosionImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AExplosiveBarrel, explosionImpulse), METADATA_PARAMS(NewProp_explosionImpulse_MetaData, ARRAY_COUNT(NewProp_explosionImpulse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explodedMaterial_MetaData[] = {
				{ "Category", "Barrel" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explodedMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "explodedMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AExplosiveBarrel, explodedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_explodedMaterial_MetaData, ARRAY_COUNT(NewProp_explodedMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impactEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_impactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "impactEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AExplosiveBarrel, impactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_impactEffect_MetaData, ARRAY_COUNT(NewProp_impactEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
				{ "ToolTip", "our mesh for the projectile." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "meshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AExplosiveBarrel, meshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_meshComponent_MetaData, ARRAY_COUNT(NewProp_meshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ExplosiveBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "healthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AExplosiveBarrel, healthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_healthComponent_MetaData, ARRAY_COUNT(NewProp_healthComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDied,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_radialForceComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explosionImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_explodedMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_impactEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_meshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_healthComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AExplosiveBarrel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AExplosiveBarrel::StaticClass,
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
	IMPLEMENT_CLASS(AExplosiveBarrel, 3476381501);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosiveBarrel(Z_Construct_UClass_AExplosiveBarrel, &AExplosiveBarrel::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("AExplosiveBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosiveBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
