#include <iostream>
using namespace std;

int main() {
    int i = 1; 


    while (i <= 10)
     {
        cout << i << " "; 
        i++;
    }

    cout << endl;





    int a =10;

    while (a >= 1)
    {
        cout << a << " ";
        a--;
    }

    cout << endl;
    






    int n, b = 1;

    
    cout << "Enter any number: ";
    cin >> n;

    
    while (b <= n) {
        cout << b << " ";
        b++;
    }



int M;
    cout << "Enter any number: ";
    cin >> M;

    cout << "output:" << endl;
    while (M >=1) {
        cout << M << endl;
        M-=2;
    }




    int start, end;


    cout << "Enter the first Year: ";
    cin >> start;
    cout << "Enter the Endyear: ";
    cin >> end;

    cout << "Output:" << endl;
 
    while (start <= end) {
        cout << start << endl;
        start += 4; 
       
    }

    return 0;
}