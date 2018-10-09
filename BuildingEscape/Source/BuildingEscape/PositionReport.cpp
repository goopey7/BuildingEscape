// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay(); // Do whatever things up the inheritence tree do

	FString GetObjectName = GetOwner()->GetName();
	FVector GetObjectPos = GetOwner()->GetActorLocation();
	FString ObjectPos = GetObjectPos.ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s can be found at %s"), *GetObjectName, *ObjectPos);
	
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

