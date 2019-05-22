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
	std::cout << "Jump";
}

void Hero::Fight()
{
	std::cout << "Fight";
}

void Hero::MoveForward()
{
	std::cout << "Move forward";
}

void Hero::MoveBack()
{
	std::cout << "Move back";
}

void Hero::LieDown()
{
	std::cout << "Lie down";
}
