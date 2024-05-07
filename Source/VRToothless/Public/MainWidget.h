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
	//���� �������� ǥ���Ѵ�.
	int32 currentMoney = 0;

	//���� �÷���Ÿ���� ǥ���Ѵ�.
	float playTime = 0;

	//���ݱ��� �� ��ɾ���� Ƚ���� ǥ���Ѵ�.
	int32 SitCount = 0;
	int32 BangCount = 0;
	int32 FlyCount = 0;

	//������ ���� �ķ��� ǥ���Ѵ�.
	int32 GetWater = 0;
	int32 GetFood = 0;

};
