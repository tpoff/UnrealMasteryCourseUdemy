// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWeapon() {}
// Cross Module References
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASWeapon_Fire();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ASWeapon::StaticRegisterNativesASWeapon()
	{
		UClass* Class = ASWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ASWeapon::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASWeapon_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASWeapon_NoRegister()
	{
		return ASWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_ASWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASWeapon_Fire, "Fire" }, // 1890337641
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SWeapon.h" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tracerTargetName_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_tracerTargetName = { UE4CodeGen_Private::EPropertyClass::Name, "tracerTargetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030015, 1, nullptr, STRUCT_OFFSET(ASWeapon, tracerTargetName), METADATA_PARAMS(NewProp_tracerTargetName_MetaData, ARRAY_COUNT(NewProp_tracerTargetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tracerEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tracerEffect = { UE4CodeGen_Private::EPropertyClass::Object, "tracerEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ASWeapon, tracerEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_tracerEffect_MetaData, ARRAY_COUNT(NewProp_tracerEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impactEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_impactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "impactEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ASWeapon, impactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_impactEffect_MetaData, ARRAY_COUNT(NewProp_impactEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzleFlashEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_muzzleFlashEffect = { UE4CodeGen_Private::EPropertyClass::Object, "muzzleFlashEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ASWeapon, muzzleFlashEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_muzzleFlashEffect_MetaData, ARRAY_COUNT(NewProp_muzzleFlashEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzleSocketName_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_muzzleSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "muzzleSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030015, 1, nullptr, STRUCT_OFFSET(ASWeapon, muzzleSocketName), METADATA_PARAMS(NewProp_muzzleSocketName_MetaData, ARRAY_COUNT(NewProp_muzzleSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Class, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010015, 1, nullptr, STRUCT_OFFSET(ASWeapon, damageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_damageType_MetaData, ARRAY_COUNT(NewProp_damageType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "meshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASWeapon, meshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_meshComponent_MetaData, ARRAY_COUNT(NewProp_meshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tracerTargetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tracerEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_impactEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_muzzleFlashEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_muzzleSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_meshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASWeapon>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASWeapon::StaticClass,
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
	IMPLEMENT_CLASS(ASWeapon, 4118027245);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeapon(Z_Construct_UClass_ASWeapon, &ASWeapon::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ASWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
