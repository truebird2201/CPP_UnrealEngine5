// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()	// ���÷��� (�����Ϸ��� �д� �ּ�) Unreal Ŭ������. T = ���ø�, U = Object, A = Actor, S = Widget, I = Interface, E = Enum
class UNREALCPP_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyActor();

protected:
	virtual void BeginPlay() override;	// spawn���� ���� ����

public:	
	virtual void Tick(float DeltaTime) override;	// �� Tick���� ����
private:
	UPROPERTY(VisibleAnywhere)	// Unreal Property��
	UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, Category = BattleStat)
	int32 hp;
	UPROPERTY(EditAnywhere, Category = BattleStat)
	int32 mp;
	UPROPERTY(EditAnywhere, Category = BattleStat)
	float RotateSpeed = 30.f;
};
