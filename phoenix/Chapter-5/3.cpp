/*
Write a function called zeroSmaller() that is passed two int arguments by reference
and then sets the smaller of the two numbers to 0. Write a main() program to exercise
this function.
*/

//author @Nishant

#include <iostream>
using namespace std;

void Smaller(int& x, int& y);

int main(){
    
    int a = 3, b = 8, c = 10, d = 12;

    Smaller(a, b);
    Smaller(c, d);

    cout << endl << "a = " << a << " b = " << b << endl;
    cout << "c = " << c << " d = " << d << endl;
    
    return 0;
}

void Smaller(int& x, int& y){
    if(x < y)
        x = 0;
    else
        y = 0;    
}