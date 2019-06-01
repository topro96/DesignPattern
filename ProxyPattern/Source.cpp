#include "StringProxy.h"
#include <string>
#include <iostream>

int main()
{
	StringProxy * string_proxy = new StringProxy("I love you so much!");
	int num_space = string_proxy->GetNumSpace();
	std::cout << "\nNumber of space: " << num_space;

	delete string_proxy;
	system("pause");
	return 0;
}