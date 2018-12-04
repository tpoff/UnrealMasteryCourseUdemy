// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/SPickupActor.h"
#include "../Public/SPowerupActor.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "TimerManager.h"

// Sets default values
ASPickupActor::ASPickupActor()
{
	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("sphereComponent"));
	sphereComponent->SetSphereRadius(75.0f);
	RootComponent = sphereComponent; 

	decalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("decalComponent"));
	decalComponent->SetRelativeRotation(FRotator(90, 0, 0));
	decalComponent->DecalSize = FVector(64, 75, 75);
	decalComponent->SetupAttachment(RootComponent);
	coolDownDuration = 10;
	SetReplicates(true);
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();
	if (Role == ROLE_Authority) {
		respawnPowerup();

	}
	
}

void ASPickupActor::respawnPowerup()
{
	if (powerupClass != nullptr) {
		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		powerupInstance = GetWorld()->SpawnActor<ASPowerupActor>(powerupClass, GetTransform(), spawnParams);
	}
}

void ASPickupActor::NotifyActorBeginOverlap(AActor * otherActor)
{

	Super::NotifyActorBeginOverlap(otherActor);
	if (Role == ROLE_Authority && powerupInstance) {
		powerupInstance->activatePowerup();
		powerupInstance = nullptr;

		GetWorldTimerManager().SetTimer(respawnPowerTimer, this, &ASPickupActor::respawnPowerup, coolDownDuration);
	}
}


