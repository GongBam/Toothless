// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dragon_Toothless.generated.h"

UENUM(BlueprintType)
enum class EDragonState : uint8
{
	IDLE		UMETA(DisplayName = "Base State"),
	MOVE		UMETA(DisplayName = "Walk State"),
	EAT			UMETA(DisplayName = "EAT State"),
	STATENICE	UMETA(DisplayName = "Nice State"),
	RETURN		UMETA(DisplayName = "Return State"),
	AGGRESSIVE	UMETA(DisplayName = "Aggressive State"),
	DIE			UMETA(DisplayName = "Die State")

};

UCLASS()
class VRTOOTHLESS_API ADragon_Toothless : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADragon_Toothless();

	int32 currentState = 4;

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

	UPROPERTY(EditAnywhere, Category = "Mysettings")
	EDragonState dragonState = EDragonState::IDLE;

	

private:
	UPROPERTY()
	class AActor* target;

	float currentTime = 3;


	void Idle(float deltaseconds);
	void Move();
	void Eat();
	void StateNice();
	void Return();
	void Aggressive();
	void Die();

	float randomPatrolDelay = 3;
};
