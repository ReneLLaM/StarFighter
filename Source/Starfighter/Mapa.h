// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mapa.generated.h"

UCLASS()
class STARFIGHTER_API AMapa : public AActor
{
	GENERATED_BODY()
private:
	float TamanoMapa;
	float DificultadMapa;
public:	
	// Sets default values for this actor's properties
	AMapa();
	void cambiarMapa();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
