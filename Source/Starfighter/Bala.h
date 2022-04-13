// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bala.generated.h"

UCLASS()
class STARFIGHTER_API ABala : public AActor
{
	GENERATED_BODY()
private:
	float Velocidad;
	float DistanMaxima;
	float Tamano;
	float NivelDano;
	float NivelEnergia;
	float PosicionInicialX;
	float PosicionInicialY;

public:	
	// Sets default values for this actor's properties
	ABala();

	float UbicacionX;

	float UbicacionY;

	void SumarEnergia(float _energia);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// que es un tick es las veces que se actualiza la pantalla y pasarle el delta time
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
