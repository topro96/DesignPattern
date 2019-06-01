#include <iostream>
#include "Computer.h"

int main()
{
	ComputerFacade * computer_dacade = new ComputerFacade();
	computer_dacade->Start();
	delete computer_dacade;
	system("pause");
	return 0;
}