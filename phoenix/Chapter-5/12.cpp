/*
Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
functions for each of the four arithmetic operations. They can be called fadd() , fsub() ,
fmul() , and fdiv() . Each of these functions should take two arguments of type struct
fraction , and return an argument of the same type.
*/

//author @Nishant

#include<iostream>

using namespace std;

struct fraction{
	int num, den;
};

fraction fadd(fraction, fraction);
fraction fsub(fraction, fraction);
fraction fmul(fraction, fraction);
fraction fdiv(fraction, fraction);


int main(){
	char ch;
    fraction num1, num2, num3;
	do{
		char temp, option;
		cout << "Enter first fraction: ";
	    cin >> num1.num >> temp >> num1.den;
		cout << "Operation: ";
		cin >> option;
		cout << "Enter second fraction: ";
	    cin >> num2.num >> temp >> num2.den;

		switch(option){
			case '+':
                num3 = fadd(num1, num2);
				cout << "Sum is: " << num3.num << "/" << num3.den << endl;
				break;
			case '-':
				num3 = fsub(num1, num2);
				cout << "On Subtraction: " << num3.num << "/" << num3.den << endl;
				break;
			case '*':
				num3 = fmul(num1, num2);
				cout << "Multiplication is: " << num3.num << "/" << num3.den << endl;
				break;
			case '/':
				num3 = fdiv(num1, num2);
				cout << "Division is: " << num3.num << "/" << num3.den << endl;
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

fraction fadd(fraction num1, fraction num2){
    fraction num3;
    num3.num = num1.num * num2.den + num1.den * num2.num;
	num3.den = num1.den * num2.den;
    return num3;
}
fraction fsub(fraction num1, fraction num2){
    fraction num3;
    num3.num = num1.num * num2.den - num1.den * num2.num;
    num3.den = num1.den * num2.den;
    return num3;
}
fraction fmul(fraction num1, fraction num2){
    fraction num3;
    num3.num = num1.num * num2.num;
    num3.den = num1.den * num2.den;
    return num3;
}
fraction fdiv(fraction num1, fraction num2){
    fraction num3;
    num3.num = num1.num * num2.den;
    num3.den = num1.den * num2.num;
    return num3;
}