
#include "chars.h"
#include <iostream>
using std::cout; using std::cin;
int main() 
{
	//Create a char variable and display it
	auto letter= 'G';
	
	cout<<letter<<"\n";

	char i = '9';
	cout<<i<<"\n";

	cout<<"the letter of ASCII value is "<< get_char_ascii('C');


	return 0;
}