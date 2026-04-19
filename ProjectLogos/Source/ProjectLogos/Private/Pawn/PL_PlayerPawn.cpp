#include "Pawn/PL_PlayerPawn.h"


APL_PlayerPawn::APL_PlayerPawn()
{
	PrimaryActorTick.bCanEverTick = false;
}

void APL_PlayerPawn::BeginPlay()
{
	Super::BeginPlay();
}

void APL_PlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APL_PlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

