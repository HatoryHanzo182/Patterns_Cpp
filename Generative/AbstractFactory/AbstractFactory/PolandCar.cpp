#include "Header.h"

void PolandCar::ReleaseCar(IEngine* engine) 
{ 
	cout << "In Poland car - ";
	
	engine->ReleasEngine();
}