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
	class UButton* Button_31;

	UPROPERTY(EditDefaultsOnly, Category= "VR")
	class UButton* FlyButton;

	UPROPERTY(EditDefaultsOnly, Category ="VR")
	class UButton* BangButton;

	UPROPERTY(EditDefaultsOnly, Category = "VR")
	class UButton* ReturnButton;

	class ADartCharacter* dragon;



private:
	UFUNCTION(BlueprintCallable)
	void Sit();

	UFUNCTION(BlueprintCallable)
	void Fly();

	UFUNCTION(BlueprintCallable)
	void Bang();

	UFUNCTION(BlueprintCallable)
	void ReturnMenu();
};
