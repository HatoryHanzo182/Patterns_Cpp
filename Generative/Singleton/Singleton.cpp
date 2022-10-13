#include "Header.h"

Singleton& Singleton::getInst()  // Implementation getInst().
{
	static Singleton inst;

	return inst;
} 