#include <iostream>

int main() {
    int num = 42;
    int* ptr = &num;

    std::cout << "Value of variable: " << *ptr << std::endl;
    std::cout << "Address of variable: " << ptr << std::endl;
    return 0;
}
