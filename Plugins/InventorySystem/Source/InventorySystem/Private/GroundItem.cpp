// Fill out your copyright notice in the Description page of Project Settings.


#include "GroundItem.h"

#include "GroundItemDetail.h"
#include "InventoryComponent.h"

#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// Sets default values
AGroundItem::AGroundItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set up the initial data for the overlap box, to make it attached to the actor, put it in the right place,
	// make it collide with only pawns and to generate overlap events.
	this->InteractTriggerBox->SetupAttachment(this->RootComponent);
	this->InteractTriggerBox->SetRelativeTransform(FTransform());
	this->InteractTriggerBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	this->InteractTriggerBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	this->InteractTriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	this->InteractTriggerBox->SetGenerateOverlapEvents(true);
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
	// sets up mobility, transform and scale of the actor
	this->SetMobility(EComponentMobility::Movable);
	this->SetActorTransform(Transform);
	this->GetStaticMeshComponent()->SetRelativeScale3D(NewActorDetails.ItemScale);

	// adds the mesh to the actor to make it look like the item
	UStaticMesh* Mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), this, *NewActorDetails.StaticMeshPath));
	this->GetStaticMeshComponent()->SetStaticMesh(Mesh);

	// sets up the details if picked up into inventory
	this->InventoryDetails = NewInventoryDetails;

	// sets the trigger box size and adds an overlap event to this actor
	this->InteractTriggerBox->SetBoxExtent(FVector(NewActorDetails.InteractAreaScale));
	this->OnActorBeginOverlap.AddDynamic(this, &AGroundItem::PickupItem);

}

void AGroundItem::PickupItem(AActor* OverlappedActor, AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Overlapping"));
	UInventoryComponent* Inventory = Cast<UInventoryComponent>(OtherActor->GetComponentByClass(UInventoryComponent::StaticClass()));
	Inventory->AddItem(InventoryDetails.Item, InventoryDetails.Amount);

	this->Destroy();
}


