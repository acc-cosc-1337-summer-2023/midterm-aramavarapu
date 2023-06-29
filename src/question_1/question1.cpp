#include "question1.h"
#include <iostream>
#include <cstdlib>
int roll_die() {
    int result = (std::rand() % 6) + 1;
    return result;
}