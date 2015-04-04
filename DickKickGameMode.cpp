// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "DickKick.h"
#include "DickKickGameMode.h"
#include "DickKickCharacter.h"

ADickKickGameMode::ADickKickGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our character
	DefaultPawnClass = ADickKickCharacter::StaticClass();	
}
