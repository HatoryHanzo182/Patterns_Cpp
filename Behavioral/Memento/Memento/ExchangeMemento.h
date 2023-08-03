#pragma once
#include "Header.h"

class ExchangeMemento final : public IMemento  // Snapshot of the state of the exchange.
{
private:
	int _dollars;
	int _euro;
public:
	ExchangeMemento(const int dollar, const int euro) : _dollars(dollar), _euro(euro) {}

	int GetDollars() override;  // The number of dollars on the exchange.
	int GetEuro() override;  // The number of euro on the exchange
};