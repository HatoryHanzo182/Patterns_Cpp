#pragma once
#include "Header.h"

class Exchange  // Represents the exchange.
{
private:
	int _dollars;
	int _euro;
public:
	Exchange(const int dollars, const int euro) : _dollars(dollars), _euro(euro) {}

	void GetDollars() const;  // The number of dollars on the exchange.
	void GetEuro() const;  // The number of euro on the exchange.
	void Sell();  // Dollar sale simulation.
	void Buy();  // Euro buying simulation.
	ExchangeMemento* Save();  // Takes a snapshot of the state of the exchange, and returns that snapshot.
	void Restore(IMemento*);  // Restores the current amount of dollars and euros.
};