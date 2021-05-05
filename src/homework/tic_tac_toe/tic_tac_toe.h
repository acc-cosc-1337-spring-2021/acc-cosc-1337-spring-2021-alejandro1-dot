//h
#ifndef TIC_TAC_TOE_h
#define TIC_TAC_TOE_h

//Includes
#include<iostream>
#include<vector>
#include<string>

using std::string;
using std::vector;

class Tic_Tac_Toe
{
public:
    bool game_over(){return check_board_full();}
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const{return player;}
    void display_board()const; 


private:
    void set_player_next();
    bool check_board_full();
    void clear_board();
    std::string player;
    vector<string> pegs = {"-", "-", "-", "-", "-", "-", "-", "-", "-"};




};


#endif

