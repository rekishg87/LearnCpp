#include "stdafx.h"
#include <iostream>
/*
int main()
{
	// ask user for a number
	std::cout << "Enter a number: "; 
	int x = 0;
	//read number from console and store it in x
	std::cin >> x; 
	std::cout << "You entered " << x << std::endl;

	// reset any error flags
	std::cin.clear(); 
	// ignore any characters in the input buffer until we find an enter character
	std::cin.ignore(32757, '\n'); 
	// get one more char from the user
	std::cin.get();
	return 0;
}
*/

/*
int main()
{
	// ask user for a number
	// this using declaration tells the compiler that cout should resolve to std::cout
	using std::cout;
	// so no std:: prefix is needed here!
	cout << "Enter a number: ";
	int x = 0;
	//read number from console and store it in x
	using std::cin;
	cin >> x;
	cout << "You entered " << x << std::endl;

	// reset any error flags
	cin.clear();
	// ignore any characters in the input buffer until we find an enter character
	cin.ignore(32757, '\n');
	// get one more char from the user
	cin.get();
	return 0;
}
*/

int main()
{
	// ask user for a number
	// this using directive tells the compiler that we're using everthing in the std namespace!
	using namespace std;
	// so no std:: prefix is needed here!
	cout << "Enter a number: ";
	int x = 0;
	//read number from console and store it in x
	cin >> x;
	cout << "You entered " << x << endl;

	// reset any error flags
	cin.clear();
	// ignore any characters in the input buffer until we find an enter character
	cin.ignore(32757, '\n');
	// get one more char from the user
	cin.get();
	return 0;
}