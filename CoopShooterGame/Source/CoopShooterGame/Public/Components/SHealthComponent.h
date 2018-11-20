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

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadOnly, Category = "HealthComponent")
	float health;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
	float defaultHealth;

	UFUNCTION()
	void handleTakeAnyDamage(AActor* damagedActor, float damage, const class UDamageType* damageType, class AController* instigatedBy, AActor* damageCauser);
	

public:
	UPROPERTY(BlueprintAssignable, Category="Events")
	FOnHealthChangedSignature onHealthChanged;

};
