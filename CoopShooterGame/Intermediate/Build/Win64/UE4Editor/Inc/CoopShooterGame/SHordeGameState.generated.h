// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWaveState : uint8;
#ifdef COOPSHOOTERGAME_SHordeGameState_generated_h
#error "SHordeGameState.generated.h already included, missing '#pragma once' in SHordeGameState.h"
#endif
#define COOPSHOOTERGAME_SHordeGameState_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_oldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WaveState(EWaveState(Z_Param_oldState)); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_oldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WaveState(EWaveState(Z_Param_oldState)); \
		P_NATIVE_END; \
	}


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_EVENT_PARMS \
	struct SHordeGameState_eventwaveStateChanged_Parms \
	{ \
		EWaveState newState; \
		EWaveState oldState; \
	};


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_CALLBACK_WRAPPERS
#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASHordeGameState(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASHordeGameState(); \
public: \
	DECLARE_CLASS(ASHordeGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASHordeGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_INCLASS \
private: \
	static void StaticRegisterNativesASHordeGameState(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASHordeGameState(); \
public: \
	DECLARE_CLASS(ASHordeGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASHordeGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASHordeGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASHordeGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHordeGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHordeGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHordeGameState(ASHordeGameState&&); \
	NO_API ASHordeGameState(const ASHordeGameState&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASHordeGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASHordeGameState(ASHordeGameState&&); \
	NO_API ASHordeGameState(const ASHordeGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASHordeGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASHordeGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASHordeGameState)


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__waveState() { return STRUCT_OFFSET(ASHordeGameState, waveState); }


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_29_PROLOG \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_EVENT_PARMS


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_CALLBACK_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_CALLBACK_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_SHordeGameState_h


#define FOREACH_ENUM_EWAVESTATE(op) \
	op(EWaveState::waitingToStart) \
	op(EWaveState::prepairingNextWave) \
	op(EWaveState::waveInProgress) \
	op(EWaveState::waitingToComplete) \
	op(EWaveState::waveComplete) \
	op(EWaveState::gameOver) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
