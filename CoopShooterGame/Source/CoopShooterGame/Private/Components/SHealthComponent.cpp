// Fill out your copyright notice in the Description page of Project Settings.

#include "SHealthComponent.h"
#include "../../Public/Components/SHealthComponent.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
USHealthComponent::USHealthComponent(){

	// ...
	defaultHealth = 100;

	SetIsReplicated(true);
}


// Called when the game starts
void USHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	//only hook if on server
	if (GetOwnerRole() == ROLE_Authority) {

		AActor* owner = GetOwner();
		if (owner) {
			owner->OnTakeAnyDamage.AddDynamic(this, &USHealthComponent::handleTakeAnyDamage);

		}
	}
	health = defaultHealth;
	
}

void USHealthComponent::OnRep_Health(float oldHealth)
{
	float damage = oldHealth - health;
	onHealthChanged.Broadcast(this, health, damage, nullptr, nullptr, nullptr);

}

void USHealthComponent::handleTakeAnyDamage(AActor * damagedActor, float damage, const UDamageType * damageType, AController * instigatedBy, AActor * damageCauser)
{
	if (damage >= 0) {
		health = FMath::Clamp(health - damage, 0.0f, defaultHealth);
	}

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(health));
	onHealthChanged.Broadcast(this, health, damage, damageType, instigatedBy, damageCauser);
}

void USHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);


	DOREPLIFETIME(USHealthComponent, health);
}