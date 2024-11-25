// Fill out your copyright notice in the Description page of Project Settings.


#include "GroundItem.h"

#include "GroundItemDetail.h"

#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// Sets default values
AGroundItem::AGroundItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGroundItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGroundItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGroundItem::InitialiseItem(FTransform Transform, FGroundItemDetail NewActorDetails, FInventorySlot NewInventoryDetails)
{

	this->SetMobility(EComponentMobility::Movable);
	this->SetActorTransform(Transform);
	this->GetStaticMeshComponent()->SetRelativeScale3D(NewActorDetails.ItemScale);
	
	UStaticMesh* Mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), this, *NewActorDetails.StaticMeshPath));

	this->GetStaticMeshComponent()->SetStaticMesh(Mesh);
	
	this->InteractTriggerBox->SetBoxExtent(FVector(NewActorDetails.InteractAreaScale));
	
	this->InventoryDetails = NewInventoryDetails;
}

