#include "Gear.h"
#include "State.h"
#include <iostream>
#include <conio.h>

#define KEY_UP			72
#define KEY_DOWN		80
#define KEY_ESC			27

StatePattern::Gear::~Gear()
{
	delete current_state;
}

void StatePattern::Gear::Up()
{
	current_state->Up();
}

void StatePattern::Gear::Down()
{
	current_state->Down();
}

void StatePattern::Gear::SwitchState(GearState * state)
{
	if (current_state != NULL)
		delete current_state;

	current_state = state;
}

void StatePattern::Gear::Launch()
{
	current_state = new NoneState(this);

	int c = 0;
	std::cout << "\nGo go go:\n";
	while (1)
	{

		c = 0;
		switch ((c = _getch())) {
		case KEY_UP:
			this->Up();
			break;
		case KEY_DOWN:
			this->Down();
		default:
			break;
		}
		current_state->Print();
		if (KEY_ESC == c)
			break;
	}


}

