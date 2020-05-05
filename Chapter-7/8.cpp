/*
Another weakness of C++ is that it does not automatically check array indexes to see
whether they are in bounds. (This makes array operations faster but less safe.) We can
use a class to create a safe array that checks the index of all array accesses.
Write a class called safearay that uses an int array of fixed size (call it LIMIT) as its
only data member. There will be two member functions. The first, putel(), takes an
index number and an int value as arguments and inserts the int value into the array at
the index. The second, getel(), takes an index number as an argument and returns the
int value of the element with that index.

Both functions should check the index argument to make sure it is not less than 0 or
greater than LIMIT-1. You can use this array without fear of writing over other parts of
memory.
Using functions to access array elements doesn’t look as eloquent as using the []
operator. In Chapter 8 we’ll see how to overload this operator to make our safearay
class work more like built-in arrays.
*/
//author @Nishant

#include <iostream>

using namespace std;

class safearay{
	private:
		static const int LIMIT = 100;
		int a[LIMIT];
	public:
		void putel(int index, int value);
		int getel(int index);
};

int main(){
	safearay m;
	char ch;
	do{
		cout << "Enter \"p\" to enter an array element and \"g\" for conclusion: ";
		char sym;
		cin >> sym;
		switch(sym){
			case 'p':
				int i, v;
				cout << "Enter index and value: ";
				cin >> i >> v;
				m.putel(i, v);
				break;
			case 'g':
				int j, temp;
				cout << "Enter an array index: ";
				cin >> j;
				temp = m.getel(j);
				break;
			default:
				cout << "Input Error!\n";
		}
		cout << "Continue? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	return 0;
}

void safearay::putel(int index, int value){
	if(0 <= index && index <= LIMIT - 1)
		a[index] = value;
	else
		cout << "The index is outOfBounds!\n";
}

int safearay::getel(int index){
	int temp;
	if(0 <= index && index <= LIMIT - 1){
		temp = a[index];
		cout << "Item No." << index << " is equal to " << temp << endl;
	}
	else
		cout << "The index is outOfBounds!\n";
	return temp;
}