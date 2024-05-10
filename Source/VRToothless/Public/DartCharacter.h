// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DartCharacter.generated.h"

UENUM(BlueprintType)
enum class EDragonState : uint8
{
	IDLE		UMETA(DisplayName = "Base State"),
	MOVE		UMETA(DisplayName = "Walk State"),
	EAT			UMETA(DisplayName = "EAT State"),
	EES_Patrolling UMETA(DisplayName = "Patrolling"),
	STATENICE	UMETA(DisplayName = "Nice State"),
	RETURN		UMETA(DisplayName = "Return State"),
	AGGRESSIVE	UMETA(DisplayName = "Aggressive State"),
	DIE			UMETA(DisplayName = "Die State")

};

UCLASS()
class VRTOOTHLESS_API ADartCharacter : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADartCharacter();

	int32 currentState = 4;



	/*
		Navigation
	*/

	UPROPERTY()
	class AAIController* PetController;

	// 순찰 대상
	UPROPERTY(EditAnywhere, Category = "Mysettings")
	AActor* PatrolTarget;

	UPROPERTY(EditAnywhere, Category = "Mysettings")
	TArray<AActor*> PatrolTargets;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 충돌체 컴포넌트 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mysettings")
	class UBoxComponent* boxComp;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mysettings")
	class USkeletalMeshComponent* mesh1;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mysettings")
	EDragonState dragonState = EDragonState::EES_Patrolling;

	

private:

	UPROPERTY()
	class AActor* target;

	
	
	//class AVRPlayer* player;

	float currentTime = 3;


	void Idle(float deltaseconds);
	void Move(float deltaseconds);
	void Patrolling();
	void Eat();
	void StateNice();
	void Return();
	void Aggressive();
	void Die();

	float randomPatrolDelay = 3;

	UPROPERTY()
	class AAIController* EnemyController;
	
};