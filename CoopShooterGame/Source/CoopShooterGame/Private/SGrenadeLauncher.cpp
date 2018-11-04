// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/SGrenadeLauncher.h"
#include "../Public/Projectile.h"



void ASGrenadeLauncher::Fire()
{
	AActor* owner = GetOwner();
	if (owner && projectile) {
		FVector eyeLocation;
		FRotator eyeRotation;
		owner->GetActorEyesViewPoint(eyeLocation, eyeRotation);

		FVector muzzleLocation = meshComponent->GetSocketLocation(muzzleSocketName);
		FRotator muzzleRotation = meshComponent->GetSocketRotation(muzzleSocketName);

		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AActor* newActor = GetWorld()->SpawnActor<AActor>(projectile, muzzleLocation, eyeRotation, spawnParams);

		AProjectile* newProjectile = Cast<AProjectile>(newActor);
		if (newProjectile) {
			newProjectile->setSpawners(this, owner);

		}
	}
	shakePlayerCamera();
	lastFireTime = GetWorld()->TimeSeconds;


}

