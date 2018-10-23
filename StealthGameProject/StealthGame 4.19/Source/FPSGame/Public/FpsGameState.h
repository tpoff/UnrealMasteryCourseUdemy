// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FpsGameState.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AFpsGameState : public AGameStateBase
{
	GENERATED_BODY()
	
	
public:

	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnMissionComplete(APawn* instigatorPawn, bool bMissionSuccess);
	
};
