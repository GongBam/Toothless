// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "ToothlessModeBase.h"


void UCommandWidget::NativeConstruct()
{
	//먹이 주기 버튼 누르면 Feed 함수를 실행한다.
	btn_Sit->OnClicked.AddDynamic(this, &UCommandWidget::Sit);
	
	//물 주기 버튼 누르면 Drink 함수를 실행한다.
	btn_Fly->OnClicked.AddDynamic(this, &UCommandWidget::Fly);

	//놀아 주기 버튼 누르면 Play 함수를 실행한다.
	btn_Bang->OnClicked.AddDynamic(this, &UCommandWidget::Bang);

	//돌아가기 버튼을 실행한다.
	btn_return->OnClicked.AddDynamic(this, &UCommandWidget::ReturnMenu);

}

void UCommandWidget::Sit()
{

}

void UCommandWidget::Fly()
{

}

void UCommandWidget::Bang()
{

}

void UCommandWidget::ReturnMenu()
{
	AToothlessModeBase* tm = Cast<AToothlessModeBase>(GetWorld()->GetAuthGameMode());
	if (tm != nullptr)
	{
		tm->HideGameUI();
	}

}
