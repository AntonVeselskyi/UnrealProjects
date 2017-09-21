// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSProjectGameModeBase.h"

void AFPSProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Red, TEXT("Hi there!"));
	}

}
