#include "stdafx.h"
#include <iostream>

/*
int main()
{
	int x = 1;
	std::cout << x << " ";

	x = x + 1;
	std::cout << x << " ";

	x = x + 2;
	std::cout << x << " ";

	x = x + 4;
	std::cout << x << " ";

    return 0;
}
*/

void CallC()
{
	std::cout << "C called" << std::endl;
}

void CallB()
{
	std::cout << "B Called" << std::endl;
}

void CallA()
{
	CallB();
	CallC();
}

int main()
{
	CallA();

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	return 0;
}
