// Fill out your copyright notice in the Description page of Project Settings.

#include "SHordeGameState.h"
#include "Net/UnrealNetwork.h"

void ASHordeGameState::OnRep_WaveState(EWaveState oldState)
{
	waveStateChanged(waveState, oldState);
}
void ASHordeGameState::setWaveState(EWaveState newState)
{
	if (Role == ROLE_Authority) {

		EWaveState oldState = waveState;
		waveState = newState;
		OnRep_WaveState(oldState);
	}
}


void ASHordeGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ASHordeGameState, waveState);
}
