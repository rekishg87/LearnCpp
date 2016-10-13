#include "stdafx.h"
#include <iostream>
#include <cstdint>


int main()
{
	// direct initialization
	std::int16_t i{ 5 };
	std::cout << i;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
    return 0;
}

