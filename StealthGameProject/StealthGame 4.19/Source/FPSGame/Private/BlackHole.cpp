// Fill out your copyright notice in the Description page of Project Settings.

#include "BlackHole.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ABlackHole::ABlackHole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Use a sphere as a simple collision representation
	EventHorizon = CreateDefaultSubobject<USphereComponent>(TEXT("EventHorizon"));
	EventHorizon->InitSphereRadius(32.384392);
	EventHorizon->SetCollisionProfileName("EventHorizon");
	
	// Set as root component
	RootComponent = EventHorizon;


	meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	meshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	meshComponent->SetupAttachment(EventHorizon);
	meshComponent->SetWorldScale3D(FVector(.2, .2, .2));

	


	GravityWell = CreateDefaultSubobject<USphereComponent>(TEXT("GravityWell"));
	GravityWell->InitSphereRadius(2000.0f);
	GravityWell->SetCollisionProfileName("GravityWell");
	GravityWell->SetupAttachment(EventHorizon);

	

}

// Called when the game starts or when spawned
void ABlackHole::BeginPlay()
{
	Super::BeginPlay();
	EventHorizon->OnComponentBeginOverlap.AddDynamic(this, &ABlackHole::onEventHorizonOverlap);	// set up a notification for when this component hits something blocking

}

// Called every frame
void ABlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<AActor*> overlappingActors;
	GravityWell->GetOverlappingActors(overlappingActors);

	
	for (AActor* actor : overlappingActors)
	{
		TArray<UStaticMeshComponent*> Components;
		actor->GetComponents<UStaticMeshComponent>(Components);
		for (UStaticMeshComponent* mesh : Components) {
			//esh->AddRadialForce(this->GetActorLocation(), 2000.0f, 200, ERadialImpulseFalloff::RIF_Constant);
			mesh->AddRadialImpulse(GetActorLocation(), 2000.0f, -50.0, ERadialImpulseFalloff::RIF_Constant, true);
		
		}
		//actor->Destroy();
	}

}




void ABlackHole::onEventHorizonOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult &SweepResult) {

	OtherActor->Destroy();


}

