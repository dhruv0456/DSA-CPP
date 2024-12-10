#include <iostream>
using namespace std;

int main() {

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







    int o;

    cout << "Enter array size: ";
    cin >> o;

    int a[o];

    cout << "Enter array elements:\n";
    for (int i=0; i<o; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int sum = 0;
    for (int i=0; i<o; i++) 
    {
        sum += a[i];
    }

    double average = (double)sum / o;

    cout << "Average of an Array: " << average << endl;







    int l;

    cout << "Enter array size: ";
    cin >> l;

    int a[l], b[l], c[l];

    cout << "Enter array A's elements:\n";
    for (int i=0; i<l; i++)
     {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Enter array B's elements:\n";
    for (int i=0; i<l; i++)
     {
        cout << "b[" << i << "] = ";
        cin >> b[i];
    }

    for (int i=0; i<l; i++) 
    {
        c[i] = a[i] + b[i];
    }

    cout << "Array C is: ";
    for (int i=0; i<l; i++)
     {
        cout << c[i] << ", ";
    }
    cout << endl;





}