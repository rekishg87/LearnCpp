#include "stdafx.h"
#include <iostream>
#include "getUserInput.h"
#include "getMathematicalOperation.h"
#include "calculateResult.h"
#include "printResult.h"

int main()
{
	// Get first number from user
	int input1 = getUserInput();

	// Get mathematical operation from user
	int op = getMathematicalOperation();

	// Get second number from user
	int input2 = getUserInput();
    
	// Calculate result and store in temporary variable (for readability/debug-ability)
	int result = calculateResult(input1, op, input2);

	// Print result
	printResult(result);

	std::cin.clear();
	std::cin.ignore(32757, '\n');
	std::cin.get();

	return 0;
}

