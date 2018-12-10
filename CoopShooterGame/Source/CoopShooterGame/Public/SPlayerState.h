// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class COOPSHOOTERGAME_API ASPlayerState : public APlayerState
{
	GENERATED_BODY()
	
	
public:
	UFUNCTION(BlueprintCallable, Category="playerState")
	void addScore(float scoreDelta);
	
};
