// Fill out your copyright notice in the Description page of Project Settings.


#include "TestNetMode.h"

// Sets default values

ATestNetMode::ATestNetMode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestNetMode::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestNetMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
//    if (GetNetMode()== NM_Standalone)
//    {
//        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "standalone");
//    }
//    else if (GetNetMode()== NM_DedicatedServer)
//    {
//        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "dedicated");
//    }
//    else
//    {
//        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "not stand");
//
//    }
   

}



