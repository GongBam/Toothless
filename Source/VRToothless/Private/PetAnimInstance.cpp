// Fill out your copyright notice in the Description page of Project Settings.


#include "PetAnimInstance.h"
#include "Dragon_Toothless.h"

void UPetAnimInstance::NativeUninitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Dragon = Cast<ADragon_Toothless>(GetOwningActor());

}

void UPetAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (Dragon != nullptr)
	{
		currentState = Dragon-> dragonState;
	}
}
