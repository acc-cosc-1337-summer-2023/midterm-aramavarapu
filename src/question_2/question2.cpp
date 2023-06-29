#include "question2.h"
#include <iostream>
#include <string>
int binary_to_decimal(const std::string &binaryString) {
    int number = 0;
    int power = 7;
    if (binaryString.length() != 8) {
        std::cout << "Binary string is not 8 characters long." << "\n";
        return number;
    }
    for (char ch : binaryString) {
        if (ch != '0' && ch != '1') {
            std::cout << "Invalid character in the binary string." << "\n";
            return number;
        }
        int bitValue = ch - '0';
        number += bitValue * (1 << power);
        power--;
    }
    return number;
}