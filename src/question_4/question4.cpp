#include <string>
bool is_palindrome(const std::string& str) {
    int beginning = 0;
    int end = str.length() - 1;
    while (beginning < end) {
        if (str[beginning] != str[end]) {
            return false;
        }
        beginning++;
        end--;
    }

    return true;
}