#include "Item.h"

bool FItem::operator==(FItem Other)
{
	// Checks weight and name of item match.
	return (Name == Other.Name && Weight == Other.Weight);
}
