#include "Header.h"

// Overview of the Abstract Factory.
int main()
{
	IFactory* factory = new EnglandFactory();  //<- We create a factory.
	IEngine* engine = factory->CreateEngine();  //<- We create a engine.
	ICar* car = factory->CreateCar();  //<- We create a car.

	car->ReleaseCar(engine);
	
	cout << endl;
//--------------------------------------------------
	IFactory* factory1 = new PolandFactory();
	IEngine* engine1 = factory1->CreateEngine();
	ICar* car1 = factory1->CreateCar();

	car1->ReleaseCar(engine1);
	return 0;
}