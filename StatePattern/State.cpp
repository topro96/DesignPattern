#include "State.h"
#include <iostream>

StatePattern::FirstState::FirstState(Gear * _gear) :
	gear(_gear)
{
}

void StatePattern::FirstState::Up()
{
	gear->SwitchState(new SecondState(gear));
}

void StatePattern::FirstState::Down()
{
	gear->SwitchState(new NoneState(gear));
}

void StatePattern::FirstState::Print()
{
	std::cout << "\nFirst state";
}



StatePattern::SecondState::SecondState(Gear * _gear) :
	gear(_gear)
{
}

void StatePattern::SecondState::Up()
{
	gear->SwitchState(new ThirdState(gear));
}

void StatePattern::SecondState::Down()
{
	gear->SwitchState(new FirstState(gear));
}

void StatePattern::SecondState::Print()
{
	std::cout << "\nSecond state";
}

StatePattern::ThirdState::ThirdState(Gear * _gear) :
	gear(_gear)
{
}

void StatePattern::ThirdState::Up()
{
	gear->SwitchState(new FourthState(gear));
}

void StatePattern::ThirdState::Down()
{
	gear->SwitchState(new SecondState(gear));
}

void StatePattern::ThirdState::Print()
{
	std::cout << "\nThirth state";
}

StatePattern::FourthState::FourthState(Gear * _gear) :
	gear(_gear)
{
	
}

void StatePattern::FourthState::Up()
{
	std::cout << "can not go up anymore!";
}

void StatePattern::FourthState::Down()
{
	gear->SwitchState(new ThirdState(gear));
}

void StatePattern::FourthState::Print()
{
	std::cout << "\nFourth state";
}

StatePattern::NoneState::NoneState(Gear * _gear) :
	gear(_gear)
{
}

void StatePattern::NoneState::Up()
{
	gear->SwitchState(new SecondState(gear));
}

void StatePattern::NoneState::Down()
{
	gear->SwitchState(new FirstState(gear));
}

void StatePattern::NoneState::Print()
{
	std::cout << "\nNone state";
}

