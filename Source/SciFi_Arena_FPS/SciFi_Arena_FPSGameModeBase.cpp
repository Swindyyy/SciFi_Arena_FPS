// Fill out your copyright notice in the Description page of Project Settings.

#include "SciFi_Arena_FPSGameModeBase.h"
#include "Engine.h"


void ASciFi_Arena_FPSGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow,TEXT("Hello world, this is FPSGameMode"));
	}
}

