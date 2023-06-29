#include <iostream>
#include <string>
#include "question4.h"
int main() {
    char choice;
    do {
        std::string answer;
        std::cout << "Enter a string: ";
        std::cin >> answer;

        bool isPalindrome = is_palindrome(answer);

        if (isPalindrome) {
            std::cout << "Palindrome: True." << "\n";
        } else {
            std::cout << "Palindrome: False." << "\n";
        }

        std::cout << "Do you want to continue? (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}