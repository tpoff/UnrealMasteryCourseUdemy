// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
class APawn;
struct FVector;
enum class EAIState : uint8;
#ifdef FPSGAME_FpsAiGuard_generated_h
#error "FpsAiGuard.generated.h already included, missing '#pragma once' in FpsAiGuard.h"
#endif
#define FPSGAME_FpsAiGuard_generated_h

#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgoToRandomWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->goToRandomWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetRandomWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->getRandomWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execresetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->resetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_instigatorPawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onNoiseHeard(Z_Param_instigatorPawn,Z_Param_Out_location,Z_Param_volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_seenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_seenPawn); \
		P_NATIVE_END; \
	}


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgoToRandomWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->goToRandomWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetRandomWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->getRandomWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execresetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->resetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execonNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_instigatorPawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onNoiseHeard(Z_Param_instigatorPawn,Z_Param_Out_location,Z_Param_volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_seenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_seenPawn); \
		P_NATIVE_END; \
	}


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_EVENT_PARMS \
	struct FpsAiGuard_eventonStateChanged_Parms \
	{ \
		EAIState newState; \
	};


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_CALLBACK_WRAPPERS
#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFpsAiGuard(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFpsAiGuard(); \
public: \
	DECLARE_CLASS(AFpsAiGuard, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFpsAiGuard) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAFpsAiGuard(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFpsAiGuard(); \
public: \
	DECLARE_CLASS(AFpsAiGuard, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFpsAiGuard) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFpsAiGuard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFpsAiGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsAiGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsAiGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFpsAiGuard(AFpsAiGuard&&); \
	NO_API AFpsAiGuard(const AFpsAiGuard&); \
public:


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFpsAiGuard(AFpsAiGuard&&); \
	NO_API AFpsAiGuard(const AFpsAiGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsAiGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsAiGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFpsAiGuard)


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pawnSensingComponent() { return STRUCT_OFFSET(AFpsAiGuard, pawnSensingComponent); } \
	FORCEINLINE static uint32 __PPO__patrolling() { return STRUCT_OFFSET(AFpsAiGuard, patrolling); } \
	FORCEINLINE static uint32 __PPO__waypoints() { return STRUCT_OFFSET(AFpsAiGuard, waypoints); } \
	FORCEINLINE static uint32 __PPO__currentWaypoint() { return STRUCT_OFFSET(AFpsAiGuard, currentWaypoint); }


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_20_PROLOG \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_EVENT_PARMS


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_RPC_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_CALLBACK_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_INCLASS \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_CALLBACK_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_INCLASS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_4_19_Source_FPSGame_Public_FpsAiGuard_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) \
	op(EAIState::Alerted) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
