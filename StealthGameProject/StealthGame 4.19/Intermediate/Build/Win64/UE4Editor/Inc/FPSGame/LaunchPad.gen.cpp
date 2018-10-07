// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LaunchPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchPad() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_ALaunchPad_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_ALaunchPad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALaunchPad::StaticRegisterNativesALaunchPad()
	{
		UClass* Class = ALaunchPad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapLaunchPad", &ALaunchPad::execOverlapLaunchPad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad()
	{
		struct LaunchPad_eventOverlapLaunchPad_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((LaunchPad_eventOverlapLaunchPad_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LaunchPad_eventOverlapLaunchPad_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LaunchPad_eventOverlapLaunchPad_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LaunchPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaunchPad, "OverlapLaunchPad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(LaunchPad_eventOverlapLaunchPad_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALaunchPad_NoRegister()
	{
		return ALaunchPad::StaticClass();
	}
	UClass* Z_Construct_UClass_ALaunchPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ALaunchPad_OverlapLaunchPad, "OverlapLaunchPad" }, // 2281069843
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LaunchPad.h" },
				{ "ModuleRelativePath", "Public/LaunchPad.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_launchEffect_MetaData[] = {
				{ "Category", "Effects" },
				{ "ModuleRelativePath", "Public/LaunchPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_launchEffect = { UE4CodeGen_Private::EPropertyClass::Object, "launchEffect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ALaunchPad, launchEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(NewProp_launchEffect_MetaData, ARRAY_COUNT(NewProp_launchEffect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_launchPitchAngle_MetaData[] = {
				{ "Category", "LaunchPad" },
				{ "ModuleRelativePath", "Public/LaunchPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_launchPitchAngle = { UE4CodeGen_Private::EPropertyClass::Float, "launchPitchAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ALaunchPad, launchPitchAngle), METADATA_PARAMS(NewProp_launchPitchAngle_MetaData, ARRAY_COUNT(NewProp_launchPitchAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_launchStrength_MetaData[] = {
				{ "Category", "LaunchPad" },
				{ "ModuleRelativePath", "Public/LaunchPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_launchStrength = { UE4CodeGen_Private::EPropertyClass::Float, "launchStrength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(ALaunchPad, launchStrength), METADATA_PARAMS(NewProp_launchStrength_MetaData, ARRAY_COUNT(NewProp_launchStrength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collisionBox_MetaData[] = {
				{ "Category", "collisionBox" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LaunchPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collisionBox = { UE4CodeGen_Private::EPropertyClass::Object, "collisionBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ALaunchPad, collisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_collisionBox_MetaData, ARRAY_COUNT(NewProp_collisionBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrowMesh_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LaunchPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrowMesh = { UE4CodeGen_Private::EPropertyClass::Object, "arrowMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ALaunchPad, arrowMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_arrowMesh_MetaData, ARRAY_COUNT(NewProp_arrowMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PadMesh_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LaunchPad.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PadMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PadMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ALaunchPad, PadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_PadMesh_MetaData, ARRAY_COUNT(NewProp_PadMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_launchEffect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_launchPitchAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_launchStrength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_collisionBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arrowMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PadMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALaunchPad>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALaunchPad::StaticClass,
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
	IMPLEMENT_CLASS(ALaunchPad, 1478887107);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaunchPad(Z_Construct_UClass_ALaunchPad, &ALaunchPad::StaticClass, TEXT("/Script/FPSGame"), TEXT("ALaunchPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaunchPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
