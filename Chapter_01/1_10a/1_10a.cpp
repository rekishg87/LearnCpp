#include "stdafx.h"
#include <iostream>
#include "square.h" // square.h is also included once here

int main()
{
	using namespace std;
	cout << "a square has " << getSquareSides() << " sides" << endl;
	cout << "a square of length 5 has perimeter length " << getSquarePerimeter(5) << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();

    return 0;
}

