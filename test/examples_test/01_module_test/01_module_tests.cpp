#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Module 03
#include "input.h"
//Module 02
#include "vars.h"
#include<string>
#include "numbers.h"
#include "auto.h"
#include "chars.h"


TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

/*test case echo_variable */

TEST_CASE("Verify echo variable function", "returns a single digit")
{
	REQUIRE(echo_variable(5) == 5);
}
/*test case get_total with 3 and 3 as parameter*/

TEST_CASE("Verify echo variable function", "returns a single digit")
{
	REQUIRE(get_total(5,5) == 5);
}

/*test case add_to_double_1 with 0 as parameter*/

TEST_CASE("Verify echo variable function", "returns a single digit")
{
	REQUIRE(add_to_Double(1) == 1.9);
}

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

TEST_CASE("Verify echo variable function", "returns 10")
{
	REQUIRE(add_to_Double() == 10);
}

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

TEST_CASE("Verify echo variable function", "returns a ascii value")
{
	REQUIRE(get_char_ascii("J") == 74);
	REQUIRE(get_char_ascii("o") == 111);
	REQUIRE(get_char_ascii("e") == 102);
}