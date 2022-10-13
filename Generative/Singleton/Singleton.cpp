#include "Header.h"

Singleton& Singleton::getInst()
{
	static Singleton inst;

	return inst;
}