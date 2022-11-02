// Fill out your copyright notice in the Description page of Project Settings.


#include "MyThirdPersonChar.h"
#include "Components/InputComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Controller.h"

void AMyThirdPersonChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveRight", this, &AMyThirdPersonChar::MoveRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyThirdPersonChar::MoveForward);
}

void AMyThirdPersonChar::MoveRight(float Value)
{
	if (Controller != nullptr && Value != 0.0f)
	{
		const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);
		const FVector Direction = UKismetMathLibrary::GetRightVector(YawRotation);
		AddMovementInput(Direction, Value * 5.f);
	}
}

void AMyThirdPersonChar::MoveForward(float Value)
{
	if (Controller != nullptr && Value != 0.0f)
	{
		const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);
		const FVector Direction = UKismetMathLibrary::GetForwardVector(YawRotation);
		AddMovementInput(Direction, Value);
	}
}