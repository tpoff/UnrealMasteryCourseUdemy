// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSGameMode.h"
#include "FPSHUD.h"
#include "FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "kismet/GameplayStatics.h"

AFPSGameMode::AFPSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSHUD::StaticClass();
}

void AFPSGameMode::CompleteMission(APawn* instigatorPawn){


	if (instigatorPawn) {
		instigatorPawn->DisableInput(nullptr);

		if (SpectatingViewpointClass != nullptr) {
			TArray<AActor*> spectatingActors;
			UGameplayStatics::GetAllActorsOfClass(this, SpectatingViewpointClass, spectatingActors);

			if (spectatingActors.Num() > 0)
			{
				AActor* newViewTarget = spectatingActors[0];
				APlayerController* playerController = Cast<APlayerController>(instigatorPawn->GetController());
				if (playerController) {
					playerController->SetViewTargetWithBlend(newViewTarget, .5f, EViewTargetBlendFunction::VTBlend_Cubic);
				}

			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("GameMode spectator class is null. Cannot change spectate view target."))
		}


		


	}

	OnMissionCompleted(instigatorPawn);



	




}
