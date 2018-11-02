// Fill out your copyright notice in the Description page of Project Settings.

#include "SWeapon.h"
#include "../Public/SWeapon.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Components/MeshComponent.h"
#include"Particles/ParticleSystemComponent.h"

static int32 debugWeaponDrawing = 0;
FAutoConsoleVariableRef CVARDebugWeaponDrawing(
	TEXT("COOP.DebugWeapons"), 
	debugWeaponDrawing, 
	TEXT("Draw Debug Lines For Weapons"), 
	ECVF_Cheat);

// Sets default values
ASWeapon::ASWeapon()
{
	meshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = meshComponent; 

	muzzleSocketName = "MuzzleSocket";
	tracerTargetName = "BeamEnd";
}


void ASWeapon::Fire()
{
	//trace the world from pawn eyes to crosshair location. 
	AActor* owner = GetOwner();
	if (owner) {
		FVector eyeLocation;
		FRotator eyeRotation;
		owner->GetActorEyesViewPoint(eyeLocation, eyeRotation);

		FVector shotDirection = eyeRotation.Vector();
		FVector traceEnd = eyeLocation + (shotDirection * 10000);

		FCollisionQueryParams queryParams;
		queryParams.AddIgnoredActor(owner);
		queryParams.AddIgnoredActor(this);
		queryParams.bTraceComplex = true;


		FHitResult hit;
		bool blockingHit =GetWorld()->LineTraceSingleByChannel(hit, eyeLocation, traceEnd, ECC_Visibility, queryParams);
		if (blockingHit) {
			traceEnd = hit.ImpactPoint;
			AActor* hitActor = hit.GetActor();


			UGameplayStatics::ApplyPointDamage(hitActor, 20.0f, shotDirection, hit, owner->GetInstigatorController(), this, damageType);
		
			if (impactEffect) {
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), impactEffect, hit.ImpactPoint, hit.ImpactNormal.Rotation());

			}
		}
		if (debugWeaponDrawing>0) {
			DrawDebugLine(GetWorld(), eyeLocation, traceEnd, FColor::Red, false, 1.0f, 0, 1.0f);

		}

		
		playFireEffects(traceEnd);
	}

}

void ASWeapon::playFireEffects(FVector traceEnd)
{
	//add muzzle flash
	if (muzzleFlashEffect) {
		UGameplayStatics::SpawnEmitterAttached(muzzleFlashEffect, meshComponent, muzzleSocketName);

	}

	if (tracerEffect) {

		FVector muzzleLocation = meshComponent->GetSocketLocation(muzzleSocketName);

		UParticleSystemComponent* tracerComponent = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), tracerEffect, muzzleLocation);
		if (tracerComponent) {
			tracerComponent->SetVectorParameter(tracerTargetName, traceEnd);
		}



	}
}


