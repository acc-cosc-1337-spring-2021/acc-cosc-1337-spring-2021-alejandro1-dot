//h
#ifndef TIC_TAC_TOE_h
#define TIC_TAC_TOE_h

//Includes
#include<iostream>
#include<vector>
#include<string>
#include <ostream>

using std::string;
using std::vector;

class Tic_Tac_Toe
{
public:
    bool game_over(){return check_board_full() || check_row_win() || check_column_win() || check_diagonal_win() ;}
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const{return player;}
    
    // HW 8 says to deleta display_board(); 
    void display_board()const; 
    
    //HW 7
    string get_winner()const{return winner;}

    /*
    //HW 8
    ostream& operator<<(std::ostream & out, const Tic_Tac_Toe_Manager &manager);
    ostream& operator>>(std::istream int, Tic_Tac_Toe& game);
    */
    


private:
    void set_player_next();
    bool check_board_full();
    void clear_board();
    std::string player;
    vector<string> pegs = {"-", "-", "-", "-", "-", "-", "-", "-", "-"};

    //HW 7
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner(); 
    std::string winner; 




    







};


#endif

