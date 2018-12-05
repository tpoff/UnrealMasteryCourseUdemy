// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COOPSHOOTERGAME_SPowerupActor_generated_h
#error "SPowerupActor.generated.h already included, missing '#pragma once' in SPowerupActor.h"
#endif
#define COOPSHOOTERGAME_SPowerupActor_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PowerupActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onTickPowerup(); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PowerupActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onTickPowerup(); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_EVENT_PARMS \
	struct SPowerupActor_eventonActivated_Parms \
	{ \
		AActor* activeFor; \
	}; \
	struct SPowerupActor_eventonPowerupStateChanged_Parms \
	{ \
		bool bNewIsActive; \
	};


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_CALLBACK_WRAPPERS
#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASPowerupActor(); \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASPowerupActor(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASPowerupActor(); \
public: \
	DECLARE_CLASS(ASPowerupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPowerupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPowerupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupActor(ASPowerupActor&&); \
	NO_API ASPowerupActor(const ASPowerupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPowerupActor)


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__powerupInterval() { return STRUCT_OFFSET(ASPowerupActor, powerupInterval); } \
	FORCEINLINE static uint32 __PPO__totalNumberOfTicks() { return STRUCT_OFFSET(ASPowerupActor, totalNumberOfTicks); } \
	FORCEINLINE static uint32 __PPO__bIsPowerupActive() { return STRUCT_OFFSET(ASPowerupActor, bIsPowerupActive); }


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_9_PROLOG \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_EVENT_PARMS


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_CALLBACK_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_CALLBACK_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_SPowerupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
