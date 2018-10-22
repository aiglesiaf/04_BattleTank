// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Error, TEXT("ControlledTank not found!!!"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Grabbed Tank BP %s"), *(ControlledTank->GetName()));
	}
}

ATankBP* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATankBP>(GetPawn());
}


