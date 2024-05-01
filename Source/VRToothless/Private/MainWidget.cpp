// Fill out your copyright notice in the Description page of Project Settings.


#include "MainWidget.h"
#include "Components/TextBlock.h"

void UMainWidget::ShowCurrentMoneyText(bool bShow)
{
	if (bShow)
	{
		text_currentMoney->SetVisibility(ESlateVisibility::Visible);
		text_currentHappy->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		text_currentMoney->SetVisibility(ESlateVisibility::Hidden);
		text_currentHappy->SetVisibility(ESlateVisibility::Hidden);
	}

}
