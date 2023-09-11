// Fill out your copyright notice in the Description page of Project Settings.


#include "MainUI.h"
#include "UMG/Public/Components/Button.h"

void UMainUI::NativeConstruct()
{
    Super::NativeConstruct();

    SetText();

    BindExitButtonClick();
    BindStartButtonClick();
}

void UMainUI::SetText()
{
}

void UMainUI::BindStartButtonClick()
{
    if (StartButton != nullptr)
        StartButton->OnClicked.AddDynamic(this, &UMainUI::OnStartButtonClick);
}

void UMainUI::BindExitButtonClick()
{
    if (ExitButton != nullptr)
        ExitButton->OnClicked.AddDynamic(this, &UMainUI::OnExitButtonClick);
}

void UMainUI::OnStartButtonClick()
{
    
}

void UMainUI::OnExitButtonClick()
{
    FGenericPlatformMisc::RequestExit(false);
}