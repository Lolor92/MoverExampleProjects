#include "AnimInstance/PL_AnimInstance.h"
#include "DefaultMovementSet/CharacterMoverComponent.h"
#include "Kismet/KismetMathLibrary.h"


void UPL_AnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	PawnOwner = TryGetPawnOwner();
	if (!PawnOwner) return;

	CharacterMoverComponent = PawnOwner->FindComponentByClass<UCharacterMoverComponent>();
}

void UPL_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!PawnOwner)
	{
		PawnOwner = TryGetPawnOwner();
		if (PawnOwner && !CharacterMoverComponent)
		{
			CharacterMoverComponent = PawnOwner->FindComponentByClass<UCharacterMoverComponent>();
		}
	}

	if (!PawnOwner || !CharacterMoverComponent) return;

	const FVector Velocity = CharacterMoverComponent->GetVelocity();

	GroundSpeed = Velocity.Size2D();
	AimRotation = PawnOwner->GetActorRotation();
	bIsInAir = IsInAir();

	if (Velocity.IsNearlyZero())
	{
		SmoothedMovementOffsetYaw = FMath::FInterpTo(
			SmoothedMovementOffsetYaw,
			0.f,
			DeltaSeconds,
			8.f
		);

		MovementOffsetYaw = SmoothedMovementOffsetYaw;
		return;
	}

	MovementRotation = Velocity.ToOrientationRotator();

	const float TargetOffsetYaw =
		UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation).Yaw;

	SmoothedMovementOffsetYaw = FMath::FInterpTo(
		SmoothedMovementOffsetYaw,
		TargetOffsetYaw,
		DeltaSeconds,
		8.f
	);

	MovementOffsetYaw = SmoothedMovementOffsetYaw;
}

bool UPL_AnimInstance::IsInAir() const
{
	if (!CharacterMoverComponent) return false;

	return CharacterMoverComponent->HasGameplayTag(FGameplayTag::RequestGameplayTag(TEXT("Mover.IsInAir")), true);
}
