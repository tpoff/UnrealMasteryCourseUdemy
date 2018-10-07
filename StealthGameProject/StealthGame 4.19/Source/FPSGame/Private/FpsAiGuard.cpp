// Fill out your copyright notice in the Description page of Project Settings.

#include "FpsAiGuard.h"
#include "Perception/PawnSensingComponent.h"


// Sets default values
AFpsAiGuard::AFpsAiGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	pawnSensingComponent = CreateAbstractDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));


}

// Called when the game starts or when spawned
void AFpsAiGuard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFpsAiGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



