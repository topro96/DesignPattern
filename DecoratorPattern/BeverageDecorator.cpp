#include "BeverageDecorator.h"



BeverageDecorator::BeverageDecorator(Beverage * _beverage) :
	beverage(_beverage)
{
}

void BeverageDecorator::SetCost(const double & _costs)
{
	cost = _costs;
}

void BeverageDecorator::SetDesc(const std::string & _desc)
{
	desc = _desc;
}

double BeverageDecorator::Cost()
{
	return beverage->Cost();
}

std::string BeverageDecorator::Desc()
{
	return beverage->Desc() + " " + desc;
}
