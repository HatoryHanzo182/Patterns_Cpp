#include "Header.h"

void Exchange::GetDollars() const { cout << "Current dollar amount: " << _dollars << "$\n"; }

void Exchange::GetEuro() const { cout << "Current euro amount: " << _euro << "Ý\n"; }

void Exchange::Sell() { _dollars ? --_dollars : 0; }

void Exchange::Buy() { ++_euro; }

ExchangeMemento* Exchange::Save() { return new ExchangeMemento(_dollars, _euro); }

void Exchange::Restore(IMemento* exchange_IMemento)
{
	_dollars = exchange_IMemento->GetDollars();
	_euro = exchange_IMemento->GetEuro();

	delete exchange_IMemento;
}