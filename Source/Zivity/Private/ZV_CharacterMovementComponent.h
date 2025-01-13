// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ZV_CharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class UZV_CharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	/** The speed to set when the character is sprinting */
	UPROPERTY(Category="Character Movement: Walking", EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0", UIMin="0", ForceUnits="cm/s"))
	float MaxWalkSpeedSprinting;
	
	/** The speed to set when the character is walking */
	UPROPERTY(Category="Character Movement: Walking", EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0", UIMin="0", ForceUnits="cm/s"))
	float BaseWalkSpeed;

	/** Increases the jump height after sprinting */
	UPROPERTY(Category="Character Movement: Jumping", EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0", UIMin="0"))
	float SprintJumpMultiplier;
};
