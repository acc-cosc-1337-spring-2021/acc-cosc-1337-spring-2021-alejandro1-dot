#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum_numbers function") 
{
	REQUIRE(sum_numbers(5, 5) == 10);
}

//Test Case For Multiplying with one parameter

TEST_CASE("Test multiply_number function", "verification")
{
	REQUIRE(multiply_number(10, 5) == 50);
}

TEST_CASE("Test multiply_number_homework function", "verification")
{
	REQUIRE(multiply_number_homework(10) == 10);
}
