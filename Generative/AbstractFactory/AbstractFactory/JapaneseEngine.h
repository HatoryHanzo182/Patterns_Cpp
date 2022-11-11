#pragma once
#include "Header.h"

// Type of Japanese-made engine.
class JapaneseEngine : virtual public IEngine
{
public:
	void ReleasEngine() override;
};