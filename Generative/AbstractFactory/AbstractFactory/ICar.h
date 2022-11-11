#pragma once
#include "Header.h"

// A class that contains the implementation of a car with a specific engine.
class ICar
{
public:
	virtual void ReleaseCar(IEngine*) = 0;
};