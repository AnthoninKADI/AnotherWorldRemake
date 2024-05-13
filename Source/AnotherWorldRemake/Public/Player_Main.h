// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_Main.generated.h"

UCLASS()
class ANOTHERWORLDREMAKE_API APlayer_Main : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_Main();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Blueprintable)
	float MaxWalkSpeed = 250.0f;
	
	UPROPERTY(EditAnywhere, Blueprintable)
	float MaxRunSpeed = 500.0f;
	
	UPROPERTY(EditAnywhere, Blueprintable)
	float MaxCrouchSpeed = 125.0f;
	
	UPROPERTY(EditAnywhere, Blueprintable)
	float Acceleration = 3.0f;
};
