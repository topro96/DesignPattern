#include "BeverageDecorator.h"



double Scream::Cost()
{
	return	beverage->Cost() + cost;
}

Scream::Scream(Beverage * _beverage) :
	BeverageDecorator(_beverage)
{
}

std::string Scream::Desc()
{
	return beverage->Desc() + " Scream hey! ";
}

BeverageDecorator::BeverageDecorator(Beverage * _beverage)
{
	beverage = _beverage;
}
