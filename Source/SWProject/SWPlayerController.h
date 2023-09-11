// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SWPlayerController.generated.h"
/**
 * 
 */
UCLASS()
class SWPROJECT_API ASWPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	void SetLocalPlayer();

	void SetTest1();

private:
};

