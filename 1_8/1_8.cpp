#include "stdafx.h"
#include <iostream>

int add(int x, int y); // Needed so 1_8.cpp knows that add() is a function declared elsewhere

int main()
{
	using namespace std;
	cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}

