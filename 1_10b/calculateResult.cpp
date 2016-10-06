#include "stdafx.h"
#include <iostream>
#include "calculateResult.h"

int calculateResult(int x, int op, int y)
{
	// Note: we use the == operator to compare two values to see if they are equal
	// we need to use if statements here because there's no direct way to convert op into the appropriate operator

	// If user chose addition (#1)
	if (op == 1)
	{
		return x + y;
	}

	// If user chose substraction (#2)
	if (op == 2)
	{
		return x - y;
	}

	// If user chose multiplication (#3)
	if (op == 3)
	{
		return  x * y;
	}

	// If user chose division (#4)
	if (op == 4)
	{
		return x / y;
	}
}