// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FpsGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFpsGameState() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFpsGameState_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFpsGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	FPSGAME_API UFunction* Z_Construct_UFunction_AFpsGameState_MulticastOnMissionComplete();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FName NAME_AFpsGameState_MulticastOnMissionComplete = FName(TEXT("MulticastOnMissionComplete"));
	void AFpsGameState::MulticastOnMissionComplete(APawn* instigatorPawn, bool bMissionSuccess)
	{
		FpsGameState_eventMulticastOnMissionComplete_Parms Parms;
		Parms.instigatorPawn=instigatorPawn;
		Parms.bMissionSuccess=bMissionSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFpsGameState_MulticastOnMissionComplete),&Parms);
	}
	void AFpsGameState::StaticRegisterNativesAFpsGameState()
	{
		UClass* Class = AFpsGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastOnMissionComplete", &AFpsGameState::execMulticastOnMissionComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AFpsGameState_MulticastOnMissionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bMissionSuccess_SetBit = [](void* Obj){ ((FpsGameState_eventMulticastOnMissionComplete_Parms*)Obj)->bMissionSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMissionSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bMissionSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FpsGameState_eventMulticastOnMissionComplete_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMissionSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatorPawn = { UE4CodeGen_Private::EPropertyClass::Object, "instigatorPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FpsGameState_eventMulticastOnMissionComplete_Parms, instigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMissionSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_instigatorPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FpsGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFpsGameState, "MulticastOnMissionComplete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, sizeof(FpsGameState_eventMulticastOnMissionComplete_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFpsGameState_NoRegister()
	{
		return AFpsGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_AFpsGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameStateBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AFpsGameState_MulticastOnMissionComplete, "MulticastOnMissionComplete" }, // 556274258
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FpsGameState.h" },
				{ "ModuleRelativePath", "Public/FpsGameState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFpsGameState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFpsGameState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFpsGameState, 667771929);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFpsGameState(Z_Construct_UClass_AFpsGameState, &AFpsGameState::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFpsGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFpsGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
