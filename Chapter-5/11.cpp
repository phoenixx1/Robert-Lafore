/*
Write a program, based on the sterling structure of Exercise 10 in Chapter 4, that
obtains from the user two money amounts in old-style British format (£9:19:11), adds
them, and displays the result, again in old-style format. Use three functions. The first
should obtain a pounds-shillings-pence value from the user and return the value as a
structure of type sterling. The second should take two arguments of type sterling and
return a value of the same type, which is the sum of the arguments. The third should take
a sterling structure as its argument and display its value.
*/

//author @Nishant

#include <iostream>
using namespace std;

struct sterling{
    int pound, shilling, pence; 
};

sterling BritishCurrency(int, int, int);
sterling sterlingfunc(sterling, sterling);
void sterlingDisp(sterling);

int main() {
	int pound, shilling, pence;
	sterling firstValue, secondValue;
	sterling s1 = {2, 10, 5};
	cout <<"\nEnter pound: "; cin >>pound;
	cout <<"Enter shilling: "; cin >>shilling;
	cout <<"Enter pence: "; cin >>pence;
	firstValue = BritishCurrency(pound, shilling, pence);
	secondValue = sterlingfunc(firstValue, s1);
	cout <<"\nFirst value is: "; sterlingDisp(firstValue);
	cout <<"\nSecond value is: "; sterlingDisp(s1);
	cout <<"\nSum of above values is: "; sterlingDisp(secondValue);
	cout <<endl;
	return 0;
}

sterling  BritishCurrency(int pnd, int shl, int pen) {
	sterling currency;
	currency.pound = pnd;
	currency.shilling = shl;
	currency.pence = pen;
	return currency;
}

sterling sterlingfunc(sterling ss1, sterling ss2) {
	sterling result;
	result.pound = ss1.pound + ss2.pound;
	result.shilling = ss1.shilling + ss2.shilling;
	result.pence = ss1.pence + ss2.pence;
	
	if(result.pence > 11) {
		result.shilling += result.pence/12;
		result.pence = result.pence%12;
	}

	if(result.shilling > 19) {
		result.pound += result.shilling/20;
		result.shilling = result.shilling%20;
	}
	return result;
}

void sterlingDisp(sterling valueDisp) {
	cout << "£" << valueDisp.pound << ":" << valueDisp.shilling << ":" << valueDisp.pence;
}