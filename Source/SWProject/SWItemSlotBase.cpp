// Fill out your copyright notice in the Description page of Project Settings.


#include "SWItemSlotBase.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void USWItemSlotBase::OnButtonClicked()
{
	ButtonClickDelegate.ExecuteIfBound();
}

void USWItemSlotBase::SetButtonCallBack(OnButtonClickDelegate inButtonClickDelegate)
{
	ButtonClickDelegate = inButtonClickDelegate;
}

void USWItemSlotBase::NativeConstruct()
{
	Super::NativeConstruct();

	if (MainButton == nullptr || MainTextBlock == nullptr)
		return;

	MainButton->OnClicked.AddDynamic(this, &USWItemSlotBase::OnButtonClicked);
	MainTextBlock->SetText(FText::FromString(TEXT("12341")));
}
