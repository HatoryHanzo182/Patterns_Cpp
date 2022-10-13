#pragma once
#include "Header.h"

class TruckShop : virtual public IShop
{
public:
	IProduction* Create() override;
};