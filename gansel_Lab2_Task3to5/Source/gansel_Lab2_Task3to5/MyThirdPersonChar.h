// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyThirdPersonChar.generated.h"

/**
 * 
 */
UCLASS()
class GANSEL_LAB2_TASK3TO5_API AMyThirdPersonChar : public ACharacter
{
	GENERATED_BODY()

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void MoveRight(float Value);
	void MoveForward(float Value);
};
