#include "stdafx.h"
#include <iostream> // for std::cout and std::endl

// Definition of function doPrint()
// doPrint() is the called function in this example
void doPrint()
{
	std::cout << "In doPrint()" << std::endl;
}

// void means the function does not return a value to the caller
void returnNothing()
{
	// This function does not return a value so no return statement is needed.
}

// int means the functions returns an integer value to the caller.
int return5()
{
	// this function returns an integer, so a return statement is needed.
	return 5;
}

// getValueFromUser will read a value in from the user, and return it to the caller
int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int a = 0;
	std::cin >> a;
	return a;
}

void printA()
{
	std::cout << "A" << std::endl;
}

void printB()
{
	std::cout << "B" << std::endl;
}

// function printAB() calls both printA() and printB()
void printAB()
{
	printA();
	printB();
}

// Definition of function main()
/*
int main()
{
	std::cout << "Starting main()" << std::endl;
	// Interrupt main() by making a function call to doPrint(). main() is the caller.
	doPrint();
	std::cout << "Ending main()" << std::endl;
	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

/*
int main()
{
	// prints 5
	std::cout << return5() << std::endl;
	// prints 7
	std::cout << return5() + 2 << std::endl;

	// okay: function returnNothing() is called, no value is returned.
	returnNothing();
	// okay: function return5() is called, return value is discarded
	return5();
	
	// This line will not compile. You'll need to comment it out to continue.
	// std::count << returnNothing();

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

/*
int main()
{
	// first call to getValueFromUser
	int x = getValueFromUser();
	// second call to getValueFromUser
	int y = getValueFromUser();

	std::cout << x << " + " << y << " = " << x + y << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

int main()
{
	std::cout << "Starting main()" << std::endl;
	printAB();
	std::cout << "Ending main()" << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}

