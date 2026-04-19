#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PL_PlayerPawn.generated.h"

UCLASS()
class PROJECTLOGOS_API APL_PlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	APL_PlayerPawn();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
