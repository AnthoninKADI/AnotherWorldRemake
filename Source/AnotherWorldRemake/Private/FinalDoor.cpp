// Fill out your copyright notice in the Description page of Project Settings.


#include "FinalDoor.h"

// Sets default values
AFinalDoor::AFinalDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFinalDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFinalDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

