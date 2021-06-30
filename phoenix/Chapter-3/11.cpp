/*
Create a three-function calculator for old-style English currency, where money amounts
are specified in pounds, shillings, and pence. (See Exercises 10 and 12 in Chapter 2.)
The calculator should allow the user to add or subtract two money amounts, or to multi-
ply a money amount by a floating-point number.
*/

// author @Nishant

#include<iostream>

using namespace std;

int main(){
	char ch;	
	do{
		char temp;
		char option;
		int pounds1, shillings1, pence1, pounds2, shillings2, pence2;
		cout << "Enter first amount: £";
		cin >> pounds1 >> temp >> shillings1 >> temp >> pence1;
		cout << "Enter second amount: £";
		cin >> pounds2 >> temp >> shillings2 >> temp >> pence2;
		
		cout << "Operation +, -, *: ";
		cin >> option;
		
		switch(option){
			case '+':
				pounds1 += pounds2;
				shillings1 += shillings2;
				pence1 += pence2;
				break;
			case '-':
				pounds1 -= pounds2;
				shillings1 -= shillings2;
				pence1 -= pence2;
				break;
			case '*':
				pounds1 *= pounds2;
				shillings1 *= shillings2;
				pence1 *= pence2;
				break;	
			default:
				cout << "Invalid option" << endl;
				break;
				
		}
		if(pence1 > 11){
			shillings1 += (pence1/12);
			pence1 = pence1%12;
		}
		if(shillings1 > 19){
			pounds1 += (shillings1/20);
			shillings1 = shillings1%20;
		}
		cout << "Amount after performing " << option << " is £" << pounds1 << "." << shillings1 << "." << pence1 << endl; 
		cout << "Do you want to continue (y/n): ";
		cin >> ch;
	}while(ch == 'y');
	return 0;
}
