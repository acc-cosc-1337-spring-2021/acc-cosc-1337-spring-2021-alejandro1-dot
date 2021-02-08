//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>


int main() 
{
	//Blank int variable
	int num1;
	//User Input
	std::cout<<"Enter your first number: ";
	//User Input Stored for num1
	std::cin >> num1;

	int num;
	std::cout<<"Multiply by: ";
	std::cin >> num;


	//One Parameter Keyboard Input Function
	int endResult = multiply_number(num1, num);
	
	std::cout<<"Your total number is: "<< endResult;
	
	//End
	return 0;
}

