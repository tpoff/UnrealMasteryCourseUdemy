// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHealthComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChangedSignature, USHealthComponent*, HealthComponent, float, health, float, healthDelta, const class UDamageType*, damageType, class AController*, instigatedBy, AActor*, damageCauser);

UCLASS( ClassGroup=(COOP), meta=(BlueprintSpawnableComponent) )
class COOPSHOOTERGAME_API USHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USHealthComponent();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="HealthComponent")
	uint8 teamNum;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool bIsDead;

	UPROPERTY(ReplicatedUsing=OnRep_Health, EditDefaultsOnly, BlueprintReadOnly, Category = "HealthComponent")
	float health;

	UFUNCTION()
	void OnRep_Health(float oldHealth);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
	float defaultHealth;

	UFUNCTION()
	void handleTakeAnyDamage(AActor* damagedActor, float damage, const class UDamageType* damageType, class AController* instigatedBy, AActor* damageCauser);
	

public:
	UPROPERTY(BlueprintAssignable, Category="Events")
	FOnHealthChangedSignature onHealthChanged;

	UFUNCTION(BlueprintCallable, Category="HealthComponent")
	void addHealth(float healAmount);


	float getHealth()const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="HealthComponent")
	static bool isFriendly(AActor* actorA, AActor* actorB);
};
