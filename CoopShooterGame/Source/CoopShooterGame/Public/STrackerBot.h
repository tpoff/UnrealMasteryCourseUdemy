// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "STrackerBot.generated.h"

class USHealthComponent;
class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class COOPSHOOTERGAME_API ASTrackerBot : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASTrackerBot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(VisibleDefaultsOnly, Category="Components")
	UStaticMeshComponent* meshComponent; 


	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	USHealthComponent* healthComponent; 

	FVector getNextPathPoint();

	FVector nextPathPoint;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USphereComponent* sphereComponent;

	UPROPERTY(EditDefaultsOnly, Category="TrackerBot")
	float movementForce;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	float requiredDistanceToTarget;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	bool bUseVelocityChange;

	UFUNCTION()
	void HandleTakeDamage(USHealthComponent* OwningHealthComponent, float health, float healthDelta, const class UDamageType* damageType, class AController* instigatedBy, AActor* damageCauser);

	//dynamic material to pulse on dmaage
	UMaterialInstanceDynamic* matInst;


	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	UParticleSystem* explosionEffect;

	bool bExploded;
	bool bStartedSelfDestruction;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
		float explosionRadius;
	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
		float explosionDamage;

	void SelfDestruct();

	FTimerHandle timerHandle_selfDamage;
	void damageSelf();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* otherActor) override;
	
};
