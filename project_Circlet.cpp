#include <iostream>
using namespace std;

int main() {


cout << "---------------------------------------------------" << endl;
cout << "Q-1" << endl;

    
    int rows=5; 

    
    for (int i=1; i<=rows; i++)
     {
        
        for (int j=0; j<i; j++)
         {
            cout << (41+j) << " "; 
        }
        cout << endl;
    }


cout << "---------------------------------------------------" << endl;
cout << "Q-2" << endl;




    int num=11;

    
    for (int i=1; i<=4; i++) 
    {
        
        for (int j=1; j <=i; j++)
         { 
            cout << num << " ";
            num++;
        }
        cout << endl;
    }


cout << "---------------------------------------------------" << endl;
cout << "Q-3" << endl;

for (int i=5; i>=1; i--) 
    {
        for (int j=1; j<=i; j++) 
        {
            if (j%2 != 0) 
            {
                cout << "1 ";
            } else 
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }


cout << "---------------------------------------------------" << endl;
cout << "Q-4" << endl;

int row = 5; 

    for (int i=1; i<=row; ++i)
     {
        for (int j=1; j<=row-i; ++j)
         {
            cout << "  ";
        }

        for (int j=row-i+1; j<=row; ++j) 
        {
            cout << j << " ";
        }

        
        for (int j=row-1; j>=row- i+1; --j)
        {
            cout << j << " ";
        }

        cout << endl; 
    }



cout << "---------------------------------------------------" << endl;
cout << "Q-5" << endl;

int n = 5; 
   
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    
    for (int i = n; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl; 



cout << "---------------------------------------------------" << endl;
cout << "Q-7" << endl;


    int m=5;
    for (int i=1; i<=5; i++) 
    {
        if (i==1 || i==3) 
        {
            for (int j=1; j<=m; j++) 
            {
                cout << "*";
            }
        }
        else if (i==2) 
        {
            cout << "*";
            for (int j=1; j<=m-2; j++) 
            {
                cout << " ";
            }
            cout << "*";
        }
        else {
            cout << "*";
        }
        cout <<endl;
        
    }

 





}
