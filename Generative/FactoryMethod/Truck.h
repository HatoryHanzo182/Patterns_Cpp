#pragma once
#include "Header.h"

class Truck : virtual public IProduction
{
public:
	virtual void Release() override;
};