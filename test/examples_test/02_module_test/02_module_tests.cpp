#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//This helps locate the file easier
#include "../src/examples/02_module/01_expressions/expressions.h"
#include "casting.h"
#include "overflow.h"
#include <climits>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*Test case operator precedence 1 with function argument values 12, 6 and 3 returns 14*/
TEST_CASE("Verify Test operator_precedence_1", "12 +6/3 = 15" ) 
{
	REQUIRE(operator_precedence_1(12,6,3) == 14);
}
/*Test case operator precedence 2 with function argument values 12, 6 and 3 returns 6*/
TEST_CASE("Verify Test operator_precedence_2", "(12 +6)/3 = 6" ) 
{
	REQUIRE(operator_precedence_2(12,6,3) == 6);
}

/*Test case convert_to_double to show that multiplying int and double returns a double*/

TEST_CASE("Verify Test convert to double", "multiplying int and double returns a double" ) 
{
	REQUIRE(convert_to_double(10,.35) == 3.5);
}
/*Test case convert double to int to show that a double converted to int truncates 
the decimal portion*/
TEST_CASE("Verify Test convert double to int", "double will turn to int" ) 
{
	REQUIRE(convert_double_to_int(2.3) == 2);
}
/*Test case static cast double int to show that a double casted to int truncates
decimal portion*/
TEST_CASE("Verify Test stati_cast_double_int", "double will round to int" ) 
{
	REQUIRE(static_cast_double_int(3.6) == 3);
}
/*Test int overflow to show adding 1 to 2147483647 returns -2147483648*/
TEST_CASE("Verify Test overflow", "return C++ weirdness" ) 
{
	REQUIRE(overflow() == 2147483647);
}
/*Test get radius of a circle with 10 to show that it returns 314.159*/

TEST_CASE("Verify Test underflow", "return C++ weirdness with zero" ) 
{
	//REQUIRE(under_flow() == .1);
	//REQUIRE(under_flow() == __DBL_MIN__);
	REQUIRE(under_flow() == 0);
}

/*Test int data size */

/*Test multi assign addition*/

