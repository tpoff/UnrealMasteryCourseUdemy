// Fill out your copyright notice in the Description page of Project Settings.

#include "LaunchPad.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/DecalComponent.h"
#include "FPSCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ALaunchPad::ALaunchPad()
{


	collisionBox = CreateAbstractDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));
	collisionBox->SetBoxExtent(FVector(60,60,40));
	RootComponent = collisionBox;




	PadMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PadMesh Component"));
	PadMesh->SetWorldScale3D(FVector(1.5, 1.5, .125f));
	PadMesh->SetRelativeLocation(FVector(0, 0, -35));
	PadMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	PadMesh->SetupAttachment(RootComponent);

	arrowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("arrowMesh Component"));
	arrowMesh->SetWorldScale3D(FVector(1.5, 1.5, .0f));
	arrowMesh->SetRelativeLocation(FVector(0, 0, -28.5));
	arrowMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	arrowMesh->SetupAttachment(RootComponent);

	launchStrength = 1500;
	launchPitchAngle = 35;

}

// Called when the game starts or when spawned
void ALaunchPad::BeginPlay()
{
	Super::BeginPlay();
	collisionBox->OnComponentBeginOverlap.AddDynamic(this, &ALaunchPad::OverlapLaunchPad);
	
}




void ALaunchPad::OverlapLaunchPad(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {


	FRotator launchDirection = GetActorRotation();
	launchDirection.Pitch += launchPitchAngle;
	FVector LaunchVelocity = launchDirection.Vector()*launchStrength;
	UE_LOG(LogTemp, Log, TEXT("Overlapped with launch zone"));


	ACharacter* otherCharacter = Cast<ACharacter>(OtherActor);

	if (otherCharacter) {
		otherCharacter->LaunchCharacter(LaunchVelocity, true, true);

		//spawn particles later?
		UGameplayStatics::SpawnEmitterAtLocation(this, launchEffect, GetActorLocation());
	}
	else if (OtherComp && OtherComp->IsSimulatingPhysics()) {
		OtherComp->AddImpulse(LaunchVelocity, NAME_None, true);

		//spawn particles?
		UGameplayStatics::SpawnEmitterAtLocation(this, launchEffect, GetActorLocation());
	}

}


