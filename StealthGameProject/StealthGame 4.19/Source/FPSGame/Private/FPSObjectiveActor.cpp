// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSObjectiveActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = meshComponent; 

	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Component"));
	sphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	sphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	sphereComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	sphereComponent->SetupAttachment(meshComponent);

	


}

// Called when the game starts or when spawned
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();
	playEffects();
}

void AFPSObjectiveActor::playEffects()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, pickupFx, GetActorLocation());
}

// Called every frame
void AFPSObjectiveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor * otherActor)
{
	Super::NotifyActorBeginOverlap(otherActor);


	playEffects();
}

