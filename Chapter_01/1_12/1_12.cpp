#include "stdafx.h"
#include <iostream>
#include "io.h"

// Forward declarations for the functions in io.cpp
// Not needed if using header file (make use of header guard)
/*
int readNumber();
void writeAnswer(int x);
*/


int main()
{
	int x = readNumber();
	int y = readNumber();
	writeAnswer(x + y);

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
    return 0;
}

