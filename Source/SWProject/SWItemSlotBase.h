// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SWItemSlotBase.generated.h"

class UButton;
class UTextBlock;

DECLARE_DELEGATE(OnButtonClickDelegate);
/**
 * 
 */
UCLASS()
class SWPROJECT_API USWItemSlotBase : public UUserWidget
{
	GENERATED_BODY()


public:
	UPROPERTY(meta = (BindWidget))
	UButton* MainButton;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* MainTextBlock;

private:
	OnButtonClickDelegate ButtonClickDelegate;

public:
	UFUNCTION()
	void OnButtonClicked();

	void SetButtonCallBack(OnButtonClickDelegate inButtonClickDelegate);

protected:
	virtual void NativeConstruct() override;
};
