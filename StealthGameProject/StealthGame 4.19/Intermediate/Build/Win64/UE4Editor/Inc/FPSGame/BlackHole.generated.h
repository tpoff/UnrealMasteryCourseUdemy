// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_BlackHole_generated_h
#error "BlackHole.generated.h already included, missing '#pragma once' in BlackHole.h"
#endif
#define FPSGAME_BlackHole_generated_h

#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonEventHorizonOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onEventHorizonOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonEventHorizonOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->onEventHorizonOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_ABlackHole(); \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABlackHole(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_ABlackHole(); \
public: \
	DECLARE_CLASS(ABlackHole, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ABlackHole) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlackHole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlackHole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public:


#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHole(ABlackHole&&); \
	NO_API ABlackHole(const ABlackHole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlackHole)


#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__meshComponent() { return STRUCT_OFFSET(ABlackHole, meshComponent); } \
	FORCEINLINE static uint32 __PPO__EventHorizon() { return STRUCT_OFFSET(ABlackHole, EventHorizon); } \
	FORCEINLINE static uint32 __PPO__GravityWell() { return STRUCT_OFFSET(ABlackHole, GravityWell); }


#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_13_PROLOG
#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_RPC_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_INCLASS \
	StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_INCLASS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_BlackHole_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_4_19_Source_FPSGame_Public_BlackHole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
