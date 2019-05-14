#pragma once
#include "Beverage.h"

class BeverageDecorator : public Beverage
{
protected:
	Beverage * beverage;
public:
	BeverageDecorator(Beverage * _beverage);

	virtual double Cost() = 0;
	virtual std::string Desc() = 0;
};

class Scream : public BeverageDecorator
{
protected:
	double cost;
public:
	Scream(Beverage * _beverage);
	double Cost();
	std::string Desc();

};
