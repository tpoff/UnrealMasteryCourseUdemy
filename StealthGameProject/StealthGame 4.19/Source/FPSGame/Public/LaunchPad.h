// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaunchPad.generated.h"

class UBoxComponent;


UCLASS()
class FPSGAME_API ALaunchPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaunchPad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* PadMesh;


	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* arrowMesh;



	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "collisionBox")
	UBoxComponent* collisionBox;

	UPROPERTY(EditInstanceOnly,  Category = "LaunchPad")
	float launchStrength;
	UPROPERTY(EditInstanceOnly,  Category = "LaunchPad")
	float launchPitchAngle; 


	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* launchEffect;



	UFUNCTION()
	void OverlapLaunchPad(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	
	
};
