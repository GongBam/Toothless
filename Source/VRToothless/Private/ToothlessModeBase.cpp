// Fill out your copyright notice in the Description page of Project Settings.


#include "ToothlessModeBase.h"
#include "MainWidget.h"
#include "Components/TextBlock.h"
#include "CommandWidget.h"


void AToothlessModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (mainWidget_BP != nullptr)
	{
		mainUI = CreateWidget<UMainWidget>(GetWorld(), mainWidget_BP);
	}
}

void AToothlessModeBase::AddMoney(int32 count)
{
	money += count;
	mainUI->text_currentMoney->SetText(FText::FromString(FString::Printf(TEXT("%d"), money)));
}

void AToothlessModeBase::HideGameUI()
{
	ComdUI->RemoveFromParent();
	mainUI->ShowCurrentMoneyText(true);
}


int32 AToothlessModeBase::GetCurrentMoney()
{
	return money;
}

int32 AToothlessModeBase::GetHappy()
{
	return happy;
}