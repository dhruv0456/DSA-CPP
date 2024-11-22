#include <iostream>
using namespace std;

int main() {
    
    int a, b;

    
    cout << "Enter two numbers: ";
    cin >> a >> b;

    
    cout << "Addition: " << (a + b) <<  "\n";
    cout << "Subtraction: " << (a - b) <<  "\n";
    cout << "Multiplication: " << (a * b) <<  "\n";


    if (b != 0) {
        cout << "Division: " << (a / b) <<  "\n";
        cout << "percentage: " << (a % b) << "\n";
    } else {
        cout << "Division and percentage cannot be performed as divisor is 0." <<  "\n";
    }

    return 0;
}