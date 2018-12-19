// Fill out your copyright notice in the Description page of Project Settings.

#include "../../Public/Components/SHealthComponent.h"
#include "../../Public/SHordeGameMode.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
USHealthComponent::USHealthComponent(){

	// ...
	defaultHealth = 100;

	SetIsReplicated(true);
	bIsDead = false;

	teamNum = 255;

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
	if (isFriendly(GetOwner(), damageCauser)) {
		return; 
	}

	if (damage >= 0) {
		health = FMath::Clamp(health - damage, 0.0f, defaultHealth);
	}

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(health));
	onHealthChanged.Broadcast(this, health, damage, damageType, instigatedBy, damageCauser);

	if (health <= 0 && bIsDead == false) {
		bIsDead = true;
		ASHordeGameMode* gm =Cast<ASHordeGameMode>( GetWorld()->GetAuthGameMode());
		if (gm) {
			gm->OnActorKilled.Broadcast(GetOwner(), damageCauser, instigatedBy);
		}

	}
}

void USHealthComponent::addHealth(float healAmount)
{
	if (healAmount >= 0.0f && health >0.0f) {
		health = FMath::Clamp(health+healAmount, 0.0f, defaultHealth);
		onHealthChanged.Broadcast(this, health, -healAmount, nullptr, nullptr, nullptr);
	}
}

float USHealthComponent::getHealth() const
{
	return health;
}

bool USHealthComponent::isFriendly(AActor* actorA, AActor* actorB)
{
	if (actorA == actorB) {
		return false;
	}
	if (actorA == nullptr || actorB == nullptr)
		return true;

	USHealthComponent* healthCompA = Cast<USHealthComponent>(actorA->GetComponentByClass(USHealthComponent::StaticClass()));
	USHealthComponent* healthCompB = Cast<USHealthComponent>(actorB->GetComponentByClass(USHealthComponent::StaticClass()));

	if (healthCompA == nullptr || healthCompB == nullptr)
		return true;

	if (healthCompA->teamNum == healthCompB->teamNum) {
		return true;
	}

	return false;
}

void USHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USHealthComponent, health);
}