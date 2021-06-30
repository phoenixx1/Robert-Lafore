/*
Modify the four-function fraction calculator of Exercise 12 in Chapter 5 to use a
fraction class rather than a structure. There should be member functions for input and
output, as well as for the four arithmetical operations. While you’re at it, you might as
well install the capability to reduce fractions to lowest terms. Here’s a member function
that will reduce the fraction object of which it is a member to lowest terms. It finds the
greatest common divisor (gcd) of the fraction’s numerator and denominator, and uses this
gcd to divide both numbers.
*/

// author @Nishant

#include<iostream>

using namespace std;

class calF{
    int num, den;
    public:
        calF():num(0), den(0)
			{	}
		void getFraction();		
		void arithOperation(calF, calF, char);
		void dispFraction() const;
		void lowTerms();
};

void calF::getFraction() {
	char temp;
	cout << "\nEnter a fraction in a/b form: ";
	cin >> num >> temp >> den;
}


void calF::arithOperation(calF frac1, calF frac2, char operatr) {
	
	switch(operatr) {
		case '+':
			cout << "\nAddition of two fraction is: ";
			num = (frac1.num * frac2.den) + (frac1.den * frac2.num);
			den = frac1.den * frac2.den;
		break;

		case '-':	
			cout <<"\nSubtraction of two fraction is: ";
			num = (frac1.num * frac2.den) - (frac1.den * frac2.num);
			den = frac1.den * frac2.den;
		break;

		case '*':	
			cout <<"\nMultiplication of two fraction is: ";
			num = frac1.num * frac2.num;
			den = frac1.den * frac2.den;
		break;

		case '/':	
			cout <<"\nDivision of two fraction is: ";
			num = frac1.num * frac2.den;
			den = frac1.den * frac2.num;
		break;

	}
}

void calF::dispFraction() const{	
	cout << num << "/" << den;
}

void calF::lowTerms() {	
	long tnum, tden, temp, gcd;

	tnum = labs(num);	
	tden = labs(den);	

	if(tden == 0) {	
		cout <<"Illegal fraction: division by 0";
		exit(1);
	} else if (tnum == 0) {		
		num = 0; 
		den = 1;
		return;
	}
	
	while(tnum != 0) {
		if(tnum <tden) {	
			temp = tnum;	
			tnum = tden;
			tden = temp;	
		}
		tnum = tnum - tden;		
	}
	gcd = tden;		
	num = num/gcd;		
	den = den/gcd;		
	cout <<num <<"/" <<den;
	cout <<endl;
}
int main(){
	calF fraction1, fraction2, fraction3;	
	char oprt;
	cout <<"\nEnter first fraction: ";
	fraction1.getFraction();
	cout <<"\nEnter second fraction: ";
	fraction2.getFraction();
	cout <<"\nEnter an operator for arithmatic operation: ";
	cin >>oprt;
	fraction3.arithOperation(fraction1, fraction2, oprt);
	fraction3.dispFraction();
	cout <<"\nLoswest terms of fraction is: ";
	fraction3.lowTerms();
	
	return 0;
}

