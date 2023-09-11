// Fill out your copyright notice in the Description page of Project Settings.


#include "SWButton.h"

void USWButton::BeginPlay()
{
    if (ensure(MainButton))
    {
        MainButton->OnClicked.AddDynamic(this, &USWButton::OnButtonClicked);
    }
}

void USWButton::OnButtonClicked()
{   
    ButtonClickDelegate.ExecuteIfBound();
}

void USWButton::SetText(const FString& inString)
{
    TextFiald->SetText(FText::FromString(inString));
}

void USWButton::SetButtonCallBack(OnButtonClickDelegate inButtonClickDelegate)
{
    ButtonClickDelegate = inButtonClickDelegate;
}
