#include "Header.h"

void Memory::Backup() { _history.push(_exchange->Save()); }

void Memory::Undo()
{
	if (_history.empty())
		return;

	_exchange->Restore(_history.top());
	_history.pop();
}