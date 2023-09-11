// Fill out your copyright notice in the Description page of Project Settings.


#include "SWScrollBox.h"
#include "SWItemSlotBase.h"
#include "Components/ScrollBox.h"

void USWScrollBox::OnClickItem()
{
	UE_LOG(LogTemp, Warning, TEXT("Delegate called!"));
}

void USWScrollBox::NativeConstruct()
{
	Super::NativeConstruct();

	ButtonClickDelegate.BindUFunction(this, FName("OnClickItem"));

	if (MainScrollBox == nullptr || DefaultItem == nullptr)
		return;

	for (int32 Index = 0; Index < ItemCount; ++Index)
	{
		USWItemSlotBase* NewItem = CreateWidget<USWItemSlotBase>(this, DefaultItem);
		if (NewItem != nullptr)
		{
			NewItem->SetButtonCallBack(ButtonClickDelegate);
			MainScrollBox->AddChild(NewItem);
		}
	}
}
