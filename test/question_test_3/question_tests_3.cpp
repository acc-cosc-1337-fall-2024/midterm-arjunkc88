#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
#include "question3.h"
#include <iostream>

int main()
 {
    std::string dna = "GATGGAACTTGACTACGTAAATT";
    std::string expected_rna = "GAUGGAACUUGACUACGUAAAUU";
    std::string actual_rna = transcribe_dna_into_rna(dna);

    if (actual_rna == expected_rna)
	 {
        std::cout << "Test passed." << std::endl;
    } else {
        std::cout << "Test failed: Expected " << expected_rna << ", but got " << actual_rna << std::endl;
    }

    return 0;
}


