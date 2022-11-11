#include "Header.h"

IEngine* PolandFactory::CreateEngine() { return new GermanEngine(); }
ICar* PolandFactory::CreateCar() { return new PolandCar(); }