#include <iostream>
#include "Gear.h"
#include "State.h"

using namespace StatePattern;

int main()
{
	Gear * gear = new Gear();
	gear->Launch();

	delete gear;

	system("pause");
	return 0;
}
