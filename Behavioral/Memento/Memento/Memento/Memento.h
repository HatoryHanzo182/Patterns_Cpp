#pragma once
#include "Header.h"

class Memento
{
public:
	virtual int GetDollars() = 0;
	virtual int GetEuro() = 0;

	virtual ~Memento() {}
};