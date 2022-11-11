#pragma once
#include "Header.h"

// This interface is an abstract representation of the release of a new car.
// It has a pure Release method which will be overridden by child classes.

class IProduction
{
public:
	virtual void Release() = 0;  // Car -> Release() / Truck -> Release().
};