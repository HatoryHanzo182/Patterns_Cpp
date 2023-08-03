#pragma once
#include "Header.h"

class Memory
{
private:
	stack<Memento*> _history;
	Exchange* _exchange;
public:
	Memory(Exchange* exchange) : _exchange(exchange) {}

	void Backup();
	void Undo();
};