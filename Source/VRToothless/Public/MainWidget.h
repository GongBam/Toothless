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
	//현재 소지금을 표시한다.
	int32 currentMoney = 0;

	//현재 플레이타임을 표시한다.
	float playTime = 0;

	//지금까지 한 명령어들의 횟수를 표시한다.
	int32 SitCount = 0;
	int32 BangCount = 0;
	int32 FlyCount = 0;

	//소지한 물과 식량을 표시한다.
	int32 GetWater = 0;
	int32 GetFood = 0;

};
