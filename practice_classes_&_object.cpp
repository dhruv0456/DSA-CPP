#include <iostream>
using namespace std;

class Student {
    public : 
        string name;
        int age;
        int gr_id;
        string city;

      Student(string n, int a, int g, string c){
        this->name=n;
        this->age=a;
        this->gr_id=g;
        this->city=c;
      }

        void setData () {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Gr_Id : " << gr_id << endl;
            cout << "City : " << city << endl;
        }
};

int main () {
  string n,c;
  int a,g;

 cout << "eneter name : ";
 cin >> n;
 cout << "enter age : ";
 cin >> a;
 cout << "enter gr_id : "; 
 cin >> g;
 cout << "enter city : " ;
 cin >> c;

  Student s1(n,a,g,c);

  s1.setData();
}