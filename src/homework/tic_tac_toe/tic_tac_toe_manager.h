//h
#ifndef TIC_TAC_TOE_MANAGER_h
#define TIC_TAC_TOE_MANAGER_h
#include "tic_tac_toe.h"
#include <iostream>

using std::vector; 


class Tic_Tac_Toe_Manager
{
    public: 
    void get_winner_total(int&. int&, int&);
    void save_game(Tic_Tac_Toe);
    void update_winner_account(std::string);
    
    friend class Tic_Tac_Toe; 
    std::ostream& operator<<(std::ostream&, Tic_Tac_Toe_Manager&); 

    private:
    std::vector<Tic_Tac_Toe> games;
    o_wins: int{0};
    ties: int = {0};
    x_wins: int = {0};
};

#endif