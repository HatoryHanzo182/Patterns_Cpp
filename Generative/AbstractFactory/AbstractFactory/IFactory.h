#pragma once
#include "Header.h"

// Factory creating a full-fledged car.
class IFactory
{
public:
	virtual IEngine* CreateEngine() = 0;
	virtual ICar* CreateCar() = 0;
};