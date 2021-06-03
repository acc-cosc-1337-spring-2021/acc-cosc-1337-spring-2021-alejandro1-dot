#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
using std::string;
using std::vector;
using std:: cout;
using std:: cin; 

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test to if Display board shows a 3x3", "start_game test") {
	
	Tic_Tac_Toe game; 
	game.start_game("X"); 

	//player input
}

TEST_CASE("Test to if Board can be marked by a player", "mark_board test") {
	
	
	
	Tic_Tac_Toe game; 

	//player input
	std::string a = "X";
	game.start_game(a);
	game.mark_board(3);
}

TEST_CASE("Test to if Board can switch player", "set_player_next") {
	
	
	
	Tic_Tac_Toe game; 

	//player input
	std::string a = "X";
	game.start_game(a);
	game.mark_board(3);
	game.mark_board(2);
}

TEST_CASE("Test to if Board is full with no inputs", "check_board_full") {
	
	
	
	Tic_Tac_Toe game; 

	//player input
	std::string a = "X";
	game.start_game(a);

	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(9);
	game.mark_board(8);
	
}

TEST_CASE("Clear Board")
{
	Tic_Tac_Toe game; 

	//player input
	std::string a = "X";
	game.start_game(a);

	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(9);
	game.mark_board(8);

	game.start_game(a);

}


TEST_CASE("Test case for row winner")
{
	Tic_Tac_Toe game; 

	//player input
	std::string a = "X";
	game.start_game(a);

	game.mark_board(1);
	game.mark_board(3);
	game.mark_board(3);
	game.mark_board(2);
	game.mark_board(2);

	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test case for column winner")
{
	Tic_Tac_Toe game; 

	//player input
	std::string a = "X";
	game.start_game(a);

	game.mark_board(0);
	game.mark_board(3);
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(6);

	REQUIRE(game.game_over() == true);

}

