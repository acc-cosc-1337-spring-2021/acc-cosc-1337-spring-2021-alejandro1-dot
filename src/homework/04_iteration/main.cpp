//write include statements
#include "dna.h"
//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	cout<<"Welcome to Unknown DNA analysis. This program will allow you to enter a strand of dna and either reverse, complement, or receive GC content"<<"\n";
	
	//Menu

	int menu_choice; // input 
	
	cout<<"Enter 1 for GC Content"<<"\n"<<"Enter 2 for DNA Complement"<<"\n";
	cin >> menu_choice;

	char loop_continue; 

	do
	{
		/* code */
		while((menu_choice != 1 && menu_choice != 2 && menu_choice != 3))
		{
			cout<<"incorrect input. Try again:\t";
			cin.clear();
			cin>>menu_choice;

		}
		
		std::string dna_input;

		//Dna GC
		if(menu_choice == 1)
		{
			cout<<"You chosen GC content. Enter your strand: ";
			cin>>dna_input; 

			cout<<"Your results are: "<<get_gc_content(dna_input);
		}
		//DNA COmplement
		else if(menu_choice == 2)
		{
			cout<<"You chosen DNA Complement. Enter your strand: ";
			cin>>dna_input; 

			cout<<"Your Entered: "<<dna_input<<"\n";
			cout<<"Your results are: "<<get_dna_complement(dna_input);
		}

		cout<<"\nWant to try again. enter Y or y. Else enter any button to exit\t";
		cin>>loop_continue;

		if(loop_continue == 'Y' || loop_continue == 'y')
		{
			cout<<"Enter 1 for GC Content"<<"\n"<<"Enter 2 for DNA Complement"<<"\n";
			cin >> menu_choice;
		}
		
	} while(loop_continue == 'Y' || loop_continue == 'y');
	
	
		
	
	/*
		while((menu_choice != 1 && menu_choice != 2 && menu_choice != 3))
		{
			cout<<"incorrect input. Try again:\t";
			cin.clear();
			cin>>menu_choice;

		}
		
		std::string dna_input;

		//Dna GC
		if(menu_choice == 1)
		{
			cout<<"You chosen GC content. Enter your strand: ";
			cin>>dna_input; 

			cout<<"Your results are: "<<get_gc_content(dna_input);

			
		}
		//DNA COmplement
		else if(menu_choice == 2)
		{
			cout<<"You chosen DNA Complement. Enter your strand: ";
			cin>>dna_input; 

			cout<<"Your Entered: "<<dna_input<<"\n";
			cout<<"Your results are: "<<get_dna_complement(dna_input);
			
		}
	*/
	

	return 0;
}