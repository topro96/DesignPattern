#pragma once
#include "Adaptee.h"


class ITarget
{
public:
	virtual void DrawRectangle(double left_bot_x, double left_bot_y, double width, double height) = 0;
};

class Adapter : public ITarget
{
private:
	IRectangleDrawing * rectangle_drawing;
public:
	void DrawRectangle(double left_bot_x, double left_bot_y, double width, double height);
public:
	Adapter(IRectangleDrawing * _drawing);
	~Adapter();
};

