// Fill out your copyright notice in the Description page of Project Settings.

#include "SHealthComponent.h"
#include "../../Public/Components/SHealthComponent.h"


// Sets default values for this component's properties
USHealthComponent::USHealthComponent(){

	// ...
	defaultHealth = 100;
}


// Called when the game starts
void USHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	health = defaultHealth;
	// ...
	AActor* owner = GetOwner();
	if (owner) {
		owner->OnTakeAnyDamage.AddDynamic(this, &USHealthComponent::handleTakeAnyDamage);

	}
}

void USHealthComponent::handleTakeAnyDamage(AActor * damagedActor, float damage, const UDamageType * damageType, AController * instigatedBy, AActor * damageCauser)
{
	if (damage >= 0) {
		health = FMath::Clamp(health - damage, 0.0f, defaultHealth);
	}

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(health));
	onHealthChanged.Broadcast(this, health, damage, damageType, instigatedBy, damageCauser);
}

