// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemy_Base.generated.h"

UCLASS()
class ANOTHERWORLDREMAKE_API AEnemy_Base : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemy_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxWalkSpeed = 250.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRunSpeed = 500.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Acceleration2 = 500.0f;
};
