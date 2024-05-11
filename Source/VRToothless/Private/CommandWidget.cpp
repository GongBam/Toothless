// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "DartCharacter.h"
#include <../../../../../../../Source/Runtime/Engine/Public/EngineUtils.h>





void UCommandWidget::NativeConstruct()
{

	//먹이 주기 버튼 누르면 Sit 함수를 실행한다.
	Button_31->OnClicked.AddDynamic(this, &UCommandWidget::Sit);
	
	//물 주기 버튼 누르면 Fly 함수를 실행한다.
	FlyButton->OnClicked.AddDynamic(this, &UCommandWidget::Fly);

	//놀아 주기 버튼 누르면 Bang 함수를 실행한다.
	BangButton->OnClicked.AddDynamic(this, &UCommandWidget::Bang);

	//돌아가기 버튼을 실행한다.
	ReturnButton->OnClicked.AddDynamic(this, &UCommandWidget::ReturnMenu);

	for (TActorIterator<ADartCharacter> it(GetWorld()); it; ++it)
	{
		dragon = *it;
	}

}

void UCommandWidget::Sit()
{
	dragon->BangAnim();
}

void UCommandWidget::Fly()
{
	
}

void UCommandWidget::Bang()
{
	
}

void UCommandWidget::ReturnMenu()
{
	
}
