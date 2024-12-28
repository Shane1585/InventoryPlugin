#include "GroundItem.h"
#include "GroundItemDetail.h"
#include "InventoryComponent.h"

#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

// default functions ---------------------------------------------------------------------------------------------------
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


// setters and getters -------------------------------------------------------------------------------------------------
void AGroundItem::SetInventoryDetails(FInventorySlot NewInventoryDetails)
{
	this->InventoryDetails = NewInventoryDetails;
}

FInventorySlot AGroundItem::GetInventoryDetails()
{
	return InventoryDetails;
}

void AGroundItem::SetInteractTriggerBox(UBoxComponent* NewInteractTriggerBox, FGroundItemDetail NewActorDetails)
{
	// Destroys current trigger box
	this->InteractTriggerBox->DestroyComponent();

	// Sets up new collision box without the collision stuff (as this might want to be customised)
	// Sets up overlap events
	this->InteractTriggerBox = NewInteractTriggerBox;
	this->InteractTriggerBox->SetupAttachment(this->RootComponent);
	this->InteractTriggerBox->SetBoxExtent(FVector(NewActorDetails.InteractAreaScale));
	this->OnActorBeginOverlap.AddDynamic(this, &AGroundItem::PickupItem);
}

UBoxComponent* AGroundItem::GetInteractTriggerBox()
{
	return InteractTriggerBox;
}


// other functions -----------------------------------------------------------------------------------------------------
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
	// On overlap, gets the overlapping actors inventory, adds this item to the inventory, and deletes this item
	UInventoryComponent* Inventory = Cast<UInventoryComponent>(OtherActor->GetComponentByClass(UInventoryComponent::StaticClass()));
	if (Inventory != nullptr)
	{
		Inventory->AddItem(InventoryDetails.Item.RowName, InventoryDetails.Amount);
		this->Destroy();
	}
}


