// Fill out your copyright notice in the Description page of Project Settings.


#include "MainBuild.h"
#include "UnitCharacter.h"
#include "GameManager.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
AMainBuild::AMainBuild()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpawnOffset = FVector(200.f, 0.f, 0.f);
}

AUnitCharacter* AMainBuild::SpawnWorker()
{
    UWorld* World = GetWorld();
    if (!World) return nullptr;
    if (!WorkerClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("MainBuild: WorkerClass no está asignada."));
        return nullptr;
    }

    FTransform SpawnTransform;
    SpawnTransform.SetLocation(GetActorLocation() + SpawnOffset);
    FActorSpawnParameters Params;
    Params.Owner = this;
    Params.Instigator = GetInstigator();

    AUnitCharacter* NewUnit = World->SpawnActor<AUnitCharacter>(WorkerClass, SpawnTransform.GetLocation(), SpawnTransform.GetRotation().Rotator(), Params);
    if (NewUnit)
    {
        NewUnit->InitializeUnit(EUnitType::ManualU, FName(TEXT("Recolector")));

        AGameManager* GM = AGameManager::GetGameManager(this);
        if (GM)
        {
            GM->RegisterUnit(NewUnit);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("MainBuild: GameManager no encontrado en el nivel."));
        }

        UE_LOG(LogTemp, Log, TEXT("MainBuild: Spawned worker %s"), *NewUnit->GetName());
    }
    return NewUnit;
}

// Called when the game starts or when spawned
void AMainBuild::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainBuild::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

