#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if_else.h"
#include "if.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Verify Test is_even", "verification") {
	REQUIRE(is_even(4) == true);
}

TEST_CASE("Verify Test get_generation", "verification") {
	REQUIRE(get_generation(2002) == "Centenial");
}

TEST_CASE("Verify Test switch statement", "verification") {
	REQUIRE(name_with_num_param(1) == "Option 1");
}
