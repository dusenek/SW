// Fill out your copyright notice in the Description page of Project Settings.


#include "SWGameInstance.h"
#include "MainUI.h"

void USWGameInstance::OnStart()
{
	Super::OnStart();

	UClass* MainUIClass = LoadClass<UMainUI>(NULL, TEXT("/Game/StarterContent/Blueprints/BP_MainUI.BP_MainUI_C"));
	if (!ensure(MainUIClass))
		return;

	UUserWidget* MainUI = CreateWidget<UUserWidget>(GetWorld(), MainUIClass);
	if (ensure(MainUI))
	{
		MainUI->AddToViewport();
	}
}
