// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainBuild.generated.h"

class AUnitCharacter;
class AGameManager;

UCLASS()
class RTS_API AMainBuild : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMainBuild();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Build|Spawn")
	TSubclassOf<AUnitCharacter> WorkerClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Build|Spawn")
	FVector SpawnOffset;

	UFUNCTION(BlueprintCallable, Category = "Build")
	AUnitCharacter* SpawnWorker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
