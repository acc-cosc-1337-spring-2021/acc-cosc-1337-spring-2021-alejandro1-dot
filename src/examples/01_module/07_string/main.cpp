//TO use string we must first declare the include<string>
#include<string>
#include<iostream>

//Then narrow it doew further

using std::string; using std::cout;

int main() 
{
	//Create string variable and display it		
	string name = "john"; //is a class

	//name.append

	//char name2 = 'a' // is not a class
	cout<<"your name is: "<<name;
	
	return 0;
}