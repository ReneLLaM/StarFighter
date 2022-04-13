// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Meteorito.generated.h"

UCLASS()
class STARFIGHTER_API AMeteorito : public AActor
{
	GENERATED_BODY()
private:
	float PocisionMeteoroX;
	float PocisionMeteoroY;
	float VelocidadMeteoro;
	float TamanoMeteoro;
public:	
	// Sets default values for this actor's properties
	AMeteorito();
	void CantidadMeteoro();
	void DireccionMeteoro();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
