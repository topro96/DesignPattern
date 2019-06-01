
#include "Vehicle.h"
#include <iostream>
#include <string>

namespace BridgePattern
{

	void ManualGear::Handle()
	{
		std::cout << "\nManual Gear running!";
	}

	void AutoGear::Handle()
	{
		std::cout << "\nAuto gear running!";
	}

	void LED::Shine()
	{
		std::cout << "\nLED lighting!";
	}

	void Halogen::Shine()
	{
		std::cout << "\nHalogen lighting!";
	}

	Vehicle::Vehicle(Gear * _gear, Light * _light) :
		gear(_gear),
		light(_light)
	{
	}

	Vehicle::~Vehicle()
	{
		delete gear;
		delete light;
	}

	void Vehicle::Lighting()
	{
		light->Shine();
	}

	void Vehicle::LaunchGear()
	{
		gear->Handle();
	}

	Car::Car(Gear * _gear, Light * _light) :
		Vehicle(_gear, _light)
	{
	}

	Car::~Car()
	{
	}

	Truck::Truck(Gear * _gear, Light * _light) :
		Vehicle(_gear, _light)
	{
	}

	Truck::~Truck()
	{
	}

}