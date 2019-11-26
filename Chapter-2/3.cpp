/*Write a program that generates the following output:
10
20
19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
and a decrement operator to generate the 19.*/

#include<iostream>

using namespace std;

int main(){
	int x = 10;
	cout << x << endl; //10
	x *= 2;	// x=20
	cout << x-- << endl; // print 20 later 19
	cout << x << endl; //19
	return 0;
}
