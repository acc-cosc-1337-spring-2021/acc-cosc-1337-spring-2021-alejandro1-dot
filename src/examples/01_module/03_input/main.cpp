//write include statements
#include<iostream>
#include "input.h"
//write namespace using statements
using std::cout;	using std::cin;
/*
Capture units and rate values from keyboard.
Call the get_total function by passing units and rates variables to it.
Save the get_total return value to a variable named total.
Display the total:

Total: 100

*/
int main() 
{
	
	int units;
	double rate;

	cout<< "Enter a unit: ";
	cin>> units;

	cout<<"Enter a rate: "
	cin>> rate;

	int total = get_total(rate, units);
	cout<<"your total is: " << total;
	return 0;
}