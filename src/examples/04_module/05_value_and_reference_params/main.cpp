#include<iostream>
#include "value_ref.h"

int main() 
{
	auto num1 = 5; 

	pass_by_val_and_ref(num1);//call by value


	return 0;
}