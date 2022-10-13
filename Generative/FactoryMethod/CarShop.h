#pragma once
#include "Header.h"

class CarShop : virtual public IShop
{
public:
	IProduction* Create() override;
};