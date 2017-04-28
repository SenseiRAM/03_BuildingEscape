// Copyright Smiling Politely Productions 2017

#include "BuildingEscape.h"
#include "Grabber.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	//Grabber announces it is ready to roll
	UE_LOG(LogTemp, Warning, TEXT("Grabber reporting for duty!"));
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Get player viewpoint this tick
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT PlayerViewPointLocation,
		OUT PlayerViewPointRotation
	);

	//Log Viewpoint rotation and location
	FString LogPlayerViewPointLocation = PlayerViewPointLocation.ToString();
	FString LogPlayerViewPointRotation = PlayerViewPointRotation.ToString();
	
	
	UE_LOG(LogTemp, Warning, TEXT("Player View Location is: %s. Player View Rotation is: %s."),
		*LogPlayerViewPointLocation,
		*LogPlayerViewPointRotation
	);

	// Ray-cast out to reach distance

	// See what we hit
}

