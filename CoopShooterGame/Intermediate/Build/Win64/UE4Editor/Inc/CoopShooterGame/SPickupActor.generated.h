// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPSHOOTERGAME_SPickupActor_generated_h
#error "SPickupActor.generated.h already included, missing '#pragma once' in SPickupActor.h"
#endif
#define COOPSHOOTERGAME_SPickupActor_generated_h

#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_RPC_WRAPPERS
#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPickupActor(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASPickupActor(); \
public: \
	DECLARE_CLASS(ASPickupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASPickupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASPickupActor(); \
	friend COOPSHOOTERGAME_API class UClass* Z_Construct_UClass_ASPickupActor(); \
public: \
	DECLARE_CLASS(ASPickupActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CoopShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ASPickupActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPickupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPickupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPickupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPickupActor(ASPickupActor&&); \
	NO_API ASPickupActor(const ASPickupActor&); \
public:


#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPickupActor(ASPickupActor&&); \
	NO_API ASPickupActor(const ASPickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPickupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPickupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPickupActor)


#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sphereComponent() { return STRUCT_OFFSET(ASPickupActor, sphereComponent); } \
	FORCEINLINE static uint32 __PPO__decalComponent() { return STRUCT_OFFSET(ASPickupActor, decalComponent); }


#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_12_PROLOG
#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_RPC_WRAPPERS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_INCLASS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_PRIVATE_PROPERTY_OFFSET \
	CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_INCLASS_NO_PURE_DECLS \
	CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoopShooterGame_Source_CoopShooterGame_Public_SPickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
