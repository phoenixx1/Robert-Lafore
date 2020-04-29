/*
Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
		X
	   XXX
	  XXXXX
	 XXXXXXX
	XXXXXXXXX
*/

// author @Nishant

#include<iostream>

using namespace std;

int main(){
	for(int i=1; i<=20; i++){
		for(int j=20; j>=i; j--){
			cout << " ";
		}
		for(int k=1; k<2*i; k++){
			cout << "*";
		}
		for(int l=20; l>=i; l--){
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
