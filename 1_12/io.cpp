#include "stdafx.h"
#include "io.h"
#include <iostream>

int readNumber()
{
	std::cout << "Enter a number: " << std::endl;
	int x;
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "Your answer is: " << x << std::endl;
}