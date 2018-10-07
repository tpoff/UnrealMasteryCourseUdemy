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
#ifdef FPSGAME_LaunchPad_generated_h
#error "LaunchPad.generated.h already included, missing '#pragma once' in LaunchPad.h"
#endif
#define FPSGAME_LaunchPad_generated_h

#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapLaunchPad) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverlapLaunchPad(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapLaunchPad) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OverlapLaunchPad(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaunchPad(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_ALaunchPad(); \
public: \
	DECLARE_CLASS(ALaunchPad, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPad) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALaunchPad(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_ALaunchPad(); \
public: \
	DECLARE_CLASS(ALaunchPad, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPad) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALaunchPad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaunchPad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPad(ALaunchPad&&); \
	NO_API ALaunchPad(const ALaunchPad&); \
public:


#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPad(ALaunchPad&&); \
	NO_API ALaunchPad(const ALaunchPad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaunchPad)


#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PadMesh() { return STRUCT_OFFSET(ALaunchPad, PadMesh); } \
	FORCEINLINE static uint32 __PPO__arrowMesh() { return STRUCT_OFFSET(ALaunchPad, arrowMesh); } \
	FORCEINLINE static uint32 __PPO__collisionBox() { return STRUCT_OFFSET(ALaunchPad, collisionBox); } \
	FORCEINLINE static uint32 __PPO__launchStrength() { return STRUCT_OFFSET(ALaunchPad, launchStrength); } \
	FORCEINLINE static uint32 __PPO__launchPitchAngle() { return STRUCT_OFFSET(ALaunchPad, launchPitchAngle); } \
	FORCEINLINE static uint32 __PPO__launchEffect() { return STRUCT_OFFSET(ALaunchPad, launchEffect); }


#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_12_PROLOG
#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_RPC_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_INCLASS \
	StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_4_19_Source_FPSGame_Public_LaunchPad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
