#include <iostream>
using namespace std;

int main() {

cout << "---------------------------------------------------" << endl;
cout << "Q-1" << endl;


    int n;

    cout << "Enter array size: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements:\n";
    for (int i=0; i<n; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Length of an Array: " << n << endl;





cout << "---------------------------------------------------" << endl;
cout << "Q-2" << endl;


int size;
    cout << "Enter array size:- ";
    cin >> size;
    int arr[size];  
    cout << "Enter array elements: \n";
    for (int i=0; i<size; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
    double sum=0;
    for (int i=0; i<size; i++) 
    {
        sum += arr[i];
    } 
    double average=sum/size;
    cout << "Average of an Array: " << average << endl;






cout << "---------------------------------------------------" << endl;
cout << "Q-3" << endl;

    int sizes;
    cout << "Enter array size:- ";
    cin >> sizes;
    int A[sizes], B[sizes], C[sizes]; 
    cout << "Enter array A's elements: \n";
    for (int i=0; i<sizes; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> A[i];
    }
    cout << "Enter array B's elements:\n";
    for (int i=0; i<sizes; i++) 
    {
        cout << "b[" << i << "] = ";
        cin >> B[i];
    }
    for (int i=0; i<sizes; i++) 
    {
        C[i] = A[i] + B[i];
    }
    cout << "Array C is:- ";
    for (int i=0; i<sizes; i++) 
    {
        cout << C[i];
        if (i!=sizes- 1) 
        {
            cout << ", "; 

        }
    }
   cout<<endl;
}





