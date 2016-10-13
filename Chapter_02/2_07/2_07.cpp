#include "stdafx.h"
#include <iostream>

/*
int main()
{
	// even though we're initializing ch with an integer
	char ch{97};
	// cout prints a character
	std::cout << ch << std::endl;
	std::cout << 'b';

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
    return 0;
}
*/

/*
int main()
{
	char ch{ 97 };
	// assign the value of ch to an integer
	int i(ch);
	// print the integer value
	std::cout << i;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

/*
int main()
{
	char ch{ 97 };
	std::cout << ch << std::endl;
	std::cout << static_cast<int>(ch) << std::endl;
	std::cout << ch << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

/*
int main()
{
	std::cout << "Input a keyboard character: ";

	char ch;
	std::cin >> ch;
	std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/


int main()
{
	// assume the user enters "abcd" (without quotes)
	std::cout << "Input a keyboard character: ";

	char ch;
	// ch = 'a', "bcd" is left queued.
	std::cin >> ch;
	std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;

	// Note: The following cin doesn't ask the user for input, it grabs queued input!
	// ch = 'b', "cd" is left queued.
	std::cin >> ch;
	std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
