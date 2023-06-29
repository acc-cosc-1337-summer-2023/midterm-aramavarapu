#include <iostream>
#include "question3.h"
int main() {
    int number;
    int choice;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Choose an option:\n";
    std::cout << "Pick 1 for Value parameter\n";
    std::cout << "Pick 2 for Reference parameter\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Before value parameter: num = " << number << "\n";
        valueParameter(number);
        std::cout << "After value parameter: num = " << number << "\n";
    } else if (choice == 2) {
        std::cout << "Before reference parameter: num = " << number << "\n";
        referenceParameter(number);
        std::cout << "After reference parameter: num = " << number << "\n";
    } else {
        std::cout << "Error" << "\n";
        return 0;
    }

    return 0;
}