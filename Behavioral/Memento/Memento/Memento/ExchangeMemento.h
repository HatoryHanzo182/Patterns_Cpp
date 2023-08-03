#pragma once
#include "Header.h"

class ExchangeMemento final : public Memento
{
private:
	int _dollars;
	int _euro;
public:
	ExchangeMemento(const int dollar, const int euro) : _dollars(dollar), _euro(euro) {}

	int GetDollars() override;
	int GetEuro() override;
};