#include "Header.h"

// In this pattern, examples of creating types of cars.

int main()
{
	IShop* creator;
	IProduction* product_car;
	IProduction* product_truck;

	creator = new CarShop();
	product_car = creator->Create();
	product_car->Release();
	creator = new TruckShop();
	product_truck = creator->Create();
	product_truck->Release();

	return 0;
}