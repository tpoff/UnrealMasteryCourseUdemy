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
#ifdef COOPSHOOTERGAME_STrackerBot_generated_h
#error "STrackerBot.generated.h already included, missing '#pragma once' in STrackerBot.h"
#endif
#define COOPSHOOTERGAME_STrackerBot_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwningHealthComponent,Z_Param_health,Z_Param_healthDelta,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_OwningHealthComponent,Z_Param_health,Z_Param_healthDelta,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASTrackerBot(); \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASTrackerBot(); \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTrackerBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTrackerBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTrackerBot)


#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__meshComponent() { return STRUCT_OFFSET(ASTrackerBot, meshComponent); } \
	FORCEINLINE static uint32 __PPO__healthComponent() { return STRUCT_OFFSET(ASTrackerBot, healthComponent); } \
	FORCEINLINE static uint32 __PPO__movementForce() { return STRUCT_OFFSET(ASTrackerBot, movementForce); } \
	FORCEINLINE static uint32 __PPO__requiredDistanceToTarget() { return STRUCT_OFFSET(ASTrackerBot, requiredDistanceToTarget); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ASTrackerBot, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__explosionEffect() { return STRUCT_OFFSET(ASTrackerBot, explosionEffect); } \
	FORCEINLINE static uint32 __PPO__explosionRadius() { return STRUCT_OFFSET(ASTrackerBot, explosionRadius); } \
	FORCEINLINE static uint32 __PPO__explosionDamage() { return STRUCT_OFFSET(ASTrackerBot, explosionDamage); }


#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_12_PROLOG
#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_STrackerBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
