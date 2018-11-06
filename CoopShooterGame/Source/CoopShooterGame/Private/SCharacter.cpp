// Fill out your copyright notice in the Description page of Project Settings.

#include "SCharacter.h"
#include "../Public/SCharacter.h"
#include "../Public/SWeapon.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include"Components/CapsuleComponent.h"
#include"../CoopShooterGame.h"
#include"Particles/ParticleSystemComponent.h"
#include"../Public/Components/SHealthComponent.h"

// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	springArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	springArmComponent->bUsePawnControlRotation = true;
	springArmComponent->SetupAttachment(RootComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(springArmComponent);


	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);

	zoomFieldOfView = 65;
	zoomSpeed = 20.0f;

	weaponAttachSocketName = "WeaponSocket";



	healthComponent = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComponent"));
	healthComponent->onHealthChanged.AddDynamic(this, &ASCharacter::onHealthChanged);
	bDied = false;
}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();

	defaultFieldOfView=CameraComponent->FieldOfView;

	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;

	//spawn a default weapon. 
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	currentWeapon = GetWorld()->SpawnActor <ASWeapon>(starterWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator, spawnParams);
	if (currentWeapon) {
		currentWeapon->SetOwner(this);
		currentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, weaponAttachSocketName);
	}
}

void ASCharacter::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector()*value);
}
void ASCharacter::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector()*value);
}

void ASCharacter::BeginCrouch()
{
	Crouch();
}
void ASCharacter::EndCrouch()
{
	UnCrouch();
}


void ASCharacter::BeginJump()
{
	UCharacterMovementComponent* movementComp = GetCharacterMovement();
	if (movementComp) {
		if (movementComp->MovementMode != EMovementMode::MOVE_Falling) {
			Jump();

		}
	}
}

void ASCharacter::BeginZoom()
{
	bWantsToZoom = true;
}
void ASCharacter::EndZoom()
{
	bWantsToZoom = false;
}

void ASCharacter::startFire()
{
	if (currentWeapon) {
		currentWeapon->startFire();
	}
}

void ASCharacter::stopFire()
{
	if (currentWeapon) {
		currentWeapon->stopFire();
	}
}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	float targetFieldOfView = bWantsToZoom ? zoomFieldOfView : defaultFieldOfView;

	float newFieldOfView = FMath::FInterpTo(CameraComponent->FieldOfView, targetFieldOfView, DeltaTime, zoomSpeed);

	CameraComponent->SetFieldOfView(newFieldOfView);
}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::MoveRight);


	PlayerInputComponent->BindAxis("LookUp", this, &ASCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookRight", this, &ASCharacter::AddControllerYawInput);


	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASCharacter::BeginCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ASCharacter::EndCrouch);


	PlayerInputComponent->BindAction("Zoom", IE_Pressed, this, &ASCharacter::BeginZoom);
	PlayerInputComponent->BindAction("Zoom", IE_Released, this, &ASCharacter::EndZoom);


	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ASCharacter::startFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &ASCharacter::stopFire);




	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Repeat, this, &ACharacter::Jump);
}

FVector ASCharacter::GetPawnViewLocation() const{
	if (CameraComponent) {
		return CameraComponent->GetComponentLocation();
	}




	return Super::GetPawnViewLocation();
}




void ASCharacter::onHealthChanged(USHealthComponent* OwningHealthComponent, float health, float healthDelta, const class UDamageType* damageType, class AController* instigatedBy, AActor* damageCauser) {
	if (health <= 0 && !bDied) {
		bDied = true;
		//die die DIE!
		GetMovementComponent()->StopMovementImmediately();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		DetachFromControllerPendingDestroy();
		SetLifeSpan(10.0f);

		currentWeapon->stopFire();

	}
}

