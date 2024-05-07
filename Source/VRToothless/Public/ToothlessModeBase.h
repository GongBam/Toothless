// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ToothlessModeBase.generated.h"

/**
 * 
 */
UCLASS()
class VRTOOTHLESS_API AToothlessModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	int32 CurrentMoney();
	int32 CurrentHappy();
	float PlayTime = 0;

	void AddMoney();
	void ShowCommandUI();
	void ShowCoupangUI();

	UPROPERTY(EditDefaultsOnly, Category = "UISettings")
	TSubclassOf<class UMainWidget> mainWidget_BP;

protected:
	virtual void BeginPlay() override;

private:
	class UMainWidget* mainUI;


};