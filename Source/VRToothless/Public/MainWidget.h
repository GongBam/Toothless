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

// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_currentMoneyText;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_currentMoney;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_sitCountText;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_sitCount;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_BangCountText;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_BangCount;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_FlyCountText;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_FlyCount;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_currentWaterText;
// 	
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_currentWater;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_currentMeetText;
// 
// 	UPROPERTY(EditAnywhere, Category = "VR", meta=(BindWidget))
// 	class UTextBlock* text_currentMeet;
// 
// 	//현재 소지금을 표시한다.
// 	int32 currentMoney = 0;
// 
// 	//현재 플레이타임을 표시한다.
// 	float playTime = 0;
// 
// 	//지금까지 한 명령어들의 횟수를 표시한다.
// 	int32 SitCount = 0;
// 	int32 BangCount = 0;
// 	int32 FlyCount = 0;
// 
// 	//소지한 물과 식량을 표시한다.
// 	int32 GetWater = 0;
// 	int32 GetFood = 0;
// 
// 	void AddMoney (int32 Count);
// 	void AddSitCount(int32 Count);
// 	void AddBangCount(int32 Count);
// 	void AddFlyCount(int32 Count);
// 	void AddWater(int32 Count);
// 	void AddFood(int32 Count);
};
