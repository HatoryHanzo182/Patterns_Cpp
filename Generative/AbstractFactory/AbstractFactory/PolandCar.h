#pragma once
#include "Header.h"

// A class that contains the implementation of a Poland car with a specific engine.
class PolandCar : virtual public ICar
{
public:
	void ReleaseCar(IEngine*) override;
};