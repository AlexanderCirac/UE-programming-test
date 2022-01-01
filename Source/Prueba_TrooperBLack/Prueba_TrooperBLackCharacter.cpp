// Copyright Epic Games, Inc. All Rights Reserved.

#include "Prueba_TrooperBLackCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Objeto_Bala_CPP.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "Components/SceneComponent.h"
#include "Prueba_TrooperBLackGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "AC_salud_CPP.h"
//////////////////////////////////////////////////////////////////////////
// APrueba_TrooperBLackCharacter

APrueba_TrooperBLackCharacter::APrueba_TrooperBLackCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	com_vida = CreateDefaultSubobject<UAC_salud_CPP>("Componente_Vida_CPP");
}

//////////////////////////////////////////////////////////////////////////
// Input

void APrueba_TrooperBLackCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &APrueba_TrooperBLackCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APrueba_TrooperBLackCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APrueba_TrooperBLackCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APrueba_TrooperBLackCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &APrueba_TrooperBLackCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &APrueba_TrooperBLackCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &APrueba_TrooperBLackCharacter::OnResetVR);

	if(var_Activar)
		InputComponent->BindAction("Disparar", IE_Pressed, this, &APrueba_TrooperBLackCharacter::DispararPresion);
	
}



void APrueba_TrooperBLackCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void APrueba_TrooperBLackCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void APrueba_TrooperBLackCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void APrueba_TrooperBLackCharacter::DispararPresion()
{
	//                                       // para los componentes                  // para el caso de un actor
	//  la variables para el componente hay que  definirla mediante blueprint no C++               

	//APrueba_TrooperBLackGameMode* v_GMB = Cast <APrueba_TrooperBLackGameMode>(GetWorld()->GetAuthGameMode());
	//if (v_GMB != nullptr) 
	if( var_ActivarArma)
	GetWorld()->SpawnActor<AActor>(var_bala, var_disparador->GetComponentLocation()/* GetActorLocation()*/, var_disparador->GetComponentRotation() /*GetActorRotation()*/);
	//GetWorld()->SpawnActor<AActor>(var_bala, var_disparador->GetRelativeLocation()/* GetActorLocation()*/, var_disparador->GetRelativeRotation() /*GetActorRotation()*/);


}



void APrueba_TrooperBLackCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APrueba_TrooperBLackCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APrueba_TrooperBLackCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APrueba_TrooperBLackCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
