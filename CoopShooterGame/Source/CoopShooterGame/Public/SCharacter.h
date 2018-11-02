// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UParticleSystem;

UCLASS()
class COOPSHOOTERGAME_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	void MoveForward(float value);
	void MoveRight(float value);

	void BeginCrouch();
	void EndCrouch();


	void BeginJump();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComponent;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* springArmComponent;

	bool bWantsToZoom;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float zoomFieldOfView;
	float defaultFieldOfView; 


	UPROPERTY(EditDefaultsOnly, Category = "Player", meta=(ClampMin=0.1, ClampMax=100))
		float zoomSpeed;

	void BeginZoom();
	void EndZoom();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	virtual FVector GetPawnViewLocation() const; 
};
