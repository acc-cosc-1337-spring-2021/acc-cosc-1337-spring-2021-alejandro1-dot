#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "value_ref.h"
#include "for_ranged.h"
#include "vec.h"

using std::vector;
using std::string;
using std::cout;


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


TEST_CASE("Test strings for vector in function parameters")
{
	vector<int> nums{10, 4, 2}; //create and assignnums
	vector<int> expected_values{10, 4, 2}; //create and assignnums


	loop_string_w_for_range_val(nums);

	REQUIRE(nums == expected_values);
}

TEST_CASE("Test for reference vector in function parameters")
{
	vector<int> nums{10, 4, 2}; //create and assignnums
	vector<int> expected_values{10, 4, 2}; //create and assignnums


	//loop_string_w_for_range_ref(nums);

	loop_vector_w_for_ranged(nums)

	REQUIRE(nums == expected_values);
}


TEST_CASE("vector for ranged reference parameter")
{
	vector<int> nums{10, 4, 2}; //create and assignnums
	vector<int> expected_values{10, 4, 2}; //create and assignnums

	loop_vector_w_for_ranged_ref(nums);

	REQUIRE(nums == expected_values);


}