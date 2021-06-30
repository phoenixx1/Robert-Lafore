/*
Write a program that calculates how much money you’ll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly. Have the user furnish the
initial amount, the number of years, and the yearly interest rate in percent.
*/

#include<iostream>

using namespace std;

int main(){
	int year;
	float amount, interest, compound;
	
	cout << "Enter initial amount: ";
	cin >> amount;
	cout << endl << "Enter number of years: ";
	cin >> year;
	cout << endl << "Enter interest rate(percent per year): ";
	cin >> interest;

	for(int i=0; i<year; i++){
		compound = amount + (amount * (interest/100));
		amount = compound;
	}
	cout << endl << "At the end of " << year << ", you will have " << compound << " dollars." << endl;
	return 0;
}
