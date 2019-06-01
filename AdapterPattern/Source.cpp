#include <iostream>
#include "Adaptee.h"
#include "Adapter.h"

int main()
{
	ITarget* target = new Adapter(new Rectangle());
	target->DrawRectangle(0, 0, 100, 100);

	system("pause");
	return 0;
}