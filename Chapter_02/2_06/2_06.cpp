#include "stdafx.h"
#include <iostream>

/*
int main()
{
	bool b{ true };
	std::cout << b << std::endl;
	std::cout << !b << std::endl;

	bool b2{false};
	std::cout << b2 << std::endl;
	std::cout << !b2 << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

/*
int main()
{
	std::cout << true << std::endl;
	std::cout << false << std::endl;
	// print bools as true or false
	std::cout << std::boolalpha;
	std::cout << true << std::endl;
	std::cout << false << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

/*
// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
	// operator == returns true if x equals y, and false otherwise
	return (x == y);
}

int main()
{
	using namespace std;
	cout << "Enter an integer: ";
	int x;
	cin >> x;

	cout << "Enter another integer: ";
	int y;
	cin >> y;

	bool equal = isEqual(x, y);
	if (equal)
	{
		cout << x << " and " << y << " are equal" << endl;
	}
	else
	{
		cout << x << " and " << y << " are not equal" << endl;
	}

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}
*/

int readNumber()
{
	int x;
	std::cin >> x;
	return x;
}

bool isPrime(int x)
{
	if (x == 2 || x == 3 || x == 5 || x == 7)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void printAnswer(bool isPrime, int inputNumber)
{
	if (isPrime)
	{
		std::cout << inputNumber << " is an Prime number.";
	}
	else
	{
		std::cout << inputNumber << " is not an Prime number.";
	}
}

int main()
{
	using namespace std;
	cout << "Enter an integer: ";
	int x = readNumber();
	bool isPrimeNum = isPrime(x);
	printAnswer(isPrimeNum, x);

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}