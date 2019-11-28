/*
Create the equivalent of a four-function calculator. The program should ask the user to
enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or divid-
ing the two numbers. Use a switch statement to select the operation. Finally, display the
result.
*/

#include<iostream>

using namespace std;

int main(){
	double x, y, ans;
	char oper, next;
	do{
		cout << "Enter first number, operator, second number: ";
		cin >> x >> oper >> y;
		switch(oper){
			case '+': 
				ans = x + y; 
				break;
			case '-': 
				ans = x - y; 
				break;
			case '*': 
				ans = x * y; 
				break;
			case '/': 
				ans = x / y; 
				break;
			default: 
				ans = 0;
				break;
		}
		cout << "Answer: " << ans;
		cout << "\nDo another calculation (y/n): ";
		cin >> next; 
	}while(next == 'y');
	return 0;
}

