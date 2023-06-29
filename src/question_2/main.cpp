#include <iostream>
#include <string>
int binary_to_decimal(const std::string &binaryString);
int main() {
    std::string Input;
    char choice;
    do {
        std::cout << "Enter a binary string that is only 8 characters long: ";
        std::cin >> Input;
        if (Input.length() != 8 || Input.find_first_not_of("01") != std::string::npos) {
            std::cout << "Error. Retry." << "\n";
            continue;
        }

        int decimal = binary_to_decimal(Input);
        std::cout << "Decimal equivalent: " << decimal << "\n";

        std::cout << "Do you want to continue? (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}