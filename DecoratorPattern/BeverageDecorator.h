#pragma once
#include "Beverage.h"

class BeverageDecorator : public Beverage
{
private:
	double cost;
	std::string desc;
protected:
	Beverage * beverage;
public:
	BeverageDecorator(Beverage * _beverage);

	void SetCost(const double & _costs);
	void SetDesc(const std::string & _desc);

	double Cost();
	std::string Desc();
};