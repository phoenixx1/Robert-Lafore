/*
One of the weaknesses of C++ for writing business programs is that it does not contain a
built-in type for monetary values such as $173,698,001.32. Such a money type should be
able to store a number with a fixed decimal point and about 17 digits of precision, which
is enough to handle the national debt in dollars and cents. Fortunately, the built-in C++
type long double has 19 digits of precision, so we can use it as the basis of a money
class, even though it uses a floating decimal. However, we’ll need to add the capability to
input and output money amounts preceded by a dollar sign and divided by commas into groups of three digits; this makes it much easier to read large numbers. As a first step
toward developing such a class, write a function called mstold() that takes a money
string, a string representing a money amount like
“$1,234,567,890,123.99”
You’ll need to treat the money string as an array of characters, and go through it character
by character, copying only digits (1–9) and the decimal point into another string. Ignore
everything else, including the dollar sign and the commas
*/
//author @Nishant

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

long double mstold(char s[]);

int main(){
	const int MAX = 100;
	char ch, s[MAX];
	do{
		cout << "Enter the amount of money: ";
		cin >> s;
		long double lds = mstold(s);
		cout << "Amount equal to: " << lds << endl;
		cout << "Continue? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	return 0;
}

long double mstold(char s[]){
	long double sum = 0;
	int p;
	for(int i = 1; i < strlen(s); i++){
		if(48 <= static_cast<int>(s[i]) && static_cast<int>(s[i]) <= 57)
			sum = sum * 10 + static_cast<int>(s[i]) - 48;
		else if(s[i] == '.')
			p = i;
	}
	long double frac_part = pow(10, strlen(s) - 1 - p);
	sum /= frac_part;
	return sum;
}