//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
#include <iostream>


int main() 
{
	bool even;
	int value;

	std::count<<"Enter a number; ";
	std::cin>>value;

	even = is_even(value);

	if (even == true)
	{
		count<<value<<" is even";
	}

	return 0;
}

