// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWeapon.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;

//contains information of a single hitscan weapon linetrace. 
USTRUCT()
struct FHitScanTrace {
	GENERATED_BODY()

public:
	UPROPERTY()
	TEnumAsByte<EPhysicalSurface> surfaceType; 

	UPROPERTY()
	FVector_NetQuantize TraceTo;

};

UCLASS()
class COOPSHOOTERGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASWeapon();

protected:
	virtual void BeginPlay() override;

	


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	USkeletalMeshComponent* meshComponent;


	



	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Weapon")
	TSubclassOf<UDamageType> damageType; 


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		FName muzzleSocketName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* muzzleFlashEffect;



	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* defaultImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* fleshImpactEffect;



	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* tracerEffect;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		FName tracerTargetName;


	void playFireEffects(FVector traceEnd);



	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<UCameraShake> fireCamShake;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	float baseDamage;


	UFUNCTION(Server, Reliable, WithValidation)
	void ServerFire();

	virtual void Fire();

	void PlayImpactEffects(EPhysicalSurface surfaceType, FVector impactPoint);

	FTimerHandle timerHandle_timeBetweenShots;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	bool loopFire;

	float lastFireTime;

	//rpm - bullets per minute. 
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	float rateOfFire;

	//to be calculated from rate of fire. 
	float timeBetweenShots;

	UPROPERTY(ReplicatedUsing =OnRep_HitScanTrace)
	FHitScanTrace hitScanTrace;

	UFUNCTION()
	void OnRep_HitScanTrace();

public:

	virtual void startFire();

	virtual void stopFire();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		virtual void shakePlayerCamera();
};
