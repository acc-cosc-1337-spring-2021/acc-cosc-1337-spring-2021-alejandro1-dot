//cpp
#include "tic_tac_toe.h"
using std::vector;
using std::string;
using std::cout; 
using std::cin;


//Game Start
void Tic_Tac_Toe :: start_game(string first_player)
{
   
    player = first_player;
    
    clear_board();
    // HW 8 says to deleta display_board(); 
    display_board();  
}



// HW 8 says to deleta display_board(); 

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

    /*
    while(!(game_over()))
        {
            
            cout<<"Enter a number from 1-9 Player " << get_player()<<": "; 
            cin>>position;

            //When not a number in range
            while(position < 1 || position > 9)
            {
                cin.clear();
                cout<<"ReEnter a number from 1-9, "<< get_player()<<": \t";
                cin>>position;
            }

        


            //Code that changes the "-"
        
            pegs[position - 1] = player;


            //Displays the board and moves to next player turn
            display_board();
            cout<<"\n";
            //Hw 8 deletes board
            set_player_next();
        }
        */

  
    pegs[position - 1] = player;


    //Displays the board and moves to next player turn
    display_board();
    set_player_next();
    
    
    
    //New Code
    if(game_over())
    {
        cout<<"Game Over"<<"\n";
        set_winner(); 
        
        //Wining by Row
        if(check_row_win())
        {
            cout<<get_winner()<< " wins"<<"\n";
        }
        //Wining by column
        else if(check_column_win())
        {
            cout<<get_winner()<< " wins"<<"\n";
        }
        //Winning diagnal
        else if(check_diagonal_win())
        {
            cout<<get_winner()<< " wins";
        }
        // End of HW 7
    }

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
    
    // Hw 6
    else
    {
        return false;
    }

   
    
}



void Tic_Tac_Toe :: clear_board()
{
    pegs = {"-", "-", "-", "-", "-", "-", "-", "-", "-"};
}



//Hw 7


//Setting the winner code

void Tic_Tac_Toe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

//Winning by a column check
 

 
 bool Tic_Tac_Toe :: check_row_win()
 {
     //Row winner is X
     if(
         //First layer
        ((pegs[0] == "X" && pegs[0] != "O") && (pegs[1] == "X" && pegs[1] != "O") && (pegs[2] == "X" && pegs[2] != "O")) ||
        //Second Layer
        ((pegs[3] == "X" && pegs[3] != "O") && (pegs[4] == "X" && pegs[4] != "O") && (pegs[5] == "X" && pegs[5] != "O")) ||
        //Third Layer
        ((pegs[6] == "X" && pegs[6] != "O") && (pegs[7] == "X" && pegs[7] != "O") && (pegs[8] == "X" && pegs[8] != "O")) )

        {
            return true; 
        }

    //Row winner is O
    else if( 
         //First layer
        ((pegs[0] != "X" && pegs[0] == "O") && (pegs[1] != "X" && pegs[1] == "O") && (pegs[2] != "X" && pegs[2] == "O")) ||
        //Second Layer
        ((pegs[3] != "X" && pegs[3] == "O") && (pegs[4] != "X" && pegs[4] == "O") && (pegs[5] != "X" && pegs[5] == "O")) ||
        //Third Layer
        ((pegs[6] != "X" && pegs[6] == "O") && (pegs[7] != "X" && pegs[7] == "O") && (pegs[8] != "X" && pegs[8] == "O")) )
        {
            return true;
        }
    //No winner
    else
    {
        return false;
    }

 }

 bool Tic_Tac_Toe :: check_column_win()
 {
      //Columns winner is X
     if(
         //First layer
        ((pegs[0] == "X" && pegs[0] != "O") && (pegs[3] == "X" && pegs[3] != "O") && (pegs[6] == "X" && pegs[6] != "O")) ||
        //Second Layer
        ((pegs[1] == "X" && pegs[1] != "O") && (pegs[4] == "X" && pegs[4] != "O") && (pegs[7] == "X" && pegs[7] != "O")) ||
        //Third Layer
        ((pegs[2] == "X" && pegs[2] != "O") && (pegs[5] == "X" && pegs[5] != "O") && (pegs[8] == "X" && pegs[8] != "O")) )

        {
            return true; 
        }

    //Column winner is O
    else if( 
         //First layer
        ((pegs[0] != "X" && pegs[0] == "O") && (pegs[3] != "X" && pegs[3] == "O") && (pegs[6] != "X" && pegs[6] == "O")) ||
        //Second Layer
        ((pegs[1] != "X" && pegs[1] == "O") && (pegs[4] != "X" && pegs[4] == "O") && (pegs[7] != "X" && pegs[7] == "O")) ||
        //Third Layer
        ((pegs[2] != "X" && pegs[2] == "O") && (pegs[5] != "X" && pegs[5] == "O") && (pegs[8] != "X" && pegs[8] == "O")) )
        {
            return true; 
        }
    //No winner
    else
    {
        return false;
    }

 
 }

 bool Tic_Tac_Toe :: check_diagonal_win()
 {
     // X wins diag
      if(
          //Diagnal layer in positive slope
        ((pegs[0] == "X" && pegs[0] != "O") && (pegs[4] == "X" && pegs[4] != "O") && (pegs[8] == "X" && pegs[8] != "O")) ||
         //Diagnal layer in negative slope
        ((pegs[6] == "X" && pegs[6] != "O") && (pegs[4] == "X" && pegs[4] != "O") && (pegs[2] == "X" && pegs[2] != "O")) )
    {
        return true; 
    }

    // O wins diag
    else if( 
        //Diagnal layer in positive slope
        ((pegs[0] != "X" && pegs[0] == "O") && (pegs[4] != "X" && pegs[4] == "O") && (pegs[8] != "X" && pegs[8] == "O")) ||
        ////Diagnal layer in negative slope
        ((pegs[6] != "X" && pegs[6] == "O") && (pegs[4] != "X" && pegs[4] == "O") && (pegs[2] != "X" && pegs[2] == "O")) )
    {
        return true;
    }
    //No win
    else
    {
        return false; 
    }
 }

 // End of Hw 7