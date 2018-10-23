// Fill out your copyright notice in the Description page of Project Settings.

#include "FpsGameState.h"
#include "FpsPlayerController.h"



void AFpsGameState::MulticastOnMissionComplete_Implementation(APawn* instigatorPawn, bool bMissionSuccess) {

	for (FConstPlayerControllerIterator it = GetWorld()->GetPlayerControllerIterator(); it; it++) {
		AFpsPlayerController* pc = Cast<AFpsPlayerController>(it->Get());
		if (pc && pc->IsLocalController()) {
			pc->OnMissionCompleted(instigatorPawn, bMissionSuccess);

			APawn* pawn = pc->GetPawn();
			if (pawn) {
				pawn->DisableInput(pc);
			}
		}
	}
}
