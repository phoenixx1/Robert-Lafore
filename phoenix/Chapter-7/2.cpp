/*
Create a class called employee that contains a name (an object of class string ) and an
employee number (type long ). Include a member function called getdata() to get data
from the user for insertion into the object, and another function called putdata() to
display the data. Assume the name has no embedded blanks.
Write a main() program to exercise this class. It should create an array of type employee ,
and then invite the user to input data for up to 100 employees. Finally, it should print out
the data for all the employees.
*/
//author @Nishant

#include<bits/stdc++.h>
using namespace std;

class employee{
    string name;
    long number;
    public:
        void getdata(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter number: ";
            cin >> number;
        }
        void putdata(){
            cout << "\nName: " << name;
            cout << "\nNumber: " << number;
        }
};

int main(){
    employee empArray[100];
    int n = 0;
    char ch;
    do{
        cout << "Enter data for employee " << n + 1;
        empArray[n++].getdata();
        cout << "Enter another employee details (y/n)?: ";
        cin >> ch;
    }while(ch != 'n');
    for(int i = 0; i < n; i++){
        cout << "Employee " << i + 1 << " details";
        empArray[i].putdata();
    }
    cout << endl;
    return 0;
}