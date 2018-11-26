// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/STrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AI/Navigation/NavigationSystem.h"
#include "AI/Navigation/NavigationPath.h"
#include "GameFramework//Character.h"
#include "DrawDebugHelpers.h"
#include"../Public/Components/SHealthComponent.h"


// Sets default values
ASTrackerBot::ASTrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("meshComponent"));
	meshComponent->SetCanEverAffectNavigation(false);
	meshComponent->SetSimulatePhysics(true);
	RootComponent = meshComponent;

	healthComponent = CreateDefaultSubobject<USHealthComponent>(TEXT("healthComponent"));
	healthComponent->onHealthChanged.AddDynamic(this, &ASTrackerBot::HandleTakeDamage);

	bUseVelocityChange = true;
	movementForce = 1000;
	requiredDistanceToTarget = 100;
}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();
	nextPathPoint =getNextPathPoint();
}

FVector ASTrackerBot::getNextPathPoint()
{
	ACharacter* playerPawn = UGameplayStatics::GetPlayerCharacter(this, 0);

	UNavigationPath* navPath = UNavigationSystem::FindPathToActorSynchronously(this, GetActorLocation(), playerPawn);


	if (navPath->PathPoints.Num() > 1) {
		return navPath->PathPoints[1];
	}
	navPath->PathPoints[1];

	return navPath->PathPoints[0];
}

void ASTrackerBot::HandleTakeDamage(USHealthComponent * OwningHealthComponent, float health, float healthDelta, const UDamageType * damageType, AController * instigatedBy, AActor * damageCauser)
{
	//explode on hitpoints == 0

	//@todo: pulse the material on hit. 

	UE_LOG(LogTemp, Log, TEXT("Trackerbot Hit: Health %s for pawn: %s"), *FString::SanitizeFloat(health), *GetName());

	if (matInst == nullptr) {
		matInst = meshComponent->CreateAndSetMaterialInstanceDynamicFromMaterial(0, meshComponent->GetMaterial(0));

	}
	if (matInst != nullptr) {
		matInst->SetScalarParameterValue("LastTimeDamageTaken", GetWorld()->TimeSeconds);

	}
}

// Called every frame
void ASTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float distanceToTarget = (GetActorLocation() - nextPathPoint).Size();

	if (distanceToTarget <= requiredDistanceToTarget) {
		nextPathPoint = getNextPathPoint();
	}
	//keep moving towards next target.
	FVector forceDirection = nextPathPoint - GetActorLocation();
	forceDirection.Z = 0.0f;
	forceDirection.Normalize();
	forceDirection.Z = 0.0f;
	forceDirection *= movementForce;
	meshComponent->AddForce(forceDirection, NAME_None, bUseVelocityChange);
	DrawDebugDirectionalArrow(GetWorld(), GetActorLocation(), GetActorLocation() + forceDirection, 32, FColor::Yellow, false, 0.0f, 0, 1.0f);

	DrawDebugSphere(GetWorld(), nextPathPoint, 20, 12, FColor::Yellow, false, 4.0f, 1.0f);
	
}


