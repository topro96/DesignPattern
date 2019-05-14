#include <iostream>
#include "Beverage.h"
#include "BeverageDecorator.h"

int main()
{
	Beverage *coffee = new Coffee();

	BeverageDecorator* screamDecorator = new Scream(coffee);

	std::cout <<	screamDecorator->Desc();

	system("pause");
	return 0;
}