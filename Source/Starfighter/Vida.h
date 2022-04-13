// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vida.generated.h"

UCLASS()
class STARFIGHTER_API AVida : public AActor
{
	GENERATED_BODY()
private:
	int cantidadVida;
public:	
	// Sets default values for this actor's properties
	AVida();
	void AumentarVidas();
	void Disminuirvidas();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
