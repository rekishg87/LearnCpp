#include "stdafx.h"
#include <iostream>

/*
int main()
{
	// 0 before the number means this is an octal
	int x = 012;
	std::cout << x;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
    return 0;
}
*/

/*
int main()
{
	// 0x before the number means this is hexadecimal
	int x = 0xFF;
	std::cout << x;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

/*
int main()
{
	int bin(0);
	bin = 0x01; // assign binary 0000 0001 to the variable
	bin = 0x02; // assign binary 0000 0010 to the variable
	bin = 0x04; // assign binary 0000 0100 to the variable
	bin = 0x08; // assign binary 0000 1000 to the variable
	bin = 0x10; // assign binary 0001 0000 to the variable
	bin = 0x20; // assign binary 0010 0000 to the variable
	bin = 0x40; // assign binary 0100 0000 to the variable
	bin = 0x80; // assign binary 1000 0000 to the variable
	bin = 0xFF; // assign binary 1111 1111 to the variable
	bin = 0xB3; // assign binary 1010 0011 to the variable
	bin = 0xF770; // assign binary 1111 0111 0111 0000 to the variable

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

/*
int main()
{
	int bin(0);
	bin = 0b1;  // assign binary 0000 0001 to the variable
	bin = 0b11; // assign binary 0000 0011 to the variable
	bin = 0b1010; // assign binary 0000 1010 to the variable
	bin = 0b11110000; // assign binary 1111 0000 to the variable

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}
*/

int main()
{
	// assign binary 1011 0010 to the variable
	int bin = 0b1011'0010;
	// much easier to read than 2532673462
	long value = 2'532'673'462;
	std::cout << bin;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();
	return 0;
}

