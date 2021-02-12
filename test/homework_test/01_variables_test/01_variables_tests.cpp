#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}


TEST_CASE("Verify Meal amount of tax", "verification")
{
	REQUIRE(get_sales_tax(10) == .675);
	REQUIRE(get_sales_tax(20) == 1.35);
} 

TEST_CASE("Verify tip amount in relation to meal cost", "verification")
{
	REQUIRE(get_tips(20, 15) == 3);
	REQUIRE(get_tips(20, 20) == 4);
}
