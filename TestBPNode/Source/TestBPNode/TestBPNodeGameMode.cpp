// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestBPNodeGameMode.h"
#include "TestBPNodeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestBPNodeGameMode::ATestBPNodeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
