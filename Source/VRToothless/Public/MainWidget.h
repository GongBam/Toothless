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
	UPROPERTY(EditAnywhere, Category = "UI", meta = (BindWidget))
	class UTextBlock* text_currentMoney;

	UPROPERTY(EditAnywhere, Category = "UI", meta = (BindWidget))
	class UTextBlock* text_currentMoneyText;

	UPROPERTY(EditAnywhere, Category = "UI", meta = (BindWidget))
	int32 Money = 99999999;

	UPROPERTY(VisibleAnywhere, Category = "UI", meta = (BindWidget))
	class UProgressBar* pb_HappyBar;

protected:
	virtual void NativeConstruct() override;

private:
	void SetHappyBar(float value);
};