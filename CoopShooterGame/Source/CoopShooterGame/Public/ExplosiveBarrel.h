// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExplosiveBarrel.generated.h"


class USHealthComponent;
class UStaticMeshComponent;
class UParticleSystem;
class UMaterialInterface;
class URadialForceComponent;

UCLASS()
class COOPSHOOTERGAME_API AExplosiveBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosiveBarrel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		USHealthComponent* healthComponent;
	//our mesh for the projectile.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* meshComponent;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* impactEffect;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barrel")
	UMaterialInterface* explodedMaterial;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barrel")
	float explosionImpulse;


	UPROPERTY(VisibleAnywhere,  Category = "Components")
	URadialForceComponent* radialForceComponent;

	UPROPERTY(ReplicatedUsing=OnRep_Exploded, BlueprintReadOnly, Category = "Barrel")
	bool bDied;

	UFUNCTION()
	void OnRep_Exploded();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		TSubclassOf<UDamageType> damageType;

	UFUNCTION()
		void onHealthChanged(USHealthComponent* OwningHealthComponent, float health, float healthDelta, const class UDamageType* fromDamageType, class AController* instigatedBy, AActor* damageCauser);




	
	
};
