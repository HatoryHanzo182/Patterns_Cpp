#pragma once
#include "Header.h"

// The interface has a release method that creates a vehicle of a certain type.
class IShop
{
public:
	virtual IProduction* Create() = 0; // Create -> new Car / Create -> new Track.
};
