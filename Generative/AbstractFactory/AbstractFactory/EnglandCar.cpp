#include "Header.h"

void EnglandCar::ReleaseCar(IEngine* engine) 
{ 
	cout << "In England car - ";

	engine->ReleasEngine();
}