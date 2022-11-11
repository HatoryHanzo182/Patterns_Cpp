#pragma once
#include "Header.h"

// Creates English cars.
class EnglandFactory : virtual public IFactory
{
public:
	IEngine* CreateEngine() override;
	ICar* CreateCar() override;
};