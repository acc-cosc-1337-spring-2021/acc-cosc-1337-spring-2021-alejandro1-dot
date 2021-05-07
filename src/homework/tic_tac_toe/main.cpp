#include "tic_tac_toe.h"
using std::cout;
using std::cin;


int main() 
{

	char play_again = 'Y';

	while(play_again == 'Y' || play_again == 'y')
	{
		Tic_Tac_Toe game; 
	 
		std::string a; 
		int number;

		cout<<"Are you playing as X or O: ";
		cin>>a;

		while(a != "X" && a != "O")
		{
			cout<<"Please enter upper case X or O: ";
			cin>>a; 
		}	

			game.start_game(a);
			game.mark_board(number);
		
		
		cout<<"Want to play again? Enter Y or y, else enter any character to escape: ";
		cin>>play_again;
		
		
	

		
	}
	
	//cout<<"Thanks for playing";
	return 0;
}


