#pragma once
#include <iostream>

class IRectangleDrawing
{
public:
	virtual void Draw(double _left_top_x, double _left_top_y, double _right_bot_x, double _right_bot_y) = 0;
};


class Rectangle :	public IRectangleDrawing
{
public:
	void Draw(double left_top_x, double left_top_y, double right_bot_x, double right_bot_y);
public:

	Rectangle();

	~Rectangle();
};

