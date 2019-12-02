/*
Create a structure called sterling that stores money amounts in the old-style British system discussed in Exercises 8 and 11 in Chapter 3, “Loops and Decisions.” The members could be called pounds , shillings , and pence , all of type int . The program should ask the user to enter a money amount in new-style decimal pounds (type double ), convert it to the old-style system, store it in a variable of type struct sterling , and then display this amount in pounds-shillings-pence format.
*/

//author @Nishant

#include<iostream>

using namespace std;

struct sterling{
    int pounds, shillings, pence; 
};

int main(){
    sterling amt;
    float dPounds;
	cout << "Enter Decimal pounds: ";
	cin >> dPounds;

	amt.pounds = static_cast<int>(dPounds);
	float fracPounds = dPounds - amt.pounds;

	float dShillings =  fracPounds * 20;
	amt.shillings = static_cast<int>(dShillings);
	float fracShillings = dShillings - amt.shillings;

	amt.pence = static_cast<int>(fracShillings * 12);
	
	cout << "Equivalent in old notation: " << amt.pounds << "." << amt.shillings << "." << amt.pence << endl;
	
    return 0;
}