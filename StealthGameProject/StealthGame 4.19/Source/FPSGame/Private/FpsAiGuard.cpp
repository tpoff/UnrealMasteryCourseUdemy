// Fill out your copyright notice in the Description page of Project Settings.

#include "FpsAiGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "AI/Navigation/NavigationSystem.h"
#include "FPSGameMode.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AFpsAiGuard::AFpsAiGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	pawnSensingComponent = CreateAbstractDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));

	patrolling = true;
	guardState = EAIState::Idle;

}

// Called when the game starts or when spawned
void AFpsAiGuard::BeginPlay()
{
	Super::BeginPlay();
	pawnSensingComponent->OnSeePawn.AddDynamic(this, &AFpsAiGuard::OnPawnSeen);
	pawnSensingComponent->OnHearNoise.AddDynamic(this, &AFpsAiGuard::onNoiseHeard);

	originalRotation = GetActorRotation();

	//get all the waypoints
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), waypoints);

	if (patrolling)
		goToRandomWaypoint();
	setGuardState(EAIState::Idle);
	onStateChanged(guardState);
	
}

void AFpsAiGuard::OnPawnSeen(APawn * seenPawn)
{

	UE_LOG(LogTemp, Log, TEXT("Guard saw something!"));
	if (seenPawn == nullptr) {
		return; 
	}
	DrawDebugSphere(GetWorld(), seenPawn->GetActorLocation(), 32.0f, 12, FColor::Red, false, 10.0f);




	AFPSGameMode* gm = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if (gm) {
		gm->CompleteMission(seenPawn, false);
	}

	if (patrolling) {
		AController* controller = GetController();
		if (controller) {
			controller->StopMovement();
		}
	}

	setGuardState(EAIState::Alerted);
}

void AFpsAiGuard::onNoiseHeard(APawn * instigatorPawn, const FVector & location, float volume)
{
	if (guardState != EAIState::Alerted)
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

		if (patrolling) {
			AController* controller = GetController();
			if (controller) {
				controller->StopMovement();
			}
		}
	
		GetWorldTimerManager().SetTimer(timerHandle_resetOrientation, this, &AFpsAiGuard::resetOrientation, 3.0f, false);


	
		setGuardState(EAIState::Suspicious);

	}

}

void AFpsAiGuard::resetOrientation()
{
	if (guardState != EAIState::Alerted)
	{
		setGuardState(EAIState::Idle);
		SetActorRotation(originalRotation);
		if (patrolling)
			goToRandomWaypoint();
	}
}

ATargetPoint * AFpsAiGuard::getRandomWaypoint()
{
	auto index = FMath::RandRange(0, waypoints.Num() - 1);
	return Cast<ATargetPoint>(waypoints[index]);
}

void AFpsAiGuard::goToRandomWaypoint()
{
	currentWaypoint = getRandomWaypoint();
	UNavigationSystem::SimpleMoveToActor(GetController(), currentWaypoint);
}

void AFpsAiGuard::OnRep_GuardState()
{
	onStateChanged(guardState);
}

void AFpsAiGuard::setGuardState(EAIState newState)
{
	if (guardState != newState) {
		guardState = newState;
		OnRep_GuardState();
	}


}

// Called every frame
void AFpsAiGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



	if (currentWaypoint) {
		FVector delta = GetActorLocation() - currentWaypoint->GetActorLocation();
		float distanceToWaypoint = delta.Size();

		if (distanceToWaypoint < 100) {
			goToRandomWaypoint();
			UE_LOG(LogTemp, Log, TEXT("dwarf found target"));
		}
	}
}



void AFpsAiGuard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps)const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AFpsAiGuard, guardState);
}