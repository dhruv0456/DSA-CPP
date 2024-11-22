#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;
    int c;
    int total;
    int avg;

    cout << "Enter a value of first number: ";
    cin >> a;

    cout << "Enter a value of second number: ";
    cin >> b;

    if (a < b)
    {
        cout << "The minimum value is:" << a << "\n";
    }
    else
    {
        cout << "The minimum value is:" << b << "\n";
    }





    cout << "enter a value of first number:";
    cin >> a;

    if (0 > a)
    {
        cout << "This number is negative \n";
    }
    else if (0 < a)
    {
        cout << "This number is positive \n";
    }
    else
    {
        cout << "number is neutral to:";
    }





    cout << "Enter maths marks:";
    cin >> a;

    cout << "Enter english marks:";
    cin >> b;

    cout << "Enter science marks";
    cin >> c;

    total = a + b + c;
    avg = total * 100 / 300;

    cout << "Total Average Marks:" << avg << "\n";

    return 0;
}
