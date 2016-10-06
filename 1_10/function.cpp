#include "stdafx.h"
#include <iostream>

void doSomething()
{
	using namespace std;
#ifdef PRINT
	cout << "Printing!";

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
#endif
#ifndef PRINT
	cout << "Not printing!";

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
#endif
}
