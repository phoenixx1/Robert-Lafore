/*
A matrix is a two-dimensional array. Create a class matrix that provides the same safety
feature as the array class in Exercise 7; that is, it checks to be sure no array index is out
of bounds. Make the member data in the matrix class a 10-by-10 array. A constructor
should allow the programmer to specify the actual dimensions of the matrix (provided
they’re less than 10 by 10). The member functions that access data in the matrix will now
need two index numbers: one for each dimension of the array.
*/
//author @Nishant

#include <iostream>

using namespace std;

class matrix
{
	private:
		static const int LIMIT = 10;
		int a[LIMIT][LIMIT];
	public:
		void putel(int index1, int index2, int value);
		int getel(int index1, int index2);
};

int main()
{
	matrix m;
	char ch;
	do
	{
		cout << "Enter \"p\" to enter an array element and \"g\" for conclusion: ";
		char sym;
		cin >> sym;
		switch(sym)
		{
			case 'p':
				int i1, i2, v;
				cout << "Enter index and value: ";
				cin >> i1 >> i2 >> v;
				m.putel(i1, i2, v);
				break;
			case 'g':
				int j1, j2, temp;
				cout << "Enter an array index: ";
				cin >> j1 >> j2;
				temp = m.getel(j1, j2);
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

void matrix::putel(int index1, int index2, int value)
{
	if(0 <= index1 && index1 <= LIMIT - 1 && 0 <= index2 && index2 <= LIMIT - 1)
		a[index1][index2] = value;
	else
		cout << "The index is outOfBounds!\n";
}

int matrix::getel(int index1, int index2)
{
	int temp;
	if(0 <= index1 && index1 <= LIMIT - 1 && 0 <= index2 && index2 <= LIMIT - 1)
	{
		temp = a[index1][index2];
		cout << "[" << index1 << ", " << index2 << "] = " << temp << endl;
	}
	else
		cout << "The index is outOfBounds!\n";
	return temp;
}