// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FreshFIT2097GameMode.h"
#include "FreshFIT2097HUD.h"
#include "FreshFIT2097Character.h"
#include "UObject/ConstructorHelpers.h"

AFreshFIT2097GameMode::AFreshFIT2097GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/MyFreshFIT2097Character"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFreshFIT2097HUD::StaticClass();
}
