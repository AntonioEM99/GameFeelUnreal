// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UnitCharacter.generated.h"

UENUM(BlueprintType)
enum class EUnitType : uint8
{
	ManualU, AttackU
};

UCLASS()
class RTS_API AUnitCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUnitCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Unit")
	EUnitType UnitType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Unit")
	FName UnitName;

	UFUNCTION(BlueprintCallable, Category = "Unit")
	void InitializeUnit(EUnitType InType, FName InName);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
