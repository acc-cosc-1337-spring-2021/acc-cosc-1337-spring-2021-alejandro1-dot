//cpp
#include "tic_tac_toe.h"
using std::vector;
using std::string;
using std::cout; 
using std::cin;


 
void Tic_Tac_Toe :: start_game(string first_player)
{
   
    player = first_player;
    display_board();  
}

//Board Display
void Tic_Tac_Toe::display_board()const
{
    cout<<"\n";
    //First Layer
    for(auto i = 0; i < 3; i++ )
    {
        cout<<pegs[i]<<"|";
    }
    
    cout<<"\n";

    //Second Layer
    for(auto j = 0; j < 3; j++)
    {
          cout<<pegs[j+3]<<"|";
    }

    cout<<"\n";

    //Third Layer
    for(auto j = 0; j < 3; j++)
    {
          cout<<pegs[j+6]<<"|";
    } 
    cout<<"\n";
}

//Marking X's or O's on the board
void Tic_Tac_Toe :: mark_board(int position)
{

    while(!(game_over()))
	{
		cout<<"Enter a number from 1-9 Player " << get_player()<<": "; 
		cin>>position;

        //When not a number in range
        while(position < 1 || position > 9)
        {
            cin.ignore();
            cout<<"ReEnter a number from 1-9, "<< get_player()<<": \t";
            cin>>position;
        }

        //Code that changes the "-"
        pegs[position - 1] = player;

        //Displays the board and moves to next player turn
        cout<<"\n";
        display_board();
        set_player_next();
	} 

    if(game_over())
    {
        cout<<"Game Over"<<"\n";
        clear_board();
    }
	

     // ----------------------------------------------
    /*

    //std::cout<<"\n"<<player<<"'s turn";
    pegs[position - 1] = player;

    cout<<"\n";
    display_board();

    //Game over screen and declare winner                   original mark_board code
    if(game_over())
    {
        cout<<player<<" won"<<"\n";
        clear_board();
    }
    else
    {
        set_player_next();
    } 

    */
    
    //-------------------------

}


//Switching Player
void Tic_Tac_Toe :: set_player_next()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }  
}

bool Tic_Tac_Toe :: check_board_full()
{

    if(
        //First layer
        (pegs[0] == "X" || pegs[0] == "O")&&(pegs[1] == "X" || pegs[1] == "O")&&(pegs[2] == "X" || pegs[2] == "O") &&
        //Second Layer
        (pegs[3] == "X" || pegs[3] == "O")&&(pegs[4] == "X" || pegs[4] == "O")&&(pegs[5] == "X" || pegs[5] == "O") &&
        //Third Layer
        (pegs[6] == "X" || pegs[6] == "O")&&(pegs[7] == "X" || pegs[7] == "O")&&(pegs[8] == "X" || pegs[8] == "O") )
    {
        return true;
    }
    else
    {
        return false;
    }
    
}





void Tic_Tac_Toe :: clear_board()
{
    pegs = {"-", "-", "-", "-", "-", "-", "-", "-", "-"};
}


