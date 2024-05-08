#include "VRPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"


AVRPlayer::AVRPlayer()
{

	PrimaryActorTick.bCanEverTick = true;

}


void AVRPlayer::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* pc = GetController<APlayerController>();
}


void AVRPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AVRPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if(enhancedInputComponent!=nullptr)
	{
		enhancedInputComponent->BindAction(ia_Abutton,ETriggerEvent::Started, this, &AVRPlayer::AButtonMenu);
	}
}

//Command UI를 보이게한다.
void AVRPlayer::AButtonMenu()
{

}

