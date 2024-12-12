#include <iostream>
using namespace std;

int main() 

{

QUS-1 -------------------------------------------------------  

    int n;

    cout << "Enter the number of elements:- ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements:" << endl;
    for(int i=0; i<n; i++) 
    {
        cin >> a[i];
    }

    cout << "The array elements are:" << endl;
    for(int i=0; i<n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;


// QUS-2 -------------------------------------------------------  


//     int m;

//     cout << "Enter the number of elements:- ";
//     cin >> m;

//     int a[m];
//     int sum = 0;

//     cout << "Enter " << m << " elements:" << endl;
//     for(int i=0; i<m; i++) 
//     {
//         cin >> a[i];
//     }

//     for(int i=0; i<m; i++) 
//     {
//         sum+=a[i]; 
//     }

//     cout << "The sum of all elements in the array is: " << sum << endl;



// QUS-3 -------------------------------------------------------  


//      int o;

//     cout << "Enter the number of elements in the array:- ";
//     cin >> o;

//     int a[o];

//     cout << "Enter the elements of the array: ";
//     for (int i=0; i<o; i++) 
//     {
//         cin >> a[i];
//     }

//     int sum=0;

//     for (int i = 0; i < o; i += 2) 
//     {
//         sum += a[i];
//     }

//     cout << "Sum of elements at even indexes: " << sum << endl;



}