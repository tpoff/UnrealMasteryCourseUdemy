// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef FPSGAME_FpsPlayerController_generated_h
#error "FpsPlayerController.generated.h already included, missing '#pragma once' in FpsPlayerController.h"
#endif
#define FPSGAME_FpsPlayerController_generated_h

#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_RPC_WRAPPERS
#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_EVENT_PARMS \
	struct FpsPlayerController_eventOnMissionCompleted_Parms \
	{ \
		APawn* instigatorPawn; \
		bool bMissionSuccess; \
	};


#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_CALLBACK_WRAPPERS
#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFpsPlayerController(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFpsPlayerController(); \
public: \
	DECLARE_CLASS(AFpsPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFpsPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFpsPlayerController(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFpsPlayerController(); \
public: \
	DECLARE_CLASS(AFpsPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFpsPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFpsPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFpsPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFpsPlayerController(AFpsPlayerController&&); \
	NO_API AFpsPlayerController(const AFpsPlayerController&); \
public:


#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFpsPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFpsPlayerController(AFpsPlayerController&&); \
	NO_API AFpsPlayerController(const AFpsPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFpsPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFpsPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFpsPlayerController)


#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_12_PROLOG \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_EVENT_PARMS


#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_RPC_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_CALLBACK_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_INCLASS \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_CALLBACK_WRAPPERS \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_4_19_Source_FPSGame_Public_FpsPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
