/*
Start with the date structure in Exercise 5 in Chapter 4 and transform it into a date
class. Its member data should consist of three int s: month , day , and year . It should also
have two member functions: getdate() , which allows the user to enter a date in
12/31/02 format, and showdate() , which displays the date.
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