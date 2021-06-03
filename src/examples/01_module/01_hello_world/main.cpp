#include<iostream>
#include"hello.h"

int main() 
{
	std::cout<<"Hello World! I will test this to see if it works"<<"\n";

	int var;
	int& ref_var = var; 

	var = 5;

	std::cout<<experiment(var)<<"\n";
	std::cout<<var<<"\n";

	std::cout<<experiment(ref_var)<<"\n";
	std::cout<<ref_var<<"\n";

	
	return 0;
}



