// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class UNREALCPP_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

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
	void Yaw(float value);

	void Attack();
	UFUNCTION()
	void OnAttackMontageEnded(UAnimMontage* Montage, bool binterrupted);

private:
	UPROPERTY(VisibleAnywhere)
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere, Category = Pawn)
	bool IsAttacking = false;
	UPROPERTY(VisibleAnywhere)
	class UMyAnimInstance* AnimInstance;
	UPROPERTY()
	int32 AttackIndex = 0;
public:
	UPROPERTY()
	float UpDownValue = 0;
	UPROPERTY()
	float LeftRightValue = 0;
};
