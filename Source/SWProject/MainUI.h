// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainUI.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class SWPROJECT_API UMainUI : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (bindwidget))
	UButton* StartButton;

	UPROPERTY(meta = (bindwidget))
	UButton* ExitButton;

public: 
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnStartButtonClick();

	UFUNCTION()
	void OnExitButtonClick();


	void SetText();
	void BindExitButtonClick();
	void BindStartButtonClick();
};
