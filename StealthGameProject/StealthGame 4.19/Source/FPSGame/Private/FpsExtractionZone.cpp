// Fill out your copyright notice in the Description page of Project Settings.

#include "FpsExtractionZone.h"
#include "Components/BoxComponent.h"

// Sets default values
AFpsExtractionZone::AFpsExtractionZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	overlapComp = CreateAbstractDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));
	overlapComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	overlapComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	overlapComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	overlapComp->SetBoxExtent(FVector(200.0f));

	overlapComp->SetHiddenInGame(false);

	RootComponent = overlapComp; 

	



}

// Called when the game starts or when spawned
void AFpsExtractionZone::BeginPlay()
{
	Super::BeginPlay();
	overlapComp->OnComponentBeginOverlap.AddDynamic(this, &AFpsExtractionZone::HandleOverlap);
	
}



void AFpsExtractionZone::HandleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	UE_LOG(LogTemp, Log, TEXT("Overlapped with extraction zone"));

}

