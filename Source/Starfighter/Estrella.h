// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrella.generated.h"

UCLASS()
class STARFIGHTER_API AEstrella : public AActor
{
	GENERATED_BODY()
private:
	float UbicacionEstrellaX;
	float UbicacionEstrellaY;
	float Tamano;
	float VelocidadEstrella;

public:	
	// Sets default values for this actor's properties
	AEstrella();
	void CantidadEstrellas();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
