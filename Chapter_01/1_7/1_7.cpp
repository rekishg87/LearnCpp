#include "stdafx.h"
#include <iostream>

/*
int main()
{
	using namespace std;
	cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}

int add(int x, int y)
{
	return x + y;
}
*/

/*
int add(int x, int y)
{
	return x + y;
}

int main()
{
	using namespace std;
	cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}
*/

/*
// Forward declaration of add() (using a function prototype)
int add(int x, int y);

int main()
{
	using namespace std;
	cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}
*/

// Forward declaration of add() (using a function prototype)
int add(int x, int y);

int main()
{
	using namespace std;
	cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}

// Even though the body of add() isn't defined until here
int add(int x, int y)
{
	return x + y;
}
