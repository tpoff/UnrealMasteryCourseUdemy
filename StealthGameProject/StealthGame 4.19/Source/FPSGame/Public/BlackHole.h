// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlackHole.generated.h"


class USphereComponent;


UCLASS()
class FPSGAME_API ABlackHole : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlackHole();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* meshComponent;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventHorizon")
	USphereComponent* EventHorizon;



	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GravityWell")
	USphereComponent* GravityWell;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION()
	void onEventHorizonOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult &SweepResult);

	
	
};
