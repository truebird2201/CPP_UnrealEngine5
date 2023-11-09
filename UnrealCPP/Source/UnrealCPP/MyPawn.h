// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"


UCLASS()
class UNREALCPP_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void UpDown(float value);
	void LeftRight(float value);
private:
	UPROPERTY(VisibleAnywhere)	// Unreal Property´Ù
	UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere)	// Unreal Property´Ù
	class UFloatingPawnMovement* Movement;
};
