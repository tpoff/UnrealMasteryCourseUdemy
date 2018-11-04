// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/MeshComponent.h"

#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include"Particles/ParticleSystemComponent.h"


// Sets default values
AProjectile::AProjectile()
{

	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->SetCollisionProfileName("Projectile");

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;


	//create our mesh and attach to the collision component
	meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	meshComponent->AttachTo(CollisionComp);



}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Grenade out!"));
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnHit);	// set up a notification for when this component hits something blocking
	OnDestroyed.AddDynamic(this, &AProjectile::onDestroy);
}

void AProjectile::OnHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (player != NULL && weapon != NULL &&
		OtherActor != player && OtherActor != weapon) {

		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("...I TOUCHED SOMETHING!"));
		Destroy();
		TArray<AActor*> ignore = TArray<AActor*>();
		UGameplayStatics::ApplyRadialDamage(GetWorld(), 20.0f, GetActorLocation(), 500, damageType, ignore, this, player->GetInstigatorController());

	}
}

void AProjectile::onDestroy(AActor* actor)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("exploding"));
	if (impactEffect) {
		UParticleSystemComponent* tracerComponent = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), impactEffect, GetActorLocation());

	}
	
	//UGameplayStatics::ApplyPointDamage(hitActor, 20.0f, shotDirection, hit, owner->GetInstigatorController(), this, damageType);
	
	
}

void AProjectile::setSpawners(AActor * newWeapon, AActor * newPlayer)
{
	weapon = newWeapon;
	player = newPlayer;
}