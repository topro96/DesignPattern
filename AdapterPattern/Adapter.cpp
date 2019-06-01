#include "Adapter.h"

void Adapter::DrawRectangle(double left_bot_x, double left_bot_y, double width, double height)
{
	rectangle_drawing->Draw(left_bot_x , left_bot_y + height, left_bot_x + width, left_bot_y);
}

Adapter::Adapter(IRectangleDrawing * _drawing) :
	rectangle_drawing(_drawing)
{
}

Adapter::~Adapter()
{
}
