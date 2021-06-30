/*
Write another version of the program from Exercise 7 so that, instead of finding the final
amount of your investment, you tell the program the final amount and it figures out how
many years it will take, at a fixed rate of interest compounded yearly, to reach this
amount.
*/

//author @Nishant

#include<iostream>

using namespace std;

int main(){

	float final_amount, amount, interest, temp;
	int year=0;
	cout << "Enter the final amount you want to get in particular year: ";
	cin >> final_amount;
	cout << "Enter the principal amount: ";
	cin >> amount;
	cout << "Enter the rate of interest: ";
	cin >> interest;

	temp = amount;

	while(temp<final_amount){
		temp *= (1+(interest/100));
		year++;
	}
	cout << "It will take " << year << " years at " << interest << " of interest to reach the final amount " << final_amount << endl;
	return 0;
}
