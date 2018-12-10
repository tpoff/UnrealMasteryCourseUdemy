// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SHordeGameState.generated.h"

UENUM(BlueprintType)
enum class EWaveState : uint8{
	waitingToStart,

	prepairingNextWave,

	waveInProgress,

	waitingToComplete,

	waveComplete,

	gameOver, 

};


/**
 * 
 */
UCLASS()
class COOPSHOOTERGAME_API ASHordeGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	void setWaveState(EWaveState newState);

	
protected:
	UFUNCTION()
	void OnRep_WaveState(EWaveState oldState);

	UFUNCTION(BlueprintImplementableEvent, Category="GameState")
	void waveStateChanged(EWaveState newState, EWaveState oldState);


	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_WaveState, Category = "GameState")
		EWaveState waveState;
};
