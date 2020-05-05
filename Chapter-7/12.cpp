/*
Create a class called bMoney. It should store money amounts as long doubles. Use the
function mstold() to convert a money string entered as input into a long double, and
the function ldtoms() to convert the long double to a money string for display. (See
Exercises 6 and 10.) You can call the input and output member functions getmoney()
and putmoney(). Write another member function that adds two bMoney amounts; you can
call it madd(). Adding bMoney objects is easy: Just add the long double member data
amounts in two bMoney objects. Write a main() program that repeatedly asks the user to
enter two money strings, and then displays the sum as a money string.
*/
//author @Nishant

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>

using namespace std;

long double mstold(string s);
string ldtoms(long double sum);

class bMoney{
	private:
		long double money;
	public:
		bMoney() {money = 0;}
		bMoney(long double m) {money = m;};
		void madd(bMoney b1, bMoney b2);
		void getmoney(void);
		void putmoney(void);
};

int main(){
	bMoney b, sum;
	char ch;
	do{
		cout << "Enter the amount of money: ";
		b.getmoney();
		sum.madd(sum, b);
		cout << "Continue? (y/n): ";
		cin >> ch;
		cout << endl;
	} while(ch != 'n');
	sum.putmoney();
	return 0;
}

void bMoney::madd(bMoney b1, bMoney b2){
	money = b1.money + b2.money;
}

void bMoney::getmoney(void){
	string s;
	cin >> s;
	money = mstold(s);
}

void bMoney::putmoney(void){
	string s = ldtoms(money);
	cout << "Amount is equal " << s << endl;
}

long double mstold(string s){
	long double sum = 0;
	int p;
	for(int i = 1; i < s.size(); i++){
		if(48 <= static_cast<int>(s[i]) && static_cast<int>(s[i]) <= 57)
			sum = sum * 10 + static_cast<int>(s[i]) - 48;
		else if(s[i] == '.')
			p = i;
	}
	long double frac_part = pow(10, s.size() - 1 - p);
	sum /= frac_part;
	return sum;
}

string ldtoms(long double sum){
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