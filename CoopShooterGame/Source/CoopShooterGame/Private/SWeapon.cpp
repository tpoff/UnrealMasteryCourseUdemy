// Fill out your copyright notice in the Description page of Project Settings.

#include "SWeapon.h"
#include "../Public/SWeapon.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Components/MeshComponent.h"
#include"Particles/ParticleSystemComponent.h"
#include "../CoopShooterGame.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"

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
	baseDamage = 20.0f;
	loopFire = true;
	rateOfFire = 600;

	SetReplicates(true);

	bulletSpread = 2.0f;
}
void ASWeapon::BeginPlay()
{
	Super::BeginPlay();
	timeBetweenShots = 60 / rateOfFire;
	lastFireTime = 0.0f;


}


void ASWeapon::ServerFire_Implementation()
{
	Fire();
}
//used for anti-cheat
bool ASWeapon::ServerFire_Validate()
{
	return true;
}

void ASWeapon::Fire()
{
	if (Role < ROLE_Authority) {

		ServerFire();
	}
	//trace the world from pawn eyes to crosshair location. 
	AActor* owner = GetOwner();
	if (owner) {
		FVector eyeLocation;
		FRotator eyeRotation;
		owner->GetActorEyesViewPoint(eyeLocation, eyeRotation);

		FVector shotDirection = eyeRotation.Vector();

		float halfRad = FMath::DegreesToRadians(bulletSpread);
		shotDirection = FMath::VRandCone(shotDirection, halfRad, halfRad);

		FVector traceEnd = eyeLocation + (shotDirection * 10000);

		FCollisionQueryParams queryParams;
		queryParams.AddIgnoredActor(owner);
		queryParams.AddIgnoredActor(this);
		queryParams.bTraceComplex = true;
		queryParams.bReturnPhysicalMaterial = true;

		EPhysicalSurface surfaceType = SurfaceType_Default;

		FHitResult hit;
		bool blockingHit =GetWorld()->LineTraceSingleByChannel(hit, eyeLocation, traceEnd, COLLISION_WEAPON, queryParams);
		if (blockingHit) {
			traceEnd = hit.ImpactPoint;
			AActor* hitActor = hit.GetActor();
			surfaceType = UPhysicalMaterial::DetermineSurfaceType(hit.PhysMaterial.Get());
			float damage = baseDamage;
			if (surfaceType == SURFACE_FLESH_VULNERABLE) {
				damage *= 4.0f;
			}

			//TODO: switch to server side.
			UGameplayStatics::ApplyPointDamage(hitActor, damage, shotDirection, hit, owner->GetInstigatorController(), this, damageType);
			PlayImpactEffects(surfaceType, hit.ImpactPoint);

			
		
		}
		if (debugWeaponDrawing>0) {
			DrawDebugLine(GetWorld(), eyeLocation, traceEnd, FColor::Red, false, 1.0f, 0, 1.0f);

		}

		
		playFireEffects(traceEnd);

		if (Role == ROLE_Authority) {
			hitScanTrace.TraceTo = traceEnd;
			hitScanTrace.surfaceType = surfaceType;
		}

		shakePlayerCamera();
		lastFireTime = GetWorld()->TimeSeconds;
	}

}

void ASWeapon::PlayImpactEffects(EPhysicalSurface surfaceType, FVector impactPoint)
{
	UParticleSystem* selectedEffect = nullptr;

	switch (surfaceType) {
	case SURFACE_FLESH_DEFAULT:
	case SURFACE_FLESH_VULNERABLE:
		selectedEffect = fleshImpactEffect;
		break;
	default:
		selectedEffect = defaultImpactEffect;
		break;
	}
	if (selectedEffect) {
		FVector muzzleLocation = meshComponent->GetSocketLocation(muzzleSocketName);
		FVector shotDirection = impactPoint - muzzleLocation;
		shotDirection.Normalize();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), selectedEffect, impactPoint, shotDirection.Rotation());

	}


}

void ASWeapon::OnRep_HitScanTrace()
{
	//play cosmetic fx
	playFireEffects(hitScanTrace.TraceTo);
	PlayImpactEffects(hitScanTrace.surfaceType, hitScanTrace.TraceTo);
}

void ASWeapon::startFire()
{
	float fireDelay = lastFireTime + timeBetweenShots - GetWorld()->TimeSeconds; 
	if (fireDelay < 0)
		fireDelay = 0;
	GetWorldTimerManager().SetTimer(timerHandle_timeBetweenShots, this, &ASWeapon::Fire, timeBetweenShots, loopFire, fireDelay);
	
}
void ASWeapon::stopFire()
{
	GetWorldTimerManager().ClearTimer(timerHandle_timeBetweenShots);
}

void ASWeapon::shakePlayerCamera()
{

	APawn* owner = Cast<APawn>(GetOwner());
	if (owner) {
		APlayerController* pc = Cast<APlayerController>(owner->GetController());
		if (pc && fireCamShake) {
			pc->ClientPlayCameraShake(fireCamShake);
		}
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


void ASWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);


	DOREPLIFETIME_CONDITION(ASWeapon, hitScanTrace, COND_SkipOwner);

}