#include "AnotherWorldRemake\Public\Player_Main.h"
#include "GameFramework\CharacterMovementComponent.h"

// Sets default values
APlayer_Main::APlayer_Main()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer_Main::BeginPlay()
{
	Super::BeginPlay();

	GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeed;
	MaxRunSpeed = MaxWalkSpeed * 2.0f;
}

// Called every frame
void APlayer_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer_Main::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

