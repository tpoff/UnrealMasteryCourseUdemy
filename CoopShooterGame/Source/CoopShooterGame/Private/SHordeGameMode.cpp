// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/SHordeGameMode.h"
#include "../Public/SHordeGameState.h"
#include "../Public/SPlayerState.h"
#include "TimerManager.h"
#include "../Public/Components/SHealthComponent.h"

ASHordeGameMode::ASHordeGameMode()
{
	timeBetweenWaves = 2.0f;

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1;

	GameStateClass = ASHordeGameState::StaticClass();

	PlayerStateClass = ASPlayerState::StaticClass();
}

void ASHordeGameMode::StartPlay() {
	Super::StartPlay();

	prepareForNextWave();
}

void ASHordeGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	checkWaveState();
	checkAnyPlayerAlive();
}

void ASHordeGameMode::startWave()
{
	setWaveState(EWaveState::waveInProgress);
	waveCount++;


	numberOfBotsToSpawn = 2 * waveCount;

	GetWorldTimerManager().SetTimer(timerHandle_botSpawner, this, &ASHordeGameMode::spawnBotTimerElapsed, 1.0f, true, 0.0f);
}

void ASHordeGameMode::endWave()
{
	setWaveState(EWaveState::waitingToComplete);
	GetWorldTimerManager().ClearTimer(timerHandle_botSpawner);

	
}

void ASHordeGameMode::prepareForNextWave()
{
	setWaveState(EWaveState::waitingToStart);
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ASHordeGameMode::startWave, timeBetweenWaves, false);
	restartDeadPlayers();



}


void ASHordeGameMode::checkAnyPlayerAlive() {
	for (FConstPlayerControllerIterator it = GetWorld()->GetPlayerControllerIterator(); it; it++) {

		APlayerController* pc = it->Get();

		if (pc && pc->GetPawn())
		{
			APawn* myPawn = pc->GetPawn();
			USHealthComponent* healthComponent = Cast<USHealthComponent>(myPawn->GetComponentByClass(USHealthComponent::StaticClass()));
			if (ensure(healthComponent)) {
				if (healthComponent->getHealth() > 0) {
					//player still alive, so stop checking
					return; 
				}
			}
		}
	}

	//we make it here, there is no player alive, so we end the game. 
	gameOver();
}

void ASHordeGameMode::setWaveState(EWaveState newState)
{
	ASHordeGameState* gs = GetGameState<ASHordeGameState>();

	if (ensureAlways(gs)) {
		gs->setWaveState(newState);
	}

}

void ASHordeGameMode::restartDeadPlayers()
{
	for (FConstPlayerControllerIterator it = GetWorld()->GetPlayerControllerIterator(); it; it++) {

		APlayerController* pc = it->Get();

		if (pc && pc->GetPawn()==nullptr) {
			RestartPlayer(pc);
		}
	}



}

void ASHordeGameMode::gameOver() {
	setWaveState(EWaveState::gameOver);
	endWave();

	//add the rest of the game over code. 
	UE_LOG(LogTemp, Log, TEXT("GAME OVER!"));
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
		setWaveState(EWaveState::waveComplete);
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


