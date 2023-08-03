#pragma once
#include "Header.h"

class Exchange
{
private:
	int _dollars;
	int _euro;
public:
	Exchange(const int dollars, const int euro) : _dollars(dollars), _euro(euro) {}

	void GetDollars() const;
	void GetEuro() const;
	void Sell();
	void Buy();
	ExchangeMemento* Save();
	void Restore(Memento*);
};