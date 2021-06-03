#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the DNa Get works", "ver") {
	REQUIRE(get_gc_content("CGCTATAG") == .5);
	REQUIRE(get_gc_content("AGCTATAG") == .375);
}

TEST_CASE("Verify the DNa reverse works", "i guess") {
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
	
}

TEST_CASE("Verify the DNa contemplte works", "i guess") {
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
	
}



