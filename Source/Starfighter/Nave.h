// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Nave.generated.h"

UCLASS()
class STARFIGHTER_API ANave : public ACharacter
{
	GENERATED_BODY()
private:
	float PosicionNaveX;
	float PosicionNaveY;
	float TamanoNave;
	float VelocidadNave;
	float NivelNave;

public:
	// Sets default values for this character's properties
	ANave();
	void AceleracionNave();
	void ManejoNAve();
	void DestruccionNave();
	void CambioNave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
