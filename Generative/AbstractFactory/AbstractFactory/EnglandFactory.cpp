#include "Header.h"

IEngine* EnglandFactory::CreateEngine() { return new JapaneseEngine; }
ICar* EnglandFactory::CreateCar() { return new EnglandCar; }