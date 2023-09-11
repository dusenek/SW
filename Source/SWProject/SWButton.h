// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "SWButton.generated.h"

DECLARE_DELEGATE(OnButtonClickDelegate);
/**
 * 
 */
UCLASS()
class SWPROJECT_API USWButton : public UUserWidget
{
	GENERATED_BODY()

public:	// Property
	UPROPERTY(meta = (BindWidget))
	UButton* MainButton;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextFiald;

private:
	OnButtonClickDelegate ButtonClickDelegate;

public:	// Method
	virtual void BeginPlay();

	template<typename ClassType>
	void BindButtonClickedEvent(UUserWidget* UserWidgetInstance, void (ClassType::* Func)());
	
	void SetText(const FString& inString);
	void SetButtonCallBack(OnButtonClickDelegate inButtonClickDelegate);

	void OnButtonClicked();
};
