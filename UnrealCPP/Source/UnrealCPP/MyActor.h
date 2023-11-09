// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()	// 리플렉션 (컴파일러가 읽는 주석) Unreal 클래스다. T = 템플릿, U = Object, A = Actor, S = Widget, I = Interface, E = Enum
class UNREALCPP_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyActor();

protected:
	virtual void BeginPlay() override;	// spawn됐을 때만 실행

public:	
	virtual void Tick(float DeltaTime) override;	// 매 Tick마다 실행
private:
	UPROPERTY(VisibleAnywhere)	// Unreal Property다
	UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, Category = BattleStat)
	int32 hp;
	UPROPERTY(EditAnywhere, Category = BattleStat)
	int32 mp;
	UPROPERTY(EditAnywhere, Category = BattleStat)
	float RotateSpeed = 30.f;
};
