/*
Refer back to the discussion of money strings in Exercise 6. Write a function called
ldtoms() to convert a number represented as type long double to the same value
represented as a money string. First you should check that the value of the original long
double is not too large. We suggest that you don’t try to convert any number greater than
9,999,999,999,999,990.00. Then convert the long double to a pure string (no dollar sign
or commas) stored in memory, using an ostrstream object, as discussed earlier in this
chapter. The resulting formatted string can go in a buffer called ustring.
You’ll then need to start another string with a dollar sign; copy one digit from ustring at
a time, starting from the left, and inserting a comma into the new string every three digits.
Also, you’ll need to suppress leading zeros. You want to display $3,124.95, for example,
not $0,000,000,000,003,124.95. Don’t forget to terminate the string with a ‘\0’ character.
Write a main() program to exercise this function by having the user repeatedly input
numbers in type long double format, and printing out the result as a money string.
*/
//author @Nishant

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string ldtoms(long double sum);

int main()
{
	long double sum;
	char ch;
	do
	{
		cout << "Enter the amount of money: ";
		cin >> sum;
		string mss = ldtoms(sum);
		cout << "Amount equal to " << mss << endl;
		cout << "Continue? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	return 0;
}

string ldtoms(long double sum)
{
	stringstream ss (stringstream::in | stringstream::out);
	ss.setf(ios::fixed);
	ss << setprecision(2) << sum;
	string s = ss.str();
	s.insert(0, "$");
	int p = s.find('.') - 1, n = 0;
	for(int i = p; i > 0; i--)
		if(++n % 3 == 0)
			s.insert(i, ",");
	return s;
}