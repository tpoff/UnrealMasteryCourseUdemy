// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/ExplosiveBarrel.h"
#include "Components/MeshComponent.h"

#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include"Particles/ParticleSystemComponent.h"
#include"../Public/Components/SHealthComponent.h"
#include "Materials/MaterialInterface.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AExplosiveBarrel::AExplosiveBarrel()
{

	healthComponent = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComponent"));
	healthComponent->onHealthChanged.AddDynamic(this, &AExplosiveBarrel::onHealthChanged);
	bDied = false;

	//create our mesh and attach to the collision component
	meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	meshComponent->SetCollisionObjectType(ECC_PhysicsBody);
	meshComponent->SetSimulatePhysics(true);
	meshComponent->SetCanEverAffectNavigation(false);

	RootComponent = meshComponent;
	explosionImpulse = 400;

	radialForceComponent = CreateDefaultSubobject< URadialForceComponent>(TEXT("RadialForceComponent"));
	radialForceComponent->SetupAttachment(meshComponent);
	radialForceComponent->Radius = 250;
	radialForceComponent->bImpulseVelChange = true;
	radialForceComponent->bIgnoreOwningActor = true;
	radialForceComponent->bAutoActivate = false;
	SetReplicates(true);
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void AExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();
	
}

void AExplosiveBarrel::OnRep_Exploded()
{
	//change material
	meshComponent->SetMaterial(0, explodedMaterial);
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), impactEffect, GetActorLocation());
	
}

void AExplosiveBarrel::onHealthChanged(USHealthComponent* OwningHealthComponent, float health, float healthDelta, const class UDamageType* fromDamageType, class AController* instigatedBy, AActor* damageCauser) {
	
	if (health <= 0 && !bDied) {
		//
		bDied = true;
		OnRep_Exploded();

		//boost mesh up		
		meshComponent->AddImpulse(FVector::UpVector*500, NAME_None, true);

		//apply explosive damage,
		TArray<AActor*> ignore = TArray<AActor*>();
		UGameplayStatics::ApplyRadialDamage(GetWorld(), 90.0f, GetActorLocation(), 500, damageType, ignore, this, nullptr);

		//apply radial force
		radialForceComponent->FireImpulse();

	}
}


void AExplosiveBarrel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);


	DOREPLIFETIME(AExplosiveBarrel, bDied);



}