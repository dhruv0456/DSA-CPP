#include <iostream>
using namespace std;

int main()
 {
    int number;
    double score;
    int age;
    

    
    cout << "Enter an integer: ";
    cin >> number;

    
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    








    
    cout << "Enter your score (0 to 100): ";
    cin >> score;

    
    if (score >= 0 && score <= 100) {
        char grade;

        
        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        
        cout << "Your grade is: " << grade << endl;
    } else {
        
        cout << "Invalid score. enter a number between 0 and 100." << endl;
    }

    







    
    cout << "Enter your age: ";
    cin >> age;

    
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}





