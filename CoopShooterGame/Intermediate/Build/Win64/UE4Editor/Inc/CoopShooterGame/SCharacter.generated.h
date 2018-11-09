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
#ifdef COOPSHOOTERGAME_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define COOPSHOOTERGAME_SCharacter_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onHealthChanged(Z_Param_OwningHealthComponent,Z_Param_health,Z_Param_healthDelta,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_OwningHealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onHealthChanged(Z_Param_OwningHealthComponent,Z_Param_health,Z_Param_healthDelta,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ASCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__springArmComponent() { return STRUCT_OFFSET(ASCharacter, springArmComponent); } \
	FORCEINLINE static uint32 __PPO__zoomFieldOfView() { return STRUCT_OFFSET(ASCharacter, zoomFieldOfView); } \
	FORCEINLINE static uint32 __PPO__zoomSpeed() { return STRUCT_OFFSET(ASCharacter, zoomSpeed); } \
	FORCEINLINE static uint32 __PPO__currentWeapon() { return STRUCT_OFFSET(ASCharacter, currentWeapon); } \
	FORCEINLINE static uint32 __PPO__starterWeaponClass() { return STRUCT_OFFSET(ASCharacter, starterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__weaponAttachSocketName() { return STRUCT_OFFSET(ASCharacter, weaponAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__healthComponent() { return STRUCT_OFFSET(ASCharacter, healthComponent); } \
	FORCEINLINE static uint32 __PPO__bDied() { return STRUCT_OFFSET(ASCharacter, bDied); }


#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_15_PROLOG
#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
