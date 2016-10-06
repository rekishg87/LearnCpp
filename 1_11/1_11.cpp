#include "stdafx.h"
#include <iostream>

void printValue(int nValue)
{
	std::cout << nValue;
}

int main()
{
	printValue(5);

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();

    return 0;
}

