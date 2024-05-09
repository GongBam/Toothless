// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DrangonModeBase.generated.h"

/**
 * 
 */
UCLASS()
class VRTOOTHLESS_API ADrangonModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:


private:
	int32 Money = 99999999;
	class UMainWidget* mainUI;

};
