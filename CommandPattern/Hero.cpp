#include "Hero.h"
#include <iostream>


Hero::Hero()
{
}


Hero::~Hero()
{
}

void Hero::Jump()
{
	std::cout << "\n Player Jump";
}

void Hero::Fight()
{
	std::cout << "\n Player Fight";
}

void Hero::MoveForward()
{
	std::cout << "\n Player Move forward";
}

void Hero::MoveBack()
{
	std::cout << "\n Player Move back";
}

void Hero::LieDown()
{
	std::cout << "\n Player Lie down";
}

void Hero::DoNothing()
{
	std::cout << "\n Player Do nothing";
}
