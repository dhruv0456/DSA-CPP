#include <iostream>

bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isPalindrome(num))
        std::cout << num << " is a palindrome." << std::endl;
    else
        std::cout << num << " is not a palindrome." << std::endl;
    return 0;
}
