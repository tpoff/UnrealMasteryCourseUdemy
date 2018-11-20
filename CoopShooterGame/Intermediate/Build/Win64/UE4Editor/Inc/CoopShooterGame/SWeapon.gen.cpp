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
	COOPSHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASWeapon_ServerFire();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASWeapon_shakePlayerCamera();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FHitScanTrace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COOPSHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitScanTrace, Z_Construct_UPackage__Script_CoopShooterGame(), TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitScanTrace(FHitScanTrace::StaticStruct, TEXT("/Script/CoopShooterGame"), TEXT("HitScanTrace"), false, nullptr, nullptr);
static struct FScriptStruct_CoopShooterGame_StaticRegisterNativesFHitScanTrace
{
	FScriptStruct_CoopShooterGame_StaticRegisterNativesFHitScanTrace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitScanTrace")),new UScriptStruct::TCppStructOps<FHitScanTrace>);
	}
} ScriptStruct_CoopShooterGame_StaticRegisterNativesFHitScanTrace;
	UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CoopShooterGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitScanTrace"), sizeof(FHitScanTrace), Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SWeapon.h" },
				{ "ToolTip", "contains information of a single hitscan weapon linetrace." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitScanTrace>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTo_MetaData[] = {
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceTo = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceTo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHitScanTrace, TraceTo), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(NewProp_TraceTo_MetaData, ARRAY_COUNT(NewProp_TraceTo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_surfaceType_MetaData[] = {
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_surfaceType = { UE4CodeGen_Private::EPropertyClass::Byte, "surfaceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHitScanTrace, surfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(NewProp_surfaceType_MetaData, ARRAY_COUNT(NewProp_surfaceType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceTo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_surfaceType,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HitScanTrace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHitScanTrace),
				alignof(FHitScanTrace),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitScanTrace_CRC() { return 1233446727U; }
	static FName NAME_ASWeapon_ServerFire = FName(TEXT("ServerFire"));
	void ASWeapon::ServerFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASWeapon_ServerFire),NULL);
	}
	void ASWeapon::StaticRegisterNativesASWeapon()
	{
		UClass* Class = ASWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_HitScanTrace", &ASWeapon::execOnRep_HitScanTrace },
			{ "ServerFire", &ASWeapon::execServerFire },
			{ "shakePlayerCamera", &ASWeapon::execshakePlayerCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, "OnRep_HitScanTrace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASWeapon_ServerFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, "ServerFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASWeapon_shakePlayerCamera()
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
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASWeapon, "shakePlayerCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
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
				{ &Z_Construct_UFunction_ASWeapon_OnRep_HitScanTrace, "OnRep_HitScanTrace" }, // 3458297648
				{ &Z_Construct_UFunction_ASWeapon_ServerFire, "ServerFire" }, // 3591185035
				{ &Z_Construct_UFunction_ASWeapon_shakePlayerCamera, "shakePlayerCamera" }, // 2622162376
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SWeapon.h" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitScanTrace_MetaData[] = {
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitScanTrace = { UE4CodeGen_Private::EPropertyClass::Struct, "hitScanTrace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000020, 1, "OnRep_HitScanTrace", STRUCT_OFFSET(ASWeapon, hitScanTrace), Z_Construct_UScriptStruct_FHitScanTrace, METADATA_PARAMS(NewProp_hitScanTrace_MetaData, ARRAY_COUNT(NewProp_hitScanTrace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rateOfFire_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
				{ "ToolTip", "rpm - bullets per minute." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rateOfFire = { UE4CodeGen_Private::EPropertyClass::Float, "rateOfFire", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASWeapon, rateOfFire), METADATA_PARAMS(NewProp_rateOfFire_MetaData, ARRAY_COUNT(NewProp_rateOfFire_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loopFire_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			auto NewProp_loopFire_SetBit = [](void* Obj){ ((ASWeapon*)Obj)->loopFire = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_loopFire = { UE4CodeGen_Private::EPropertyClass::Bool, "loopFire", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASWeapon), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_loopFire_SetBit)>::SetBit, METADATA_PARAMS(NewProp_loopFire_MetaData, ARRAY_COUNT(NewProp_loopFire_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseDamage_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseDamage = { UE4CodeGen_Private::EPropertyClass::Float, "baseDamage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASWeapon, baseDamage), METADATA_PARAMS(NewProp_baseDamage_MetaData, ARRAY_COUNT(NewProp_baseDamage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireCamShake_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_fireCamShake = { UE4CodeGen_Private::EPropertyClass::Class, "fireCamShake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASWeapon, fireCamShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_fireCamShake_MetaData, ARRAY_COUNT(NewProp_fireCamShake_MetaData)) };
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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fleshImpactEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fleshImpactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "fleshImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ASWeapon, fleshImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_fleshImpactEffect_MetaData, ARRAY_COUNT(NewProp_fleshImpactEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultImpactEffect_MetaData[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SWeapon.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_defaultImpactEffect = { UE4CodeGen_Private::EPropertyClass::Object, "defaultImpactEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010015, 1, nullptr, STRUCT_OFFSET(ASWeapon, defaultImpactEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_defaultImpactEffect_MetaData, ARRAY_COUNT(NewProp_defaultImpactEffect_MetaData)) };
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
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_hitScanTrace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rateOfFire,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_loopFire,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_baseDamage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fireCamShake,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tracerTargetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tracerEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fleshImpactEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_defaultImpactEffect,
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
	IMPLEMENT_CLASS(ASWeapon, 3341798622);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASWeapon(Z_Construct_UClass_ASWeapon, &ASWeapon::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ASWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
