#pragma once
#include "Header.h"

class IShop
{
public:
	virtual IProduction* Create() = 0;
};
