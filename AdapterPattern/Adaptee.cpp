#include "Adaptee.h"
#include <iostream>

void Rectangle::Draw(double left_top_x, double left_top_y, double right_bot_x, double right_bot_y)
{
	std::cout << "\nRectangle: top_left(" << left_top_x << ", " << left_top_y << "); right_bot(" <<
		right_bot_x << ", " << right_bot_y << ")";
}

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}
