#pragma once
#include "Header.h"

class Car : virtual public IProduction
{
public:
	virtual void Release() override;
};