/*

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