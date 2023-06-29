#include "question1.h"
#include <iostream>
#include <cstdlib>
int roll_die();

int main() {
    char choice;
  
    do {
        std::cout << "Roll the die? (Y/N): ";
        std::cin >> choice;
      
        if (choice == 'Y' || choice == 'y') {
            int result = roll_die();
            std::cout << "Result: " << result << "\n";
        }
    } while (choice == 'Y' || choice == 'y');
  
    return 0;
}