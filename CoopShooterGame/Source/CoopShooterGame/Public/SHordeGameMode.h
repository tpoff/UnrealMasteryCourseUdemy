// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SHordeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class COOPSHOOTERGAME_API ASHordeGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	FTimerHandle timerHandle_botSpawner;
	

	int32 numberOfBotsToSpawn;

	int32 waveCount;

	UPROPERTY(EditDefaultsOnly, Category="GameMode")
	float timeBetweenWaves;
protected:

	//hook for bp to spawn a single bot, 
	UFUNCTION(BlueprintImplementableEvent, Category="GameMode")
	void spawnNewBot();

	void spawnBotTimerElapsed();
	
	//start spawning bots
	void startWave();

	//stop spawning bots
	void endWave();


	//set timer for next startwave
	void prepareForNextWave(); 


public:
	ASHordeGameMode();

	virtual void StartPlay() override;
};
