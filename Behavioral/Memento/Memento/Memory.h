#pragma once
#include "Header.h"

class Memory final  // State storage class.
{
private:
	stack<IMemento*> _history;
	Exchange* _exchange;
public:
	Memory(Exchange* exchange) : _exchange(exchange) {}

	void Backup();  // Writes to the memory stack the list that the save method will return, called on the exchange field.
	void Undo();  // Check for snapshots in memory.
};