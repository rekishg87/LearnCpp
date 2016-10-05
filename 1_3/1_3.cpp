#include "stdafx.h"
#include <iostream>

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