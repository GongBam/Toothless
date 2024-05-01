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
	int32 GetCurrentMoney();
	int32 GetHappy();

	UPROPERTY(EditAnywhere, Category = "VR")
	TSubclassOf<class UMainWidget> mainWidget_BP;

	
	void AddMoney(int32 count);
	void HideGameUI();

protected:
	virtual void BeginPlay() override;

private:
	int32 money = 0;
	int32 happy = 0;
	class UMainWidget* mainUI;
	class UCommandWidget* ComdUI;
};
