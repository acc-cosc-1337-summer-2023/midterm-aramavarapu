#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Test valueParameter and referenceParameter functions", "verification") {
    int value1 = 1;
    valueParameter(value1);
    REQUIRE(value1 == 1);

    int value2 = 1;
    referenceParameter(value2);
    REQUIRE(value2 == 30);
}
