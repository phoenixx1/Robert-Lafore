/*
A phone number, such as (212) 767-8900, can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900). Write a program that uses a
structure to store these three parts of a phone number separately. Call the structure
phone . Create two structure variables of type phone . Initialize one, and have the user
input a number for the other one. Then display both numbers.
*/

//author @Nishant

#include<iostream>

using namespace std;

struct phone{
	int areacode, exchange, number;
};

int main(){
	phone phone1, phone2;

	phone1.areacode = 212;
	phone1.exchange = 767;
	phone1.number = 8900;
	
	cout << "Enter your areacode, exchange, and number: ";
	cin >> phone2.areacode >> phone2.exchange >> phone2.number;
	
	cout << "My number is (" << phone1.areacode << ") " << phone1.exchange << "-" << phone1.number << endl;
	cout << "Your number is (" << phone2.areacode << ") " << phone2.exchange << "-" << phone2.number << endl;
	return 0;
}
