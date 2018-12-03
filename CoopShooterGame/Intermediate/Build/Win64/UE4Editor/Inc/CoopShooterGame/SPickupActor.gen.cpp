// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPickupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPickupActor() {}
// Cross Module References
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASPickupActor_NoRegister();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASPickupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame();
	COOPSHOOTERGAME_API UFunction* Z_Construct_UFunction_ASPickupActor_respawnPowerup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COOPSHOOTERGAME_API UClass* Z_Construct_UClass_ASPowerupActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ASPickupActor::StaticRegisterNativesASPickupActor()
	{
		UClass* Class = ASPickupActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "respawnPowerup", &ASPickupActor::execrespawnPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASPickupActor_respawnPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPickupActor, "respawnPowerup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPickupActor_NoRegister()
	{
		return ASPickupActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPickupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CoopShooterGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASPickupActor_respawnPowerup, "respawnPowerup" }, // 3006125321
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SPickupActor.h" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coolDownDuration_MetaData[] = {
				{ "Category", "PickupActor" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_coolDownDuration = { UE4CodeGen_Private::EPropertyClass::Float, "coolDownDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASPickupActor, coolDownDuration), METADATA_PARAMS(NewProp_coolDownDuration_MetaData, ARRAY_COUNT(NewProp_coolDownDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_powerupClass_MetaData[] = {
				{ "Category", "PickupActor" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_powerupClass = { UE4CodeGen_Private::EPropertyClass::Class, "powerupClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASPickupActor, powerupClass), Z_Construct_UClass_ASPowerupActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_powerupClass_MetaData, ARRAY_COUNT(NewProp_powerupClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_decalComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_decalComponent = { UE4CodeGen_Private::EPropertyClass::Object, "decalComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASPickupActor, decalComponent), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(NewProp_decalComponent_MetaData, ARRAY_COUNT(NewProp_decalComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SPickupActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphereComponent = { UE4CodeGen_Private::EPropertyClass::Object, "sphereComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASPickupActor, sphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_sphereComponent_MetaData, ARRAY_COUNT(NewProp_sphereComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_coolDownDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_powerupClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_decalComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sphereComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASPickupActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASPickupActor::StaticClass,
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
	IMPLEMENT_CLASS(ASPickupActor, 977191564);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPickupActor(Z_Construct_UClass_ASPickupActor, &ASPickupActor::StaticClass, TEXT("/Script/CoopShooterGame"), TEXT("ASPickupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPickupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
