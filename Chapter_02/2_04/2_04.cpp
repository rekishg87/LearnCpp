#include "stdafx.h"
#include <iostream>

/*
int main()
{
	//For advanced readers, here’s what’s actually happening behind the scenes: 
	//the number 65,535 is represented by the bit pattern 1111 1111 1111 1111 in binary. 
	//65,535 is the largest number an unsigned 2 byte (16-bit) integer can hold, 
	//as it uses all 16 bits. When we add 1 to the value, the new value should be 65,536. 
	//However, the bit pattern of 65,536 is represented in binary as 1 0000 0000 0000 0000, 
	//which is 17 bits! Consequently, the highest bit (which is the 1) is lost, 
	//and the low 16 bits are all that is left. The bit pattern 0000 0000 0000 0000 
	//corresponds to the number 0, which is our result.

	using namespace std;
	// Largest 16-bit unsigned value possible
	unsigned short x{65535}; 
	cout << "x was: " << x << endl;
	// 65536 is out of our range -- we get overflow because x can't hold 17 bits
	x = x + 1;
	cout << "x is now: " << x << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}
*/

/*
int main()
{
	using namespace std;
	// smallest 2-byte unsigned value possible
	unsigned short x{0};
	cout << "x was: " << x << endl;
	// overflow!
	x = x - 1;
	cout << "x is now: " << x << endl;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}
*/

/*
int main()
{
	using namespace std;
	cout << 20 / 4;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}
*/

int main()
{
	//When doing division with two integers, c++ produces an integer result.
	//since integers can’t hold fractional values, any fractional portion is 
	//simply dropped(not rounded!).
	//taking a closer look at the above example, 8 / 5 produces the value 1.6.
	//the fractional part(0.6) is dropped, and the result of 1 remains.

	using namespace std;
	cout << 8 / 5;

	cin.clear();
	cin.ignore(32757, '\n');
	cin.get();
	return 0;
}