// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerupActor.generated.h"

UCLASS()
class COOPSHOOTERGAME_API ASPowerupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*time between powerup ticks*/
	UPROPERTY(EditDefaultsOnly, Category="Powerups")
	float powerupInterval;

	//total times we apply the power up effect. 
	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	int32 totalNumberOfTicks;

	int32 ticksProcessed;

	FTimerHandle timerhandle_powerupTick;

	UFUNCTION()
	void onTickPowerup();

	UPROPERTY(ReplicatedUsing=OnRep_PowerupActive)
	bool bIsPowerupActive;

	UFUNCTION()
		void OnRep_PowerupActive();

public:	

	void activatePowerup(AActor * activeFor);

	UFUNCTION(BlueprintImplementableEvent, Category="Powerups")
	void onActivated(AActor * activeFor);

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void onPowerupTicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
	void onExpired();



	UFUNCTION(BlueprintImplementableEvent, Category = "Powerups")
		void onPowerupStateChanged(bool bNewIsActive);
	
};
