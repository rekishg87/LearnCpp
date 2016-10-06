#include "stdafx.h"
#include <iostream>
#include "getMathematicalOperation.h"

int getMathematicalOperation()
{
	std::cout << "Please enter which operator you want "
		<< "(1 = +, 2 = -, 3 = *, 4 = /): ";

	int op;
	std::cin >> op;

	// What if the user enters an invalid character?
	// We'll ignore this possibility for now

	return op;
}