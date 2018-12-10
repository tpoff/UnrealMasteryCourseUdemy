// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SHordeGameMode.generated.h"

enum class EWaveState : uint8;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, victimActor, AActor*, killerActor, AController*, killerController); //killed actor, killer actor, 

/**
 * 
 */
UCLASS()
class COOPSHOOTERGAME_API ASHordeGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	FTimerHandle timerHandle_botSpawner;
	FTimerHandle TimerHandle_NextWaveStart;
	

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


	void gameOver();

	//set timer for next startwave
	void prepareForNextWave(); 


	void checkWaveState();
	void checkAnyPlayerAlive();

	void setWaveState(EWaveState newState);

public:
	ASHordeGameMode();

	virtual void StartPlay() override;

	virtual void Tick(float DeltaSeconds)override;

	UPROPERTY(BlueprintAssignable, Category="GameMode")
	FOnActorKilled OnActorKilled;

};
