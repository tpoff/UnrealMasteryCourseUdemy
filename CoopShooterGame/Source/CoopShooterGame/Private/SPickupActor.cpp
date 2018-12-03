// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"
#include "../Public/SPickupActor.h"

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
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASPickupActor::NotifyActorBeginOverlap(AActor * otherActor)
{
	Super::NotifyActorBeginOverlap(otherActor);
}


