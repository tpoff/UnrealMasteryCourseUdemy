// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef FPSGAME_FpsGameState_generated_h
#error "FpsGameState.generated.h already included, missing '#pragma once' in FpsGameState.h"
#endif
#define FPSGAME_FpsGameState_generated_h

#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_RPC_WRAPPERS \
	virtual void MulticastOnMissionComplete_Implementation(APawn* instigatorPawn, bool bMissionSuccess); \
 \
	DECLARE_FUNCTION(execMulticastOnMissionComplete) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_instigatorPawn); \
		P_GET_UBOOL(Z_Param_bMissionSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastOnMissionComplete_Implementation(Z_Param_instigatorPawn,Z_Param_bMissionSuccess); \
		P_NATIVE_END; \
	}


#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnMissionComplete_Implementation(APawn* instigatorPawn, bool bMissionSuccess); \
 \
	DECLARE_FUNCTION(execMulticastOnMissionComplete) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_instigatorPawn); \
		P_GET_UBOOL(Z_Param_bMissionSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastOnMissionComplete_Implementation(Z_Param_instigatorPawn,Z_Param_bMissionSuccess); \
		P_NATIVE_END; \
	}


#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_EVENT_PARMS \
	struct FpsGameState_eventMulticastOnMissionComplete_Parms \
	{ \
		APawn* instigatorPawn; \
		bool bMissionSuccess; \
	};


#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_CALLBACK_WRAPPERS
#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFpsGameState(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFpsGameState(); \
public: \
	DECLARE_CLASS(AFpsGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFpsGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFpsGameState(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFpsGameState(); \
public: \
	DECLARE_CLASS(AFpsGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFpsGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFpsGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFpsGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFpsGameState(AFpsGameState&&); \
	NO_API AFpsGameState(const AFpsGameState&); \
public:


#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFpsGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFpsGameState(AFpsGameState&&); \
	NO_API AFpsGameState(const AFpsGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFpsGameState)


#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_PRIVATE_PROPERTY_OFFSET
#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_12_PROLOG \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_EVENT_PARMS


#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_RPC_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_CALLBACK_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_INCLASS \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_CALLBACK_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_4_19_Source_FPSGame_Public_FpsGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
