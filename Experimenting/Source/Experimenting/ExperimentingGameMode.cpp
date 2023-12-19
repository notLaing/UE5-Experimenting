// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExperimentingGameMode.h"
#include "ExperimentingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExperimentingGameMode::AExperimentingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
