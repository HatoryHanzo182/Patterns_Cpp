#pragma once
#include "Header.h"

// Type of German-made engine.
class GermanEngine : virtual public IEngine
{
public:
	void ReleasEngine() override;
};