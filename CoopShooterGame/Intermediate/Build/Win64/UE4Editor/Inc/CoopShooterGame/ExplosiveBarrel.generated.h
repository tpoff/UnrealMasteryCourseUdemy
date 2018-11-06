// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COOPSHOOTERGAME_ExplosiveBarrel_generated_h
#error "ExplosiveBarrel.generated.h already included, missing '#pragma once' in ExplosiveBarrel.h"
#endif
#define COOPSHOOTERGAME_ExplosiveBarrel_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_fromDamageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onHealthChanged(Z_Param_OwningHealthComponent,Z_Param_health,Z_Param_healthDelta,Z_Param_fromDamageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_fromDamageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onHealthChanged(Z_Param_OwningHealthComponent,Z_Param_health,Z_Param_healthDelta,Z_Param_fromDamageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveBarrel(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_AExplosiveBarrel(); \
public: \
	DECLARE_CLASS(AExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveBarrel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAExplosiveBarrel(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_AExplosiveBarrel(); \
public: \
	DECLARE_CLASS(AExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveBarrel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveBarrel(AExplosiveBarrel&&); \
	NO_API AExplosiveBarrel(const AExplosiveBarrel&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveBarrel(AExplosiveBarrel&&); \
	NO_API AExplosiveBarrel(const AExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveBarrel)


#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__healthComponent() { return STRUCT_OFFSET(AExplosiveBarrel, healthComponent); } \
	FORCEINLINE static uint32 __PPO__meshComponent() { return STRUCT_OFFSET(AExplosiveBarrel, meshComponent); } \
	FORCEINLINE static uint32 __PPO__impactEffect() { return STRUCT_OFFSET(AExplosiveBarrel, impactEffect); } \
	FORCEINLINE static uint32 __PPO__explodedMaterial() { return STRUCT_OFFSET(AExplosiveBarrel, explodedMaterial); } \
	FORCEINLINE static uint32 __PPO__explosionImpulse() { return STRUCT_OFFSET(AExplosiveBarrel, explosionImpulse); } \
	FORCEINLINE static uint32 __PPO__radialForceComponent() { return STRUCT_OFFSET(AExplosiveBarrel, radialForceComponent); } \
	FORCEINLINE static uint32 __PPO__bDied() { return STRUCT_OFFSET(AExplosiveBarrel, bDied); } \
	FORCEINLINE static uint32 __PPO__damageType() { return STRUCT_OFFSET(AExplosiveBarrel, damageType); }


#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_16_PROLOG
#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_ExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
