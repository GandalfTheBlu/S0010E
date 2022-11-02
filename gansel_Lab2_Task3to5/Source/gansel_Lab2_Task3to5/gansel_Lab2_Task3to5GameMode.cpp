// Copyright Epic Games, Inc. All Rights Reserved.

#include "gansel_Lab2_Task3to5GameMode.h"
#include "gansel_Lab2_Task3to5Character.h"
#include "UObject/ConstructorHelpers.h"

Agansel_Lab2_Task3to5GameMode::Agansel_Lab2_Task3to5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
