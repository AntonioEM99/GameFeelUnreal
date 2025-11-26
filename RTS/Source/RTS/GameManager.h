// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameManager.generated.h"

class AUnitCharacter;

UCLASS()
class RTS_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game")
	TArray<AUnitCharacter*> AllUnits;

	UFUNCTION(BlueprintCallable, Category = "Game")
	void RegisterUnit(AUnitCharacter* Unit);

	UFUNCTION(BlueprintCallable, Category = "Game")
	static AGameManager* GetGameManager(UObject* WorldContextObject);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
