// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FpsAiGuard.generated.h"

class UPawnSensingComponent;

UCLASS()
class FPSGAME_API AFpsAiGuard : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFpsAiGuard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPawnSensingComponent* pawnSensingComponent; 


	UFUNCTION()
	void OnPawnSeen(APawn* seenPawn);


	UFUNCTION()
		void onNoiseHeard(APawn* instigatorPawn, const FVector& location, float volume); 



	FRotator originalRotation;
	UFUNCTION()
	void resetOrientation();


	FTimerHandle timerHandle_resetOrientation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	
	
};
