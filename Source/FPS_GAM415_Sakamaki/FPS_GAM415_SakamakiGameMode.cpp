// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_GAM415_SakamakiGameMode.h"
#include "FPS_GAM415_SakamakiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_GAM415_SakamakiGameMode::AFPS_GAM415_SakamakiGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
