/*On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.*/

#include<iostream>

using namespace std;

int main(){
	float dollars;
	cout << "Enter amount in dollars: ";
	cin >> dollars;
	cout << "$" << dollars << " Equivalent to\nPound: " << dollars/1.487 << "\nFranc: " << dollars/0.172 << "\nDeutschemark: " << dollars/0.584 << "\nYen: " << dollars/0.00955 << endl;
	return 0;
}
