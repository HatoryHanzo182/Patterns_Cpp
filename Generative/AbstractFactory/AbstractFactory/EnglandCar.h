#pragma once
#include "Header.h"

// A class that contains the implementation of a England car with a specific engine.
class EnglandCar : virtual public ICar
{
public:
	void ReleaseCar(IEngine*) override;
};