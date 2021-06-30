/*
Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
calculates its factorial, until the user enters 0, at which point it terminates. You can
enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
effect.
*/
#include<iostream>

using namespace std;

int main(){
	int numb = 0;
	do{	
		
		long fact = 1;
		cout << "Enter a number or 0 to exit: ";
		cin >> numb;

		for(int j=numb; j>0; j--)
			fact *= j;
		cout << "Factorial is " << fact << endl;
	}while(numb!=0);
	return 0;
}
