#pragma once
#include "Header.h"

// Creates Poland cars.
class PolandFactory : virtual public IFactory
{
public:
	IEngine* CreateEngine() override;
	ICar* CreateCar() override;
};