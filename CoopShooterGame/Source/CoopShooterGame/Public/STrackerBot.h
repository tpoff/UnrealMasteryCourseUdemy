// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "STrackerBot.generated.h"

class USHealthComponent;
class UStaticMeshComponent;
class USphereComponent;
class USoundCue;

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

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
		float selfDamageInterval;

	void SelfDestruct();

	FTimerHandle timerHandle_selfDamage;
	void damageSelf();


	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	USoundCue* selfDestructSound;
	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	USoundCue* explosionSound;


	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	bool enableGroupDamageMultiplier;

	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	float max_group_multiplier;


	UPROPERTY(EditDefaultsOnly, Category = "TrackerBot")
	int max_group_size;

	int current_group_size;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* otherActor) override;
	virtual void NotifyActorEndOverlap(AActor* otherActor) override;
	
};
