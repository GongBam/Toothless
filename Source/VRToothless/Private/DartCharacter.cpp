


#include "DartCharacter.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "VRPlayer.h"
#include "AIController.h"
#include "PetAnimInstance.h"

// Sets default values
ADartCharacter::ADartCharacter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	/*SetRootComponent(boxComp);

	mesh1 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh Components"));
	mesh1->SetupAttachment(boxComp);*/

	EnemyController = Cast<AAIController>(GetController());
}

// Called when the game starts or when spawned
void ADartCharacter::BeginPlay()
{
	Super::BeginPlay();

	// �⺻ ���¸� idle ���·� ���� �ʱ�ȭ �Ѵ�.
	dragonState = EDragonState::EES_Patrolling;

	/*for (TActorIterator<AVRPlayer> player(GetWorld()); player; ++player)
	{
		target = *player;
	}*/

	randomPatrolDelay = FMath::RandRange(1.5f, 4.5f);

}

// Called every frame
void ADartCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	switch (dragonState)
	{
	case EDragonState::IDLE:
		Idle(DeltaTime);
		break;
	case EDragonState::MOVE:
		Move(DeltaTime);
		break;
	case EDragonState::EES_Patrolling:
		Patrolling();
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

void ADartCharacter::Idle(float deltaseconds)
{

	UE_LOG(LogTemp, Warning, TEXT("IDLE State"));

	//5�ʰ� ������ ���¸� move ���·� ����
	currentTime += deltaseconds;
	if (currentTime > 5.0f)
	{
		
		currentTime = 0;
		dragonState = EDragonState::MOVE;
	}
}

void ADartCharacter::Move(float deltaseconds)
{
	currentTime += deltaseconds;
	if (currentTime > 10.0f)
	{

		currentTime = 0;
		dragonState = EDragonState::IDLE;
	}
	
}

void ADartCharacter::Patrolling()
{
	//dragonState = EDragonState::EES_Patrolling;
	//GetCharacterMovement()->MaxWalkSpeed = 
}

void ADartCharacter::Eat()
{

}

void ADartCharacter::StateNice()
{

}

void ADartCharacter::Return()
{

}

void ADartCharacter::Aggressive()
{

}

void ADartCharacter::Die()
{

}

