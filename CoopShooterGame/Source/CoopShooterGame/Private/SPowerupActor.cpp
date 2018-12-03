// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/SPowerupActor.h"


// Sets default values
ASPowerupActor::ASPowerupActor()
{
	powerupInterval = 0.0f;
	totalNumberOfTicks = 0;
}

// Called when the game starts or when spawned
void ASPowerupActor::BeginPlay()
{
	Super::BeginPlay();
}


void ASPowerupActor::onTickPowerup() {
	ticksProcessed++;

	onPowerupTicked();
	
	if (ticksProcessed >= totalNumberOfTicks) {
		onExpired();
		//delete timer
		GetWorldTimerManager().ClearTimer(timerhandle_powerupTick);
	}

}

void ASPowerupActor::activatePowerup(){
	onActivated();

	ticksProcessed = 0;
	if (powerupInterval > 0.0f) {
		GetWorldTimerManager().SetTimer(timerhandle_powerupTick, this, &ASPowerupActor::onTickPowerup, powerupInterval, true);
	}
	else {
		onTickPowerup();
	}
}
