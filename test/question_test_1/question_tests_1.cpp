#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "question1.h"                                    
#include "catch.hpp"
TEST_CASE("Verify Test Configuration", "verification")
 {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Kinetic Energy Calculation", "[kinetic_energy]") 
{
    REQUIRE(get_kinetic_energy(10, 9) == Approx(405).epsilon(0.01));
    REQUIRE(get_kinetic_energy(20, 5) == Approx(250).epsilon(0.01));
    REQUIRE(get_kinetic_energy(30, 7) == Approx(735).epsilon(0.01));
}