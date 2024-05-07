#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoupangWidget.generated.h"

/**
 * 
 */
UCLASS()
class VRTOOTHLESS_API UCoupangWidget : public UUserWidget
{
	GENERATED_BODY()


public:

	UPROPERTY(EditDefaultsOnly, Category= "VR", meta = (BindWidget))
	class UButton* btn_buyWater;

	UPROPERTY(EditDefaultsOnly, Category = "VR", meta = (BindWidget))
	class UButton* btn_buyMeet;

	UPROPERTY(EditDefaultsOnly, Category = "VR", meta = (BindWidget))
	class UButton* btn_buyBrush;

	UPROPERTY(EditDefaultsOnly, Category = "VR", meta = (BindWidget))
	class UButton* btn_buySponge;

	UPROPERTY(EditDefaultsOnly, Category = "VR", meta = (BindWidget))
	class UButton* btn_buyShampoo;


private:

	UFUNCTION()
	void BuyWater();

	UFUNCTION()
	void BuyMeet();

	UFUNCTION()
	void BuyBrush();

	UFUNCTION()
	void BuySponge();

	UFUNCTION()
	void BuyShampoo();
	
};
