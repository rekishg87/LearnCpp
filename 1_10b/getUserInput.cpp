#include "stdafx.h"
#include <iostream>
#include "getUserInput.h"

int getUserInput()
{
	std::cout << "Please enter an integer: ";
	int value;
	std::cin >> value;
	return value;
}