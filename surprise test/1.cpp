#include <iostream>

int factorial(int n) {
    if (n < 0) return -1; // Negative numbers don't have factorial
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;
    return 0;
}
