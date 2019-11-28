/*
Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
floating-point numbers.
*/

#include<iostream>

using namespace std;

int main(){
	int choice;
	float f, c;
	cout << "1 to convert Fahrenheit to Celcius,\n2 to convert Celcius to Fahrenheit\nChoice: ";
	cin >> choice;
	switch(choice){
		case 1:
			cout << "Enter temperature in Fahrenheit: ";
			cin >> f;
			c = (f - 32) * 5 / 9;
			cout << "Temperature in Celcius: " << c;
			break;
		case 2:
			cout << "Enter temperature in Celcius: ";
			cin >> c;
			f = (1.8 * c) + 32;	
			cout << "Temperature in Fahrenheit: " << f;
			break;
		default:
			cout << "Check the input value and try again either 1 or 2";
			break;
	}
	cout << endl;
	return 0;
}
