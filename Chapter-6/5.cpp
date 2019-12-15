/*
Program to create a date class and alows the user input date and display date.
*/

// author @Nishant

#include<iostream>

using namespace std;

class date{
    private:
        int month, day, year;
        char temp;
    public:
        date(){ };
        void getData(){
            cout << "Enter date (MM/DD/YYYY): ";
            cin >> month >> temp >> day >> temp >> year;
        }
        void display(){
            cout << endl << "Date is " << month << "/" << day << "/" << year << endl;
        }
};

int main(){
    date d1;
    d1.getData();
    d1.display();
    return 0;
}