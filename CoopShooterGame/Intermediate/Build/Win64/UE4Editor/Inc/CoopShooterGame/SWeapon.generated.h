// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPSHOOTERGAME_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define COOPSHOOTERGAME_SWeapon_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execshakePlayerCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->shakePlayerCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execshakePlayerCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->shakePlayerCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__meshComponent() { return STRUCT_OFFSET(ASWeapon, meshComponent); } \
	FORCEINLINE static uint32 __PPO__damageType() { return STRUCT_OFFSET(ASWeapon, damageType); } \
	FORCEINLINE static uint32 __PPO__muzzleSocketName() { return STRUCT_OFFSET(ASWeapon, muzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__muzzleFlashEffect() { return STRUCT_OFFSET(ASWeapon, muzzleFlashEffect); } \
	FORCEINLINE static uint32 __PPO__impactEffect() { return STRUCT_OFFSET(ASWeapon, impactEffect); } \
	FORCEINLINE static uint32 __PPO__tracerEffect() { return STRUCT_OFFSET(ASWeapon, tracerEffect); } \
	FORCEINLINE static uint32 __PPO__tracerTargetName() { return STRUCT_OFFSET(ASWeapon, tracerTargetName); } \
	FORCEINLINE static uint32 __PPO__fireCamShake() { return STRUCT_OFFSET(ASWeapon, fireCamShake); }


#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_13_PROLOG
#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
