// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/SHordeGameMode.h"
#include "TimerManager.h"
#include "../Public/Components/SHealthComponent.h"

ASHordeGameMode::ASHordeGameMode()
{
	timeBetweenWaves = 2.0f;

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1;
}

void ASHordeGameMode::StartPlay() {
	Super::StartPlay();

	prepareForNextWave();
}

void ASHordeGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	checkWaveState();
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

	
}

void ASHordeGameMode::prepareForNextWave()
{
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ASHordeGameMode::startWave, timeBetweenWaves, false);
}

void ASHordeGameMode::checkWaveState()
{
	bool isPreparingWave = GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);
	if (numberOfBotsToSpawn > 0||isPreparingWave) {
		return;
	}


	bool anyBotAlive = false;
	for (FConstPawnIterator it = GetWorld()->GetPawnIterator(); it; it++) {
		APawn* testPawn = it->Get();
		if (testPawn == nullptr || testPawn->IsPlayerControlled())
		{
			continue; 
		}

		USHealthComponent* healthComponent = Cast<USHealthComponent>(testPawn->GetComponentByClass(USHealthComponent::StaticClass()));
		if (healthComponent) {
			if (healthComponent->getHealth() > 0) {
				anyBotAlive = true;
				break;
			}
		}
	}

	if (anyBotAlive==false) {
		prepareForNextWave();
	}

}


void ASHordeGameMode::spawnBotTimerElapsed()
{
	spawnNewBot();

	numberOfBotsToSpawn--;
	if (numberOfBotsToSpawn <= 0) {
		endWave();
	}
}