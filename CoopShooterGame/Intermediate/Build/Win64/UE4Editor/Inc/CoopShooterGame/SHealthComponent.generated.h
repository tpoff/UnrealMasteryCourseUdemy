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
#ifdef COOPSHOOTERGAME_SHealthComponent_generated_h
#error "SHealthComponent.generated.h already included, missing '#pragma once' in SHealthComponent.h"
#endif
#define COOPSHOOTERGAME_SHealthComponent_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_10_DELEGATE \
struct _Script_CoopShooterGame_eventOnHealthChangedSignature_Parms \
{ \
	USHealthComponent* HealthComponent; \
	float health; \
	float healthDelta; \
	const UDamageType* damageType; \
	AController* instigatedBy; \
	AActor* damageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, USHealthComponent* HealthComponent, float health, float healthDelta, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser) \
{ \
	_Script_CoopShooterGame_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComponent=HealthComponent; \
	Parms.health=health; \
	Parms.healthDelta=healthDelta; \
	Parms.damageType=damageType; \
	Parms.instigatedBy=instigatedBy; \
	Parms.damageCauser=damageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exechandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->handleTakeAnyDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exechandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->handleTakeAnyDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_USHealthComponent(); \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_USHealthComponent(); \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USHealthComponent)


#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(USHealthComponent, health); } \
	FORCEINLINE static uint32 __PPO__defaultHealth() { return STRUCT_OFFSET(USHealthComponent, defaultHealth); }


#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_12_PROLOG
#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_Components_SHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
