#include "Vehicle.h"
#include <iostream>

using namespace BridgePattern;

int main()
{
	Vehicle* car = new Car(new AutoGear(), new LED());
	Vehicle* truck = new Truck(new ManualGear(), new Halogen());

	car->Lighting();
	car->LaunchGear();

	truck->Lighting();
	truck->LaunchGear();

	delete car;
	delete truck;

	system("pause");
	return 0;
}