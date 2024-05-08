// Fill out your copyright notice in the Description page of Project Settings.


#include "Dragon_Toothless.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "VRPlayer.h"

// Sets default values
ADragon_Toothless::ADragon_Toothless()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	SetRootComponent(boxComp);

	meshComp1 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh Component1"));
	meshComp1->SetupAttachment(boxComp);
}

// Called when the game starts or when spawned
void ADragon_Toothless::BeginPlay()
{
	Super::BeginPlay();

	// 기본 상태를 idle 상태로 설정 초기화 한다.
	dragonState = EDragonState::IDLE;

	randomPatrolDelay = FMath::RandRange(1.5f, 4.5f);
	
}

// Called every frame
void ADragon_Toothless::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	switch (dragonState)
	{
	case EDragonState::IDLE:
		Idle(DeltaTime);
		break;
	case EDragonState::MOVE:
		Move();
		break;
	case EDragonState::EAT:
		Eat();
		break;
	case EDragonState::STATENICE:
		StateNice();
		break;
	case EDragonState::RETURN:
		Return();
		break;
	case EDragonState::AGGRESSIVE:
		Aggressive();
		break;
	case EDragonState::DIE:
		Die();
		break;
	default:
		break;
	}

}

void ADragon_Toothless::Idle(float deltaseconds)
{
	if (currentTime > randomPatrolDelay)
	{
		dragonState = EDragonState::MOVE;
		currentTime = 0;
	}
	else
	{
		currentTime += deltaseconds;
	}
}

void ADragon_Toothless::Move()
{

}

void ADragon_Toothless::Eat()
{

}

void ADragon_Toothless::StateNice()
{

}

void ADragon_Toothless::Return()
{

}

void ADragon_Toothless::Aggressive()
{

}

void ADragon_Toothless::Die()
{

}

