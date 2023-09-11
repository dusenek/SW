// Copyright Epic Games, Inc. All Rights Reserved.


#include "SWProjectGameModeBase.h"
#include "SWPlayerController.h"

ASWProjectGameModeBase::ASWProjectGameModeBase()
{
	PlayerControllerClass = ASWPlayerController::StaticClass();
}