// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPSHOOTERGAME_SGrenadeLauncher_generated_h
#error "SGrenadeLauncher.generated.h already included, missing '#pragma once' in SGrenadeLauncher.h"
#endif
#define COOPSHOOTERGAME_SGrenadeLauncher_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGrenadeLauncher(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASGrenadeLauncher(); \
public: \
	DECLARE_CLASS(ASGrenadeLauncher, ASWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASGrenadeLauncher) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASGrenadeLauncher(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASGrenadeLauncher(); \
public: \
	DECLARE_CLASS(ASGrenadeLauncher, ASWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASGrenadeLauncher) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGrenadeLauncher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGrenadeLauncher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGrenadeLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGrenadeLauncher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGrenadeLauncher(ASGrenadeLauncher&&); \
	NO_API ASGrenadeLauncher(const ASGrenadeLauncher&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGrenadeLauncher() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGrenadeLauncher(ASGrenadeLauncher&&); \
	NO_API ASGrenadeLauncher(const ASGrenadeLauncher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGrenadeLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGrenadeLauncher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGrenadeLauncher)


#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__projectile() { return STRUCT_OFFSET(ASGrenadeLauncher, projectile); }


#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_12_PROLOG
#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_SGrenadeLauncher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
