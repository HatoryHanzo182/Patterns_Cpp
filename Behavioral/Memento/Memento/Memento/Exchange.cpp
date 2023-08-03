#include "Exchange.h"

void Exchange::GetDollars() const { cout << "Current dollar amount: " << _dollars << "$\n"; }
void Exchange::GetEuro() const { cout << "Current euro amount: " << _euro << "Ý\n"; }
void Exchange::Sell() { _dollars ? --_dollars : 0; }
void Exchange::Buy() { ++_euro; }
ExchangeMemento* Exchange::Save() { return new ExchangeMemento(_dollars, _euro); }
void Exchange::Restore(Memento* exchange_memento)
{
	_dollars = exchange_memento->GetDollars();
	_euro = exchange_memento->GetEuro();

	delete exchange_memento;
}
