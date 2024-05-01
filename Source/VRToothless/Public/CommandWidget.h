// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommandWidget.generated.h"

/**
 * 
 */
UCLASS()
class VRTOOTHLESS_API UCommandWidget : public UUserWidget
{
	GENERATED_BODY()
	

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(EditDefaultsOnly, Category = "VR")
	class UButton* btn_Sit;

	UPROPERTY(EditDefaultsOnly, Category= "VR")
	class UButton* btn_Fly;

	UPROPERTY(EditDefaultsOnly, Category ="VR")
	class UButton* btn_Bang;

	UPROPERTY(EditDefaultsOnly, Category = "VR")
	class UButton* btn_return;


private:
	UFUNCTION()
	void Sit();

	UFUNCTION()
	void Fly();

	UFUNCTION()
	void Bang();

	UFUNCTION()
	void ReturnMenu();



};
