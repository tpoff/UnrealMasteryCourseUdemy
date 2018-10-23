// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FpsPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AFpsPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:
	UFUNCTION(BlueprintImplementableEvent, Category="PlayerController")
	void OnMissionCompleted(APawn* instigatorPawn, bool bMissionSuccess);
	
};
