//Write the include statement for types.h here

//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>
#include "types.h"

int main() 
{
	//Blank int variable
	int num1;
	//User Input
	std::cout<<"Enter your first number: ";
	//User Input Stored for num1
	std::cin >> num1;
	
	//Function assignment for num1
	int number1_input = multiply_number_homework(num1);

	//Value 2
	int num = 4;


	//One Parameter Keyboard Input Function x Value 2 (num)
	int endResult = number1_input * num;

	//Total amount
	std::cout<<"Your total number is: "<< endResult;
	
	//End
	return 0;
}

