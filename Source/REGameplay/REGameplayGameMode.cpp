// Copyright Epic Games, Inc. All Rights Reserved.

#include "REGameplayGameMode.h"
#include "REGameplayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AREGameplayGameMode::AREGameplayGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
