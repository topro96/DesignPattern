#pragma once
#include <string>

class Beverage
{
public:
	virtual double Cost() = 0;
	virtual std::string Desc() = 0;
};

class Coffee : public Beverage
{
	double Cost();
	std::string Desc();
};
