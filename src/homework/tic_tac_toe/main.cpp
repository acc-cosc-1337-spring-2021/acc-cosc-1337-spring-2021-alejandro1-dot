#include "tic_tac_toe.h"
using std::cout;
using std::cin;


int main() 
{
	
	Tic_Tac_Toe game; 
	 
	std::string a; 

	cout<<"Are you playing as X or O: ";
	cin>>a;

	while(a != "X" && a != "O")
	{
		cout<<"Please enter upper case X or O: ";
		cin>>a; 
	}
	
	int number; 
	game.start_game(a);
	game.mark_board(number);
	return 0;
}



