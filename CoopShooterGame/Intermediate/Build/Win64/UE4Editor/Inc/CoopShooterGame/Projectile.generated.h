// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef COOPSHOOTERGAME_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define COOPSHOOTERGAME_Projectile_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonDestroy) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onDestroy(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonDestroy) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onDestroy(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_AProjectile(); \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__meshComponent() { return STRUCT_OFFSET(AProjectile, meshComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__impactEffect() { return STRUCT_OFFSET(AProjectile, impactEffect); }


#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_16_PROLOG
#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
