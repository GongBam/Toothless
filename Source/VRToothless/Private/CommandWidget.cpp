// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "DartCharacter.h"
#include <../../../../../../../Source/Runtime/Engine/Public/EngineUtils.h>





void UCommandWidget::NativeConstruct()
{

	//���� �ֱ� ��ư ������ Sit �Լ��� �����Ѵ�.
	Button_31->OnClicked.AddDynamic(this, &UCommandWidget::Sit);
	
	//�� �ֱ� ��ư ������ Fly �Լ��� �����Ѵ�.
	FlyButton->OnClicked.AddDynamic(this, &UCommandWidget::Fly);

	//��� �ֱ� ��ư ������ Bang �Լ��� �����Ѵ�.
	BangButton->OnClicked.AddDynamic(this, &UCommandWidget::Bang);

	//���ư��� ��ư�� �����Ѵ�.
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
