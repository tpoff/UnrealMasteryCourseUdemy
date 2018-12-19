// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASCharacter_onHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASCharacter_startFire();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASCharacter_stopFire();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "onHealthChanged", &ASCharacter::execonHealthChanged },
			{ "startFire", &ASCharacter::execstartFire },
			{ "stopFire", &ASCharacter::execstopFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASCharacter_onHealthChanged()
	{
		struct SCharacter_eventonHealthChanged_Parms
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
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "damageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventonHealthChanged_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "instigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventonHealthChanged_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Object, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SCharacter_eventonHealthChanged_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_damageType_MetaData, ARRAY_COUNT(NewProp_damageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "healthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventonHealthChanged_Parms, healthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health = { UE4CodeGen_Private::EPropertyClass::Float, "health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventonHealthChanged_Parms, health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OwningHealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventonHealthChanged_Parms, OwningHealthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_OwningHealthComponent_MetaData, ARRAY_COUNT(NewProp_OwningHealthComponent_MetaData)) };
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
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "onHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(SCharacter_eventonHealthChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_startFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "startFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_stopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "stopFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ASCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASCharacter_onHealthChanged, "onHealthChanged" }, // 1383822698
				{ &Z_Construct_UFunction_ASCharacter_startFire, "startFire" }, // 993618165
				{ &Z_Construct_UFunction_ASCharacter_stopFire, "stopFire" }, // 1945160358
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "SCharacter.h" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDied_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			auto NewProp_bDied_SetBit = [](void* Obj){ ((ASCharacter*)Obj)->bDied = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDied = { UE4CodeGen_Private::EPropertyClass::Bool, "bDied", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDied_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDied_MetaData, ARRAY_COUNT(NewProp_bDied_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "healthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASCharacter, healthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_healthComponent_MetaData, ARRAY_COUNT(NewProp_healthComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponAttachSocketName_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_weaponAttachSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "weaponAttachSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030001, 1, nullptr, STRUCT_OFFSET(ASCharacter, weaponAttachSocketName), METADATA_PARAMS(NewProp_weaponAttachSocketName_MetaData, ARRAY_COUNT(NewProp_weaponAttachSocketName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_starterWeaponClass_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_starterWeaponClass = { UE4CodeGen_Private::EPropertyClass::Class, "starterWeaponClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, starterWeaponClass), Z_Construct_UClass_ASWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_starterWeaponClass_MetaData, ARRAY_COUNT(NewProp_starterWeaponClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentWeapon_MetaData[] = {
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "currentWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, STRUCT_OFFSET(ASCharacter, currentWeapon), Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(NewProp_currentWeapon_MetaData, ARRAY_COUNT(NewProp_currentWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoomSpeed_MetaData[] = {
				{ "Category", "Player" },
				{ "ClampMax", "100" },
				{ "ClampMin", "0.100000" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zoomSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "zoomSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, zoomSpeed), METADATA_PARAMS(NewProp_zoomSpeed_MetaData, ARRAY_COUNT(NewProp_zoomSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoomFieldOfView_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zoomFieldOfView = { UE4CodeGen_Private::EPropertyClass::Float, "zoomFieldOfView", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, zoomFieldOfView), METADATA_PARAMS(NewProp_zoomFieldOfView_MetaData, ARRAY_COUNT(NewProp_zoomFieldOfView_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArmComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArmComponent = { UE4CodeGen_Private::EPropertyClass::Object, "springArmComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASCharacter, springArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_springArmComponent_MetaData, ARRAY_COUNT(NewProp_springArmComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComponent_MetaData, ARRAY_COUNT(NewProp_CameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDied,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_healthComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_weaponAttachSocketName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_starterWeaponClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_currentWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_zoomSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_zoomFieldOfView,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_springArmComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASCharacter::StaticClass,
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
	IMPLEMENT_CLASS(ASCharacter, 2336592938);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCharacter(Z_Construct_UClass_ASCharacter, &ASCharacter::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ASCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
