// Copyright Epic Games, Inc. All Rights Reserved.

#include "ALSLearningGameMode.h"
#include "ALSLearningCharacter.h"
#include "UObject/ConstructorHelpers.h"

AALSLearningGameMode::AALSLearningGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
