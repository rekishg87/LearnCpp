#include "stdafx.h"
#include <iostream>
#include <iomanip> // for std::setpercision()

/*
int main()
{
	float f{9.87654321f};
	std::cout << f << std::endl;
	f = 987.654321f;
	std::cout << f << std::endl;
	f = 987654.321f;
	std::cout << f << std::endl;
	f = 9876543.21f;
	std::cout << f << std::endl;
	f = 0.0000987654321f;
	std::cout << f << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();

    return 0;
}
*/

/*
int main()
{
	// Show 16 digits
	std::cout << std::setprecision(16);
	float f{ 3.33333333333333333333333333333333333333f };
	std::cout << f << std::endl;
	double d{ 3.3333333333333333333333333333333333333 };
	std::cout << d << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();

	return 0;
}
*/

/*
int main()
{
	// f has 10 significant digits
	float f{ 123456789.0f };
	// to show 9 digits in f
	std::cout << std::setprecision(9);
	std::cout << f << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();

	return 0;
}
*/

/*
int main()
{
	double d{0.1};
	// use default cout percision of 6
	std::cout << d << std::endl;
	std::cout << std::setprecision(17);
	std::cout << d << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();

	return 0;
}
*/

/*
int main()
{
	std::cout << std::setprecision(17);

	double d1{1.0};
	std::cout << d1 << std::endl;

	// should equal to 1.0
	double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
	std::cout << d2 << std::endl;

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();

	return 0;
}
*/

int main()
{
	double zero{0.0};
	// positive infinity
	double posinf{5.0 / zero};
	std::cout << posinf << "\n";

	// negative infinity
	double neginf{-5.0 / zero};
	std::cout << neginf << "\n";

	// not a number (NaN, mathematically invalid)
	double nan{ zero / zero };
	std::cout << nan << "\n";

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();

	return 0;
}


