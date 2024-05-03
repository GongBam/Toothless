// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dragon_Toothless.generated.h"

UCLASS()
class VRTOOTHLESS_API ADragon_Toothless : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADragon_Toothless();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 충돌체 컴포넌트 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* boxComp;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* meshComp1;

	UFUNCTION()
	void OnOverlapPlayer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	

};
