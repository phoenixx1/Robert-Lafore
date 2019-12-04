/*
BigOrSmall
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