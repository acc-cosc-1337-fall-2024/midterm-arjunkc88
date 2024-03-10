#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

#include <iostream>
#include <cmath> // For fabs() to compare floating-point numbers

int main() 
{
    struct TestCase 
	{
        double celsius;
        double expectedFahrenheit;
    };

    TestCase testCases[] = {
        {37, 98.6},
        {25, 77},
        {0, 32}
    };

    bool allTestsPassed = true;

    for (const TestCase& test : testCases)
	 {
        double actualFahrenheit = get_fahrenheit(test.celsius);
        if (std::fabs(actualFahrenheit - test.expectedFahrenheit) > 0.1) {
            std::cout << "Test failed for Celsius: " << test.celsius
                      << ". Expected Fahrenheit: " << test.expectedFahrenheit
                      << ", but got: " << actualFahrenheit << ".\n";
            allTestsPassed = false;
        }
    }

    if (allTestsPassed) 
	{
        std::cout << "All tests passed.\n";
    } else {
        std::cout << "Some tests failed.\n";
    }

    return 0;
}
