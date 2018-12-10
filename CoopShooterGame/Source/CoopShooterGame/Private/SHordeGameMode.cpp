// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/SHordeGameMode.h"
#include "TimerManager.h"

ASHordeGameMode::ASHordeGameMode()
{
	timeBetweenWaves = 2.0f;
}

void ASHordeGameMode::StartPlay() {
	Super::StartPlay();

	prepareForNextWave();
}

void ASHordeGameMode::startWave()
{
	waveCount++;


	numberOfBotsToSpawn = 2 * waveCount;

	GetWorldTimerManager().SetTimer(timerHandle_botSpawner, this, &ASHordeGameMode::spawnBotTimerElapsed, 1.0f, true, 0.0f);
}

void ASHordeGameMode::endWave()
{
	GetWorldTimerManager().ClearTimer(timerHandle_botSpawner);

	prepareForNextWave();
}

void ASHordeGameMode::prepareForNextWave()
{
	FTimerHandle TimerHandle_NextWaveStart;
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ASHordeGameMode::startWave, timeBetweenWaves, false);
}


void ASHordeGameMode::spawnBotTimerElapsed()
{
	spawnNewBot();

	numberOfBotsToSpawn--;
	if (numberOfBotsToSpawn <= 0) {
		endWave();
	}
}