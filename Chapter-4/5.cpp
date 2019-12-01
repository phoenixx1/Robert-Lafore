/*
Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format.
*/

//author @Nishant

#include<iostream>
using namespace std;

struct date{
		int month, day, year;
};

int main(){
	char temp;
	date date1;
	cout << "Enter date (MM/DD/YYYY): ";
	cin >> date1.month >> temp >> date1.day >> temp >> date1.year;
	cout << endl << "Date is " << date1.month << "/" << date1.day << "/" << date1.year << endl;
    return 0;
}
