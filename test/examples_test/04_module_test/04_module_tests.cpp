#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "value_ref.h"
#include "for_ranged.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Test valuePref", "make sure that everything is origianl to themselves") {
	auto num1 = 5; 
	auto num2 = 0;
	
	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 5);
}

TEST_CASE("Verify Test for_ranged", "makes sure a reference and non reference affects string") {
	std::string name = "john";
	loop_string_w_for_range(name);

	REQUIRE(name == "john");
}


TEST_CASE("Test strings for ranged by reference param")
{
	std::string name = "john";

	loop_string_w_for_range_ref(name);
	
	REQUIRE(name == "john");
}

