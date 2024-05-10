// Fill out your copyright notice in the Description page of Project Settings.


#include "MainWidget.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"


void UMainWidget::NativeConstruct()
{
	Super::NativeConstruct();

	FString MoneyString = FString::Printf(TEXT("%d$"), Money);
	FText moneyText = FText::FromString(MoneyString);

	text_currentMoneyText->SetText(moneyText);
	
}

void UMainWidget::SetHappyBar(float value)
{
	pb_HappyBar->SetPercent(value);
}

void UMainWidget::DownMoney(int32 value)
{
	Money= Money-value;

	FString MoneyString = FString::Printf(TEXT("%d$"), Money);
	FText moneyText = FText::FromString(MoneyString);

	text_currentMoneyText->SetText(moneyText);
}
