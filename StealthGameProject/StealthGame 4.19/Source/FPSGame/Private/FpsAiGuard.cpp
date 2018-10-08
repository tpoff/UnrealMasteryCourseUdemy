// Fill out your copyright notice in the Description page of Project Settings.

#include "FpsAiGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"

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
	pawnSensingComponent->OnSeePawn.AddDynamic(this, &AFpsAiGuard::OnPawnSeen);
	pawnSensingComponent->OnHearNoise.AddDynamic(this, &AFpsAiGuard::onNoiseHeard);

	originalRotation = GetActorRotation();
	
}

void AFpsAiGuard::OnPawnSeen(APawn * seenPawn)
{

	UE_LOG(LogTemp, Log, TEXT("Guard saw something!"));
	if (seenPawn == nullptr) {
		return; 
	}
	DrawDebugSphere(GetWorld(), seenPawn->GetActorLocation(), 32.0f, 12, FColor::Red, false, 10.0f);
}

void AFpsAiGuard::onNoiseHeard(APawn * instigatorPawn, const FVector & location, float volume)
{
	UE_LOG(LogTemp, Log, TEXT("Guard heard something!"));

	
	DrawDebugSphere(GetWorld(), location, 32.0f, 12, FColor::Green, false, 10.0f);

	FVector direction = location - GetActorLocation();
	direction.Normalize();

	FRotator newLookAt = FRotationMatrix::MakeFromX(direction).Rotator();
	newLookAt.Pitch = 0;
	newLookAt.Roll = 0; 

	SetActorRotation(newLookAt);

	GetWorldTimerManager().ClearTimer(timerHandle_resetOrientation);
	
	GetWorldTimerManager().SetTimer(timerHandle_resetOrientation, this, &AFpsAiGuard::resetOrientation, 3.0f, false);
}

void AFpsAiGuard::resetOrientation()
{
	SetActorRotation(originalRotation);
}

// Called every frame
void AFpsAiGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



