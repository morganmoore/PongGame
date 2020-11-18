// Fill out your copyright notice in the Description page of Project Settings.


#include "Boundary.h"

// Sets default values
ABoundary::ABoundary()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
	RootComponent = Bounds;

}



