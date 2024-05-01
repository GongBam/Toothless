// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "ToothlessModeBase.h"


void UCommandWidget::NativeConstruct()
{
	//���� �ֱ� ��ư ������ Feed �Լ��� �����Ѵ�.
	btn_Sit->OnClicked.AddDynamic(this, &UCommandWidget::Sit);
	
	//�� �ֱ� ��ư ������ Drink �Լ��� �����Ѵ�.
	btn_Fly->OnClicked.AddDynamic(this, &UCommandWidget::Fly);

	//��� �ֱ� ��ư ������ Play �Լ��� �����Ѵ�.
	btn_Bang->OnClicked.AddDynamic(this, &UCommandWidget::Bang);

	//���ư��� ��ư�� �����Ѵ�.
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
