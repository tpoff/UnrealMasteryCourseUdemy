// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/STrackerBot.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AI/Navigation/NavigationSystem.h"
#include "AI/Navigation/NavigationPath.h"
#include "GameFramework//Character.h"
#include "DrawDebugHelpers.h"
#include"../Public/Components/SHealthComponent.h"
#include "../Public/SCharacter.h"
#include "Components/SphereComponent.h"
#include "Sound/SoundCue.h"


// Sets default values
ASTrackerBot::ASTrackerBot()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("meshComponent"));
	meshComponent->SetCanEverAffectNavigation(false);
	meshComponent->SetSimulatePhysics(true);
	RootComponent = meshComponent;

	sphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("sphereComponent"));
	sphereComponent->SetSphereRadius(200);
	sphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	sphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	sphereComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	sphereComponent->SetupAttachment(RootComponent);

	healthComponent = CreateDefaultSubobject<USHealthComponent>(TEXT("healthComponent"));
	healthComponent->onHealthChanged.AddDynamic(this, &ASTrackerBot::HandleTakeDamage);

	bUseVelocityChange = true;
	movementForce = 1000;
	requiredDistanceToTarget = 100;
	explosionDamage = 40;
	explosionRadius = 200;

	selfDamageInterval = 0.25f;


	checkGroupInterval = .05f;

	max_group_multiplier = 2.0f;
	max_group_size = 5;
	current_group_size = 0;

	enableGroupDamageMultiplier = true;
}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();
	if (Role == ROLE_Authority) {
		nextPathPoint = getNextPathPoint();
	}
	bExploded = false;
	bStartedSelfDestruction = false;
	calculateGroupSize();


	GetWorldTimerManager().SetTimer(checkGroupSize, this, &ASTrackerBot::calculateGroupSize, checkGroupInterval, true, 0.0f);

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

	if (health <= 0.0f) {
		SelfDestruct();
	}
}

void ASTrackerBot::SelfDestruct()
{
	if (bExploded == false) {
		bExploded = true;
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionEffect, GetActorLocation());
		UGameplayStatics::PlaySoundAtLocation(this, explosionSound, GetActorLocation());

		//hide mesh
		meshComponent->SetVisibility(false, true);
		meshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		if (Role == ROLE_Authority) {

			TArray<AActor*> ignoredActors;
			ignoredActors.Add(this);

			float damageToApply = explosionDamage;
			if (enableGroupDamageMultiplier == true) {
				damageToApply += explosionDamage*(max_group_multiplier*(current_group_size / max_group_size));

			}

			UGameplayStatics::ApplyRadialDamage(this, damageToApply, GetActorLocation(), explosionRadius, nullptr, ignoredActors, this, GetInstigatorController(), true);

			DrawDebugSphere(GetWorld(), GetActorLocation(), explosionRadius, 12, FColor::Red, false, 2.0f, 0, 1.0f);


			SetLifeSpan(2.0f);
			//Destroy();//don't use destroy in multiplayer, can't gurantee effects will spawn
		}



	}
}

void ASTrackerBot::damageSelf()
{
	UGameplayStatics::ApplyDamage(this, 20, GetInstigatorController(), this, nullptr);
}

// Called every frame
void ASTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Role == ROLE_Authority && bExploded == false) {

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
	
}

void ASTrackerBot::NotifyActorBeginOverlap(AActor * otherActor){
	UE_LOG(LogTemp, Log, TEXT("actor overlapped"));
	if ( !bExploded) {


		ASCharacter* playerPawn = Cast<ASCharacter>(otherActor);
		if (bStartedSelfDestruction == false && playerPawn) {
			//we overlapped with player.

			if (Role == ROLE_Authority) {
				//start self destruction sequence. 
				GetWorldTimerManager().SetTimer(timerHandle_selfDamage, this, &ASTrackerBot::damageSelf, selfDamageInterval, true, 0.0f);
			}

			bStartedSelfDestruction = true;

			UGameplayStatics::SpawnSoundAttached(selfDestructSound, RootComponent);
		}
		
	}
}


void ASTrackerBot::calculateGroupSize()
{
	TArray<AActor*> group;

	GetOverlappingActors(group, TSubclassOf<ASTrackerBot>());
	setGroupSize(group.Num()-1);
}


void ASTrackerBot::setGroupSize(int newGroupSize) {

	current_group_size= newGroupSize;
	if (current_group_size < 0) {
		current_group_size = 0;
	}

	if (current_group_size > max_group_size) {
		current_group_size = max_group_size;
	}



	if (matInst == nullptr) {
		matInst = meshComponent->CreateAndSetMaterialInstanceDynamicFromMaterial(0, meshComponent->GetMaterial(0));
	}
	if (matInst != nullptr) {
		float powerAlpha = (current_group_size / max_group_size);
		UE_LOG(LogTemp, Log, TEXT("POWER: %s"), *FString::SanitizeFloat(powerAlpha));
		matInst->SetScalarParameterValue("PowerLevelAlpha", powerAlpha);
	}
}

