#include "stdafx.h"
#include <iostream>
#include "add.h"

int main()
{
	using namespace std;
	cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}

