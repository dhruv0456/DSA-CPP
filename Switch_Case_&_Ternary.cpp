#include <iostream>
using namespace std;

int main()
 {
    
    int a, b, c, score, age;
    cout << "Enter the value of the first number: ";
    cin >> a;
    cout << "Enter the value of the second number: ";
    cin >> b;
    cout << "Enter the value of the third number: ";
    cin >> c;


    int min_value = (a<b) ? (a<b ? a:b) : (b<c ? b:c);

    
    cout << "The minimum value is: " << min_value << endl;

    








    cout << "Enter an integer: ";
    cin >> a;

    
    string result = (a % 2 == 0) ? "even" : "odd";
    cout << "The number " << a << " is " << result << "." << endl;

    





    cout << "Enter your score (0 to 100): ";
    cin >> score;

    
    string grade = (score >= 90 && score <= 100) ? "A" :
                   (score >= 80 && score < 90)  ? "B" :
                   (score >= 70 && score < 80)  ? "C" :
                   (score >= 60 && score < 70)  ? "D" :
                   (score >= 0 && score < 60)   ? "F" :
                   "Invalid score";

    
    cout << "Your grade is: " << grade << endl;








    
    cout << "Enter your age: ";
    cin >> age;

    
    string message = (age >= 18) ? "You are eligible to vote." : "You are not eligible to vote.";
    cout << message << endl;

    return 0;
}