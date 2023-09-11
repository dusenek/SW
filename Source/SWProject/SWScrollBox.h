// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SWScrollBox.generated.h"

class UScrollBox;
class USWItemSlotBase;

DECLARE_DELEGATE(OnButtonClickDelegate);
/**
 * 
 */
UCLASS()
class SWPROJECT_API USWScrollBox : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 ItemCount;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* MainScrollBox;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> DefaultItem;

	OnButtonClickDelegate ButtonClickDelegate;

public:
	UFUNCTION()
	void OnClickItem();

protected:
	virtual void NativeConstruct() override;
};
