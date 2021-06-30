/*
Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
applied to fractions:

The user should type the first fraction, an operator, and a second fraction. The program
should then display the result and ask whether the user wants to continue.
*/

//author @Nishant

#include<iostream>

using namespace std;

int main(){
	char ch;
	do{
		int a, b, c, d, num, den;
		char temp, option;
		cout << "Enter first fraction: ";
		cin >> a >> temp >> b;
		cout << "Operator: ";
		cin >> option;
		cout << "Enter second fraction: ";
		cin >> c >> temp >> d;

		switch(option){
			case '+':
				num = a * d + b * c;
				den = b * d;
				cout << "Sum is: " << num << "/" << den << endl;
				break;
			case '-':
				num = a * d - b * c;
				den = b * d;
				cout << "Subtraction is: " << num << "/" << den << endl;
				break;
			case '*':
				num = a * c;
				den = b * d;
				cout << "Multiplication is: " << num << "/" << den << endl;
				break;
			case '/':
				num = a * d;
				den = b * c;
				cout << "Division is: " << num << "/" << den << endl;
				break;
			default:
				cout << "Invalid option";
				break;
		}
		cout << "Do you want to continue (y/n): ";
		cin >> ch;
	}while(ch == 'y');
	
	return 0;
}
