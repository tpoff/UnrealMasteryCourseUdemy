// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopShooterGame_init() {}
	COOPSHOOTERGAME_API UFunction* Z_Construct_UDelegateFunction_CoopShooterGame_OnHealthChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoopShooterGame()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CoopShooterGame_OnHealthChangedSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/CoopShooterGame",
				PKG_CompiledIn | 0x00000000,
				0x023409E9,
				0x08B3D78E,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
