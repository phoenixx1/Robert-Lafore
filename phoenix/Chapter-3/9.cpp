/*
Suppose you give a dinner party for six guests, but your table seats only four. In how
many ways can four of the six guests arrange themselves at the table? Any of the six
guests can sit in the first chair. Any of the remaining five can sit in the second chair. Any
of the remaining four can sit in the third chair, and any of the remaining three can sit in
the fourth chair.
*/

#include<iostream>

using namespace std;

int main(){
	int guests, chairs, total=1;
	cout <<"Enter the number of guests: ";
	cin >> guests;
	cout <<"\nEnter the number of chairs: ";
	cin  >> chairs;
	
	if(guests>chairs){
		for(int i=0; i<chairs; i++){
			total *= guests;
			guests--;
		}
	}
	cout << "\nNumber of possible arrangements are: " << total << endl;

	return 0;
}
