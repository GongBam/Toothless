// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.generated.h"

/**
 * 
 */
UCLASS()
class VRTOOTHLESS_API UMainWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category ="VR", meta = (BindWidget))
	class UTextBlock* text_currentMoney;
	
	UPROPERTY(EditDefaultsOnly, Category ="VR", meta = (BindWidget))
	class UTextBlock* text_currentHappy;

	
	void ShowCurrentMoneyText(bool bShow);
	
};
