#pragma once
#include "Header.h"

class IMemento
{
public:
	virtual int GetDollars() = 0;
	virtual int GetEuro() = 0;

	virtual ~IMemento() {}
};