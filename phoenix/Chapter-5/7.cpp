/*
Start with the power() function of Exercise 2, which works only with type double .
Create a series of overloaded functions with the same name that, in addition to double ,
also work with types char , int , long , and float . Write a main() program that exercises
these overloaded functions with all argument types.
*/

//author @Nishant

#include <iostream>
using namespace std;

double power(double, int=2);
char power(char, int=2);
int power(int, int=2);
long power(long, int=2);
float power(float, int=2);

int main(){
    double num1;
	char num2;
	int num3;
	long num4;
	float num5;

	cout << "Enter a double value: ";
	cin >>num1;
	cout << "Power of " << num1 << " is: " <<power(num1) << endl;

	cout << "\nEnter a char value: ";
	cin >>num2;
	cout << "Power of " << num2 << " is: " << power(num2) << endl;

	cout << "\nEnter a int value: ";
	cin >> num3;
	cout << "Power of " << num3 << " is: " << power(num3) << endl;

	cout << "\nEnter a long value: ";
	cin >> num4;
	cout << "Power of " << num4 << " is: " << power(num4) << endl;

	cout << "\nEnter a float value: ";
	cin >> num5;
	cout << "Power of " << num5 << " is: " << power(num5) << endl;

    return 0;
}

double power(double dd, int p) {
	double power = 1;
	for(int i=1; i<=p; i++)
		power *= dd;
	return power;
}


char power(char ch, int p) {
	char power = 1;
	for(int i=1; i<=p; i++)
		power *= ch;
	return power;
}


int power(int no1, int p) {
	int power = 1;
	for(int i=1; i<=p; i++) 
		power *= no1;
	return power;
}


long power(long numb, int p) {
	long power = 1;
	for (int i=1; i<=p; i++)
		power *= numb;
	return power;
}


float power(float number, int p) {
	float power = 1.0;
	for (int i=1; i<=p; i++)
		power *= number;
	return power;
}