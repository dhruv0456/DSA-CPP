#include <iostream>
using namespace std;

int main()
{
    
cout << "---------------------------------------------------" << endl;
cout << "Q-1" << endl;
     
    
    int n=5;  

    for (int i=0; i<n; i++) 
    {
        for (int j=n; j>i; j--) 
        {
            cout << j << " ";
        }
        cout << endl;
    }


cout << "---------------------------------------------------" << endl;
cout << "Q-2" << endl;


    int m = 5; 

    for (int i=0; i<m; i++) 
    {
        for (int j=1; j<=m - i; j++) {
            cout << j << " ";
        }

        for (int j=1; j<2 * i; j++) {
            cout << "  "; 
        }

        for (int j=m - i; j>0; j--) {
            cout << j << " ";
        }

        cout << endl;
    }


cout << "---------------------------------------------------" << endl;
cout << "Q-3" << endl;



    for (int i=5; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int i=2; i<=5; i++) {
        for (int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

}