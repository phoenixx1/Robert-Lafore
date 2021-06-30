// ex2_10.cpp
// old pounds-shillings-pence format to decimal pounds converter

#include <iostream>

using namespace std;

int main()
    {
    // old system
    // pnd = 20 sln
    // sln = 12 pnc
    //
    // new system
    // pnd = 100 pnc
    //
    // 5.2.8 £ -> 2*12 = 24 + 8 = 32 -> 5.32

    float pounds, shillings, pence;
	cout << "Enter pounds: ";
	cin >> pounds;
	cout << "Enter shillings: ";
	cin >> shillings;
	cout << "Enter pence: ";
	cin >> pence;

	float totalPence =  (pence / (12 * 20)) + shillings / 20;
	float totalPounds = pounds + totalPence;

	cout << "Decimal Pounds: " << '\x9c' << totalPounds

    return 0;
    }



