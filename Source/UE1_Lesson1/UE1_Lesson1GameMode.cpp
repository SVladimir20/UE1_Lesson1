// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE1_Lesson1GameMode.h"
#include "UE1_Lesson1Character.h"
#include "UObject/ConstructorHelpers.h"

AUE1_Lesson1GameMode::AUE1_Lesson1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
