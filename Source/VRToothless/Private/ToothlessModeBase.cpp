// Fill out your copyright notice in the Description page of Project Settings.


#include "ToothlessModeBase.h"
#include "MainWidget.h"

void AToothlessModeBase::BeginPlay()
{
	Super::BeginPlay();

	if(mainWidget_BP != nullptr)
	{
		mainUI = CreateWidget<UMainWidget>(GetWorld(), mainWidget_BP);

		if(mainUI != nullptr)
		{
			//GetWorld()->SpawnActor<UMainWidget>(mainWidget_BP, mainUI->GetActorLocation, mainUI->GetActorRotation);
		}


	}
}
