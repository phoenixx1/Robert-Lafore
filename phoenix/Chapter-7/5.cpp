/*
Start with the fraction class from Exercises 11 and 12 in Chapter 6. Write a main()
program that obtains an arbitrary number of fractions from the user, stores them in an
array of type fraction , averages them, and displays the result.
*/
//author @Nishant

#include<bits/stdc++.h>
using namespace std;

const int SIZE = 10;
class fraction{
private:
    int num, den;
public:
    fraction(){}
    fraction(int n, int d) : num(n), den(d)
    {
        lowterms();
    }
    void take_frac(void)
    {
        char ch;
        cin >> num >> ch >> den;
    }
    void show_frac(void)
    {
        cout << setw(2) << num << "/" << setw(2) << den;
    }
    void lowterms(void) // change ourself to lowest terms
    {
        long tnum, tden, temp, gcd;
        tnum = labs(num); // use non-negative copies
        tden = labs(den); // (needs cmath)
        if (tden == 0)    // check for n/0
        {
            cout << "Illegal fraction : division by 0";
            exit(1);
        }
        else if (tnum == 0) // check for 0/n
        {
            num = 0;
            den = 1;
            return;
        }
        // this ‘while’ loop finds the gcd of tnum and tden
        while (tnum != 0)
        {
            if (tnum < tden) // ensure numerator larger
            {
                temp = tnum;
                tnum = tden;
                tden = temp;
            }                   // swap them
            tnum = tnum - tden; // subtract them
        }
        gcd = tden;      // this is greatest common divisor
        num = num / gcd; // divide both num and den by gcd
        den = den / gcd; // to reduce frac to lowest terms
    }
    void add_frac(fraction a, fraction b){
        num = a.num * b.den + a.den * b.num;
        den = a.den * b.den;
        lowterms();
    }
    void sub_frac(fraction a, fraction b){
        num = a.num * b.den - a.den * b.num;
        den = a.den * b.den;
        lowterms();
    }
    void mul_frac(fraction a, fraction b){
        num = a.num * b.num;
        den = a.den * b.den;
        lowterms();
    }
    void div_frac(fraction a, fraction b){
        num = a.num * b.den;
        den = a.den * b.num;
        lowterms();
    }
};

int main()
{
    fraction f[SIZE], sum, divisor, result;
    char ch;
    int i = 0;
    do{
        cout << "Enter a fraction: ";
        f[i].take_frac();
        i++;
        cout << "Enter again?(y/n):";
        cin >> ch;
        cout << endl;
    } while (ch == 'y' && i < SIZE);
    
    sum = {0, 1};
    for (int j = 0; j < i; j++){
        sum.add_frac(sum, f[j]);
    }

    divisor = {1, i + 1};
    result.div_frac(sum, divisor);
    cout << "Average of entered fractions:";
    result.show_frac();
    return 0;
}