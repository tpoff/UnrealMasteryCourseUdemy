// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FpsPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFpsPlayerController() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFpsPlayerController_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFpsPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsPlayerController_OnMissionCompleted();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FName NAME_AFpsPlayerController_OnMissionCompleted = FName(TEXT("OnMissionCompleted"));
	void AFpsPlayerController::OnMissionCompleted(APawn* instigatorPawn, bool bMissionSuccess)
	{
		FpsPlayerController_eventOnMissionCompleted_Parms Parms;
		Parms.instigatorPawn=instigatorPawn;
		Parms.bMissionSuccess=bMissionSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFpsPlayerController_OnMissionCompleted),&Parms);
	}
	void AFpsPlayerController::StaticRegisterNativesAFpsPlayerController()
	{
	}
	UFunction* Z_Construct_UFunction_AFpsPlayerController_OnMissionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bMissionSuccess_SetBit = [](void* Obj){ ((FpsPlayerController_eventOnMissionCompleted_Parms*)Obj)->bMissionSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMissionSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bMissionSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FpsPlayerController_eventOnMissionCompleted_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMissionSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatorPawn = { UE4CodeGen_Private::EPropertyClass::Object, "instigatorPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FpsPlayerController_eventOnMissionCompleted_Parms, instigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMissionSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_instigatorPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PlayerController" },
				{ "ModuleRelativePath", "Public/FpsPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFpsPlayerController, "OnMissionCompleted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FpsPlayerController_eventOnMissionCompleted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFpsPlayerController_NoRegister()
	{
		return AFpsPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AFpsPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AFpsPlayerController_OnMissionCompleted, "OnMissionCompleted" }, // 2152354858
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FpsPlayerController.h" },
				{ "ModuleRelativePath", "Public/FpsPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFpsPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFpsPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFpsPlayerController, 2159478580);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFpsPlayerController(Z_Construct_UClass_AFpsPlayerController, &AFpsPlayerController::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFpsPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFpsPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
