// Fill out your copyright notice in the Description page of Project Settings.


#include "DestructibleWalls.h"

// Sets default values
ADestructibleWalls::ADestructibleWalls()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADestructibleWalls::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADestructibleWalls::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

