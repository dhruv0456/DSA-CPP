#include <iostream>
using namespace std;




int main() {

cout << "---------------------------------------------------" << endl;
cout << "Q-1" << endl;
    int n = 5;

    for (int i = 1; i <= n; i++) 
    { 
        for (int j = i; j >= 1; j--) 
        { 
            cout << j << " ";
        }
        cout << endl; 
    }


cout << "---------------------------------------------------" << endl;
cout << "Q-2" << endl;



    int m = 5;

    for (int i = m; i >= 1; i--) 
    { 
        for (int j = i; j <= m; j++)
         { 
            cout << j << " ";
        }
        cout << endl;
    }


cout << "---------------------------------------------------" << endl;
cout << "Q-3" << endl;

    int o = 5;

    for (int i = o; i >= 1; i--)
     { 
        for (int j = o; j >= i; j--)
         { 
            cout << i << " ";
        }
        cout << endl; 
    }



cout << "---------------------------------------------------" << endl;
cout << "Q-4" << endl;




    int p = 5;

    for (int i = 1; i <= p; i++)
     { 
        for (int j = i; j <= p; j++) 
        { 
            cout << j << " ";
        }
        cout << endl;
    }


cout << "---------------------------------------------------" << endl;
cout << "Q-5" << endl;


int q = 5;

    for (int i = 1; i <= q; i++)
     { 
        for (int j = q; j >= i; j--)
         { 
            cout << i << " ";
        }
        cout << endl;
    }

cout << "---------------------------------------------------" << endl;




    return 0;
}