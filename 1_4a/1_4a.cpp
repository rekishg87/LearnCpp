#include "stdafx.h"
#include <iostream>

// This function takes no parameters
// It does not reply on the caller for anything
void doPrint()
{
	std::cout << "In doPrint()" << std::endl;
}

// This function takes one integer parameter named x
// The caller will supply the value x
void printValue(int x, int y)
{
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}

// This function has two integer parameters, one named x, and one named y
// The caller will supply the value of both x and y
int add(int x, int y)
{
	return x + y;
}

int multiply(int z, int w)
{
	return z * w;
}

int doubleNumber(int x)
{
	return x * 2;
}

int main()
{
	using namespace std;
	cout << add(4, 5) << endl;
	cout << multiply(2, 3) << endl;

	cout << add(1 + 2, 3 * 4) << endl;

	int a = 5;
	cout << add(a, a) << endl;

	cout << add(1, multiply(2, 3)) << endl;
	cout << add(1, add(2, 3)) << endl;

	// 6 is the argument passes to function printValue()
	printValue(6, 7);
	// 2 and 3 are the arguments passed to function add()
	cout << add(2, 3) << endl;

	cout << doubleNumber(12) << endl;

	cout << "Enter an integer: ";
	int x = 0;
	cin >> x;
	cout << "You number: " << x << " * 2 = " << doubleNumber(x) << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}

