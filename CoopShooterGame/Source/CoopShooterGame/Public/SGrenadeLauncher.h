// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "SGrenadeLauncher.generated.h"

/**
 * 
 */
UCLASS()
class COOPSHOOTERGAME_API ASGrenadeLauncher : public ASWeapon
{
	GENERATED_BODY()
protected:

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual void Fire();
	

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<AActor> projectile;


};
