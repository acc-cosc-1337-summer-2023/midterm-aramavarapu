#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Test binary_to_decimal function", "verification") {
    REQUIRE(binary_to_decimal("00001010") == 10);
    REQUIRE(binary_to_decimal("10101010") == 170);
    REQUIRE(binary_to_decimal("11111111") == 255);
}
