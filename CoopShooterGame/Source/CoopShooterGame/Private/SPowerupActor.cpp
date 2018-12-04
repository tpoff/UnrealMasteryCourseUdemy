// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/SPowerupActor.h"
#include "Net/UnrealNetwork.h"


// Sets default values
ASPowerupActor::ASPowerupActor()
{
	powerupInterval = 0.0f;
	totalNumberOfTicks = 0;
	SetReplicates(true);
	bIsPowerupActive = false;
}

// Called when the game starts or when spawned
void ASPowerupActor::BeginPlay()
{
	Super::BeginPlay();
	bIsPowerupActive = false;
}


void ASPowerupActor::onTickPowerup() {
	ticksProcessed++;

	onPowerupTicked();
	
	if (ticksProcessed >= totalNumberOfTicks) {
		onExpired();
		//delete timer
		GetWorldTimerManager().ClearTimer(timerhandle_powerupTick);
		bIsPowerupActive = false;
		OnRep_PowerupActive();
	}

}

void ASPowerupActor::OnRep_PowerupActive()
{
	onPowerupStateChanged(bIsPowerupActive);
	
}

void ASPowerupActor::activatePowerup(){
	onActivated();
	bIsPowerupActive = true;
	OnRep_PowerupActive();

	ticksProcessed = 0;
	if (powerupInterval > 0.0f) {
		GetWorldTimerManager().SetTimer(timerhandle_powerupTick, this, &ASPowerupActor::onTickPowerup, powerupInterval, true);
	}
	else {
		onTickPowerup();
	}
}


void ASPowerupActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);


	DOREPLIFETIME(ASPowerupActor, bIsPowerupActive);
}