#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//Module 03
#include "input.h"
//Module 02
#include "vars.h"
#include<string>


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

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

