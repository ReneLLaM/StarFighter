// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"

// Sets default values
ANave::ANave()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANave::AceleracionNave()
{
}

void ANave::ManejoNAve()
{
}

void ANave::DestruccionNave()
{
}

void ANave::CambioNave()
{
}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANave::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

