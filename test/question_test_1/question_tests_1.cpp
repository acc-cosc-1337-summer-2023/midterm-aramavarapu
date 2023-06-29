#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Test function roll_die", "verification") {
    const int rolls = 10;
  
    for (int i = 0; i < rolls; ++i) {
        int result = roll_die();
        REQUIRE(result >= 1);
        REQUIRE(result <= 6);
    }
}
